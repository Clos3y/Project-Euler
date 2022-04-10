#include<iostream>
#include<cmath>

using namespace std;

bool is_prime( int n ){

	if ( n % 2 == 0 ) { 
		//even
		return 0;

	} else {

		int root_n = lrint(sqrt(n));

		for ( int i = 3, inc = 2; i <= root_n; i += inc){

			if (n % i == 0) {

			return 0;

			};


		}; //prime
	};
	
	return 1;
};

int nPrime( int n ) {

	int counter = 2;

	int p = 3;

	while (counter != n){
	
		p += 2;

		if (is_prime(p)) {

			counter++;

		};

	};

	return p;

};

int main() {

cout << nPrime(10001);
cout << "\n";

return 0;

};
