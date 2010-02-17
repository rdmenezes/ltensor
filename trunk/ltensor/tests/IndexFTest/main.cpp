#ifdef MSVC
#define __restrict__ __restrict
#endif
//#define CHECK_OOB
//#define InheritedBase Array_base<T,rank>
#include "../../LTensor.h"
#include <iostream>




using namespace std;
#define size 6



int main()
{
    cout<<"+++++++++LTENSOR TEST+++++++++"<<endl;
    cout<<"IndexF routines test"<<endl;

    cout<<"----------Rank 1-----------"<<endl;

    Marray<double,1> a1(size),b1(size);
    for(int i=0;i<size;i++)
        b1(i)=rand()%9;
    IndexF iF(0,2),jF(3,5);
    IndexF kF(5,0,-1);

	IndexF lF(5,0,-1);

	cout<<"///////////////////"<<endl;
    cout<<"Operation a1(iF)=b1(jF)"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a1:"<<a1;
    cout<<"b1:"<<b1;
    cout<<"iF:";
    iF.showIndexes();
    cout<<"jF:";
    jF.showIndexes();
    cout<<"Performed op"<<endl;
    a1(iF)=b1(jF);
    cout<<"a1:"<<a1<<endl;

    for(int i=0;i<iF.get_size();i++)
        assert(a1(iF(i))==b1(jF(i)));


	cout<<"///////////////////"<<endl;
    cout<<"Operation a1=b1(kF)"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a1:"<<a1;
    cout<<"b1:"<<b1;
    cout<<"kF:";
    kF.showIndexes();

    cout<<"Performed op"<<endl;
    a1=b1(kF);
    cout<<"a1:"<<a1<<endl;


    for(int i=0;i<kF.get_size();i++)
        assert(a1(i)==b1(kF(i)));

	cout<<"///////////////////"<<endl;
	cout<<"Operation a1(lF)=b1"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a1:"<<a1;
    cout<<"b1:"<<b1;
    cout<<"lF:";
    lF.showIndexes();

    cout<<"Performed op"<<endl;
    a1(lF)=b1;
    cout<<"a1:"<<a1<<endl;

    for(int i=0;i<lF.get_size();i++)
        assert(a1(lF(i))==b1(i));

	//uncomment for assertion
	//jF.rebuild(0,1,1);
	//iF.rebuild(1,3,1);
	//a1(iF)=b1(jF);
	//a1=b1(jF);
	//a1(iF)=b1;

	cout<<endl;
	cout<<"----------Rank 2-----------"<<endl;

	Marray<double,2> a2(size,size),b2(size,size);
	iF.rebuild(2,0,-1);
	jF.rebuild(0,2,1);
	kF.rebuild(2,4,1);
	lF.rebuild(2,4,1);


	for(int i=0;i<size;i++)
		for(int j=0;j<size;j++)
			b2(i,j)=rand()%9;


	cout<<"///////////////////"<<endl;
	cout<<"Operation a2(iF,jF)=b2(kF,lF)"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a2:"<<a2;
    cout<<"b2:"<<b2;
    cout<<"iF:";
    iF.showIndexes();
	cout<<"jF:";
    jF.showIndexes();
	cout<<"kF:";
    kF.showIndexes();
	cout<<"lF:";
    lF.showIndexes();

    cout<<"Performed op"<<endl;
    a2(iF,jF)=b2(kF,lF);
    cout<<"a2:"<<a2<<endl;

    for(int i=0;i<iF.get_size();i++)
        for(int j=0;j<jF.get_size();j++)
            assert(a2(iF(i),jF(j))==b2(kF(i),lF(j)));


	cout<<"///////////////////"<<endl;
	cout<<"Operation a2=b2(iF,jF)"<<endl;
	cout<<"///////////////////"<<endl;
	a2=0;
    cout<<"a2:"<<a2;
    cout<<"b2:"<<b2;
    iF.rebuild(5,0,-1);
    jF.rebuild(5,0,-1);
    cout<<"iF:";
    iF.showIndexes();
	cout<<"jF:";
    jF.showIndexes();
	cout<<"kF:";
	cout<<"Performed op"<<endl;
    a2=b2(iF,jF);
    cout<<"a2:"<<a2<<endl;

    for(int i=0;i<iF.get_size();i++)
        for(int j=0;j<jF.get_size();j++)
            assert(a2(i,j)==b2(iF(i),jF(j)));


	cout<<"///////////////////"<<endl;
	cout<<"Operation a2(iF,jF)=b2"<<endl;
	cout<<"///////////////////"<<endl;
	a2=0;
    cout<<"a2:"<<a2;
    cout<<"b2:"<<b2;
    iF.rebuild(5,0,-1);
    jF.rebuild(0,5,1);
    cout<<"iF:";
    iF.showIndexes();
	cout<<"jF:";
    jF.showIndexes();

	cout<<"Performed op"<<endl;
    a2(iF,jF)=b2;
    cout<<"a2:"<<a2<<endl;

    for(int i=0;i<iF.get_size();i++)
        for(int j=0;j<jF.get_size();j++)
            assert(a2(iF(i),jF(j))==b2(i,j));

	//uncomment for assertion
	//jF.rebuild(0,1,1);
	//iF.rebuild(1,3,1);
	//a2(iF,jF)=b2(jF,iF);
	//a2=b2(jF,iF);
	//a2(iF,jF)=b2;

#undef size
#define size 3

	cout<<endl;
	cout<<"----------Rank 3-----------"<<endl;
	IndexF mF(size),nF(size);
	Marray<double,3> a3(size,size,size),b3(size,size,size);
	iF.rebuild(2,2,1);
	jF.rebuild(1,2);
	kF.rebuild(1,2);
	lF.rebuild(0,0);
	mF.rebuild(0,1);
	nF.rebuild(1,2);


	for(int i=0;i<size;i++)
		for(int j=0;j<size;j++)
			for(int k=0;k<size;k++)
				b3(i,j,k)=rand()%9;


	cout<<"///////////////////"<<endl;
	cout<<"Operation a3(iF,jF,kF)=b3(lF,mF,nF)"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a3:"<<a3;
    cout<<"b3:"<<b3;
    cout<<"iF:";
    iF.showIndexes();
	cout<<"jF:";
    jF.showIndexes();
	cout<<"kF:";
    kF.showIndexes();
	cout<<"lF:";
    lF.showIndexes();
	cout<<"mF";
	mF.showIndexes();
	cout<<"nF:";
	nF.showIndexes();

    cout<<"Performed op"<<endl;
    a3(iF,jF,kF)=b3(lF,mF,nF);
    cout<<"a3:"<<a3<<endl;

    for(int i=0;i<iF.get_size();i++)
        for(int j=0;j<jF.get_size();j++)
            for(int k=0;k<kF.get_size();k++)
            assert(a3(iF(i),jF(j),kF(k))==b3(lF(i),mF(j),nF(k)));


	cout<<"///////////////////"<<endl;
	cout<<"Operation a3=b3(iF,jF,kF)"<<endl;
	cout<<"///////////////////"<<endl;
	a3=0;
    cout<<"a3:"<<a3;
    cout<<"b3:"<<b3;
    iF.rebuild(2,0,-1);
    jF.rebuild(0,2);
	kF.rebuild(0,2);

    cout<<"iF:";
    iF.showIndexes();
	cout<<"jF:";
    jF.showIndexes();
	cout<<"kF:";
	kF.showIndexes();
	cout<<"Performed op"<<endl;
    a3=b3(iF,jF,kF);
    cout<<"a3:"<<a3<<endl;

    for(int i=0;i<iF.get_size();i++)
        for(int j=0;j<jF.get_size();j++)
            for(int k=0;k<kF.get_size();k++)
                assert(a3(i,j,k)==b3(iF(i),jF(j),kF(k)));


	cout<<"///////////////////"<<endl;
	cout<<"Operation a3(iF,jF,kF)=b3"<<endl;
	cout<<"///////////////////"<<endl;
	a3=0;
    cout<<"a3:"<<a3;
    cout<<"b3:"<<b3;
    iF.rebuild(2,0,-1);
    jF.rebuild(0,2);
	kF.rebuild(2,0,-1);
    cout<<"iF:";
    iF.showIndexes();
	cout<<"jF:";
    jF.showIndexes();
	cout<<"kF:";
	kF.showIndexes();
	cout<<"Performed op"<<endl;
    a3(iF,jF,kF)=b3;
    cout<<"a3:"<<a3<<endl;

    for(int i=0;i<iF.get_size();i++)
        for(int j=0;j<jF.get_size();j++)
            for(int k=0;k<kF.get_size();k++)
            assert(a3(iF(i),jF(j),kF(k))==b3(i,j,k));

	//uncomment for assertion
	//jF.rebuild(0,1,1);
	//iF.rebuild(1,3,1);
	//kF.rebuild(0,2);
	//a3(iF,jF,kF)=b3(jF,iF,mF);
	//a3=b3(jF,iF,kF);
	//a3(iF,jF,kF)=b3;


#undef size
#define size 2

	cout<<endl;
	cout<<"----------Rank 4-----------"<<endl;
	IndexF oF(size),pF(size);
	Marray<double,4> a4(size,size,size,size),b4(size,size,size,size);
	iF.rebuild(1,0,-1);
	jF.rebuild(0,1);
	kF.rebuild(0,1);
	lF.rebuild(0,1);
	mF.rebuild(0,1);
	nF.rebuild(0,1);
	oF.rebuild(0,1);
	pF.rebuild(0,1);


	for(int i=0;i<size;i++)
		for(int j=0;j<size;j++)
			for(int k=0;k<size;k++)
				for(int l=0;l<size;l++)
					b4(i,j,k,l)=rand()%9;


	cout<<"///////////////////"<<endl;
	cout<<"Operation a4(iF,jF,kF,lF)=b4(mF,nF,oF,pF)"<<endl;
	cout<<"///////////////////"<<endl;
    cout<<"a4:"<<a4;
    cout<<"b4:"<<b4;
    cout<<"iF:";
    iF.showIndexes();
	cout<<"jF:";
    jF.showIndexes();
	cout<<"kF:";
    kF.showIndexes();
	cout<<"lF:";
    lF.showIndexes();
	cout<<"mF";
	mF.showIndexes();
	cout<<"nF:";
	nF.showIndexes();
	cout<<"oF:";
	oF.showIndexes();
	cout<<"pF";
	pF.showIndexes();

    cout<<"Performed op"<<endl;
    a4(iF,jF,kF,lF)=b4(mF,nF,oF,pF);
    cout<<"a4:"<<a4<<endl;

    for(int i=0;i<iF.get_size();i++)
        for(int j=0;j<jF.get_size();j++)
            for(int k=0;k<kF.get_size();k++)
                for(int l=0;l<lF.get_size();l++)
                    assert(a4(iF(i),jF(j),kF(k),lF(l))==b4(mF(i),nF(j),oF(k),pF(l)));


	cout<<"///////////////////"<<endl;
	cout<<"Operation a4=b4(iF,jF,kF,lF)"<<endl;
	cout<<"///////////////////"<<endl;
	a4=0;
    cout<<"a4:"<<a4;
    cout<<"b4:"<<b4;


	iF.rebuild(1,0,-1);
	jF.rebuild(1,0,-1);
	kF.rebuild(0,1);
	lF.rebuild(0,1);

     iF.showIndexes();
	cout<<"jF:";
    jF.showIndexes();
	cout<<"kF:";
    kF.showIndexes();
	cout<<"lF:";
    lF.showIndexes();


	cout<<"Performed op"<<endl;
    a4=b4(iF,jF,kF,lF);
    cout<<"a4:"<<a4<<endl;

    for(int i=0;i<iF.get_size();i++)
        for(int j=0;j<jF.get_size();j++)
            for(int k=0;k<kF.get_size();k++)
                for(int l=0;l<lF.get_size();l++)
                    assert(a4(i,j,k,l)==b4(iF(i),jF(j),kF(k),lF(l)));


	cout<<"///////////////////"<<endl;
	cout<<"Operation a4(iF,jF,kF,lF)=b4"<<endl;
	cout<<"///////////////////"<<endl;
	a4=0;
    cout<<"a4:"<<a4;
    cout<<"b4:"<<b4;

	iF.rebuild(1,0,-1);
	jF.rebuild(1,0,-1);
	kF.rebuild(0,1);
	lF.rebuild(0,1);

    iF.showIndexes();
	cout<<"jF:";
    jF.showIndexes();
	cout<<"kF:";
    kF.showIndexes();
	cout<<"lF:";
    lF.showIndexes();


	cout<<"Performed op"<<endl;
    a4(iF,jF,kF,lF)=b4;
    cout<<"a4:"<<a4<<endl;

    for(int i=0;i<iF.get_size();i++)
        for(int j=0;j<jF.get_size();j++)
            for(int k=0;k<kF.get_size();k++)
                for(int l=0;l<lF.get_size();l++)
                    assert(a4(iF(i),jF(j),kF(k),lF(l))==b4(i,j,k,l));

	//uncomment for assertion
	jF.rebuild(0,1,1);
	iF.rebuild(1,3,1);
	kF.rebuild(0,2);
	lF.rebuild(1,2);
	//a4(iF,jF,kF,lF)=b4(jF,iF,mF,lF);
	//a4=b4(jF,iF,kF,lF);
	//a4(iF,jF,kF,lF)=b4;

	cout<<endl<<"Test ended succesfully"<<endl;

	cin.get();
    return 0;



}
