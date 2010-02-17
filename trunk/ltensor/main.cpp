#include <cstdlib>
#include <iostream>
#include <fstream>
#include<iomanip>
#include <string>
#include "./utils/cputimeprofiler.h"
#include "./utils/timer.h"
#include "LTensor.h"

using namespace std;

int main()
{
Marray<double,4> a(3,3,3,3);
Marray<double,2> b(3,3);

Index<'k'> m;
Index<'i'> i;
Index<'j'> j;

b(i,j)=a(m,m,i,j);

cout<<a;
cin.get();

}
