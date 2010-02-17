 #include "../../LTensor.h"
 #include <iostream>
 #define CHECK_OOB
 #include<fstream>
 int main(void){
 Marray<double,4> A4(3,3,3,3);
 Marray<double,3> B3(3,3,3);
 Marray<double,3> C3Test(3,3,3);
 Marray<double,3> C3(3,3,3);
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
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C3(i,j,m)+=A4(i,j,k,l)*B3(k,l,m);
           }
        }
     }
        }
}

C3Test(iG,jG,mG)=A4(iG,jG,kG,lG)*B3(kG,lG,mG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C3(i,j,m)+=A4(i,j,k,l)*B3(k,m,l);
           }
        }
     }
        }
}

C3Test(iG,jG,mG)=A4(iG,jG,kG,lG)*B3(kG,mG,lG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C3(i,j,m)+=A4(i,j,k,l)*B3(l,k,m);
           }
        }
     }
        }
}

C3Test(iG,jG,mG)=A4(iG,jG,kG,lG)*B3(lG,kG,mG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C3(i,j,m)+=A4(i,j,k,l)*B3(l,m,k);
           }
        }
     }
        }
}

C3Test(iG,jG,mG)=A4(iG,jG,kG,lG)*B3(lG,mG,kG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C3(i,j,m)+=A4(i,j,k,l)*B3(m,k,l);
           }
        }
     }
        }
}

C3Test(iG,jG,mG)=A4(iG,jG,kG,lG)*B3(mG,kG,lG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C3(i,j,m)+=A4(i,j,k,l)*B3(m,l,k);
           }
        }
     }
        }
}

C3Test(iG,jG,mG)=A4(iG,jG,kG,lG)*B3(mG,lG,kG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C3(i,j,m)+=A4(i,k,j,l)*B3(k,l,m);
           }
        }
     }
        }
}

C3Test(iG,jG,mG)=A4(iG,kG,jG,lG)*B3(kG,lG,mG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C3(i,j,m)+=A4(i,k,j,l)*B3(k,m,l);
           }
        }
     }
        }
}

C3Test(iG,jG,mG)=A4(iG,kG,jG,lG)*B3(kG,mG,lG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C3(i,j,m)+=A4(i,k,j,l)*B3(l,k,m);
           }
        }
     }
        }
}

C3Test(iG,jG,mG)=A4(iG,kG,jG,lG)*B3(lG,kG,mG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C3(i,j,m)+=A4(i,k,j,l)*B3(l,m,k);
           }
        }
     }
        }
}

C3Test(iG,jG,mG)=A4(iG,kG,jG,lG)*B3(lG,mG,kG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C3(i,j,m)+=A4(i,k,j,l)*B3(m,k,l);
           }
        }
     }
        }
}

C3Test(iG,jG,mG)=A4(iG,kG,jG,lG)*B3(mG,kG,lG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C3(i,j,m)+=A4(i,k,j,l)*B3(m,l,k);
           }
        }
     }
        }
}

C3Test(iG,jG,mG)=A4(iG,kG,jG,lG)*B3(mG,lG,kG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C3(i,j,m)+=A4(i,k,l,j)*B3(k,l,m);
           }
        }
     }
        }
}

C3Test(iG,jG,mG)=A4(iG,kG,lG,jG)*B3(kG,lG,mG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C3(i,j,m)+=A4(i,k,l,j)*B3(k,m,l);
           }
        }
     }
        }
}

C3Test(iG,jG,mG)=A4(iG,kG,lG,jG)*B3(kG,mG,lG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C3(i,j,m)+=A4(i,k,l,j)*B3(l,k,m);
           }
        }
     }
        }
}

C3Test(iG,jG,mG)=A4(iG,kG,lG,jG)*B3(lG,kG,mG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C3(i,j,m)+=A4(i,k,l,j)*B3(l,m,k);
           }
        }
     }
        }
}

C3Test(iG,jG,mG)=A4(iG,kG,lG,jG)*B3(lG,mG,kG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C3(i,j,m)+=A4(i,k,l,j)*B3(m,k,l);
           }
        }
     }
        }
}

C3Test(iG,jG,mG)=A4(iG,kG,lG,jG)*B3(mG,kG,lG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C3(i,j,m)+=A4(i,k,l,j)*B3(m,l,k);
           }
        }
     }
        }
}

C3Test(iG,jG,mG)=A4(iG,kG,lG,jG)*B3(mG,lG,kG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C3(i,j,m)+=A4(j,i,k,l)*B3(k,l,m);
           }
        }
     }
        }
}

C3Test(iG,jG,mG)=A4(jG,iG,kG,lG)*B3(kG,lG,mG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C3(i,j,m)+=A4(k,i,j,l)*B3(k,l,m);
           }
        }
     }
        }
}

C3Test(iG,jG,mG)=A4(kG,iG,jG,lG)*B3(kG,lG,mG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C3(i,j,m)+=A4(k,i,j,l)*B3(k,m,l);
           }
        }
     }
        }
}

C3Test(iG,jG,mG)=A4(kG,iG,jG,lG)*B3(kG,mG,lG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C3(i,j,m)+=A4(k,i,j,l)*B3(l,k,m);
           }
        }
     }
        }
}

C3Test(iG,jG,mG)=A4(kG,iG,jG,lG)*B3(lG,kG,mG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C3(i,j,m)+=A4(k,i,j,l)*B3(l,m,k);
           }
        }
     }
        }
}

C3Test(iG,jG,mG)=A4(kG,iG,jG,lG)*B3(lG,mG,kG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C3(i,j,m)+=A4(k,i,j,l)*B3(m,k,l);
           }
        }
     }
        }
}

C3Test(iG,jG,mG)=A4(kG,iG,jG,lG)*B3(mG,kG,lG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C3(i,j,m)+=A4(k,i,j,l)*B3(m,l,k);
           }
        }
     }
        }
}

C3Test(iG,jG,mG)=A4(kG,iG,jG,lG)*B3(mG,lG,kG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C3(i,j,m)+=A4(k,i,l,j)*B3(k,l,m);
           }
        }
     }
        }
}

C3Test(iG,jG,mG)=A4(kG,iG,lG,jG)*B3(kG,lG,mG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C3(i,j,m)+=A4(k,i,l,j)*B3(k,m,l);
           }
        }
     }
        }
}

C3Test(iG,jG,mG)=A4(kG,iG,lG,jG)*B3(kG,mG,lG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C3(i,j,m)+=A4(k,i,l,j)*B3(l,k,m);
           }
        }
     }
        }
}

C3Test(iG,jG,mG)=A4(kG,iG,lG,jG)*B3(lG,kG,mG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C3(i,j,m)+=A4(k,i,l,j)*B3(l,m,k);
           }
        }
     }
        }
}

C3Test(iG,jG,mG)=A4(kG,iG,lG,jG)*B3(lG,mG,kG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C3(i,j,m)+=A4(k,i,l,j)*B3(m,k,l);
           }
        }
     }
        }
}

C3Test(iG,jG,mG)=A4(kG,iG,lG,jG)*B3(mG,kG,lG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C3(i,j,m)+=A4(k,i,l,j)*B3(m,l,k);
           }
        }
     }
        }
}

C3Test(iG,jG,mG)=A4(kG,iG,lG,jG)*B3(mG,lG,kG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C3(i,j,m)+=A4(k,l,i,j)*B3(k,l,m);
           }
        }
     }
        }
}

C3Test(iG,jG,mG)=A4(kG,lG,iG,jG)*B3(kG,lG,mG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C3(i,j,m)+=A4(k,l,i,j)*B3(k,m,l);
           }
        }
     }
        }
}

C3Test(iG,jG,mG)=A4(kG,lG,iG,jG)*B3(kG,mG,lG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C3(i,j,m)+=A4(k,l,i,j)*B3(l,k,m);
           }
        }
     }
        }
}

C3Test(iG,jG,mG)=A4(kG,lG,iG,jG)*B3(lG,kG,mG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C3(i,j,m)+=A4(k,l,i,j)*B3(l,m,k);
           }
        }
     }
        }
}

C3Test(iG,jG,mG)=A4(kG,lG,iG,jG)*B3(lG,mG,kG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C3(i,j,m)+=A4(k,l,i,j)*B3(m,k,l);
           }
        }
     }
        }
}

C3Test(iG,jG,mG)=A4(kG,lG,iG,jG)*B3(mG,kG,lG);
assert(C3==C3Test);


C3=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C3(i,j,m)+=A4(k,l,i,j)*B3(m,l,k);
           }
        }
     }
        }
}

C3Test(iG,jG,mG)=A4(kG,lG,iG,jG)*B3(mG,lG,kG);
assert(C3==C3Test);


C3=0;


}
