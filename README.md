# praktikum7


##lat1.cpp
**Alur Argoritma**
1. Mulai program tersebut 
2. input interger max,n,i,min
4. masukan statement max > A , min < A
5. Jalankan.



**CODE PROGRAM**
```
#include <iostream>
using namespace std;

int main()
{
   int max,n,i,min;
   float A[100];
   cout <<"Masukkan Jumlah Data n : ";cin>>n;
   for(i=0;i<n;i++){
		cout << "masukkan bilangan ke "<< i+1 << " : ";
		cin >> A[i];}
   max = A[0];
    for (i=1;i<n;i++){
       if (max <  A [i])
            max = A[i];

      if (min >  A [i])
            min = A[i];

    }

    cout <<"Nilai Terbesar adalah : "<<max<<endl;
    cout <<"Nilai Terkecil adalah : "<<min<<endl;
    return 0;
}

```
**Hasil**
![hasil](https://raw.githubusercontent.com/Khunaify/praktikum8/master/soal1.png)


##lat2.cpp

**Alur Argoritma**
1. Mulai program tersebut 
2. input interger fungsi (int a, intb).
3. jika nilai interger (b==0) return 0.
4. 



**CODE PROGRAM**
```
#include <iostream>
#include <math.h>

using namespace std;

class HitungStatistik {
friend ostream& operator<<(ostream&, HitungStatistik&);
friend istream& operator>>(istream&, HitungStatistik&);
public:
HitungStatistik();
void hitung_modus();
private:
void maksimum();
void frekuensi();
int maks, item;
int n;
int A[20];
int f[11];
};

HitungStatistik::HitungStatistik()
{ for (int i=0; i<20; i++) f[i] = 0; }

istream& operator>>(istream& in, HitungStatistik& a) {
cout << "Banyaknya data : ";
cin >> a.n;
for (int i = 0; i < a.n; i++) {
cout << "Data ke- : " << i+1 << " > ";
cin >> a.A[i];
}
return in;
}

void HitungStatistik::maksimum()
{
maks = f[0];
item = 1;
for (int i=0; i<n; i++)
if (f[i] > maks) {
maks = f[i];
item = i;
}
cout << "Modus = " << item;
}

void HitungStatistik::frekuensi()
{
for (int i=1; i<n; i++) ++f[A[i]];
}

void HitungStatistik::hitung_modus() {
cout << "Frekuensi running\n";
frekuensi();
maksimum();
}

ostream& operator<<(ostream& out, HitungStatistik& a) {
cout << "Mulai ...\n";
a.hitung_modus();
cout << "Nilai modus : " << a.item;
return out;
}

main() {
HitungStatistik run;
cin >> run;
cout << run;
return 0;
}

```
**Hasil**
![Hasil](https://raw.githubusercontent.com/Khunaify/praktikum8/master/soal2.png)

##lat3.cpp
	
**Alur Argoritma**
1. Mulai program tersebut 
2. input int a,b,c,baris dan kolom
3. menggunakan arrray dan perulangan



**CODE PROGRAM**
```
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

main(){

int A[10][10],b,c,baris,kolom;
char pil;
do{
cout<<" ==========PROGRAM TRANSPOSE MATRIKS========= "<<endl;
cout<<"Jumlah Baris : ";
cin>>baris;
cout<<"Jumlah Kolom : ";
cin>>kolom;
cout<<endl;
for (b=0;b<baris;b++)
{
for (c=0;c<kolom;c++)
{
cout<<"Matriks ["<<b+1<<","<<c+1<<"] = ";
cin>>A[b][c];
}
}
cout<<endl<<endl;
cout<<"Matriks Pertama : "<<endl<<endl;
for (b=0;b<baris;b++)
{
for (c=0;c<kolom;c++)
{
cout<<" "<<A[b][c]<<" ";
}
cout<<endl<<endl;
}
cout<<" Matriks Transpose : "<<endl<<endl;
for (b=0;b<kolom;b++)
{
for (c=0;c<baris;c++)
{
cout<<" "<<A[c][b]<<" ";
}
cout<<endl;
cout<<endl;
}
getch();
cout<<" Ingin Mengulang Program ? (Y/N) : ";
cin>>pil;
}
while(pil=='Y'||pil=='y');
}

```

**Hasil**
![Hasil](https://raw.githubusercontent.com/Khunaify/praktikum8/master/soal4.png)

##lat3.cpp
	
**Alur Argoritma**
1. Mulai program tersebut 
2. input int a,b,c,baris dan kolom
3. menggunakan arrray dan perulangan



**CODE PROGRAM**
```
#include <cstdlib>
#include <iostream>

using namespace std;

void baca_matriks(int mat[10][10], int, int);
void matriks_kali(const int [10][10], const int[10][10], int , int , int[10][10]);
void cetak_matiks(const  int A[10][10], int, int);

void baca_matriks(int mat[10][10], int baris, int kolom){
int i, j;
for( i =0;i<baris; i++)
for(j=0;j<kolom;j++){
cout << "Data [" << (i+1) << "," << (j+1) << "] = ";
cin >> mat[i][j];
}
}

void matriks_kali(const int matriks[10][10], const int matriks2[10][10], int baris, int kolom, int kali[10][10]){
int i, j;
for(i = 0;i<baris; i++)
for(j = 0;j<kolom;j++)
kali[i][j] = matriks[i][j] * matriks2[i][j];
}

void cetak_matriks(const int A[10][10], int baris, int kolom){
for(int i = 0;i<baris;i++){
for(int j = 0;j<kolom;j++)
cout << " " << A[i][j] ;
cout << endl;
}
}

int main(int argc, char *argv[])
{
int m, n;
int matriks1[10][10], matriks2[10][10];
int kali[10][10];

cout << "Banyak baris : " ;
cin >> m;
cout << "Banyak kolom : ";
cin >> n;
cout << "Data matriks ke-1 \n";
baca_matriks(matriks1,m,n);
cetak_matriks(matriks1,m,n);
cout << "Data matriks ke-2 \n";
baca_matriks(matriks2, m, n);
cetak_matriks(matriks2, m, n);
matriks_kali(matriks1, matriks2, m, n, kali);
cout << "Hasil Perkalian : \n";
cetak_matriks(kali,m,n);
system("PAUSE");
return 0;
}

```

**Hasil**
![Hasil](https://raw.githubusercontent.com/Khunaify/praktikum8/master/soal3.png)