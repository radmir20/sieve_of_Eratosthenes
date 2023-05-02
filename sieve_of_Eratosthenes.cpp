#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n = 100;
	vector<int> primes(n, 1);
	primes[0], primes[1] = 0, 1;

	
	for (int i = 2; i < n; i++){
		if (primes[i] == 1){
			for (int j = i*2; j<n; j+=i){
				primes[j] = 0;
			}
		
		}
		
	}
	
	for (int k = 0; k < primes.size(); k++){
		if (primes[k] ==1){
			cout << k << " ";
		}
	}
	

	
}