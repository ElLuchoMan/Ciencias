#include <iostream>
#include<math.h>
using namespace std;
	double factI(int f);
	double factR(int f);
	int main(){
		int n;
		cout<<"Digite numero ";
		cin>>n;
		cout<<"Factorial Iterativo: \n";
		cout<<factI(n);
		cout<<"\n Factorial Iterativo: \n";
		cout<<factR(n);
		 
	
	}
	double factI(int n){
		double fact=1;
		for (int k=1;k<=n;k++)
		fact*=k;
		return fact;
	}
	double factR(int n){
		double fact;
		if (n>0){
			fact = factR(n-1);
			return fact*n;
		}
		return 1;
	}
