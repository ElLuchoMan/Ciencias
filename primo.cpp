#include <iostream>
#include<math.h>
using namespace std;
	bool primoUno(int n, int &);
	bool primoDos(int n, int &);
	bool primoTres(int n, int &);
	bool primoCuatro(int n, int &);
	int main(){
		int n,op;
		cout<<"Digite entero positivo ";
		cin>>n;
		cout<<"Primer metodo:\n";
		if (primoUno(n,op))
		cout<< n <<" Es primo\n ";	
		else
		cout<<n<<" No es primo \n";
			cout<<" Realizo: "<<op<<" Modulos\n ";
			cout<<"______________________________________________________\n";
			cout<<"Segundo metodo:\n";
					if (primoDos(n,op))
		cout<< n <<" Es primo\n ";	
		else
		cout<<n<<" No es primo\n ";
			cout<<" Realizo: "<< op <<" Modulos\n ";
			cout<<"______________________________________________________\n";
			cout<<"Tercer metodo:\n";
					if (primoTres(n,op))
		cout<< n <<" Es primo\n ";	
		else
		cout<<n<<" No es primo\n ";
			cout<<" Realizo: "<< op <<" Modulos\n ";
				cout<<"______________________________________________________\n";
			cout<<"Cuarto metodo:\n";
					if (primoCuatro(n,op))
		cout<< n <<" Es primo\n ";	
		else
		cout<<n<<" No es primo\n ";
			cout<<" Realizo: "<< op <<" Modulos\n ";
			
					return 1;
	}
	bool primoUno(int n, int &operaciones){
		int contDiv=0;
		operaciones=0;
		for (int k=1;k<=n; k++){
		operaciones++;
		if (n%k==0)
		contDiv++;
	}
		return contDiv==2;
}
	bool primoDos(int n, int &operaciones){
		int k=2;
		operaciones=0;
		bool primo=true;
		while(primo && k<=n){
		operaciones++;
		if (n%k==0)
	
		primo=false;
		else 
		k++;
	}
	return primo && n!=1;
}

		bool primoTres(int n, int &operaciones){
		int k=3;
		operaciones=0;
		bool primo=true;
		while(primo && k<=(n/2)){
		operaciones++;
		if (n%k==0)
			primo=false;
		else 
		k+=2;
	}
	return primo &&n!=1;
}
		bool primoCuatro(int n, int &operaciones){
		int k=3;
		operaciones=0;
		bool primo=true;
		while(primo && k<=(sqrt(n))){
		operaciones++;
		if (n%k==0)
			primo=false;
		else 
		k+=2;
	}
	return primo &&n!=1;
}

	
