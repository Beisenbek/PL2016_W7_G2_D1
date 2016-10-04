#include <iostream>

using namespace std;

int f[100];

int func(int n){
	if(f[n] != -1) return f[n];
	f[n] = func(n-1) + func(n-2);
	return f[n];
}

int main(){

	for(int i = 0; i < 100; ++i){
		f[i] = -1;
	}

	f[0] = 0;
	f[1] = 1;

	int n;
	cin >> n;

	cout << func(n);
	return 0;
}