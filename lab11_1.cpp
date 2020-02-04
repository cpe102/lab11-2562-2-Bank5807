#include<iostream>
using namespace std;

long long fibonacci(int);

int main(){
	cout << fibonacci(0) << "\n";
	cout << fibonacci(1) << "\n";
	cout << fibonacci(2) << "\n";
	cout << fibonacci(15) << "\n";
	cout << fibonacci(30) << "\n";
	cout << fibonacci(50) << "\n";

	return 0;
}

long long fibonacci(int x){
    if(x == 0){
        return 0;
    }else if(x == 1){
        return 1;
    }else{
        return fibonacci(x-1) + fibonacci(x-2);
    }
}