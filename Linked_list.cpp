#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
using namespace std;
 
int pilih; void pilihan();
 
struct LOOP{
 int nk, mulai, selesai;
 char nama[20];
 char gender[30];
 int info;
 LOOP *prev, *next;
};
 
LOOP *data, *front=NULL, *rear=NULL,*help,*del, *q;
 
void BUAT_LOOP(int X)
{
data=(LOOP *)malloc(sizeof(LOOP));
if(data!=NULL)
data->info=X;
else
{
cout<<"Membuat Loop gagal";
exit(1);
}
}
 
void buat_data()//fungsi membuat data data
{
 data = new(LOOP);
 cout<<"    No. Komputer : ";cin>>data->nk;
 cout<<"    Nama  Pelanggan : ";cin>>data->nama;
 cout<<"    Masukkan Gender : ";cin>>data->gender;
 cout<<"    Jam Mulai : ";cin>>data->mulai;
 cout<<"    Jam Selesai : ";cin>>data->selesai;
 cout<<"\n  ==========================";
 cout<<"\n    Data telah dimasukkan   ";
 getch();
  data->prev=NULL;
 data->next=NULL;
}
 
void insert_data()
{
 buat_data();
 if(front==NULL)
 {
front=data;
  rear=data;
  rear->next=NULL;
 }
 else
 {
 
  rear->next=data;
  rear=data;
  rear->next=NULL;
 }
 cout<<endl<<endl;
}
 
void hapus_data()//fungsi penghapusan data
{
 int hapus;
 if(front==NULL)
 {
  cout<<"   stack  kosong"<<endl;
  getch();
 }
 else
 {
  hapus=front->info;
  cout<<"   Data awal sudah dihapus";
  del = front;
  q = front->next;
  front=q;
  delete del;
  getch();
 }
}
 
void cetak_data()
{
 if (rear==NULL){
 cout<<"    Linked List kosong!";
 getch();
 }
 else
 {
  help=front;
  while(help!=NULL)
  {
   cout<<"  No. Komputer : "<<help->nk<<"  "<<help->nama<<endl;
   cout<<"  Nama : "<<help->nama<<endl;
   cout<<"  Gender : "<<help->gender<<endl;//data akan muncul dengan tampilan
   cout<<"    Jam Mulai : "<<help->mulai<<endl;
   cout<<"    Jam Selesai : "<<help->selesai<<endl;
   cout<<endl;
help=help->next;
 
 }
getch();
 
}
}
 
int main()//interface monitor
{
 do
 {
  system("cls");   
  cout<<"   STACK LINKED LIST WITH HEAD"<<endl;
  cout<<"   ============================="<<endl;
  cout<<"   1. INSERT DATA"<<endl;
  cout<<"   2. HAPUS DATA"<<endl;
  cout<<"   3. CETAK DATA"<<endl;
  cout<<"   4. EXIT"<<endl;
  cout<<"   ============================="<<endl;
  cout<<"   Pilihan : ";
  cin>>pilih;
  cout<<"   ============================="<<endl;
  cout<<endl;
  pilihan();
 }
 
 while(pilih!=4);
}
    void pilihan()//fungsi "pilihan" untuk pemrosesan
    {
    if(pilih==1){
     insert_data();}
 
    else if(pilih==2)
       hapus_data();
       
    else if(pilih==3)
       cetak_data();
       
    else
     {
     cout<<"    Terima kasih sudah menggunakan program ini"<<endl;
      }
    }


