#include <iostream>
using namespace std;
class Arreglo{
	int tamanio;
	int *elemento;
	//Métodos:
	public:
	Arreglo(int );
	void cargar();
	int burbuja();
	void insercion();
	void shell();
	void mostrar();	
	};


Arreglo::Arreglo(int tamanio){

this->tamanio=tamanio;
elemento = new int [tamanio];

}
void Arreglo::cargar(){
	for (int k=0;k<tamanio;k++){
	
	cout<<"Elemento["<<k+1<<"]=";
	cin>>elemento[k];
		}
	}
int Arreglo::burbuja(){
	int aux,op=0;
	for (int i=0;i<tamanio-1; i++ ){
	
		for (int j=i+1;j<tamanio;j++){
			if(elemento[i]>elemento[j]){
				op++;
			aux=elemento[i];
			elemento[i]=elemento[j];
			elemento[j]=aux;
			}
		}
	}	
	return op;
}
	
	
void Arreglo::mostrar(){
	for(int k=0;k<tamanio;k++){
		cout<<elemento[k]<<" ";
}
}	
int main (){
int n,op;
cout<<"Cual es el tamanio del arreglo?";
cin>>n;
Arreglo A(n);
cout<<"Digite los valores del arreglo ";
A.cargar();
op=A.burbuja();
cout<<"Arreglo ordenado por burbuja: \n";
A.mostrar();
cout<<"\nRealizo "<<op<<" comparaciones\n";

}


