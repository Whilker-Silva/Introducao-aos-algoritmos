#include <iostream>
using namespace std;

int main()
{
	// decalrando variáveis
	int numero = 0;
	int quociente = 0;
	int algarismo1 = 0;
	int algarismo2 = 0;
	int algarismo3 = 0;
	int algarismo4 = 0;
	int longitude = 0;
	int latitude = 0;

	// atribuindo o valor da entrada na variavel numero
	cin >> numero;

	// Calculo e atribuição do valor  do algarismo 4
	algarismo4 = numero % 10;
	quociente = numero / 10;

	// Calculo e atribuição do valor  do algarismo 4
	algarismo3 = quociente % 10;
	quociente = quociente / 10;

	// Calculo e atribuição do valor  do algarismo 4
	algarismo2 = quociente % 10;
	quociente = quociente / 10;

	// Calculo e atribuição do valor  do algarismo 4
	algarismo1 = quociente % 10;
	quociente = quociente / 10;

	// Calculo e atribuição do valor  do algarismo 4
	latitude = algarismo1 + algarismo4;
	longitude = algarismo2 + algarismo3;

	// Mosrtando resultados
	cout << latitude << endl;
	cout << longitude;

	return 0;
}
