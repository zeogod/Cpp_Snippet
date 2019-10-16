/* 2019-W02-Exercise_2_1.cpp :
Schreiben Sie ein Programm, das zwei Zahlen m und n einliest und die n-te Ziffer der Zahl m ausgibt.
Z.B.: m=1358 n=2 Ausgabe: 5 (Die Ziffern werden ausgehend vom Dezimalpunkt gez�hlt).

D�niel Sz�ke (11913915)
16.10.2019

*/

#include <iostream>
#include <cmath>
#include <assert.h> 

using namespace std;

int countDigit(long long m, const int n)
{
	//1. Check input parameters
	assert(n > 0);				// n must be positive
	assert(m>=pow(10,n-1));		//check whether m>=10^(n-1)

	//2. Run subprogram
	int count = 0, digit = -1;
	while ((m != 0) && (count!=n) ) {
		digit = m - (m / 10) * 10;	//Z.B:  7 = 187-(187/10)*10 = 187-(18)*10=187-180 
		m = m / 10;					//Z.B: 18 = 187/10
		++count;
	}
	return digit;
}

int main()
{
	cout << "------------Test------------" << endl;
	cout << "m=8, n=1:        " << countDigit(8,1) <<endl;	// 8
	cout << "m=1358, n=2:     " << countDigit(1358, 2) << endl; //5
	cout << "m=11913915, n=6: " << countDigit(11913915, 6) << endl; //9
	cout << endl;

	// Get from the data from user to function
	long long m; int n;
	cout << "Dieses Programm berechnet...\n";
	cout << "K�rem m �rt�k�t: "; cin >> m;
	cout << "K�rem n �rt�k�t: "; cin >> n;
	cout << "Eredm�ny: " << countDigit(m, n) << endl;
}
