#include <iostream>


using namespace std;



struct Nodo{
	float valor;
	int fila, col;
	Nodo *sigFila, sigCol;
	
};
struct NodoLinea{
	int NoLinea;
	Nodo *cabLinea
	NodoLinea *sigLinea;
};
class Matiz{
	int M,N;
	NodoLinea *cabFila, *cabCol;
	public:
		Matriz(int,int);
		void cargar();
		void mostrar();
		Matriz Operator+(Matriz);
		void Operator=(Matiz);
		Matriz Operator*(Matirz);
};
int main(){
	
}
