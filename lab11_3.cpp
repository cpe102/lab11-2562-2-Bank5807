#include<iostream>

using namespace std;

void mySwap (int &,int &);

int main(){
	int x = 6, y = 9;
	cout << "Before swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	mySwap (x,y);
	cout << "After swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";

	return 0;
}

void mySwap (int &x, int &y){
    int z;
    z = y;
    y = x;
    x = z;
}