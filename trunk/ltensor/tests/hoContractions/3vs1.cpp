 #include "../../LTensor.h"
 #include <iostream>
 #define CHECK_OOB
 #include<fstream>
 int main(void){
 Marray<double,3> A3(3,3,3);
 Marray<double,1> B1(3);
 Marray<double,2> C2Test(3,3);
 Marray<double,2> C2(3,3);
 A3.sucesion(0,1);
 B1.sucesion(0,1);
 Index<'i'> iG;
 Index<'j'> jG;
 Index<'k'> kG;
 for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for(int k=0;k<3;k++){
               C2(i,j)+=A3(i,j,k)*B1(k);
          }
     }
 }

C2Test(iG,jG)=A3(iG,jG,kG)*B1(kG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for(int k=0;k<3;k++){
               C2(i,j)+=A3(i,k,j)*B1(k);
          }
     }
 }

C2Test(iG,jG)=A3(iG,kG,jG)*B1(kG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for(int k=0;k<3;k++){
               C2(i,j)+=A3(k,i,j)*B1(k);
          }
     }
 }

C2Test(iG,jG)=A3(kG,iG,jG)*B1(kG);
assert(C2==C2Test);


C2=0;


}
