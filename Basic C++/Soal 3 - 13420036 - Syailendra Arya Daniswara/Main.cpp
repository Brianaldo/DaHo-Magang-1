#include <bits/stdc++.h>
using namespace std;

int main(){
	int input;
	cin >> input;
	int F[input];
	F[0] = 1;
	cout << F[0];
	for(int i = 1; i < input; i++){
		F[i] = F[i-1] + F[i-2];
		cout << F[i];
	}
	
	return 0;
}
