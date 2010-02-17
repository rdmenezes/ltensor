 #include "../../LTensor.h"
 #include <iostream>
 #define CHECK_OOB
 #include<fstream>
 int main(void){
 Marray<double,3> A3(3,3,3);
 Marray<double,2> B2(3,3);
 Marray<double,1> C1Test(3);
 Marray<double,1> C1(3);
 A3.sucesion(0,1);
 B2.sucesion(0,1);
 Index<'i'> iG;
 Index<'j'> jG;
 Index<'k'> kG;
 for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for(int k=0;k<3;k++){
               C1(i)+=A3(i,j,k)*B2(j,k);
          }
     }
 }

C1Test(iG)=A3(iG,jG,kG)*B2(jG,kG);
assert(C1==C1Test);


C1=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for(int k=0;k<3;k++){
               C1(i)+=A3(i,j,k)*B2(k,j);
          }
     }
 }

C1Test(iG)=A3(iG,jG,kG)*B2(kG,jG);
assert(C1==C1Test);


C1=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for(int k=0;k<3;k++){
               C1(i)+=A3(j,i,k)*B2(j,k);
          }
     }
 }

C1Test(iG)=A3(jG,iG,kG)*B2(jG,kG);
assert(C1==C1Test);


C1=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for(int k=0;k<3;k++){
               C1(i)+=A3(j,i,k)*B2(k,j);
          }
     }
 }

C1Test(iG)=A3(jG,iG,kG)*B2(kG,jG);
assert(C1==C1Test);


C1=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for(int k=0;k<3;k++){
               C1(i)+=A3(j,k,i)*B2(j,k);
          }
     }
 }

C1Test(iG)=A3(jG,kG,iG)*B2(jG,kG);
assert(C1==C1Test);


C1=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for(int k=0;k<3;k++){
               C1(i)+=A3(j,k,i)*B2(k,j);
          }
     }
 }

C1Test(iG)=A3(jG,kG,iG)*B2(kG,jG);
assert(C1==C1Test);


C1=0;


}
