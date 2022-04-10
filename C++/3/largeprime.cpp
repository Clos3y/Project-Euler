#include<iostream>
#include<cmath>

using namespace std;


bool is_prime( int n ){

	if ( n % 2 == 0 ) { 
		//even
		return 0;

	} else {

		int root_n = lrint(sqrt(n));

		for ( int i = 3, inc = 2; i < root_n; i += inc){

			if (n % i == 0) {

			return 0;

			};


		}; //prime
	};
	return 1;
};

int large_factor( long int n ) {

	int root_n = lrint(sqrt(n));

	for (int i = root_n; i>1; i--) {

		if (n % i == 0 and is_prime(i)) {
			return i;
		};

	};
	return 1;

};

int main() {

cout << large_factor(600851475143);
cout << "\n";

return 0;

};
