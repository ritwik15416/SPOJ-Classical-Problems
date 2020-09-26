// The program in question will stop only when the given number is a power of 2.

#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	long long int n;
	cin >> n;
	if((n&(n-1))==0){
		cout << "TAK";
	}else{
		cout << "NIE";
	}
	return 0;
} 
