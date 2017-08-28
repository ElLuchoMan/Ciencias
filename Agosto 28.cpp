#include<iostream>
using namespace std;
class Arreglo{
	int tamanio;
	int *elemento;
	//Métodos:
	public:
	Arreglo(int);
	void operator =(Arreglo);
	void cargar();
	int busquedaSecuencial(int,int&);
	int busquedaBinariaIt(int,int&);
	int busquedaBinariaRe(int,int,int,int&);
	int burbuja();
	int insercion();
	void shell();
	void mostrar();
};
Arreglo::Arreglo(int tamanio){
	this->tamanio= tamanio;
	elemento=new int[tamanio];
}
void Arreglo::operator =(Arreglo A){
	this->tamanio=A.tamanio;
	for(int k=0; k<=tamanio;k++)
		this->elemento[k]=A.elemento[k];
}
void Arreglo::cargar(){
	for (int k=0; k<tamanio; k++){
		cout<<"Elemento["<<k+1<<"]=";
		cin>>elemento[k];
	} 
} 
int Arreglo::busquedaSecuencial(int elemento,int &op){
	int k=0;
	op=0;
	while(k<tamanio){
		op++;
		if(this->elemento[k]==elemento)
			return k;
		k++;
	}
	return -1;
}
int Arreglo::busquedaBinariaIt(int elemento, int &op){
	int ini=0,fin=tamanio-1,mitad;
	while(ini<=fin){
		mitad=(ini+fin)/2;
		op++;
		if(this->elemento[mitad]==elemento)
			return mitad;
		if(this->elemento[mitad]>elemento)
			fin = mitad-1;
		else
			ini = mitad+1;
	}
}
int Arreglo::burbuja(){
	int aux, op=0;
	for(int i=0;i<tamanio-1;i++)
		for (int j=i+1; j<tamanio; j++){
			op++;
			if(elemento[i]>elemento[j]){
				aux=elemento[i];
				elemento[i]=elemento[j];
				elemento[j]=aux;
			}
		}
	return op;
} 
int Arreglo::insercion(){            //CORREGIR METODO
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
	for (int k=0; k<tamanio; k++){
		cout<<elemento[k]<<" ";
	} 
}
int main(){
	int n,op,elemento,posicion;
	cout<<"Cual es el tamanio del arreglo?";
	cin>>n;
	Arreglo A(n),B(n);
	cout<<"Digite los elementos del arreglo: \n";
	A.cargar();
	B=A;
	op=B.burbuja();
	cout<<"\n El arreglo ordenado por burbuja: \n";
	B.mostrar();
	cout<<"\nRealizo "<<op<<" comparaciones\n";
	//op=B.insercion();
	//cout<<"Arreglo ordenado por insercion: \n";
	//B.mostrar();
	//cout<<"\nRealizo "<<op<<" comparaciones\n";
	cout<<"elemento a buscar : ";
	cin>>elemento;
	posicion=B.busquedaSecuencial(elemento,op)+1;
	if(posicion!=-1){
		cout<<"El elemento se encuentra en la posicion "<<posicion<<endl;
	}else{
		cout<<"El elemento no esta en el arrgelo\n";		
	}
	cout<<"\nBusqueda secuencial Realizo "<<op<<" comparaciones\n";
	cout<<"..........................................."<<endl;
		posicion=B.busquedaBinariaIt(elemento,op)+1;              
	if(posicion!=-1){
		cout<<"El elemento se encuentra en la posicion "<<posicion<<endl;
	}else{
		cout<<"El elemento no esta en el arrgelo\n";		
	}
	cout<<"\nBusqueda binaria Realizo "<<op<<" comparaciones\n";
	
}
