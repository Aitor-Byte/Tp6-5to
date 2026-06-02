#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Triangulo{
	private:
	int lado1;
	int lado2;
	int lado3;
	public:
	void ladomayor();
	void equilatero();
	void cargar();
};
void Triangulo::cargar(){
	cout<<"Ingrese el lado de un triangulo: ";cin>>lado1;
	cout<<"Ingrese el lado de un triangulo: ";cin>>lado2;
	cout<<"Ingrese el lado de un triangulo: ";cin>>lado3;
}
void Triangulo::equilatero(){	
if(lado1==lado2 && lado2==lado3){
	cout<<"El triangulo es equilatero";
}
}

void Triangulo::ladomayor(){
if(lado1>lado2 && lado1>lado3){
	cout<<"El lado mayor es: "<<lado1;
}
if(lado2>lado3 && lado2>lado1){
	cout<<"El lado mayor es: "<<lado2;
}
if(lado3>lado1 && lado3>lado2){
	cout<<"El lado mayor es: "<<lado3;
}
}

int main(){
	Triangulo triangulo;
	triangulo.cargar();
	triangulo.equilatero();
	triangulo.ladomayor();
	return 0;
}
