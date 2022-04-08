#include<iostream>

using namespace std;

int fib( int n ) {

int a = 1;
int b = 2;
int sum = 0;

while (b < n) {

if (b % 2 == 0){

sum += b;

};

int c = b + a;

a = b;

b = c;
};

return sum;

};

int main() {

cout << fib(4000000);
cout << "\n";
return 0;

};
