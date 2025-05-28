/*
* EJERCICIO 2
* 


Notas:
● Los personajes tienen que hacer spawn en posiciones aleatorias de la pantalla.
● Si se llega al límite de personajes en pantalla, al crear uno nuevo, se debe borrar
el más antiguo de los ya presentes.
*/

#include <iostream>
using namespace std;

int main()
{
	/*
	Crear un programa que funcione de la siguiente forma:
		● Si se aprieta la tecla R, aparece un personaje rojo en la pantalla.
		● Si se aprieta la tecla G, aparece un personaje verde en la pantalla.
		● Si se aprieta la tecla B, aparece un personaje azul en la pantalla.
		● Si se aprieta la tecla D, desaparece un personaje al azar de los que haya en ese
		momento en pantalla.
	*/
	srand(time(0));

	int chosenKey = 0;

	cout << "Random color character generator" << endl;
	cout << "Press R for Red, G for Green, B for Blue, D to Delete a random character: " << endl;
	cin >> chosenKey;

	switch (chosenKey)
	{
	case 'R':
		//turns red
		break;
	case 'G':
		//turns green
		break;
	case 'B':
		//turns blue
		break;
	case 'D':
		//deletes a random character
		break;
	default:
		break;
	}
}