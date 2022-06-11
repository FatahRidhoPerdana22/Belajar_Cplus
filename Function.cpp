#include<iostream>
using namespace std;

int hitung(int a, int b, int c);
double hitung(double j, double k, double l);
double hitung(double w, double x, double y, double z);

int main(){
	cout<<hitung (1, 3, 6)<<endl;
    cout<<hitung(22.5, 4.5, 6.55)<<endl;
    cout<<hitung(1, 0.5, 2.5, 6.5)<<endl;
    return 0;
}
int hitung(int a, int b, int c){
    cout<<"hitung(int a, int b, int c)"<<endl;
    return a*b*c;
}
double hitung(double j, double k, double l){
    cout<<"hitung(double j, double k, double l)"<<endl;
    return j*k-l;
}
double hitung(double w, double x, double y, double z){
    cout<<"hitung(double w, double x, double y, double z)"<<endl;
    return w+x*y/z;
}
