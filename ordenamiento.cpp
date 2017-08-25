#include <iostream>
using namespace std;
class Arreglo{
	int tamanio;
	int *elemento;
	//Métodos:
	public:
	Arreglo(int );
	void operator =(Arreglo);
	void cargar();
	int burbuja();
	int insercion();
	void shell();
	void mostrar();	
	};


Arreglo::Arreglo(int tamanio){

this->tamanio=tamanio;
elemento = new int [tamanio];

}
void Arreglo::operator=(Arreglo A){
	this->tamanio=A.tamanio;
	for(int k=0; k<=tamanio;k++)
		this->elemento[k]=A.elemento[k];
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
int Arreglo::insercion(){
	int j=1,k,aux;
	while(j<tamanio){
		k=j-1;
		aux=elemento[j];
		while(k>=0 && elemento[k]>elemento[j]){
			elemento[j]=elemento[k];
			k--;
		}
		elemento[k+1]=aux;
		j++;
	}
	
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
	Arreglo A(n),B(n);
	cout<<"Digite los valores del arreglo ";
	A.cargar();
	B=A;
	op=B.burbuja();
	cout<<"Arreglo ordenado por burbuja: \n";
	B.mostrar();
	cout<<"\nRealizo "<<op<<" comparaciones\n";
	B=A;
	op=B.insercion();
	cout<<"Arreglo ordenado por insercion: \n";
	B.mostrar();
	cout<<"\nRealizo "<<op<<" comparaciones\n";

}

