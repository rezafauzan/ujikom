#include <iostream>
#include <conio.h>
using namespace std;
 
int main() {
int i;
char ch;
cout << "============================\n";
cout << "Selamat Datang di Form Login \n";
cout << "============================\n";
   
       string user = "";
       string pass = "";
       cout << "Username : "; cin >> user;
       cout << "Password : "; cin >> pass;
 
       if (user == "admin" && pass == "56789") {
         cout << "\n\nAnda berhasil login. \n" << endl;
         cout <<"============================" <<endl;
  	    cout << "Nama Barang  || Harga Satuan" <<endl;
   		cout << "============================" <<endl;
  		cout << "1. Batu Bata || Rp. 50.000 ||" <<endl;
  	 	cout << "2. Pasir     || Rp. 500.000||" <<endl;
   		cout << "3. kayu      || Rp. 40.000 ||" <<endl;
   		cout << "4. genteng   || Rp. 60.000 ||" <<endl;
   		cout << "5. besi      || Rp. 90.000 ||" <<endl;
   		cout << "=============================" <<endl;
   		
   		string barang[99][99];
   		
   		int Jumlah_beli;
		   string nama_barang; 
   		cout<<"Masukan Jumlah Beli :";
   		cin>>Jumlah_beli;
   		
   		for (int i=1;i<=Jumlah_beli ;i++){
   			cout<<"\nMasukan Barang Pesanan ke- "<<i<<"\n\n";
   			cout<<"Nama Barang : ";
   			cin>>barang[i][0];
   		
   			
   			cout<<"jumlah barang : ";
   			cin>>barang[i][1];
   			
   			cout<<"Harga Barang : ";
   			cin>>barang[i][1];
//   			int total =+ Jumlah_beli * barang[i][1]; 
		   }
         
        
      } else {
         cout << "\n\nMaaf Username & Password anda masukan salah.\n\n";
      }
   
 
   
   
}

  
   
   
   
   

