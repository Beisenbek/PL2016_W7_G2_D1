#include <iostream>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int n;
	cin >> n;

	int a[n];

	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}

	for(int i = 0; i < n; i=i+2){
		cout << a[i] << " ";
	}


	return 0;
}