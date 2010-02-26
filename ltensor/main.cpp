#include <cstdlib>
#include <iostream>
#include <fstream>
#include<iomanip>
#include <string>
#include "LTensor.h"
#include <complex>


using namespace std;

int main()
{



/*
Marray<double,4> a(3,3,3,3);
Marray<double,2> b(3,3);

Index<'k'> m;
Index<'i'> i;
Index<'j'> j;

b(i,j)=a(m,m,i,j);

cout<<a;
*/

	Index<'i'> i;
	Index<'j'> j;
	Index<'k'> k;
	Index<'l'> l;
typedef complex<double>             Complex;
typedef Marray<Complex,2>           ComplexMatrix;
typedef Marray<Marray<Complex,2>,2> TensorMatrix;

const Complex posI = Complex(0,1);
const Complex negI = Complex(0,-1);

ComplexMatrix Kx(4,4), Ky(4,4), Kz(4,4), Jx(4,4), Jy(4,4), Jz(4,4);
Kx(0,1) = negI;  Kx(1,0) = negI;
Ky(0,2) = negI;  Ky(2,0) = negI;
Kz(0,3) = negI;  Kz(3,0) = negI;
Jx(3,2) = posI;  Jx(2,3) = negI;
Jy(3,1) = negI;  Jy(1,3) = posI;
Jz(2,1) = posI;  Jz(1,2) = negI;

TensorMatrix Juv(4,4);

Juv(0,1) = Kx;  Juv(0,2) = Ky;  Juv(0,3) =  Kz;
cout<<Juv(0,1);
//Juv(1,0) = -Kx;                 Juv(1,2) = Jz;  Juv(1,3) = -Jy;
/*
Juv(2,0) = -Ky; Juv(2,1) = -Jz;                 Juv(2,3) =  Jx;
Juv(3,0) = -Kz; Juv(3,1) =  Jy; Juv(3,2) = -Jx;
*/

// Pauli-Lubanski pseudovector
// Wu = -.5 Euvpo Juv Po
// Euvpo is totally anti-symmetric

cout << -Ky(i,j) << endl;



/*
cout << Kx;
cout << Ky;
cout << Kz;
cout << Jx;
cout << Jy;
cout << Jz;
*/
cin.get();


}
