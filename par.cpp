/*----------------------------------------
|  Autor: Noelia Rodriguez               |
|  Fecha: 19/4/15                        |
|----------------------------------------|
|  Descripción del Programa:             |                          
|  Dado un numero ingresado, determinar  |
|  si es par o no                        |                                        
| -------------------------------------*/

#include <iostream>
#include <cstdlib>
using namespace std;


// Programa Principal
int main()
{
    // Declaración de Variables
    int num1;
    
    cout << "Escribir un numero: "<<endl;
    cin >> num1;
    
    
	if (num1 % 2 == 0){
    	cout << "Es par"<<endl;
	}else{
		cout << "Es impar"<<endl;
	}

    return 0;           // Valor de retorno al S.O.
}



