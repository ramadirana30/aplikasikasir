#include <conio.h>
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <ctime>
#include <string.h>

using namespace std;
struct databrg
{
   char kodebrg;
   long hrgsatuan;
   int jmlhbeli;
   char exp;
};

struct abc
{
 int nota,jmlhtrx,bayar;

   databrg * d;
};
 abc t;

long total(int a)
{long th;
th=t.d[a].hrgsatuan*t.d[a].jmlhbeli;
return th;
}


long subtotal()
{long s;
 s=0;
   for(int i=0;i<t.jmlhtrx;i++)
    {s=s+total(i);}

   return s;

}
long diskon()
{long d;
 if (subtotal()>200000)
    {d=subtotal()*0.15;}
   else if (subtotal()>70000)
    {d=subtotal()*0.05;}
   else
    {d=0;}
   return d;
}
 long ppn()
 {long p;
    p=0.1*subtotal();
      return p;
}
 long grand()
   {long g;
    g=subtotal()-diskon()+ppn();
      return g;
}
long kembalian()
   {long k;
    k=t.bayar-grand();
   return k;
}
void tampil(char u)
{
 cout<<setiosflags(ios::left)<<setw(10)<<t.d[u].kodebrg;
 if (t.d[u].kodebrg == 'A') {
 	cout<<setiosflags(ios::left)<<setw(23)<<"Kopi Kapal Api";
   t.d[u].hrgsatuan = 2000; } 
 else if (t.d[u].kodebrg ==  'B' ) {
 	cout<<setiosflags(ios::left)<<setw(23)<<"Silver Queen";
   t.d[u].hrgsatuan = 24000;}
else if (t.d[u].kodebrg ==  'C' ) {
 	cout<<setiosflags(ios::left)<<setw(23)<<"Kacang Dua Kelinci ";
   t.d[u].hrgsatuan = 0; }
else if (t.d[u].kodebrg ==  'D' ) {
 	cout<<setiosflags(ios::left)<<setw(23)<<"Tolak Angin";
   t.d[u].hrgsatuan = 2000; }
else if (t.d[u].kodebrg ==  'E' ) {
 	cout<<setiosflags(ios::left)<<setw(23)<<"Extra Joss";
   t.d[u].hrgsatuan = 0; }
else if (t.d[u].kodebrg ==  'F' ) {
 	cout<<setiosflags(ios::left)<<setw(23)<<"Indomie";
   t.d[u].hrgsatuan = 2500; }
else if (t.d[u].kodebrg ==  'G' ) {
 	cout<<setiosflags(ios::left)<<setw(23)<<"Kecap Bangau";
   t.d[u].hrgsatuan = 8000; }
else if (t.d[u].kodebrg ==  'H' ) {
 	cout<<setiosflags(ios::left)<<setw(23)<<"Gulaku";
   t.d[u].hrgsatuan = 15000; }
else if (t.d[u].kodebrg ==  'I' ) {
 	cout<<setiosflags(ios::left)<<setw(23)<<"Pocky";
   t.d[u].hrgsatuan = 11000; }
else if (t.d[u].kodebrg ==  'J' ) {
 	cout<<setiosflags(ios::left)<<setw(23)<<"Tissue paseo";
   t.d[u].hrgsatuan = 12000; }
   cout<<setiosflags(ios::left)<<setw(12)<<t.d[u].hrgsatuan; 
   cout<<setw(5)<<t.d[u].jmlhbeli;
   cout<<setw(4)<<t.d[u].exp;
    if (t.d[u].kodebrg == 'A') {
   		cout<<t.d[u].exp<<"12-08-2018 Sd 01-09-2018"<<endl; }
   	else if (t.d[u].kodebrg ==  'B' ) {
 		cout<<t.d[u].exp<<"01-01-2018 Sd 02-05-2018"<<endl; } 
 	else if (t.d[u].kodebrg ==  'C' ) {
 		cout<<t.d[u].exp<<"09-06-2018 Sd 09-07-2018"<<endl; }
 	else if (t.d[u].kodebrg ==  'D' ) {
 		cout<<t.d[u].exp<<"28-07-2018 Sd 12-09-2018"<<endl; }
 	else if (t.d[u].kodebrg ==  'E' ) {
 		cout<<t.d[u].exp<<"30-01-2018 Sd 12-07-2018"<<endl; }
 	else if (t.d[u].kodebrg ==  'F' ) {
 		cout<<t.d[u].exp<<"15-02-2018 Sd 14-08-2018"<<endl; }
 	else if (t.d[u].kodebrg ==  'G' ) {
 		cout<<t.d[u].exp<<"19-06-2018 Sd 08-09-2018"<<endl; }
 	else if (t.d[u].kodebrg ==  'H' ) {
 		cout<<t.d[u].exp<<"29-03-2018 Sd 09-09-2018"<<endl; }
 	else if (t.d[u].kodebrg ==  'I' ) {
 		cout<<t.d[u].exp<<"17-11-2018 Sd 09-12-2018"<<endl; }
 	else if (t.d[u].kodebrg ==  'J' ) {
 		cout<<t.d[u].exp<<"14-10-2018 Sd 08-12-2020"<<endl; }
}

int main(void)
{

cout<<"=============================================="<<endl;
cout<<"                SWALAYAN TITIW                "<<endl;
cout<<"=============================================="<<endl;
cout<<"No Nota : "; cin>>t.nota;
cout<<endl;
cout<<"Jumlah transaksi : ";cin>>t.jmlhtrx;
t.d=new databrg[t.jmlhtrx];
for(int i=0;i<t.jmlhtrx;i++)
{
cout<<endl;
cout<<"Transaksi ke-"<<(i+1)<<endl;
cout<<"Kode Barang : "; cin>>t.d[i].kodebrg;
cout<<"Jumlah Beli : "; cin>>t.d[i].jmlhbeli;
}
system ("CLS");
// tanggal / waktu sekarang berdasarkan sistem saat ini
   time_t now = time(0);
  
   // ubah sekarang menjadi bentuk string
   char* dt = ctime(&now);
   cout <<"PROJECT KASIR UAS\n";
   cout << "TIM TETEW\n";
      cout<<"\n";
 cout<<"==============================================================================="<<endl;
   cout<<"Kode      Nama    	         Harga      Jumlah     Expired     "<<endl;
   cout<<"Barang    Barang    	         satuan     Beli       Barang"<<endl;
   cout<<"==============================================================================="<<endl;
   for(int i=0;i<t.jmlhtrx;i++)
    {
	tampil(i);
	}
     cout<<"==============================================================================="<<endl;
     cout<<"SubTotal    : Rp. "<<subtotal()<<endl;
     cout<<"Diskon      : Rp. "<<diskon()<<endl;
     cout<<"PPN 10%     : Rp. "<<ppn()<<endl;
     cout<<"Grand Total : Rp. "<<grand()<<endl;
     cout<<"Bayar       : Rp. "; cin>>t.bayar;
     cout<<"Kembalian   : Rp. "<<kembalian()<<endl;
     cout << "Tanggal pembelian : " << dt << endl;
     cout<<"Terimakasih Atas \n";
      cout<<"Kunjungan Anda \n";
   getch();

   }
