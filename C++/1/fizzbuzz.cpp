#include<iostream>
#include<stdio.h>
#include<cstdlib>

using namespace std;

int fizzbuzz(int n) {

	int k = (n-1) / 3;
	int l = (n-1) / 5;
	int m = (n-1) / 15;

	return (3*k*(k+1) + 5 * l * (l+1) - 15*m*(m+1))/2;

}

int main(int argc, char* argv[]) {

	int n = atoi(argv[1]);
			
	cout << fizzbuzz(n) << "\n";

	return 0;

}
