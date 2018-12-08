#include <iostream>

using namespace std;

int iteratif (int bil, int a, int b, int c)
{
a=0, b=1;
if (bil == 1) return b;
if (bil == 0) return a;

else{
for(int i=2; i<=bil; i++){

c = a + b;
a = b;
b = c;
}
return c;
}
}

int main()
{
int bil, a, b,c;

cout<<"Masukkan bilangan deret ke-: ";
cin>>bil;
cout<<"\nBilangan fibonaccinya untuk "<<bil<<" adalah ";
cout<< iteratif ( bil,  a,  b,  c);

return 0;
}
