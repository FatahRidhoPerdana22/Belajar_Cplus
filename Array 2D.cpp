#include <iostream>
using namespace std;

int main() {
	
	int A[4][5];
	
	for (int c=0;c<4;c++){
		for (int l=0;l<5;l++){
			  cout<<"A["<<c<<"]["<<l<<"] = ";
			  cin>>A[c][l];
		}
		cout << endl;
	}
	
	for (int c=0;c<3;c++){
		for (int l=0;l<4;l++){
			 cout<<A[c][l]<<" ";
		}
		cout << endl;
	}
}
