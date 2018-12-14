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
