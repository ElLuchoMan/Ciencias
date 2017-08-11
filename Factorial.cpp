#include <iostream>
#include<math.h>
using namespace std;
	double factI(int f, int &);
	double factR(int f, int &);
	int main(){
		int n,p;
		cout<<"Digite numero ";
		cin>>n;
	if (factI(n,p)){
	
	cout <<"Factorial Iterativo \n"<< factI(n,p) << " Numero de operaciones: "<<p;
	}
	cout<<"\n_________________________________________________";
	if(factR(n,p)){
	
		cout <<"\nFactorial Recursivo \n"<< factR(n,p) << " Numero de operaciones: "<<p;
}
	return 1;
	}
	double factI(int n, int &operaciones){
		operaciones=0;
		double fact=1;
		for (int k=1;k<=n;k++)
		
		fact*=k;
		operaciones++;
		return fact;
	}
	double factR(int n, int &operaciones){
		double fact;
		operaciones=0;
		if (n>0){
			
			fact = factR(n-1, operaciones);
			operaciones++;
			return fact*n;
		}
		return 1;
	}
