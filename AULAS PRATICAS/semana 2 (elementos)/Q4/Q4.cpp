#include <iostream>
using namespace std;



int main()
{
	//declaração das variáveis
	int numero = 0;
	int algarismo1 = 0;
	int algarismo2 = 0;
	int algarismo3 = 0;
	int quociente = 0;
	int resultado = 0;
	
	//atribuindo entrada na variável numero
	cin >> numero;
	
	//cálculo e atribuição do terceiro algarismo na variável algarismo3
	algarismo3 = numero%10;
	quociente = numero/10;
	
	//cálculo e atribuição do segundo algarismo na variável algarismo2
	algarismo2 = quociente%10;
	quociente = quociente/10;
	
	//cálculo e atribuição do primeiro algarismo na variável algarismo1
	algarismo1 = quociente%10;
	quociente = quociente/10;

	//cálculo e atribuição do produto entre os algarismo na variável resultado
	resultado = algarismo1*algarismo2*algarismo3;
	
	//mostrando resultado 
	cout << resultado;
	
    return 0;
}
