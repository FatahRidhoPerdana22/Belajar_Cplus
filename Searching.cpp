#include <iostream>

using namespace std;
main(){
    
    int target;
    int array[5]={1,2,3,4,5};
    int first, mid, last;

    cout<<"Masukan angka yang dicari: ";cin>>target;
    first=0; //Initialize first and last variables.
    last=2;

    while(first<=last)
    {
        mid=(first+last)/2;
        if(target>array[mid])
        {
            first=mid+1;
        }else if(target<array[mid])
        {
            last=mid+1;
        }else{
            first=last+1;
        }
    }
    if(target==array[mid])
    {
        cout<<"Angka ditemukan."<<endl;
    }else{
        cout<<"Angka tidak ditemukan."<<endl;
    }
}
