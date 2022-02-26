#include <iostream>
using namespace std;
int main()
{
	char nombre;
	int edad;
	int numero;
	float hora;
	int fecha;
	char tratamiento;
	int opcion;
	int decision;
	cout << "bienvenido al consultorio" << endl;
	do
	{
		cout << "seleccione una opcion" << endl;
		cout << "1: agendar una cita" << endl;
		cout << "2: modificar cita" << endl;
		cout << "3: eliminar cita" << endl;
		cout << "4: salir" << endl;
		cin >> opcion;
	} 

	while (true);
	{
		switch (opcion)
		{
		case 1:
	
				cout << "ingrese su nombre" << endl;
				cin >> nombre;
				cout << "ingrese hora para la cita" << endl;
				cin >> hora;
				cout << "ingrese fecha para la cita" << endl;
				cin >> fecha;
				cout << "ingrese nombre del tratamiento" << endl;
				cin >> tratamiento;
				
				break;
				case 2:

				cout << "modifique la hora de la cita" << endl;
				cin >> hora;
				cout << "modifique fecha de la cita" << endl;
				cin >> fecha;

				break;
				case 3:
			cout << "eliminar la cita" << endl;

			break;
				case 4:
					cout << "salir del menu" << endl;
		}
	}
	do; while (true);
	{ 
		switch (opcion)
		{
		case 1:
			cout << "revision general" << endl;
			cout << "blanquemiento dental" << endl;
			cout << "extraccion de diente" << endl;
		}
	}
}