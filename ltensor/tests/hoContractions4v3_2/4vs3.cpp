 #include "../../LTensor.h"
 #include <iostream>
 #define CHECK_OOB
 #include<fstream>
 int main(void){
 Marray<double,4> A4(3,3,3,3);
 Marray<double,3> B3(3,3,3);
 Marray<double,1> C1Test(3);
 Marray<double,1> C1(3);
 A4.sucesion(0,1);
 B3.sucesion(0,1);
 Index<'i'> iG;
 Index<'j'> jG;
 Index<'k'> kG;
 Index<'l'> lG;
 Index<'m'> mG;
 for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C1(i)+=A4(i,j,k,l)*B3(j,k,l);
           }
        }
        }
}

C1Test(iG)=A4(iG,jG,kG,lG)*B3(jG,kG,lG);
assert(C1==C1Test);


C1=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C1(i)+=A4(i,j,k,l)*B3(j,l,k);
           }
        }
        }
}

C1Test(iG)=A4(iG,jG,kG,lG)*B3(jG,lG,kG);
assert(C1==C1Test);


C1=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C1(i)+=A4(i,j,k,l)*B3(k,j,l);
           }
        }
        }
}

C1Test(iG)=A4(iG,jG,kG,lG)*B3(kG,jG,lG);
assert(C1==C1Test);


C1=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C1(i)+=A4(i,j,k,l)*B3(k,l,j);
           }
        }
        }
}

C1Test(iG)=A4(iG,jG,kG,lG)*B3(kG,lG,jG);
assert(C1==C1Test);


C1=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C1(i)+=A4(i,j,k,l)*B3(l,j,k);
           }
        }
        }
}

C1Test(iG)=A4(iG,jG,kG,lG)*B3(lG,jG,kG);
assert(C1==C1Test);


C1=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C1(i)+=A4(i,j,k,l)*B3(l,k,j);
           }
        }
        }
}

C1Test(iG)=A4(iG,jG,kG,lG)*B3(lG,kG,jG);
assert(C1==C1Test);


C1=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C1(i)+=A4(i,k,j,l)*B3(k,j,l);
           }
        }
        }
}

C1Test(iG)=A4(iG,kG,jG,lG)*B3(kG,jG,lG);
assert(C1==C1Test);


C1=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C1(i)+=A4(j,i,k,l)*B3(j,k,l);
           }
        }
        }
}

C1Test(iG)=A4(jG,iG,kG,lG)*B3(jG,kG,lG);
assert(C1==C1Test);


C1=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C1(i)+=A4(j,i,k,l)*B3(j,l,k);
           }
        }
        }
}

C1Test(iG)=A4(jG,iG,kG,lG)*B3(jG,lG,kG);
assert(C1==C1Test);


C1=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C1(i)+=A4(j,i,k,l)*B3(k,j,l);
           }
        }
        }
}

C1Test(iG)=A4(jG,iG,kG,lG)*B3(kG,jG,lG);
assert(C1==C1Test);


C1=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C1(i)+=A4(j,i,k,l)*B3(k,l,j);
           }
        }
        }
}

C1Test(iG)=A4(jG,iG,kG,lG)*B3(kG,lG,jG);
assert(C1==C1Test);


C1=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C1(i)+=A4(j,i,k,l)*B3(l,j,k);
           }
        }
        }
}

C1Test(iG)=A4(jG,iG,kG,lG)*B3(lG,jG,kG);
assert(C1==C1Test);


C1=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C1(i)+=A4(j,i,k,l)*B3(l,k,j);
           }
        }
        }
}

C1Test(iG)=A4(jG,iG,kG,lG)*B3(lG,kG,jG);
assert(C1==C1Test);


C1=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C1(i)+=A4(j,k,i,l)*B3(j,k,l);
           }
        }
        }
}

C1Test(iG)=A4(jG,kG,iG,lG)*B3(jG,kG,lG);
assert(C1==C1Test);


C1=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C1(i)+=A4(j,k,i,l)*B3(j,l,k);
           }
        }
        }
}

C1Test(iG)=A4(jG,kG,iG,lG)*B3(jG,lG,kG);
assert(C1==C1Test);


C1=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C1(i)+=A4(j,k,i,l)*B3(k,j,l);
           }
        }
        }
}

C1Test(iG)=A4(jG,kG,iG,lG)*B3(kG,jG,lG);
assert(C1==C1Test);


C1=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C1(i)+=A4(j,k,i,l)*B3(k,l,j);
           }
        }
        }
}

C1Test(iG)=A4(jG,kG,iG,lG)*B3(kG,lG,jG);
assert(C1==C1Test);


C1=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C1(i)+=A4(j,k,i,l)*B3(l,j,k);
           }
        }
        }
}

C1Test(iG)=A4(jG,kG,iG,lG)*B3(lG,jG,kG);
assert(C1==C1Test);


C1=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C1(i)+=A4(j,k,i,l)*B3(l,k,j);
           }
        }
        }
}

C1Test(iG)=A4(jG,kG,iG,lG)*B3(lG,kG,jG);
assert(C1==C1Test);


C1=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C1(i)+=A4(j,k,l,i)*B3(j,k,l);
           }
        }
        }
}

C1Test(iG)=A4(jG,kG,lG,iG)*B3(jG,kG,lG);
assert(C1==C1Test);


C1=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C1(i)+=A4(j,k,l,i)*B3(j,l,k);
           }
        }
        }
}

C1Test(iG)=A4(jG,kG,lG,iG)*B3(jG,lG,kG);
assert(C1==C1Test);


C1=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C1(i)+=A4(j,k,l,i)*B3(k,j,l);
           }
        }
        }
}

C1Test(iG)=A4(jG,kG,lG,iG)*B3(kG,jG,lG);
assert(C1==C1Test);


C1=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C1(i)+=A4(j,k,l,i)*B3(k,l,j);
           }
        }
        }
}

C1Test(iG)=A4(jG,kG,lG,iG)*B3(kG,lG,jG);
assert(C1==C1Test);


C1=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C1(i)+=A4(j,k,l,i)*B3(l,j,k);
           }
        }
        }
}

C1Test(iG)=A4(jG,kG,lG,iG)*B3(lG,jG,kG);
assert(C1==C1Test);


C1=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C1(i)+=A4(j,k,l,i)*B3(l,k,j);
           }
        }
        }
}

C1Test(iG)=A4(jG,kG,lG,iG)*B3(lG,kG,jG);
assert(C1==C1Test);


C1=0;


}
