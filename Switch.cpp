#include<iostream>
using namespace std;

int main()
{
	int pil,data;
	
	cout<<" Tugas Akhir Praktikum Struktur Data "<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<"Nama\t: Fatah Ridho Perdana"<<endl;
	cout<<"NIM\t: 201011400145"<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<endl;
	cout<<"-------------------------------------------------------------------------------------"<<endl;
	cout<<"1. Program Billing Warnet\n";
	cout<<"2. Program Kasir Sederhana\n";
	cout<<"Pilih yang anda suka :";
	cin>>pil;
	
	switch(pil){
		case 1:
			int a;
			int mulai[15],selesai[15],biaya[15],total[15],perjam[15];
			char nama[15][50],nk[15][20];
			cout<<"Masukkan Jumlah Data :";cin>>data;
			for(a=1;a<=data;a++)
			{
				cout<<"Data ke\t : ";cout<<a<<endl;
				cout<<"No Komputer \t:";cin>>nk[a];
				cout<<"Nama Pelanggan\t:";cin>>nama[a];
				cout<<"Jam Mulai\t:";cin>>mulai[a];
				cout<<"Jam Selesai\t:";cin>>selesai[a];
				
				total[a]=selesai[a]-mulai[a];
				cout<<"Biaya perjam :";cin>>perjam[a];
				biaya[a]=perjam[a]*total[a];
				cout<<"Biaya yang harus dibayar :"<<biaya[a]<<endl;
				cout<<endl;
				
			}
			cout<<" Rental Komputer\n";
				cout<<"==========================================================================="<<endl;
				cout<<"No.\tNama\t\tJam\t\tJumlah jam\tBiaya\tTotal"<<endl;
				cout<<"\t\t   Mulai  Selesai\t\t\t/Perjam\tBiaya"<<endl;
				cout<<"===========================================================================\n";
				for(a=1;a<=data;a++){
				cout<<a<<"\t"<<nama[a]<<"\t\t"<<mulai[a]<<"\t"<<selesai[a]<<"\t"<<total[a]<<"\t\t"<<perjam[a]<<"\t"<<biaya[a]<<endl;
			}
			cout<<"=========================================================================\n";
			break;
		case 2:
			int diskon,i,j,x;
			int semua;
			  int bayar[10], hrga[10],jbrg[10], semuai=0;
			
			  cout<<"==============================="<<endl;
			  cout<<"======== Program Kasir ========"<<endl;
			  cout<<"==============================="<<endl;
			  cout<<endl;
			  cout<< "Masukkan Jumlah Data = ";
			  cin>>x;
			  cout << endl;
			
			 for(i=0;i<x;i++){
			  cout<<"==============================="<<endl;
			  cout<<endl;
			  cout<< "Masukkan Nama Barang = ";
			  cin>>nama[i];
			  cout<< "Masukkan Harga Barang = Rp.";
			  cin>>hrga[i];
			  cout<< "Masukkan Jumlah Barang = ";
			  cin>>jbrg[i];
			  cout<<endl;
			 }
			
			
			for(i=0;i<x;i++){
			 cout<<"Nama Barang = "<<nama[i]<<endl;
			 cout<<"Harga Barang = Rp. "<<hrga[i]<<endl;
			 cout<<"Jumlah Barang = "<<jbrg[i]<<endl;
			 bayar[i]=hrga[i]*jbrg[i];
			 cout<<"jumlah Belanja = "<<bayar[i]<<endl;
			 cout<<endl;
			 }
			
			for(i=0; i<x; i++){
			 semuai=semuai+bayar[i];
			 cout<<"Sub semua = "<<semuai<<endl;
			 } 
			if (semuai>30000){
			 diskon=0.1*semuai;
			 cout<<"Diskon 10% = Rp. "<<diskon<<endl;
			 semua=semuai-diskon;
			 cout<<"Total  = Rp. "<<semua<<endl;
			 }
			}

			
			}
			
