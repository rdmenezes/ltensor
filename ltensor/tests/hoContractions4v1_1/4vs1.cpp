 #include "../../LTensor.h"
 #include <iostream>
 #define CHECK_OOB
 #include<fstream>
 int main(void){
 Marray<double,4> A4(3,3,3,3);
 Marray<double,1> B1(3);
 Marray<double,3> C3Test(3,3,3);
 Marray<double,3> C3(3,3,3);
 A4.sucesion(0,1);
 B1.sucesion(0,1);
 Index<'i'> iG;
 Index<'j'> jG;
 Index<'k'> kG;
 Index<'l'> lG;
 for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C3(i,j,k)+=A4(i,j,k,l)*B1(l);
           }
     }
        }
}

C3Test(iG,jG,kG)=A4(iG,jG,kG,lG)*B1(lG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C3(i,j,k)+=A4(i,j,l,k)*B1(l);
           }
     }
        }
}

C3Test(iG,jG,kG)=A4(iG,jG,lG,kG)*B1(lG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C3(i,j,k)+=A4(i,l,j,k)*B1(l);
           }
     }
        }
}

C3Test(iG,jG,kG)=A4(iG,lG,jG,kG)*B1(lG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C3(i,j,k)+=A4(j,i,k,l)*B1(l);
           }
     }
        }
}

C3Test(iG,jG,kG)=A4(jG,iG,kG,lG)*B1(lG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C3(i,j,k)+=A4(l,i,j,k)*B1(l);
           }
     }
        }
}

C3Test(iG,jG,kG)=A4(lG,iG,jG,kG)*B1(lG);
assert(C3==C3Test);


C3=0;


}
