#include<iostream>

using namespace std;

int main() {
	int fib = 0;
	int a = 1;
	int b = 1;
	int fib_sum = 0;
	while(fib < 4000000){
		fib = a + b;
		if(fib%2 == 0){
			fib_sum = fib + fib_sum;
		}
		a = b;
		b = fib;
	}
	cout << fib_sum << endl;
}
