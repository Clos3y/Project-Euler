#include<iostream>

using namespace std;

long int collatz( long int n , long int len ) {

	if ( n == 1 ) {
		
		return len;

	} else if ( n % 2 == 0) {
		
		return collatz(n/2,len+1);

	} else  {

		return collatz(3*n + 1,len+1);

	};
}

int main() {

	long int record = 1;
	long int record_len = 1;

	for (int i = 2; i < 1000000; i++){

		long int len = 0;
		
		long int new_len = collatz(i,len);
		
		if (new_len > record_len){

			record_len = new_len;	
			record = i;
		};

	};

cout << record;
cout << "\n";

return 0;
}
