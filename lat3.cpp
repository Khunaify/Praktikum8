#include<iostream>
using namespace std;
int perkalian(int A);
int perkalian2(int B);
int perkalian3(int C);
int main()
{
    int bil1,bil2,bil3;
    cout<<"Masukan nilai N = ";cin>> bil1;
    cout<<"Nilai T = "<<perkalian(bil1)<<endl<<endl;
    cout<<"Masukan nilai N = ";cin>> bil2;
    cout<<"Nilai T = "<<perkalian(bil2)<<endl<<endl;
    cout<<"Masukan nilai N = ";cin>> bil3;
    cout<<"Nilai T = "<<perkalian(bil3)<<endl<<endl;
    cout<<endl<<"selesai guys"<<endl;

}
int perkalian(int A)
{
    return (A*2.5);
}
int perkalian2(int B)
{
 return (B*2.5);
}
int perkalian3(int C)
{
 return (C*2.5);
}
