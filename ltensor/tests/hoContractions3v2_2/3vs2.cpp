 #include "../../LTensor.h"
 #include <iostream>
 #define CHECK_OOB
 #include<fstream>
 int main(void){
 Marray<double,3> A3(3,3,3);
 Marray<double,2> B2(3,3);
 Marray<double,3> C3Test(3,3,3);
 Marray<double,3> C3(3,3,3);
 A3.sucesion(0,1);
 B2.sucesion(0,1);
 Index<'i'> iG;
 Index<'j'> jG;
 Index<'k'> kG;
 Index<'l'> lG;
 for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C3(i,j,l)+=A3(i,j,k)*B2(k,l);
           }
     }
    }
}

C3Test(iG,jG,lG)=A3(iG,jG,kG)*B2(kG,lG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C3(i,j,l)+=A3(i,j,k)*B2(l,k);
           }
     }
    }
}

C3Test(iG,jG,lG)=A3(iG,jG,kG)*B2(lG,kG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C3(i,j,l)+=A3(i,k,j)*B2(k,l);
           }
     }
    }
}

C3Test(iG,jG,lG)=A3(iG,kG,jG)*B2(kG,lG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C3(i,j,l)+=A3(i,k,j)*B2(l,k);
           }
     }
    }
}

C3Test(iG,jG,lG)=A3(iG,kG,jG)*B2(lG,kG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C3(i,j,l)+=A3(k,i,j)*B2(k,l);
           }
     }
    }
}

C3Test(iG,jG,lG)=A3(kG,iG,jG)*B2(kG,lG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C3(i,j,l)+=A3(k,i,j)*B2(l,k);
           }
     }
    }
}

C3Test(iG,jG,lG)=A3(kG,iG,jG)*B2(lG,kG);
assert(C3==C3Test);


C3=0;


}
