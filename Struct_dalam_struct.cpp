#include<iostream>
using namespace std;
struct Education
{
  char fakultas[40];
  char jurusan[20];
  char semester[5];
};
struct Tgl_Lahir
{
  int Tanggal;
  int Bulan;
  int Tahun;
};
struct Mahasiswa
{
  char Nim[9];
  char Nama[25];
  Education pendidikan;
  Tgl_Lahir Lahir;
};
int main()
{ 
int data;
  Mahasiswa Mhs[data];
 
  cout<<"masukan jumlah data :";cin>>data;
  for(int a=1;a<=data;a++)
  {
  	cout<<"data ke"<<a<<endl;
  cout<<"NIM  : "; cin>>Mhs[a].Nim,9;
  cout<<"Nama  : "; cin>>Mhs[a].Nama,25;
  cout<<"Pendidikan  \n";
  cout<<"\tFakultas  : "; cin>>Mhs[a].pendidikan.fakultas,40;
  cout<<"\tJurusan  : "; cin>>Mhs[a].pendidikan.jurusan,20;
  cout<<"\tSemester  : "; cin>>Mhs[a].pendidikan.semester,5;
  cout<<"Tanggal Lahir  \n";
  cout<<"\tTanggal  : "; cin>>Mhs[a].Lahir.Tanggal;
  cout<<"\tBulan  : "; cin>>Mhs[a].Lahir.Bulan;
  cout<<"\tTahun  : "; cin>>Mhs[a].Lahir.Tahun;
}
for(int a=1;a<=data;a++){
	cout<<"data ke "<<a<<endl;
  cout<<"NIM  : "<<Mhs[a].Nim;
  cout<<"\nNama  : "<<Mhs[a].Nama;
  cout<<"\nPendidikan  \n";
  cout<<"\n\tFakultas  : "<<Mhs[a].pendidikan.fakultas;
  cout<<"\n\tJurusan  : "<<Mhs[a].pendidikan.jurusan;
  cout<<"\n\tSemester  : "<<Mhs[a].pendidikan.semester;
  cout<<"\nTanggal Lahir  : "<<Mhs[a].Lahir.Tanggal<<"-";
  cout<<Mhs[a].Lahir.Bulan<<"-"<<Mhs[a].Lahir.Tahun<<endl;
}
}
