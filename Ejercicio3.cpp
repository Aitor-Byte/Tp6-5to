#include<iostream>
#include<vector>
#include<string>
using namespace std;
class cuadrado{
	private:
		int lado;
		int perimetro1;
		int superficie1;
	public:
		void cargarcuadrado();
		void perimetro();
		void superficie();
		
};
void cuadrado::cargarcuadrado(){
	cout<<"Ingrese el lado del cuadrado: ";cin>>lado;
}
void cuadrado::perimetro(){
	perimetro1 = lado*4;
	cout<<"El perimetro del cuadrado es: "<<perimetro1;
}
void cuadrado::superficie(){
	superficie1 = lado * lado;
	cout<<"La superficie del cuadrado es: "<<superficie1;
	}
int main(){
	cuadrado Cuadrado;
	Cuadrado.cargarcuadrado();
	Cuadrado.perimetro();
	Cuadrado.superficie();	
	return 0;
}
