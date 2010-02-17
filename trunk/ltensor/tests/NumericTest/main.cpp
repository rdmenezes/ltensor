#ifdef MSVC
#define __restrict__ __restrict
#endif
#define CHECK_OOB
#define CHECK_FILES
#define InheritedBase TinyArray_base<T,rank>
#include "../../LTensor.h"
#include <iostream>




using namespace std;
#define size 6



int main()
{

  //LU Factorization and solver test
  cout<<"LU factorization and solver test"<<endl;
  Marray<double,2> prueba(3,3);
  Marray<double,2> original(3,3);
  Marray<double,1> rebuild(3);
  Marray<int,1> idx(3);
  Marray<double,1> b(3);

  Index <'i'> i;
  Index <'j'> j;
  Index <'k'> k;

  prueba(0,0)=25;
  prueba(0,1)=5;
  prueba(0,2)=1;

  prueba(1,0)=64;
  prueba(1,1)=8;
  prueba(1,2)=1;

  prueba(2,0)=144;
  prueba(2,1)=12;
  prueba(2,2)=1;

original=prueba;

  b(0)=106.8;
  b(1)=177.2;
  b(2)=279.2;



    float scale;
    if(!prueba.LU(idx,scale))
        cout<<"No way, Matrix is singular";
    cout<<"Factorized prueba:"<<endl;
    cout<<prueba<<endl;
    prueba.LU_backSubs(idx,b);
    cout<<"Solution inplace:"<<endl;
    cout<<b;

    rebuild(i)=original(i,j)*b(j);

    assert((rebuild(0)-106.8)<0.01);
    assert((rebuild(1)-177.2)<0.01);
    assert((rebuild(2)-279.2)<0.01);

  prueba(0,0)=25;
  prueba(0,1)=5;
  prueba(0,2)=1;

  prueba(1,0)=64;
  prueba(1,1)=8;
  prueba(1,2)=1;

  prueba(2,0)=144;
  prueba(2,1)=12;
  prueba(2,2)=1;
  Marray<double,2> LU(3,3);

  prueba.getLU(LU,idx,&scale);
  cout<<"prueba:"<<endl;
  cout<<prueba;
  cout<<"LU:"<<endl;
  cout<<LU<<endl;

  cout<<"Cholesky Test"<<endl;

  //Cholesky Test
  prueba(0,0)=25;
  prueba(0,1)=5;
  prueba(0,2)=1;

  prueba(1,0)=64;
  prueba(1,1)=8;
  prueba(1,2)=1;

  prueba(2,0)=144;
  prueba(2,1)=12;
  prueba(2,2)=1;

  Marray<double,1> p(3);
  prueba.Cholesky(p);
  cout<<"Lower Triangular inplace:"<<endl;

  cout<<prueba;

  cout<<"Diagonal inplace :"<<endl;
  cout<<p;

 assert(p(0)==5);
 assert(abs(p(1)-2.646)<0.1);
 assert(abs(p(2)-0.932)<0.1);


  prueba(0,0)=25;
  prueba(0,1)=5;
  prueba(0,2)=1;

  prueba(1,0)=64;
  prueba(1,1)=8;
  prueba(1,2)=1;

  prueba(2,0)=144;
  prueba(2,1)=12;
  prueba(2,2)=1;

  Marray<double,2> chol(3,3);
  prueba.getCholesky(chol,p);

    cout<<"prueba:"<<prueba<<endl;
    cout<<prueba;
    cout<<"cholesky"<<endl;
    cout<<chol;
    cout<<"diagonal"<<endl;
    cout<<p<<endl;


  prueba(0,0)=25;
  prueba(0,1)=5;
  prueba(0,2)=1;

  prueba(1,0)=64;
  prueba(1,1)=8;
  prueba(1,2)=1;

  prueba(2,0)=144;
  prueba(2,1)=12;
  prueba(2,2)=1;

  Marray<double,2> inverse(3,3);
  prueba.InvertByLU(inverse);
  cout<<"Inversa:"<<endl;
  cout<<inverse<<endl;



  prueba(0,0)=25;
  prueba(0,1)=5;
  prueba(0,2)=1;

  prueba(1,0)=64;
  prueba(1,1)=8;
  prueba(1,2)=1;

  prueba(2,0)=144;
  prueba(2,1)=12;
  prueba(2,2)=1;


  prueba.getInvertByLU(inverse);
  cout<<"Inverted not inplace" <<endl;
  cout<<inverse<<endl;

  original(i,j) = prueba(i,k)*inverse(k,j);
  cout<<original;
  assert(abs(1-original(0,0))< 1e-6);
  assert(abs(1-original(1,1))< 1e-6);
  assert(abs(1-original(2,2))< 1e-6);



}
