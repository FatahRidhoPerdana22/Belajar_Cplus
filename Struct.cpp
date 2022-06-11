#include<iostream>
using namespace std;
struct segitiga{
	float luas, alas, tinggi;
	float keliling, sisi;
};
int main(){
	segitiga sgtiga;
	cout<<"\nMenghitung Luas Segitiga"<<endl;
	cout<<"\n";
	cout<<"masukkan alas :";
	cin>>sgtiga.alas;
	cout<<"masukkan tinggi :";
	cin>>sgtiga.tinggi;
	sgtiga.luas = 0.5*sgtiga.alas*sgtiga.tinggi;
	cout<<"hasil luas segitiga adalah : "<<sgtiga.luas<<endl;
	cout<<"\n";
	cout<<"Menghitung Keliling Segitiga"<<endl;
	cout<<"\n";
	cout<<"masukkan sisi :";
	cin>>sgtiga.sisi;
	sgtiga.keliling = sgtiga.sisi+sgtiga.sisi+sgtiga.sisi;
	cout<<"Keliling segitiga adalah : "<<sgtiga.keliling;
}
