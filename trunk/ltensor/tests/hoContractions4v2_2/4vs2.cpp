 #include "../../LTensor.h"
 #include <iostream>
 #define CHECK_OOB
 #include<fstream>
 int main(void){
 Marray<double,4> A4(3,3,3,3);
 Marray<double,2> B2(3,3);
 Marray<double,2> C2Test(3,3);
 Marray<double,2> C2(3,3);
 A4.sucesion(0,1);
 B2.sucesion(0,1);
 Index<'i'> iG;
 Index<'j'> jG;
 Index<'k'> kG;
 Index<'l'> lG;
 Index<'m'> mG;
 for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C2(i,j)+=A4(i,j,k,l)*B2(k,l);
           }
        }
        }
}

C2Test(iG,jG)=A4(iG,jG,kG,lG)*B2(kG,lG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C2(i,j)+=A4(i,j,k,l)*B2(l,k);
           }
        }
        }
}

C2Test(iG,jG)=A4(iG,jG,kG,lG)*B2(lG,kG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C2(i,j)+=A4(i,k,j,l)*B2(k,l);
           }
        }
        }
}

C2Test(iG,jG)=A4(iG,kG,jG,lG)*B2(kG,lG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C2(i,j)+=A4(i,k,j,l)*B2(l,k);
           }
        }
        }
}

C2Test(iG,jG)=A4(iG,kG,jG,lG)*B2(lG,kG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C2(i,j)+=A4(i,k,l,j)*B2(k,l);
           }
        }
        }
}

C2Test(iG,jG)=A4(iG,kG,lG,jG)*B2(kG,lG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C2(i,j)+=A4(i,k,l,j)*B2(l,k);
           }
        }
        }
}

C2Test(iG,jG)=A4(iG,kG,lG,jG)*B2(lG,kG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C2(i,j)+=A4(j,i,k,l)*B2(k,l);
           }
        }
        }
}

C2Test(iG,jG)=A4(jG,iG,kG,lG)*B2(kG,lG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C2(i,j)+=A4(k,i,j,l)*B2(k,l);
           }
        }
        }
}

C2Test(iG,jG)=A4(kG,iG,jG,lG)*B2(kG,lG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C2(i,j)+=A4(k,i,j,l)*B2(l,k);
           }
        }
        }
}

C2Test(iG,jG)=A4(kG,iG,jG,lG)*B2(lG,kG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C2(i,j)+=A4(k,i,l,j)*B2(k,l);
           }
        }
        }
}

C2Test(iG,jG)=A4(kG,iG,lG,jG)*B2(kG,lG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C2(i,j)+=A4(k,i,l,j)*B2(l,k);
           }
        }
        }
}

C2Test(iG,jG)=A4(kG,iG,lG,jG)*B2(lG,kG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C2(i,j)+=A4(k,l,i,j)*B2(k,l);
           }
        }
        }
}

C2Test(iG,jG)=A4(kG,lG,iG,jG)*B2(kG,lG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C2(i,j)+=A4(k,l,i,j)*B2(l,k);
           }
        }
        }
}

C2Test(iG,jG)=A4(kG,lG,iG,jG)*B2(lG,kG);
assert(C2==C2Test);


C2=0;


}
