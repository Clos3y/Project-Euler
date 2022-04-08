#include<iostream>

using namespace std;

int main() {

int n = 1000;

int sum = 0;

for (int i = 0; i<n ; i++) {

if (i % 5 == 0 || i % 3 == 0) {

sum += i;

};

};

cout << sum << "\n";

return 0;

}
