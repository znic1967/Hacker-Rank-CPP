
// C++ program to find modular inverse of a under modulo m
#include<iostream>
using namespace std;

// A naive method to find modulor multiplicative inverse of
// 'a' under modulo 'm'
int modInverse(int a, int m)
{
    a = a%m;
    for (int x=1; x<m; x++)
       if ((a*x) % m == 1)
          return x;
}

//put in (p-1)(q-1) where labeled
int rsa_d_finder(int e)
{
	for (int d=1; d<100; d++){
		if(e*d%(40/* here*/)==1){
			return d;
		}
	}
}
// Driver Program
int main()
{
    int a = 9, m = 26;
    cout << modInverse(a, m)<<endl;
    cout << rsa_d_finder(3)<<endl;
    return 0;
}
