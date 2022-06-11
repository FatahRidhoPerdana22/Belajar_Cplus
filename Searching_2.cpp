#include<iostream>
using namespace std;
int main(){
	int array[]={3,10,11,2,5,7,8,20};
	int inputan;
	int panjangdata=sizeof(array)-sizeof(*array);
	cout<<"masukkan angka yang dicari =";
	cin>>inputan;
	for(int ulang=0;ulang<panjangdata;ulang++){
		if(array[ulang]==inputan){
		cout<<"angka "<<inputan<<"ada di "<<ulang;
	}
	}
}
