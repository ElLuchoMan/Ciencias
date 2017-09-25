#include <iostream>


using namespace std;


struct Nodo{
	float coeficiente;
	int expo;
	Nodo *sig;
}
;

class Polinomio{
	Nodo *cab;
	void agregar(int,float);
	void ordenar();
	//Metodos
	public:
	Polinomio();
	void Cargar();
	void Mostrar();
	void operator=(Polinomio);
	float evaluar(float);
	void derivada();
	void integrar();
	float integrar(float,float);
	Polinomio operator+(Polinomio);
	Polinomio operator-(Polinomio);
	
};
Polinomio::Polinomio(){
	cab=NULL;
	
}
void Polinomio::agregar(int expo, float coef){
	Nodo *p=new Nodo;
	p->expo=expo;
	p->coeficiente=coef;
	p->sig=cab;
	cab=p;	
}

void Polinomio::ordenar(){
	Nodo *p=cab,*q;
	int expo;
	float coef;
	while(p->sig){
		q=p->sig;
		while(q){
			
			if(p->expo<q->expo){
				expo=p->expo;
				coef=p->coeficiente;
				p->expo=q->expo;
				p->coeficiente=q->coeficiente;
				q->expo=expo;
				q->coeficiente=coef;		
			}
			q=q->sig;
		}
		p=p->sig;
	}
	
}

void Polinomio::Cargar(){
	int expo;
	float coef;
	cout<<"Digite el exponente: ";
	cin>>expo;
	while(expo>=0){
		cout<<"Digite el coeficiente: ";
		cin>>coef;
		agregar(expo,coef);
		cout<<"Digite el exponente: ";
		cin>>expo;
	}
	ordenar();
}

void Polinomio::Mostrar(){
	Nodo *p=cab;
	
	while(p){
		cout<<p->coeficiente<<"X^"<<p->expo<<"+";
		p=p->sig;
		
	}
}

float Polinomio::evaluar(float x){
Nodo *p=cab;
float ex,x=0;
while (p){
	ex=pow(x,p->expo)*p->coeficiente;
	x=ex+x;
	p=p->sig;
}
return x;	
}

char menu(){
	char opcion;
	cout<<"    \nMENU\n";
	cout<<"(C)argar\n";
	cout<<"(M)ostar\n";
	cout<<"(E)valuar\n";
	cout<<"(C)argar\n";
	cout<<"(D)erivar\n";
	cout<<"(I)ntegrar\n";
	cout<<"i(N)tegrar definida\n";
	cout<<"(S)umar\n";
	cout<<"(R)estar\n";
	cout<<"(T)erminar\n";
	cout<<"elija una opcion:\n";
	cin>>opcion;
	return opcion;
}

int main(){
	char opcion;
	
	Polinomio p;
	do{
		opcion=menu();
		switch(opcion){
			
			case 'c':
			case 'C':
				cout<<"Ingrese el polinomio; \n";
				p.Cargar();
				break;
				
			case 'm':
			case 'M':
				cout<<"\nEl polinomio almacenado:\n";
				p.Mostrar();
				break;
				
			case 'e':
			case 'E':
				float x;
				cout<<"Digite el valor con el que desea evaluar el polinomio: \n";
				cin>>x;
				cout<<"\n El polinomio evaluado en "<<x<<" es igual a "<<p.evaluar(x);
				break;	
		}
	}while(opcion!='T' && opcion!='t');
	
	
	return 1;
	
}



