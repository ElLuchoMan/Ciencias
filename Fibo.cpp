#include <iostream>
#include<math.h>
using namespace std;
	double fibo(int f);

	int main(){
		int n;
		cout<<"Digite numero ";
		cin>>n;
	if (fibo(n)){
	
	cout <<"Fibonacci \n"<< fibo(n) ;

}
	return 1;
	}
double fibo (int n){
	double fn1, fn2;
	
	if (n>1){
		fn2 = fibo(n-2);
		fn1= fibo(n-1);
	return fn2+fn1;
	}
return n;
}

