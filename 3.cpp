#include <iostream>

using namespace std;

int main(){


	int a[10];

	for(int i = 0; i < 10; ++i){
		cin >> a[i];        
        }

        int m = a[0];

       	for(int i = 1; i < 10; ++i){
		if(m < a[i]){
			m = a[i];
		}        
        }

        cout << m;

	return 0;
}