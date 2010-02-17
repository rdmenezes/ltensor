#ifdef MSVC
#define __restrict__ __restrict
#endif
#define CHECK_OOB

#include "../../LTensor.h"
#include <iostream>




using namespace std;
#define size 3


int main()
{

	Marray<double,1> arr(6);

	double datos[]={3, 5, 6};
	double datos2[3];
	int i_datos[]={ 3 ,1 ,1};
	int i_datos2[3];

	arr.fromCArray(datos,3);
	for(int i=0;i<3;i++){
		assert(datos[i]==arr(i));
	}



	cout<<arr;
	arr.toCArray(datos2);
	for(int i=0;i<3;i++){
		cout<<datos2[i]<<"\t";
		assert(datos2[i]==arr(i));
	}


	arr.fromCArray(i_datos,3);

	for(int i=0;i<3;i++){
		cout<<datos2[i]<<"\t";
		assert(i_datos[i]==arr(i));
	}

	cout<<arr;
	arr.toCArray(i_datos2);
	for(int i=0;i<3;i++){
		cout<<i_datos2[i]<<"\t";
		assert(i_datos2[i] == arr(i));
	}

	cout<<endl;
	cout<<"------------------------------------------------"<<endl;
	cout<<endl;

	Marray<double,2> arr2(5,5);

	double datos_2[]={3, 5, 6, 2 , 4 ,5 ,6 ,3 ,1};
	double datos2_2[9];

	arr2.fromCArray(datos_2,3,3);

	for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            assert(datos_2[i*3+j]==arr2(i,j));


	cout<<arr2;
	arr2.toCArray(datos2_2);

	for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            assert(datos2_2[i*3+j]==arr2(i,j));


	for(int i=0;i<9;i++){
		cout<<datos2_2[i]<<"\t";
	}


	cout<<endl;
	cout<<"------------------------------------------------"<<endl;
	cout<<endl;

	Marray<double,3> arr3(5,5,5);

	double datos_3[]={1,2,3,4,5,6,7,8};
	double datos2_3[8];


	arr3.fromCArray(datos_3,2,2,2);

	cout<<arr3;
	arr3.toCArray(datos2_3);


	for(int i=0;i<8;i++)
        assert(datos2_3[i]==datos_3[i]);

	for(int i=0;i<8;i++){
		cout<<datos2_3[i]<<"\t";
	}


	cout<<endl;
	cout<<"------------------------------------------------"<<endl;
	cout<<endl;

	Marray<double,4> arr4(5,5,5,5);

	double datos_4[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	double datos2_4[16];


	arr4.fromCArray(datos_4,2,2,2,2);

	cout<<arr4;
	arr4.toCArray(datos2_4);

    for(int i=0;i<16;i++)
        assert(datos2_4[i]==datos_4[i]);

	for(int i=0;i<16;i++){
		cout<<datos2_4[i]<<"\t";
	}


    return 0;
}
