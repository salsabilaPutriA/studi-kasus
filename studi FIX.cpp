//LIBRARY :
#include <iostream> // DIPERLUKAN AGAR BISA MELAKUKAN OPERASI INPUT DAN OUTPUT
#include <fstream>  // hampir sama seperti iostream yang harus di panggil jika ingin menggunakan beberapa fungsi seperti cin dan cout
using namespace std;

int main (){
//TIPE DATA STRING
  string varian[25];
  char status;
  float discount;
  int pay,select,change,price,total,menu,range; //pay untuk bayar , select untuk pilih , change untuk kembalian , range untuk harga

cout << " RUMAH MAKAN MURAH MERIAH" << endl;
  cout << "-------------------------" << endl;
  cout << "\nDAFTAR MENU MAKANAN DAN HARGA : " << endl;
  cout << "\n1. AYAM GEPREK  : Rp21.000" << endl;
  cout << "2. AYAM GORENG  : Rp17.000" << endl;
  cout << "3. UDANG GORENG : Rp19.000" << endl;
  cout << "4. CUMI GORENG  : Rp20.000" << endl;
  cout << "5. AYAM BAKAR   : Rp25.000" << endl;
ofstream klrn;
  klrn.open("struct.txt", ios::out);
 //klrn ( Umtuk Struct) 
klrn << " RUMAH MAKAN MURAH MERIAH " << endl;
  klrn << "-------------------------" << endl;
  klrn << "\nDAFTAR MENU MAKANAN DAN HARGA : " << endl;
  klrn << "\n1. AYAM GEPREK  : Rp21.000" << endl;
  klrn << "2. AYAM GORENG  : Rp17.000" << endl;
  klrn << "3. UDANG GORENG : Rp19.000" << endl;
  klrn << "4. CUMI GORENG : Rp20.000" << endl;
  klrn << "5. AYAM BAKAR   : Rp25.000" << endl;
  klrn.close();
  
  do{
  cout <<"\nJUMLAH MENU YANG INGIN ANDA PESAN : ";
  cin >> menu;
  
ofstream k; // fungsi untuk menginput data pada file
  k.open("struct.txt", ios::app);
  k << "-------------------------"<< endl;
  k << "MENU MAKANAN YANG ANDA PESAN: "<<endl;
  k.close(); 
  for(int a=1;a<=menu;++a){

  cout << "\nSILAHKAN PILIH MENU MAKANAN : ";
  cin >> select;
  
// PERCABANGAN YANG DIGUNAKAN IF , ELSE , ELSE IF ,  
  if (select==1){
    cout << "1. AYAM GEPREK : Rp21.000" << endl;
    price=price+21000;
    ofstream klrn;
  klrn.open("struct.txt", ios::app);
  klrn << "1. AYAM GEPREK : Rp21.000"<<endl;
  klrn.close(); 
  }
  else if(select==2){
    cout << "2. AYAM GORENG : Rp17.000" << endl;
    price=price+17000;
    klrn.open("struct.txt", ios::app);
    klrn << "2. AYAM GORENG : Rp17.000"<<endl;
    klrn.close(); 
  }
  else if(select==3){
    cout << "3. UDANG GORENG : Rp19.000" << endl;
    price=price+19000;
    klrn.open("struct.txt", ios::app);
    klrn << "3. UDANG GORENG : Rp19.000"<<endl;
    klrn.close(); 
  }
  else if(select==4){
    cout << "4. CUMI GORENG : Rp20.000" << endl;
    price=price+20000;
    klrn.open("struct.txt", ios::app);
    klrn << "4. CUMI GORENG : Rp20.000"<<endl;
    klrn.close(); 
  }
  else if(select==5){
    cout << "5. AYAM BAKAR : Rp25.000" << endl;
    price=price+25000;
    klrn.open("struct.txt", ios::app);
    klrn << "5. AYAM BAKAR : Rp25.000"<<endl;
    klrn.close(); 
  }
}
  cout << "JARAK DARI RUMAH MAKAN KE RUMAH ANDA (dalam KM) : ";
  cin >> range;
  cout << "JARAK DARI RUMAH MAKAN KE RUMAH ANDA " << range << " Kilometer.";
  klrn.open("struct.txt", ios::app);
  klrn << "-----------------------------\n";
  klrn << "JARAK DARI RUMAH MAKAN KE RUMAH ANDA " << range << " Kilometer."<<endl;
  klrn.close();
  
  if (range <= 3){
  if (price <= 25000){
    total = price + 15000;
    
  }
else  if (price > 25000){
    cout << "\nAnda mendapatkan potongan ongkir sebesar Rp3.000";
    total = price + 12000;
      
	klrn.open("struct.txt", ios::app);
    klrn << "\nAnda mendapatkan potongan ongkir sebesar Rp3.000";
    klrn.close();
    }
else if (price > 50000){
    cout << "\nAnda mendapatkan potongan diskon sebesar 15% dan ongkir sebesar Rp5.000";
    discount = price * 0.15;
    total = price - discount + 10000;
      
	klrn.open("struct.txt", ios::app);
    klrn << "\nAnda mendapatkan potongan diskon sebesar 15% dan ongkir sebesar Rp5.000";
    klrn.close();
        
    }
else if ((price > 150000)){

    cout << "\nAnda mendapatkan potongan diskon sebesar 35% dan ongkir sebesar Rp8.000";
    discount = price * 0.35;
    total = price - discount + 7000;
      
	klrn.open("struct.txt", ios::app);
    klrn<< "\nAnda mendapatkan potongan diskon sebesar 35% dan ongkir sebesar Rp8.000";
    klrn.close();
    }
  }
  else if (range > 3){
    if (price <= 25000){
    total = price + 25000;
    
  }

if ((price > 25000) && (price <= 50000)){
    cout << "\nANDA MENDAPATKAN POTONGAN ONGKIR Rp3.000";
    total = price + 22000;
      
	klrn.open("struct.txt", ios::app);
    klrn << "\nANDA MENDAPATKAN POTONGAN ONGKIR Rp3.000";
    klrn.close();
    }
    else if ((price > 50000) && (price <= 150000)){
      cout << "\nAnda mendapatkan potongan diskon sebesar 15% dan ongkir sebesar Rp5.000";
      discount = price * 0.15;
      total = price - discount + 20000;
      klrn.open("struct.txt", ios::app);
      klrn << "\nAnda mendapatkan potongan diskon sebesar 15% dan ongkir sebesar Rp5.000";
      klrn.close();
  
  }
    else if ((price > 150000)){

      cout << "\nAnda mendapatkan potongan diskon sebesar 35% dan ongkir sebesar Rp8.000";
      discount = price * 0.35;
      total = price - discount + 17000;
      klrn.open("struct.txt", ios::app);
      klrn << "\nAnda mendapatkan potongan diskon sebesar 35% dan ongkir sebesar Rp8.000";
      klrn.close();
    }
  }
  cout <<"\nTOTAL HARGA : " << total;
  cout << "\nMASUKKAN JUMLAH UANG ANDA : ";
  cin >> pay;
  cout << "KEMBALIAN : " << pay - total;
  
  klrn.open("struct.txt", ios::app);
  klrn << "\n-----------------------\n";
  klrn << "\nTOTAL HARGA : " << total;
  klrn << "\nUANG YANG DIBAYARKAN : " << pay;
  klrn << " KEMBALIAN : " << pay - total;
  klrn.close();
  
  cout<<endl;
  cout<<"APAKAH ANDA INGIN MEMESAN LAGI ? [Y/N] : ";
  cin>>status;
  
  // while :Untuk mengulang suatu proses yang belum diketahui jumlahnya.Jika kondisi masih bernilai true, maka looping akan terus berlanjut
   // do while :modifikasi dari perulangan while , memindahkan posisi pemeriksaan kondisi ke akhir perulangan.
} while(status=='Y'||status=='y');
	cout<<"Keluar "<<endl;
	return 0;
}

