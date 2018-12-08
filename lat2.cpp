#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int kali_rekursif(int a,int b)
{
if (b==0)
return 0; // kasus basis
else if (b>0)
return a + kali_rekursif(a,b-1); // pemanggilan rekursif
else
return (-a) + kali_rekursif(a,b+1); // pemanggilan rekursif
}

int main()
{
cout << "5x(5) = " << kali_rekursif(5,5) << endl;
}
