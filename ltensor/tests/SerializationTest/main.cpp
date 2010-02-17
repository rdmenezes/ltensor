#ifdef MSVC
#define __restrict__ __restrict
#endif
#define CHECK_OOB
#define CHECK_FILES
//#define InheritedBase Array_base<T,rank>
#include "../../LTensor.h"
#include <iostream>




using namespace std;
#define size 6



int main()
{

    cout<<"+++++++++LTENSOR TEST+++++++++"<<endl;
    cout<<"Serialization routines test"<<endl;

    cout<<"----------Rank 1-----------"<<endl;
    Marray<int,1> a1,b1;


    cout<<"Loading from values1.ssv"<<endl;
    a1.loadFromSpacedFile("values1.ssv");
    cout<<a1;

    cout<<"Loading from values2.ssv"<<endl;
    a1.loadFromSpacedFile("values2.ssv");
    cout<<a1;

    cout<<"Saving sucesion to file"<<endl;
    a1.sucesion(0);
    a1.saveToSpacedFile("Saved1.ssv");

    b1.loadFromSpacedFile("Saved1.ssv");
    assert(a1==b1);


    cout<<"----------Rank 2-----------"<<endl;
    Marray<int,2> a2,b2;
    cout<<"Loading from values3.ssv"<<endl;
    a2.loadFromSpacedFile("values3.ssv");
    cout<<a2;

    cout<<"Saving sucesion to file"<<endl;
    a2.sucesion(0);
    a2.saveToSpacedFile("Saved2.ssv");

    cout<<"Loading from values4.ssv"<<endl;
    a2.loadFromSpacedFile("values4.ssv");
    cout<<a2;

    cout<<"Saving sucesion to file"<<endl;
    a2.sucesion(0);
    a2.saveToSpacedFile("Saved3.ssv");

    b2.loadFromSpacedFile("Saved3.ssv");
    assert(a2==b2);


	return 0;



}
