#include<iostream>
#include<conio.h>

using namespace std;

 // prototype
 void input();
 void pilihanA();
 void pilihanB();
 
 // variabel global
 int n, min, max, bil, pilihan;
  
 int main(){
	 char ulangi;
	 do{
	  cout <<"==========PILIHAN=========="<<endl;
	  cout <<"1. Mencari Nilai Minimum  :"<<endl;
	  cout <<"2. Mencari Nilai Maksimum :"<<endl;
	  cout <<"==========================="<<endl;
	  
	  cout<<endl;
	  cout<<"Masukan Pilihan Anda : " ;
	  cin>>pilihan;
	  cout<<endl;
	  cout <<"====================="<< endl;
	  
		if (pilihan==1){
			pilihanA();  
			}
		else if(pilihan==2){
			pilihanB();  
			}
		else{
			
			cout<< " Silahkan coba kembali" << endl;
			}
	 cout<<endl;
	 cout<<endl;
     cout <<"----------------------------------"<<endl;
	 cout<<endl;
	 cout <<" Kembali Ke Menu ? [Y/T]: ";
	 cin>>ulangi;
		 }
	 while (ulangi=='Y' || ulangi=='y');
 }
  
  void pilihanA(){
		
		 int n, min, nil; 
		 
		 cout <<endl;
		 cout <<"Mencari Nilai Minimal"<<endl;
		 cout <<"======================"<<endl;
		 cout <<"Masukan Banyak Input Nilai :"; 
		 cin>>n;
		 cout<<endl;
		 min=n;
		 for(int i=1;i<=n;i++)
		 {
			 cout <<"masukan Nilai : "; 
			 cin>>nil;
			 if(i==1){
				 n;
				 min = nil;
				 
			 }
			 else if(nil<min)
			 {
				 min=nil;
			 }
			 
		 }
		
		
		 cout<<endl;
		 cout <<"Nilai Minimal yaitu :"<<min<<endl;
		 //cout <<" Jumlah Nilai Minimal adalah : " << jumlah <<endl;
		
 }
 
 
 
 void pilihanB(){
		 int n, max, nil;
		 cout <<endl;
		 cout <<"Mencari Nilai Maksimal"<<endl;
		 cout <<"======================"<<endl;
		 cout <<"Masukan Banyak Input Nilai :"; 
		 cin>>n;
		 cout<<endl;
		 max=n;
		 for(int i=1;i<=n;i++)
		 {
			 cout <<"masukan Nilai : ";
			 cin>>nil;
			 if (i==1){
				 n;
				 max = nil;
			 }
			 else if(nil>max)
			 {
				 max=nil;
			 }
			 
		 }
	
		 cout<<endl;
		 cout <<"Nilai Maksimal yaitu :"<<max<<endl;
		 //cout <<" Jumlah Nilai Maksimal adalah : " << jumlah <<endl;
		 
	 
 }
 

 
			 
	  
	
 
 
 