# praktikum7


##lat1.cpp
**Alur Argoritma**
1. Mulai program tersebut 
2. input interger fungsi (int, int)
4. input interger a dan b dan deskripsikan a=0, dan b=1.
5. jika nilai suku satu (b) adalah =1 dan jika nilai suku dua (a) adalah =0.
6. maka cetak rumus fungsi iteratif menggunakan for intruksikan fungsi fibionici di awali dengan 2 dan di akhiri dengan indexs suku
7. deskripsikan variable untuk mencetak fuungsi selanjutnya.
8. cetak suku fibionacci menggunakan pemanggilan fungsi itertif.

**Pseudecode**
1. int typedatar (a, b)
2. if (bill=1) return a
3. if (bill=0) return b
4. for (int i=2; i<=bil; i++)
5. c= a+b, a=b, b=c
6. end 

**CODE PROGRAM**
```
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
```
**Hasil**
![hasil](https://raw.githubusercontent.com/Khunaify/praktikum7/master/lat1.png)


##lat2.cpp

**Alur Argoritma**
1. Mulai program tersebut 
2. input interger fungsi (int a, intb).
3. jika nilai interger (b==0) return 0.
4. jika nilai (b>0) intruksikan return a + type data (a, b - 1).
5. Sebaliknya return (-a) + type Data (a, b+1)
6. masukan variabel a,b untuk menginput nilai awal dan dibagi degan nilai selanjutny.
7. cetak nilai perkalian dengan memanggil funsi rekrusif menggunkan type datany.

**Pseudecode**
```
deskripsi a x b =
1. 0, untuk b = 0
2. a + (a x (b-1)), untuk b > 0
3. -a + (a x (b + 1)), untuk b < 0
4. end
```

**CODE PROGRAM**
```
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

```
**Hasiil**
![Hasil](https://raw.githubusercontent.com/Khunaify/praktikum7/master/lat2.png)

##lat3.cpp
**Alur Argoritma**
1. Mulai program tersebut 
2. input int perkalian a,b,c
3. input int bil1,bil2,bil3
```


**CODE PROGRAM**
```
#include<iostream>	
	using namespace std;
	int perkalian(int A);
	int perkalian2(int B);
	int perkalian3(int C);
	int main()
	{
	int 	bil1,	bil2,	bil3;
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
```

**Hasiil**
![Hasil](https://raw.githubusercontent.com/Khunaify/praktikum7/master/lat3.png)