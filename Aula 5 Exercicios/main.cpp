#include <iostream>

using namespace std;

int fib(int n);

int main(int argc, char** argv) {
	int x;
	cin >> x;
	
	for(int i=1; i<=x; i++){
		cout << fib(i) << " ";
	}
	
	cout << endl;
	system("PAUSE");
	return 0;
}

int fib(int n){
	if(n == 1){
		return 1;
	}
	else if(n == 2){
		return 1;
	}
	else
		return fib(n - 1) + fib(n - 2);
}
