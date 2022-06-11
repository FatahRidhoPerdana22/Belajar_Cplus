#include<iostream>
using namespace std;
int main(){
	int angka[]={2,4,7,9,8,1,3,6,5};
	int panjang_angka=(sizeof(angka)/sizeof(*angka));
	int simpan;
	
	for(int a=0;a<panjang_angka;a++){
		for(int b=0;b<a;b++){
			if(angka[a]<angka[b]){
				simpan=angka[a];
				angka[a]=angka[b];
				angka[b]=simpan;
			}
		}
		cout<<endl<<"pengurutan ke"<<a+1<<"=";
		for(int c=0;c<panjang_angka;c++){
		cout<<","<<angka[c];
		}
		
	}
	
}
	//cout<<endl<<"pengurutan ke"<<a+1<<"=";
//	for(int ulang3=0;ulang3<)
