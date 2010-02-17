#ifdef MSVC
#define __restrict__ __restrict
#endif
#define CHECK_OOB
//#define InheritedBase Array_base<T,rank>
#include "../../LTensor.h"
#include <iostream>
#include <blitz/array.h>

#define compare0(x,y) assert(x==y); cout<<endl<<"OPERATION SUCCESFUL"<<endl<<endl;
#define compare1(x,y) for (int i=0;i<size;i++){ assert(x(i)==y(i)); } cout<<endl<<"OPERATION SUCCESFUL"<<endl<<endl;
#define compare2(x,y) for (int i=0;i<size;i++)for(int j=0;j<size;j++){ assert(x(i,j)==y(i,j)); } cout<<endl<<"OPERATION SUCCESFUL"<<endl<<endl;

using namespace std;
#define size 3
using namespace blitz;

int main()
{

    cout<<"+++++++++LTENSOR TEST+++++++++"<<endl;
    cout<<"Contraction routines test"<<endl;

    cout<<"----------Rank 1-----------"<<endl;

    Array<double,1> bz_a1(size);
    Array<double,1> bz_b1(size);
    Marray<double,1> a1(size);
    Marray<double,1> b1(size);

    a1=0;
    bz_a1=0;

    Index <'i'> i;
	firstIndex bz_i;


    for(int i=0;i<size;i++){
        bz_b1(i)=rand()%9;
        b1(i)=bz_b1(i);
    }


	cout<<"///////////////////"<<endl;
    cout<<"Operation a1(i)=b1(i)"<<endl;
	cout<<"///////////////////"<<endl;

	a1(i)=b1(i);
	bz_a1=bz_b1(bz_i);

	compare1(a1,bz_a1);


	cout<<"///////////////////"<<endl;
    cout<<"Operation res=b1(i)*b(i)"<<endl;
	cout<<"///////////////////"<<endl;

	double res1=0.0;
	double res1bz=0.0;

	res1=b1(i)*b1(i);
	res1bz=sum(bz_b1(bz_i)*bz_b1(bz_i));

	compare0(res1,res1bz);


	cout<<"----------Rank 2-----------"<<endl;

    Array<double,2> bz_a2(size,size);


    Array<double,2> bz_b2(size,size);
	Array<double,2> bz_c2(size,size);

	Marray<double,2> a2(size,size);


    Marray<double,2> b2(size,size);
	Marray<double,2> c2(size,size);



    a2=0;
    bz_a2=0;

    Index <'j'> j;
	secondIndex bz_j;


    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            bz_b2(i,j)=rand()%9;
            b2(i,j)=bz_b2(i,j);
			bz_c2(i,j)=rand()%9;
			c2(i,j)=bz_c2(i,j);
        }
    }


	cout<<"///////////////////"<<endl;
    cout<<"Operation a2(i,j)=b2(i,j)"<<endl;
	cout<<"///////////////////"<<endl;

	a2(i,j)=b2(i,j);
	bz_a2=bz_b2(bz_i,bz_j);

	compare2(a2,bz_a2);


    cout<<"///////////////////"<<endl;
    cout<<"Operation a2(i,j)=b2(j,i)"<<endl;
	cout<<"///////////////////"<<endl;

	a2(i,j)=b2(j,i);
	bz_a2=bz_b2(bz_j,bz_i);

	compare2(a2,bz_a2);

    cout<<"///////////////////"<<endl;
    cout<<"Operation a2(i,j)=b2(i,j)"<<endl;
	cout<<"///////////////////"<<endl;

	a2(i,j)=b2(i,j);
	bz_a2=bz_b2(bz_i,bz_j);

	compare2(a2,bz_a2);

	double res2=0.0;
	double res2bz=0.0;

	cout<<"///////////////////"<<endl;
    cout<<"Operation res2=b2(i,i)"<<endl;
	cout<<"///////////////////"<<endl;

	res2=b2(i,i);
	res2bz=0.0;

	for(int i=0;i<size;i++){
		res2bz=res2bz + bz_b2(i,i);
	}

	compare0(res2,res2bz);


	cout<<"///////////////////"<<endl;
    cout<<"Operation a1(i)=b2(i,j)*b1(j)"<<endl;
	cout<<"///////////////////"<<endl;

	bz_a1=sum(bz_b2(bz_i,bz_j)*bz_b1(bz_j),bz_j);
	a1(i)=b2(i,j)*b1(j);

	compare1(bz_a1,a1);

	cout<<"///////////////////"<<endl;
    cout<<"Operation a1(i)=b2(i,j)*b1(i)"<<endl;
	cout<<"///////////////////"<<endl;

	bz_a1=sum(bz_b2(bz_j,bz_i)*bz_b1(bz_j),bz_j); //blitz reordering workaround
	a1(j)=b2(i,j)*b1(i);

	compare1(bz_a1,a1);


	cout<<"///////////////////"<<endl;
    cout<<"Operation a1(i,j)=b2(i,k)*c2(j,k)"<<endl;
	cout<<"///////////////////"<<endl;

	Index<'k'> k;
	thirdIndex bz_k;
	bz_a2=0.0;
	a2=0.0;

	bz_a2=sum(bz_b2(bz_i,bz_k)*bz_c2(bz_j,bz_k),bz_k); //blitz reordering workaround
	a2(i,j)=b2(i,k)*c2(j,k);

	compare2(bz_a2,a2);


	cout<<"///////////////////"<<endl;
    cout<<"Operation a1(i,j)=b2(k,i)*c2(j,k)"<<endl;
	cout<<"///////////////////"<<endl;


	bz_a2=0.0;
	a2=0.0;

	bz_a2=sum(bz_b2(bz_k,bz_i)*bz_c2(bz_j,bz_k),bz_k); //blitz reordering workaround
	a2(i,j)=b2(k,i)*c2(j,k);

	compare2(bz_a2,a2);



	cout<<"///////////////////"<<endl;
    cout<<"Operation a1(i,j)=b2(i,k)*c2(k,j)"<<endl;
	cout<<"///////////////////"<<endl;


	bz_a2=0.0;
	a2=0.0;

	bz_a2=sum(bz_b2(bz_i,bz_k)*bz_c2(bz_k,bz_j),bz_k); //blitz reordering workaround
	a2(i,j)=b2(i,k)*c2(k,j);

	compare2(bz_a2,a2);


	cout<<"///////////////////"<<endl;
    cout<<"Operation a1(i,j)=b2(k,i)*c2(k,j)"<<endl;
	cout<<"///////////////////"<<endl;


	bz_a2=0.0;
	a2=0.0;

	bz_a2=sum(bz_b2(bz_k,bz_i)*bz_c2(bz_k,bz_j),bz_k); //blitz reordering workaround
	a2(i,j)=b2(k,i)*c2(k,j);

	compare2(bz_a2,a2);



	cout<<"///////////////////"<<endl;
    cout<<"Operation res2=b2(i,j)*c2(i,j)"<<endl;
	cout<<"///////////////////"<<endl;

	res2=0.0;
	res2bz=0.0;


	res2bz=sum(bz_b2(bz_i,bz_j)*bz_c2(bz_i,bz_j));
	res2=b2(i,j)*c2(i,j);

	compare0(res2,res2bz);


	cout<<"///////////////////"<<endl;
    cout<<"Operation res2=b2(i,j)*c2(j,i)"<<endl;
	cout<<"///////////////////"<<endl;

	res2=0.0;
	res2bz=0.0;


	res2bz=sum(bz_b2(bz_i,bz_j)*bz_c2(bz_j,bz_i));
	res2=b2(i,j)*c2(j,i);

	compare0(res2,res2bz);

	cout<<"///////////////////"<<endl;
    cout<<"Operation a2(i,j)=b1(i)*b(j)"<<endl;
	cout<<"///////////////////"<<endl;

	bz_a2=0.0;
	a2=0.0;

	a2(i,j)=b1(i)*b1(j);
	bz_a2=bz_b1(bz_i)*bz_b1(bz_j);

	compare2(a2,bz_a2);


	cout<<"///////////////////"<<endl;
    cout<<"Operation a2(i,j)=b1(j)*b(i)"<<endl;
	cout<<"///////////////////"<<endl;

	bz_a2=0.0;
	a2=0.0;

	a2(i,j)=b1(j)*b1(i);
	bz_a2=bz_b1(bz_j)*bz_b1(bz_i);

	compare2(a2,bz_a2);




    return 0;
}
