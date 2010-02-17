//#include "TExprs.h"
//#define InheritedBase Array_base<T,rank>
#ifdef MSVC
#define __restrict__ __restrict
#endif
#define CHECK_OOB
#define InheritedBase TinyArray_base<T,rank>
#include "../../LTensor.h"
#include <iostream>




using namespace std;
#define size 6
using namespace std;

int main()
{

    cout<<"+++++++++LTENSOR TEST+++++++++"<<endl;
    cout<<"Assignation routines test"<<endl;

    cout<<"----------Rank 1-----------"<<endl;

    Marray<double,1> a1(size),b1(size+1);

    const Marray<double,1> c1(size,7);

    Marray<int,1> d1(size+2,9);

	Marray<double,1> ds1(size+3,3.3);


	Marray<int,1> ds12(size+3,5);


    b1.sucesion(0);



	cout<<"///////////////////"<<endl;
    cout<<"Operation a1=b1"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a1:"<<a1;
    cout<<"b1:"<<b1;
    cout<<"Performing op"<<endl;

    a1=b1;


    cout<<"a1:"<<a1<<endl;

    assert(a1==b1);



    cout<<"///////////////////"<<endl;
    cout<<"Operation a1=const c1"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a1:"<<a1;
    cout<<"c1:"<<c1;
    cout<<"Performing op"<<endl;
    a1=c1;
    cout<<"a1:"<<a1<<endl;

    assert(a1==c1);

    cout<<"///////////////////"<<endl;
    cout<<"Operation a1=10"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a1:"<<a1;
    cout<<"Performing op"<<endl;
    a1=10;
    cout<<"a1:"<<a1<<endl;

    for(int i=0;i<a1.get_dim1();i++)
        assert(a1(i)==10);


    cout<<"///////////////////"<<endl;
    cout<<"Operation a1(double)=d1(int)"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a1:"<<a1;
    cout<<"d1:"<<d1;
    cout<<"Performing op"<<endl;
    a1=d1;
    cout<<"a1:"<<a1<<endl;

    for(int i=0;i<a1.get_dim1();i++)
        assert(a1(i)==d1(i));

	cout<<"///////////////////"<<endl;
    cout<<"Operation d1(int)=b1(double)"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"d1:"<<d1;
    cout<<"b1:"<<b1;
    cout<<"Performing op"<<endl;
    d1=b1;
    cout<<"d1:"<<d1<<endl;

    for(int i=0;i<d1.get_dim1();i++)
        assert(d1(i)==b1(i));


	cout<<"///////////////////"<<endl;
    cout<<"Operation d1(int)=b1(double)"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"d1:"<<d1;
    cout<<"b1:"<<b1;
    cout<<"Performing op"<<endl;
    d1=b1;
    cout<<"d1:"<<d1<<endl;

    for(int i=0;i<d1.get_dim1();i++)
        assert(d1(i)==b1(i));


	cout<<"///////////////////"<<endl;
    cout<<"Operation a1*=2"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a1:"<<a1;
    cout<<"Performing op"<<endl;
    a1*=2;
    cout<<"a1:"<<a1<<endl;


	cout<<"///////////////////"<<endl;
    cout<<"Operation a1+=2"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a1:"<<a1;
    cout<<"Performing op"<<endl;
    a1+=2;
    cout<<"a1:"<<a1<<endl;

	cout<<"///////////////////"<<endl;
    cout<<"Operation a1-=2"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a1:"<<a1;
    cout<<"Performing op"<<endl;
    a1-=2;
    cout<<"a1:"<<a1<<endl;


	cout<<"///////////////////"<<endl;
    cout<<"Operation a1/=2"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a1:"<<a1;
    cout<<"Performing op"<<endl;
    a1/=2;
    cout<<"a1:"<<a1<<endl;


	cout<<"///////////////////"<<endl;
    cout<<"Operation a1(i)=b1(i)"<<endl;
	cout<<"///////////////////"<<endl;
	Index <'i'> i;
	b1.resize(a1.get_dim1());
	b1.sucesion(0,1);
	cout<<"a1:"<<a1;
	cout<<"b1:"<<b1;
    cout<<"Performing op"<<endl;


    a1(i)=b1(i);
    cout<<"a1:"<<a1<<endl;

    assert(a1==b1);

	cout<<"///////////////////"<<endl;
    cout<<"Operation a1(i)=b1(i)*2"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a1:"<<a1;
	cout<<"b1:"<<b1;
    cout<<"Performing op"<<endl;
    a1(i)=b1(i)*2;
    cout<<"a1:"<<a1<<endl;

    for(int i=0;i<a1.get_dim1();i++)
        assert(a1(i)==b1(i)*2);

	cout<<"///////////////////"<<endl;
    cout<<"Operation a1(i)=b1(i)/2"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a1:"<<a1;
	cout<<"b1:"<<b1;
    cout<<"Performing op"<<endl;
    a1(i)=b1(i)/2;
    cout<<"a1:"<<a1<<endl;

    for(int i=0;i<a1.get_dim1();i++)
        assert(a1(i)==b1(i)/2);

    cout<<"///////////////////"<<endl;
    cout<<"Operation a1+=b1"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a1:"<<a1;
	cout<<"b1:"<<b1;
    cout<<"Performing op"<<endl;
    a1+=b1;
    cout<<"a1:"<<a1<<endl;


    cout<<"///////////////////"<<endl;
    cout<<"Operation a1-=b1"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a1:"<<a1;
	cout<<"b1:"<<b1;
    cout<<"Performing op"<<endl;
    a1-=b1;
    cout<<"a1:"<<a1<<endl;



	cout<<"///////////////////"<<endl;
    cout<<"Operation a1(double)=ds1(double) (different sizes)"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a1:"<<a1;
	cout<<"ds1:"<<ds1;
    cout<<"Performing op"<<endl;
    a1=ds1;
    cout<<"a1:"<<a1<<endl;

    assert(a1==ds1);


	cout<<"///////////////////"<<endl;
    cout<<"Operation a1(double)=ds12(int) (different sizes/types)"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a1:"<<a1;
	cout<<"ds12:"<<ds12;
    cout<<"Performing op"<<endl;
    a1=ds12;
    cout<<"a1:"<<a1<<endl;

    for(int i=0;i<a1.get_dim1();i++)
        assert(a1(i)==ds12(i));

	cout<<"///////////////////"<<endl;
    cout<<"Operation ds12(int)=b1(double) (different sizes/types)"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"b1:"<<b1;
	cout<<"ds12:"<<ds12;
    cout<<"Performing op"<<endl;
    ds12=b1;
    cout<<"ds12:"<<ds12<<endl;

	for(int i=0;i<ds12.get_dim1();i++)
        assert(b1(i)==ds12(i));


	cout<<endl;
	cout<<"----------Rank 2-----------"<<endl;

    Marray<double,2> a2(size,size),b2(size,size);
    const Marray<double,2> c2(size,size,7);
    Marray<int,2> d2(size,size,9);
	Marray<double,2> ds2(size+3,size+3,3.5);
	Marray<int,2> ds22(size+3,size+3,5);

    for(int i=0;i<size;i++)
		for(int j=0;j<size;j++)
			b2(i,j)=rand()%9/1.5;

	cout<<"///////////////////"<<endl;
    cout<<"Operation a2=b2"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a2:"<<a2;
    cout<<"b2:"<<b2;
    cout<<"Performing op"<<endl;
    a2=b2;
    cout<<"a2:"<<a2<<endl;

    assert(a2==b2);

    cout<<"///////////////////"<<endl;
    cout<<"Operation a2=const c2"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a2:"<<a2;
    cout<<"c2:"<<c2;
    cout<<"Performing op"<<endl;
    a2=c2;
    cout<<"a2:"<<a2<<endl;

    assert(a2==c2);


    cout<<"///////////////////"<<endl;
    cout<<"Operation a2=10"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a2:"<<a2;
    cout<<"Performing op"<<endl;
    a2=10;
    cout<<"a2:"<<a2<<endl;

    for(int i=0;i<a2.get_dim1();i++)
        for(int j=0;j<a2.get_dim2();j++)
            assert(a2(i,j)==10);

    cout<<"///////////////////"<<endl;
    cout<<"Operation a2(double)=d2(int)"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a2:"<<a2;
    cout<<"d2:"<<d2;
    cout<<"Performing op"<<endl;
    a2=d2;
    cout<<"a2:"<<a2<<endl;

    for(int i=0;i<a2.get_dim1();i++)
        for(int j=0;j<a2.get_dim2();j++)
            assert(a2(i,j)==d2(i,j));

	cout<<"///////////////////"<<endl;
    cout<<"Operation d2(int)=b2(double)"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"d2:"<<d2;
    cout<<"b2:"<<b2;
    cout<<"Performing op"<<endl;
    d2=b2;
    cout<<"d2:"<<d2<<endl;

    for(int i=0;i<d2.get_dim1();i++)
        for(int j=0;j<d2.get_dim2();j++)
            assert(d2(i,j)==(int)b2(i,j));

	cout<<"///////////////////"<<endl;
    cout<<"Operation a2*=2"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a2:"<<a2;
    cout<<"Performing op"<<endl;
    a2*=2;
    cout<<"a2:"<<a2<<endl;


	cout<<"///////////////////"<<endl;
    cout<<"Operation a2+=2"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a2:"<<a2;
    cout<<"Performing op"<<endl;
    a2+=2;
    cout<<"a2:"<<a2<<endl;

	cout<<"///////////////////"<<endl;
    cout<<"Operation a2-=2"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a2:"<<a2;
    cout<<"Performing op"<<endl;
    a2-=2;
    cout<<"a2:"<<a2<<endl;


	cout<<"///////////////////"<<endl;
    cout<<"Operation a2/=2"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a2:"<<a2;
    cout<<"Performing op"<<endl;
    a2/=2;
    cout<<"a2:"<<a2<<endl;


	cout<<"///////////////////"<<endl;
    cout<<"Operation a2(i,j)=b2(i,j)"<<endl;
	cout<<"///////////////////"<<endl;
	Index <'j'> j;
    cout<<"a2:"<<a2;
	cout<<"b2:"<<b2;
    cout<<"Performing op"<<endl;
    a2(i,j)=b2(i,j);
    cout<<"a2:"<<a2<<endl;

    assert(a2==b2);


	cout<<"///////////////////"<<endl;
    cout<<"Operation a2(i,j)=b2(j,i)"<<endl;
	cout<<"///////////////////"<<endl;
	cout<<"a2:"<<a2;
	cout<<"b2:"<<b2;
    cout<<"Performing op"<<endl;
    a2(i,j)=b2(j,i);
    cout<<"a2:"<<a2<<endl;

    for(int i=0;i<a2.get_dim1();i++)
        for(int j=0;j<a2.get_dim2();j++)
            assert(a2(i,j)==b2(j,i));

	cout<<"///////////////////"<<endl;
    cout<<"Operation a2(i,j)=b2(i,j)*2"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a2:"<<a2;
	cout<<"b2:"<<b2;
    cout<<"Performing op"<<endl;
    a2(i,j)=b2(i,j)*2;
    cout<<"a2:"<<a2<<endl;

    for(int i=0;i<a2.get_dim1();i++)
        for(int j=0;j<a2.get_dim2();j++)
            assert(a2(i,j)==b2(i,j)*2);

	cout<<"///////////////////"<<endl;
    cout<<"Operation a2(i,j)=b2(i,j)/2"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a2:"<<a2;
	cout<<"b2:"<<b2;
    cout<<"Performing op"<<endl;
    a2(i,j)=b2(i,j)/2;
    cout<<"a2:"<<a2<<endl;

    for(int i=0;i<a2.get_dim1();i++)
        for(int j=0;j<a2.get_dim2();j++)
            assert(a2(i,j)==b2(i,j)/2);

		cout<<"///////////////////"<<endl;
    cout<<"Operation a2(double)=ds2(double) (different sizes)"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a2:"<<a2;
	cout<<"ds2:"<<ds2;
    cout<<"Performing op"<<endl;
    a2=ds2;
    cout<<"a2:"<<a2<<endl;

    assert(a2==ds2);

	cout<<"///////////////////"<<endl;
    cout<<"Operation a2(double)=ds22(int) (different sizes/types)"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a2:"<<a2;
	cout<<"ds22:"<<ds22;
    cout<<"Performing op"<<endl;
    a2=ds22;
    cout<<"a2:"<<a2<<endl;

    for(int i=0;i<a2.get_dim1();i++)
        for(int j=0;j<a2.get_dim2();j++)
            assert(a2(i,j)==ds22(i,j));


	cout<<"///////////////////"<<endl;
    cout<<"Operation ds22(int)=b2(double) (different sizes/types)"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"b2:"<<b2;
	cout<<"ds22:"<<ds22;
    cout<<"Performing op"<<endl;
    ds22=b2;
    cout<<"ds22:"<<ds22<<endl;

    for(int i=0;i<ds22.get_dim1();i++)
        for(int j=0;j<ds22.get_dim2();j++)
            assert(ds22(i,j)==(int)b2(i,j));


	//cin.get();
	//return 0;



#undef size
#define size 2

	cout<<endl;
	cout<<"----------Rank 3-----------"<<endl;

    Marray<double,3> a3(size,size,size),b3(size,size,size);
    const Marray<double,3> c3(size,size,size,7);
    Marray<int,3> d3(size,size,size,9);
	Marray<double,3> ds3(size+2,size+2,size+2,3.5);
	Marray<int,3> ds32(size+2,size+2,size+2,5);

    for(int i=0;i<size;i++)
		for(int j=0;j<size;j++)
			for(int k=0;k<size;k++)
				b3(i,j,k)=rand()%9/1.5;

	cout<<"///////////////////"<<endl;
	cout<<"Operation a3=b3"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a3:"<<a3;
    cout<<"b3:"<<b3;
    cout<<"Performing op"<<endl;
    a3=b3;
    cout<<"a3:"<<a3<<endl;

    assert(a3==b3);

    cout<<"///////////////////"<<endl;
    cout<<"Operation a3=const c3"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a3:"<<a3;
    cout<<"c3:"<<c3;
    cout<<"Performing op"<<endl;
    a3=c3;
    cout<<"a3:"<<a3<<endl;

    assert(a3==c3);

    cout<<"///////////////////"<<endl;
    cout<<"Operation a3=10"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a3:"<<a3;
    cout<<"Performing op"<<endl;
    a3=10;
    cout<<"a3:"<<a3<<endl;

    for(int i=0;i<a3.get_dim1();i++)
        for(int j=0;j<a3.get_dim2();j++)
            for(int k=0;k<a3.get_dim3();k++)
                assert(a3(i,j,k)==10);

    cout<<"///////////////////"<<endl;
    cout<<"Operation a3(double)=d3(int)"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a3:"<<a3;
    cout<<"d3:"<<d3;
    cout<<"Performing op"<<endl;
    a3=d3;
    cout<<"a3:"<<a3<<endl;

    for(int i=0;i<a3.get_dim1();i++)
        for(int j=0;j<a3.get_dim2();j++)
            for(int k=0;k<a3.get_dim3();k++)
                assert(a3(i,j,k)==d3(i,j,k));

	cout<<"///////////////////"<<endl;
    cout<<"Operation d3(int)=b3(double)"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"d3:"<<d3;
    cout<<"b3:"<<b3;
    cout<<"Performing op"<<endl;
    d3=b3;
    cout<<"d3:"<<d3<<endl;


    for(int i=0;i<d3.get_dim1();i++)
        for(int j=0;j<d3.get_dim2();j++)
            for(int k=0;k<d3.get_dim3();k++)
                assert(d3(i,j,k)==(int)b3(i,j,k));

	cout<<"///////////////////"<<endl;
    cout<<"Operation d3(int)=b3(double)"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"d3:"<<d3;
    cout<<"b3:"<<b3;
    cout<<"Performing op"<<endl;
    d3=b3;
    cout<<"d3:"<<d3<<endl;


    for(int i=0;i<d3.get_dim1();i++)
        for(int j=0;j<d3.get_dim2();j++)
            for(int k=0;k<d3.get_dim3();k++)
                assert(d3(i,j,k)==(int)b3(i,j,k));

	cout<<"///////////////////"<<endl;
    cout<<"Operation a3*=2"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a3:"<<a3;
    cout<<"Performing op"<<endl;
    a3*=2;
    cout<<"a3:"<<a3<<endl;


	cout<<"///////////////////"<<endl;
    cout<<"Operation a3+=2"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a3:"<<a3;
    cout<<"Performing op"<<endl;
    a3+=2;
    cout<<"a3:"<<a3<<endl;

	cout<<"///////////////////"<<endl;
    cout<<"Operation a3-=2"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a3:"<<a3;
    cout<<"Performing op"<<endl;
    a3-=2;
    cout<<"a3:"<<a3<<endl;


	cout<<"///////////////////"<<endl;
    cout<<"Operation a3/=2"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a3:"<<a3;
    cout<<"Performing op"<<endl;
    a3/=2;
	cout<<"a3:"<<a3<<endl;


	cout<<"///////////////////"<<endl;
    cout<<"Operation a3(i,j,k)=b3(i,j,k)"<<endl;
	cout<<"///////////////////"<<endl;
	Index <'k'> k;
    cout<<"a3:"<<a3;
	cout<<"b3:"<<b3;
    cout<<"Performing op"<<endl;
    a3(i,j,k)=b3(i,j,k);
    cout<<"a3:"<<a3<<endl;

    assert(a3==b3);


	cout<<"///////////////////"<<endl;
    cout<<"Operation a3(i,j,k)=b3(k,i,j)"<<endl;
	cout<<"///////////////////"<<endl;
	cout<<"a3:"<<a3;
	cout<<"b3:"<<b3;
    cout<<"Performing op"<<endl;
    a3(i,j,k)=b3(k,i,j);
    cout<<"a3:"<<a3<<endl;


    for(int i=0;i<a3.get_dim1();i++)
        for(int j=0;j<a3.get_dim2();j++)
            for(int k=0;k<a3.get_dim3();k++)
                assert(a3(i,j,k)==b3(k,i,j));


	cout<<"///////////////////"<<endl;
    cout<<"Operation a3(i,j,k)=b3(i,k,j)"<<endl;
	cout<<"///////////////////"<<endl;
	cout<<"a3:"<<a3;
	cout<<"b3:"<<b3;
    cout<<"Performing op"<<endl;
    a3(i,j,k)=b3(i,k,j);
    cout<<"a3:"<<a3<<endl;


    for(int i=0;i<a3.get_dim1();i++)
        for(int j=0;j<a3.get_dim2();j++)
            for(int k=0;k<a3.get_dim3();k++)
                assert(a3(i,j,k)==b3(i,k,j));


	cout<<"///////////////////"<<endl;
    cout<<"Operation a3(i,j,k)=b3(j,i,k)"<<endl;
	cout<<"///////////////////"<<endl;
	cout<<"a3:"<<a3;
	cout<<"b3:"<<b3;
    cout<<"Performing op"<<endl;
    a3(i,j,k)=b3(j,i,k);
    cout<<"a3:"<<a3<<endl;


    for(int i=0;i<a3.get_dim1();i++)
        for(int j=0;j<a3.get_dim2();j++)
            for(int k=0;k<a3.get_dim3();k++)
                assert(a3(i,j,k)==b3(j,i,k));


	cout<<"///////////////////"<<endl;
    cout<<"Operation a3(i,j,k)=b3(j,k,i)"<<endl;
	cout<<"///////////////////"<<endl;
	cout<<"a3:"<<a3;
	cout<<"b3:"<<b3;
    cout<<"Performing op"<<endl;
    a3(i,j,k)=b3(j,k,i);
    cout<<"a3:"<<a3<<endl;


    for(int i=0;i<a3.get_dim1();i++)
        for(int j=0;j<a3.get_dim2();j++)
            for(int k=0;k<a3.get_dim3();k++)
                assert(a3(i,j,k)==b3(j,k,i));


	cout<<"///////////////////"<<endl;
    cout<<"Operation a3(i,j,k)=b3(k,j,i)"<<endl;
	cout<<"///////////////////"<<endl;
	cout<<"a3:"<<a3;
	cout<<"b3:"<<b3;
    cout<<"Performing op"<<endl;
    a3(i,j,k)=b3(k,j,i);
    cout<<"a3:"<<a3<<endl;


    for(int i=0;i<a3.get_dim1();i++)
        for(int j=0;j<a3.get_dim2();j++)
            for(int k=0;k<a3.get_dim3();k++)
                assert(a3(i,j,k)==b3(k,j,i));

	cout<<"///////////////////"<<endl;
    cout<<"Operation a3(i,j,k)=b3(i,j,k)*2"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a3:"<<a3;
	cout<<"b3:"<<b3;
    cout<<"Performing op"<<endl;
    a3(i,j,k)=b3(i,j,k)*2;
    cout<<"a3:"<<a3<<endl;

    for(int i=0;i<a3.get_dim1();i++)
        for(int j=0;j<a3.get_dim2();j++)
            for(int k=0;k<a3.get_dim3();k++)
                assert(a3(i,j,k)==b3(i,j,k)*2);

	cout<<"///////////////////"<<endl;
    cout<<"Operation a3(i,j,k)=b3(i,j,k)/2"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a3:"<<a3;
	cout<<"b3:"<<b3;
    cout<<"Performing op"<<endl;
    a3(i,j,k)=b3(i,j,k)/2;
    cout<<"a3:"<<a3<<endl;

    for(int i=0;i<a3.get_dim1();i++)
        for(int j=0;j<a3.get_dim2();j++)
            for(int k=0;k<a3.get_dim3();k++)
                assert(a3(i,j,k)==b3(i,j,k)/2);

    cout<<"///////////////////"<<endl;
    cout<<"Operation a3+=b3"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a3:"<<a3;
	cout<<"b3:"<<b3;
    cout<<"Performing op"<<endl;
    a3+=b3;
    cout<<"a3:"<<a3<<endl;



	cout<<"///////////////////"<<endl;
    cout<<"Operation a3(double)=ds3(double) (different sizes)"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a3:"<<a3;
	cout<<"ds3:"<<ds3;
    cout<<"Performing op"<<endl;
    a3=ds3;
    cout<<"a3:"<<a3<<endl;

    assert(a3==ds3);

	cout<<"///////////////////"<<endl;
    cout<<"Operation a3(double)=ds32(int) (different sizes/types)"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a3:"<<a3;
	cout<<"ds32:"<<ds32;
    cout<<"Performing op"<<endl;
    a3=ds32;
    cout<<"a3:"<<a3<<endl;

    for(int i=0;i<a3.get_dim1();i++)
        for(int j=0;j<a3.get_dim2();j++)
            for(int k=0;k<a3.get_dim3();k++)
                assert(a3(i,j,k)==ds32(i,j,k));


	cout<<"///////////////////"<<endl;
    cout<<"Operation ds32(int)=b3(double) (different sizes/types)"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"b3:"<<b3;
	cout<<"ds32:"<<ds32;
    cout<<"Performing op"<<endl;
    ds32=b3;
    cout<<"ds32:"<<ds32<<endl;

    for(int i=0;i<ds32.get_dim1();i++)
        for(int j=0;j<ds32.get_dim2();j++)
            for(int k=0;k<ds32.get_dim3();k++)
                assert(ds32(i,j,k)==(int)b3(i,j,k));

	//cin.get();
	//return 0;




	cout<<endl;
	cout<<"----------Rank 4-----------"<<endl;

    Marray<double,4> a4(size,size,size,size),b4(size,size,size,size);
    const Marray<double,4> c4(size,size,size,size,7);
    Marray<int,4> d4(size,size,size,size,9);
	Marray<double,4> ds4(size+1,size+1,size+1,size+1,3.5);
	Marray<int,4> ds42(size+1,size+1,size+1,size+1,5);

    for(int i=0;i<size;i++)
		for(int j=0;j<size;j++)
			for(int k=0;k<size;k++)
				for(int l=0;l<size;l++)
					b4(i,j,k,l)=rand()%9/1.5;


	cout<<"///////////////////"<<endl;
	cout<<"Operation a4=b4"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a4:"<<a4;
    cout<<"b4:"<<b4;
    cout<<"Performing op"<<endl;
    a4=b4;
    cout<<"a4:"<<a4<<endl;

    assert(a4==b4);

    cout<<"///////////////////"<<endl;
    cout<<"Operation a4=const c4"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a4:"<<a4;
    cout<<"c4:"<<c4;
    cout<<"Performing op"<<endl;
    a4=c4;
    cout<<"a4:"<<a4<<endl;

    assert(a4==c4);

    cout<<"///////////////////"<<endl;
    cout<<"Operation a4=10"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a4:"<<a4;
    cout<<"Performing op"<<endl;
    a4=10;
    cout<<"a4:"<<a4<<endl;

    for(int i=0;i<a4.get_dim1();i++)
        for(int j=0;j<a4.get_dim2();j++)
            for(int k=0;k<a4.get_dim3();k++)
                for(int l=0;l<a4.get_dim4();l++)
                    assert(a4(i,j,k,l)==10);



    cout<<"///////////////////"<<endl;
    cout<<"Operation a4(double)=d4(int)"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a4:"<<a4;
    cout<<"d4:"<<d4;
    cout<<"Performing op"<<endl;
    a4=d4;
    cout<<"a4:"<<a4<<endl;

        for(int i=0;i<a4.get_dim1();i++)
        for(int j=0;j<a4.get_dim2();j++)
            for(int k=0;k<a4.get_dim3();k++)
                for(int l=0;l<a4.get_dim4();l++)
                    assert(a4(i,j,k,l)==d4(i,j,k,l));

	cout<<"///////////////////"<<endl;
    cout<<"Operation d4(int)=b4(double)"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"d4:"<<d4;
    cout<<"b4:"<<b4;
    cout<<"Performing op"<<endl;
    d4=b4;
    cout<<"d4:"<<d4<<endl;

    for(int i=0;i<d4.get_dim1();i++)
        for(int j=0;j<d4.get_dim2();j++)
            for(int k=0;k<d4.get_dim3();k++)
                for(int l=0;l<d4.get_dim4();l++)
                    assert(d4(i,j,k,l)==(int)b4(i,j,k,l));


	cout<<"///////////////////"<<endl;
    cout<<"Operation a4*=2"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a4:"<<a4;
    cout<<"Performing op"<<endl;
    a4*=2;
    cout<<"a4:"<<a4<<endl;




	cout<<"///////////////////"<<endl;
    cout<<"Operation a4+=2"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a4:"<<a4;
    cout<<"Performing op"<<endl;
    a4+=2;
    cout<<"a4:"<<a4<<endl;

	cout<<"///////////////////"<<endl;
    cout<<"Operation a4-=2"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a4:"<<a4;
    cout<<"Performing op"<<endl;
    a4-=2;
    cout<<"a4:"<<a4<<endl;


	cout<<"///////////////////"<<endl;
    cout<<"Operation a4/=2"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a4:"<<a4;
    cout<<"Performing op"<<endl;
    a4/=2;
	cout<<"a4:"<<a4<<endl;


	cout<<"///////////////////"<<endl;
    cout<<"Operation a4(i,j,k,l)=b4(i,j,k,l)"<<endl;
	cout<<"///////////////////"<<endl;
	Index <'l'> l;
    cout<<"a4:"<<a4;
	cout<<"b4:"<<b4;
    cout<<"Performing op"<<endl;
    a4(i,j,k,l)=b4(i,j,k,l);
    cout<<"a4:"<<a4<<endl;

    assert(a4==b4);


	cout<<"///////////////////"<<endl;
    cout<<"Operation a4(i,j,k,l)=b4(k,i,j,l)"<<endl;
	cout<<"///////////////////"<<endl;
	cout<<"a4:"<<a4;
	cout<<"b4:"<<b4;
    cout<<"Performing op"<<endl;
    a4(i,j,k,l)=b4(k,i,j,l);
    cout<<"a3:"<<a3<<endl;

    for(int i=0;i<a4.get_dim1();i++)
        for(int j=0;j<a4.get_dim2();j++)
            for(int k=0;k<a4.get_dim3();k++)
                for(int l=0;l<a4.get_dim4();l++)
                    assert(a4(i,j,k,l)==b4(k,i,j,l));


	cout<<"///////////////////"<<endl;
    cout<<"Operation a4(i,j,k,l)=b4(i,k,j,l)"<<endl;
	cout<<"///////////////////"<<endl;
	cout<<"a4:"<<a4;
	cout<<"b4:"<<b4;
    cout<<"Performing op"<<endl;
    a4(i,j,k,l)=b4(i,k,j,l);
    cout<<"a4:"<<a4<<endl;

    for(int i=0;i<a4.get_dim1();i++)
        for(int j=0;j<a4.get_dim2();j++)
            for(int k=0;k<a4.get_dim3();k++)
                for(int l=0;l<a4.get_dim4();l++)
                    assert(a4(i,j,k,l)==b4(i,k,j,l));


	cout<<"///////////////////"<<endl;
    cout<<"Operation a3(i,j,k,l)=b3(j,i,k,l)"<<endl;
	cout<<"///////////////////"<<endl;
	cout<<"a4:"<<a4;
	cout<<"b4:"<<b4;
    cout<<"Performing op"<<endl;
    a4(i,j,k,l)=b4(j,i,k,l);
    cout<<"a4:"<<a4<<endl;

    for(int i=0;i<a4.get_dim1();i++)
        for(int j=0;j<a4.get_dim2();j++)
            for(int k=0;k<a4.get_dim3();k++)
                for(int l=0;l<a4.get_dim4();l++)
                    assert(a4(i,j,k,l)==b4(j,i,k,l));


	cout<<"///////////////////"<<endl;
    cout<<"Operation a4(i,j,k,l)=b4(j,k,i,l)"<<endl;
	cout<<"///////////////////"<<endl;
	cout<<"a4:"<<a4;
	cout<<"b4:"<<b4;
    cout<<"Performing op"<<endl;
    a4(i,j,k,l)=b4(j,k,i,l);
    cout<<"a4:"<<a4<<endl;

    for(int i=0;i<a4.get_dim1();i++)
        for(int j=0;j<a4.get_dim2();j++)
            for(int k=0;k<a4.get_dim3();k++)
                for(int l=0;l<a4.get_dim4();l++)
                    assert(a4(i,j,k,l)==b4(j,k,i,l));

	cout<<"///////////////////"<<endl;
    cout<<"Operation a4(i,j,k,l)=b4(k,j,i,l)"<<endl;
	cout<<"///////////////////"<<endl;
	cout<<"a4:"<<a4;
	cout<<"b4:"<<b4;
    cout<<"Performing op"<<endl;
    a4(i,j,k,l)=b4(k,j,i,l);
    cout<<"a4:"<<a4<<endl;

    for(int i=0;i<a4.get_dim1();i++)
        for(int j=0;j<a4.get_dim2();j++)
            for(int k=0;k<a4.get_dim3();k++)
                for(int l=0;l<a4.get_dim4();l++)
                    assert(a4(i,j,k,l)==b4(k,j,i,l));

	cout<<"///////////////////"<<endl;
    cout<<"Operation a4(i,j,k,l)=b4(l,k,j,i)"<<endl;
	cout<<"///////////////////"<<endl;
	cout<<"a4:"<<a4;
	cout<<"b4:"<<b4;
    cout<<"Performing op"<<endl;
    a4(i,j,k,l)=b4(l,k,j,i);
    cout<<"a4:"<<a4<<endl;

    for(int i=0;i<a4.get_dim1();i++)
        for(int j=0;j<a4.get_dim2();j++)
            for(int k=0;k<a4.get_dim3();k++)
                for(int l=0;l<a4.get_dim4();l++)
                    assert(a4(i,j,k,l)==b4(l,k,j,i));

	cout<<"///////////////////"<<endl;
    cout<<"Operation a4(i,j,k,l)=b4(k,l,j,i)"<<endl;
	cout<<"///////////////////"<<endl;
	cout<<"a4:"<<a4;
	cout<<"b4:"<<b4;
    cout<<"Performing op"<<endl;
    a4(i,j,k,l)=b4(k,l,j,i);
    cout<<"a4:"<<a4<<endl;

    for(int i=0;i<a4.get_dim1();i++)
        for(int j=0;j<a4.get_dim2();j++)
            for(int k=0;k<a4.get_dim3();k++)
                for(int l=0;l<a4.get_dim4();l++)
                    assert(a4(i,j,k,l)==b4(k,l,j,i));


	cout<<"///////////////////"<<endl;
    cout<<"Operation a4(i,j,k,l)=b4(k,j,l,i)"<<endl;
	cout<<"///////////////////"<<endl;
	cout<<"a4:"<<a4;
	cout<<"b4:"<<b4;
    cout<<"Performing op"<<endl;
    a4(i,j,k,l)=b4(k,j,l,i);
    cout<<"a4:"<<a4<<endl;

    for(int i=0;i<a4.get_dim1();i++)
        for(int j=0;j<a4.get_dim2();j++)
            for(int k=0;k<a4.get_dim3();k++)
                for(int l=0;l<a4.get_dim4();l++)
                    assert(a4(i,j,k,l)==b4(k,j,l,i));


	cout<<"///////////////////"<<endl;
    cout<<"Operation a4(i,j,k,l)=b4(i,j,k,l)*2"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a4:"<<a4;
	cout<<"b4:"<<b4;
    cout<<"Performing op"<<endl;
    a4(i,j,k,l)=b4(i,j,k,l)*2;
    cout<<"43:"<<a4<<endl;

    for(int i=0;i<a4.get_dim1();i++)
        for(int j=0;j<a4.get_dim2();j++)
            for(int k=0;k<a4.get_dim3();k++)
                for(int l=0;l<a4.get_dim4();l++)
                    assert(a4(i,j,k,l)==b4(i,j,k,l)*2);


	cout<<"///////////////////"<<endl;
    cout<<"Operation a4(i,j,k,l)=b4(i,j,k,l)/2"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a4:"<<a4;
	cout<<"b4:"<<b4;
    cout<<"Performing op"<<endl;
    a4(i,j,k,l)=b4(i,j,k,l)/2;
    cout<<"a4:"<<a4<<endl;

    for(int i=0;i<a4.get_dim1();i++)
        for(int j=0;j<a4.get_dim2();j++)
            for(int k=0;k<a4.get_dim3();k++)
                for(int l=0;l<a4.get_dim4();l++)
                    assert(a4(i,j,k,l)==b4(i,j,k,l)/2);


    cout<<"///////////////////"<<endl;
    cout<<"Operation a4+=b4"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a4:"<<a4;
	cout<<"b4:"<<b4;
    cout<<"Performing op"<<endl;
    a4+=b4;
    cout<<"a4:"<<a4<<endl;



	cout<<"///////////////////"<<endl;
    cout<<"Operation a4(double)=ds4(double) (different sizes)"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a4:"<<a4;
	cout<<"ds4:"<<ds4;
    cout<<"Performing op"<<endl;
    a4=ds4;
    cout<<"a4:"<<a4<<endl;

    assert(a4==ds4);

	cout<<"///////////////////"<<endl;
    cout<<"Operation a4(double)=ds42(int) (different sizes/types)"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a4:"<<a4;
	cout<<"ds42:"<<ds42;
    cout<<"Performing op"<<endl;
    a4=ds42;
    cout<<"a4:"<<a4<<endl;

    for(int i=0;i<a4.get_dim1();i++)
        for(int j=0;j<a4.get_dim2();j++)
            for(int k=0;k<a4.get_dim3();k++)
                for(int l=0;l<a4.get_dim4();l++)
                    assert(a4(i,j,k,l)==ds42(i,j,k,l));


	cout<<"///////////////////"<<endl;
    cout<<"Operation ds42(int)=b4(double) (different sizes/types)"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"b4:"<<b4;
	cout<<"ds42:"<<ds42;
    cout<<"Performing op"<<endl;
    ds42=b4;
    cout<<"ds42:"<<ds42<<endl;


    for(int i=0;i<ds42.get_dim1();i++)
        for(int j=0;j<ds42.get_dim2();j++)
            for(int k=0;k<ds42.get_dim3();k++)
                for(int l=0;l<ds42.get_dim4();l++)
                    assert(ds42(i,j,k,l)==(int)b4(i,j,k,l));





    return 0;
}
