#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	double num1, num2, resultado;
	char operador;
	
	cout << "Ingrese un lo que desee realizar (+, -, *, /): ";
	cin >> operador;
	
	cout << "Ingrese el primer número: ";
	cin >> num1;
	
	cout << "Ingrese el segundo número: ";
	cin >> num2;
	
	switch (operador) {
	case '+':
		resultado = num1 + num2;
		break;
	case '-':
		resultado = num1 - num2;
		break;
	case '*':
		resultado = num1 * num2;
		break;
	case '/':
		if (num2 != 0) {
			resultado = num1 / num2;
		} else {
			cout << "Error: División por cero." <<endl;
			return 1;
		}
		break;
	default:
		cout << "Operador no válido." <<endl;
		return 1; 
	}
	
	cout << "Resultado: " << resultado <<endl;
	return 0;
}

