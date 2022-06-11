#include<iostream>
using namespace std;

int main(){
	float a; float *ptr_a;
	a=10.2;
	ptr_a=&a;
	
	cout<<"menggunakan variabel biasa "<<endl;
	cout<<"nilai dari a ="<<a<<endl;
	cout<<"alamat dari a ="<<&a<<endl;
	cout<<"dengan menggunakan pointer"<<endl;
	cout<<"nilai dari a ="<<*ptr_a<<endl;
	cout<<"alamat dari a ="<<ptr_a<<endl;
}
