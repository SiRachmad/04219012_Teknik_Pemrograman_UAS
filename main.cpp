#include <iostream>
#include <string>
using namespace std;

 
void
showListPesanan (string daftarPesanan[4][3], int arrLength)
{
  
for (int j = 0; j < arrLength; j++)
    {
      
cout << "Kode Pesanan : " << daftarPesanan[j][0] << " => " <<
	daftarPesanan[j][1] << ", Rp. " << daftarPesanan[j][2] << endl;

} 
} 
 
void

TampilkanPesanan (string daftarPesanan[4][3], int arrLength, int kodePesanan,
		  string namaPesanan, int quantity)
{
  
for (int i = 0; i < arrLength; i++)
    {
      
int totalHarga;
      
int convertCode = stoi (daftarPesanan[i][0]);
      
 
if (kodePesanan == convertCode)
	{
	  
namaPesanan = daftarPesanan[i][1];
	  
cout << "Nama Pesanan : " << namaPesanan << "\n";
	  
 
totalHarga = stoi (daftarPesanan[i][2]) * quantity;
	  
cout << "Total yg harus dibayar : " << totalHarga << "\n";
	
}
      else if (kodePesanan == 0 || kodePesanan > arrLength)
	{
	  
cout << "Pesanan Tidak Tersedia";
	  
break;
	
}
    
}

}


 
int
main ()
{
  
 
string daftar[4][3] =
  {
    
    {
    "1", "Korek", "24000"}, 
    {
    "2", "Battery", "11000"}, 
    {
    "3", "Senter", "60000"}, 
    {
  "4", "Lilin", "2500"} 
};
  
int arrLength = sizeof (daftar) / sizeof (*daftar);
  
 
    // MENAMPILKAN LIST PESANAN
    cout << "==== SELAMAT DATANG DI TOSERBA ==== \n";
  
showListPesanan (daftar, arrLength);
  
 
cout << "============================ \n";
  
 
    // VARIABLES INPUT & OUTPUT
    string namaPesanan;
  
int kodePesanan, jumlahPesanan;
  
 
cout << "Masukkan Kode Pesanan : ";
  
cin >> kodePesanan;
  
cout << "Jumlah Pesanan : ";
  
cin >> jumlahPesanan;
  
 
cout << "============================ \n";
  
 
    // MENAMPILKAN INPUT PESANAN
    TampilkanPesanan (daftar, arrLength, kodePesanan, namaPesanan,
		      jumlahPesanan);
  
 
return 0;

}

