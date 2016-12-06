#include <iostream>
#include <string>

using namespace std;

int main()

{
	string login, haslo; //Zmienne dla hasla i loginu
	bool poprawnosc_login, poprawnosc_haslo; //Wartosci false|true w ktorych ustale poprawnosc loginu i hasla

	cout << "Podaj login: ";
	cin >> login;				//W tych czterech liniach
	cout << "podaj haslo: ";	//okreœlam has³o i login
	cin >> haslo;				

	if (login == "zaq1") //If z loginem
		{
			cout << "\nLogin jest poprawne" << endl;
			poprawnosc_login = true;
		}
	else
		{
			cout << "\nLogin jest NIEpoprawne" << endl;
			poprawnosc_login = false;
		}
	if (haslo == "zaq1") // If z Has³em
		{
			cout << "\nHaslo jest poprawne" << endl;
			poprawnosc_haslo = true;
		}
	else 
		{
			cout << "\nHas³o jest NIEpoprawne" << endl;
			poprawnosc_haslo = false;
		}
	if(poprawnosc_haslo == 1 || poprawnosc_login == 1) //Program oznajmia czy uzytkownikowi udalo sie zalogowac
		{
			cout << "\nZostales zalogowany\n" << endl;
		}
	else
		{ 
			cout << "\nNie zostales zalogowany\n" << endl;
		}
		

	system("pause");

}