 #include "../../LTensor.h"
 #include <iostream>
 #define CHECK_OOB
 #include<fstream>
 int main(void){
 Marray<double,4> A4(3,3,3,3);
 Marray<double,4> B4(3,3,3,3);
 Marray<double,2> C2Test(3,3);
 Marray<double,2> C2(3,3);
 A4.sucesion(0,1);
 B4.sucesion(0,1);
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
                 C2(i,m)+=A4(i,j,k,l)*B4(j,k,l,m);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(iG,jG,kG,lG)*B4(jG,kG,lG,mG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(i,j,k,l)*B4(j,k,m,l);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(iG,jG,kG,lG)*B4(jG,kG,mG,lG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(i,j,k,l)*B4(j,l,k,m);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(iG,jG,kG,lG)*B4(jG,lG,kG,mG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(i,j,k,l)*B4(j,l,m,k);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(iG,jG,kG,lG)*B4(jG,lG,mG,kG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(i,j,k,l)*B4(j,m,k,l);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(iG,jG,kG,lG)*B4(jG,mG,kG,lG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(i,j,k,l)*B4(j,m,l,k);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(iG,jG,kG,lG)*B4(jG,mG,lG,kG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(i,j,k,l)*B4(k,j,l,m);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(iG,jG,kG,lG)*B4(kG,jG,lG,mG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(i,j,k,l)*B4(k,j,m,l);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(iG,jG,kG,lG)*B4(kG,jG,mG,lG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(i,j,k,l)*B4(k,l,j,m);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(iG,jG,kG,lG)*B4(kG,lG,jG,mG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(i,j,k,l)*B4(k,l,m,j);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(iG,jG,kG,lG)*B4(kG,lG,mG,jG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(i,j,k,l)*B4(k,m,j,l);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(iG,jG,kG,lG)*B4(kG,mG,jG,lG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(i,j,k,l)*B4(k,m,l,j);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(iG,jG,kG,lG)*B4(kG,mG,lG,jG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(i,j,k,l)*B4(l,j,k,m);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(iG,jG,kG,lG)*B4(lG,jG,kG,mG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(i,j,k,l)*B4(l,j,m,k);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(iG,jG,kG,lG)*B4(lG,jG,mG,kG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(i,j,k,l)*B4(l,k,j,m);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(iG,jG,kG,lG)*B4(lG,kG,jG,mG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(i,j,k,l)*B4(l,k,m,j);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(iG,jG,kG,lG)*B4(lG,kG,mG,jG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(i,j,k,l)*B4(l,m,j,k);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(iG,jG,kG,lG)*B4(lG,mG,jG,kG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(i,j,k,l)*B4(l,m,k,j);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(iG,jG,kG,lG)*B4(lG,mG,kG,jG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(i,j,k,l)*B4(m,j,k,l);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(iG,jG,kG,lG)*B4(mG,jG,kG,lG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(i,j,k,l)*B4(m,j,l,k);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(iG,jG,kG,lG)*B4(mG,jG,lG,kG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(i,j,k,l)*B4(m,k,j,l);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(iG,jG,kG,lG)*B4(mG,kG,jG,lG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(i,j,k,l)*B4(m,k,l,j);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(iG,jG,kG,lG)*B4(mG,kG,lG,jG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(i,j,k,l)*B4(m,l,j,k);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(iG,jG,kG,lG)*B4(mG,lG,jG,kG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(i,j,k,l)*B4(m,l,k,j);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(iG,jG,kG,lG)*B4(mG,lG,kG,jG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(i,k,j,l)*B4(k,j,l,m);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(iG,kG,jG,lG)*B4(kG,jG,lG,mG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,i,k,l)*B4(j,k,l,m);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,iG,kG,lG)*B4(jG,kG,lG,mG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,i,k,l)*B4(j,k,m,l);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,iG,kG,lG)*B4(jG,kG,mG,lG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,i,k,l)*B4(j,l,k,m);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,iG,kG,lG)*B4(jG,lG,kG,mG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,i,k,l)*B4(j,l,m,k);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,iG,kG,lG)*B4(jG,lG,mG,kG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,i,k,l)*B4(j,m,k,l);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,iG,kG,lG)*B4(jG,mG,kG,lG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,i,k,l)*B4(j,m,l,k);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,iG,kG,lG)*B4(jG,mG,lG,kG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,i,k,l)*B4(k,j,l,m);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,iG,kG,lG)*B4(kG,jG,lG,mG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,i,k,l)*B4(k,j,m,l);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,iG,kG,lG)*B4(kG,jG,mG,lG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,i,k,l)*B4(k,l,j,m);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,iG,kG,lG)*B4(kG,lG,jG,mG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,i,k,l)*B4(k,l,m,j);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,iG,kG,lG)*B4(kG,lG,mG,jG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,i,k,l)*B4(k,m,j,l);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,iG,kG,lG)*B4(kG,mG,jG,lG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,i,k,l)*B4(k,m,l,j);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,iG,kG,lG)*B4(kG,mG,lG,jG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,i,k,l)*B4(l,j,k,m);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,iG,kG,lG)*B4(lG,jG,kG,mG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,i,k,l)*B4(l,j,m,k);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,iG,kG,lG)*B4(lG,jG,mG,kG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,i,k,l)*B4(l,k,j,m);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,iG,kG,lG)*B4(lG,kG,jG,mG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,i,k,l)*B4(l,k,m,j);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,iG,kG,lG)*B4(lG,kG,mG,jG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,i,k,l)*B4(l,m,j,k);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,iG,kG,lG)*B4(lG,mG,jG,kG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,i,k,l)*B4(l,m,k,j);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,iG,kG,lG)*B4(lG,mG,kG,jG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,i,k,l)*B4(m,j,k,l);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,iG,kG,lG)*B4(mG,jG,kG,lG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,i,k,l)*B4(m,j,l,k);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,iG,kG,lG)*B4(mG,jG,lG,kG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,i,k,l)*B4(m,k,j,l);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,iG,kG,lG)*B4(mG,kG,jG,lG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,i,k,l)*B4(m,k,l,j);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,iG,kG,lG)*B4(mG,kG,lG,jG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,i,k,l)*B4(m,l,j,k);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,iG,kG,lG)*B4(mG,lG,jG,kG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,i,k,l)*B4(m,l,k,j);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,iG,kG,lG)*B4(mG,lG,kG,jG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,i,l)*B4(j,k,l,m);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,iG,lG)*B4(jG,kG,lG,mG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,i,l)*B4(j,k,m,l);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,iG,lG)*B4(jG,kG,mG,lG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,i,l)*B4(j,l,k,m);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,iG,lG)*B4(jG,lG,kG,mG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,i,l)*B4(j,l,m,k);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,iG,lG)*B4(jG,lG,mG,kG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,i,l)*B4(j,m,k,l);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,iG,lG)*B4(jG,mG,kG,lG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,i,l)*B4(j,m,l,k);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,iG,lG)*B4(jG,mG,lG,kG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,i,l)*B4(k,j,l,m);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,iG,lG)*B4(kG,jG,lG,mG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,i,l)*B4(k,j,m,l);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,iG,lG)*B4(kG,jG,mG,lG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,i,l)*B4(k,l,j,m);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,iG,lG)*B4(kG,lG,jG,mG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,i,l)*B4(k,l,m,j);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,iG,lG)*B4(kG,lG,mG,jG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,i,l)*B4(k,m,j,l);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,iG,lG)*B4(kG,mG,jG,lG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,i,l)*B4(k,m,l,j);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,iG,lG)*B4(kG,mG,lG,jG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,i,l)*B4(l,j,k,m);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,iG,lG)*B4(lG,jG,kG,mG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,i,l)*B4(l,j,m,k);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,iG,lG)*B4(lG,jG,mG,kG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,i,l)*B4(l,k,j,m);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,iG,lG)*B4(lG,kG,jG,mG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,i,l)*B4(l,k,m,j);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,iG,lG)*B4(lG,kG,mG,jG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,i,l)*B4(l,m,j,k);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,iG,lG)*B4(lG,mG,jG,kG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,i,l)*B4(l,m,k,j);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,iG,lG)*B4(lG,mG,kG,jG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,i,l)*B4(m,j,k,l);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,iG,lG)*B4(mG,jG,kG,lG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,i,l)*B4(m,j,l,k);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,iG,lG)*B4(mG,jG,lG,kG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,i,l)*B4(m,k,j,l);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,iG,lG)*B4(mG,kG,jG,lG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,i,l)*B4(m,k,l,j);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,iG,lG)*B4(mG,kG,lG,jG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,i,l)*B4(m,l,j,k);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,iG,lG)*B4(mG,lG,jG,kG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,i,l)*B4(m,l,k,j);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,iG,lG)*B4(mG,lG,kG,jG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,l,i)*B4(j,k,l,m);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,lG,iG)*B4(jG,kG,lG,mG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,l,i)*B4(j,k,m,l);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,lG,iG)*B4(jG,kG,mG,lG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,l,i)*B4(j,l,k,m);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,lG,iG)*B4(jG,lG,kG,mG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,l,i)*B4(j,l,m,k);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,lG,iG)*B4(jG,lG,mG,kG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,l,i)*B4(j,m,k,l);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,lG,iG)*B4(jG,mG,kG,lG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,l,i)*B4(j,m,l,k);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,lG,iG)*B4(jG,mG,lG,kG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,l,i)*B4(k,j,l,m);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,lG,iG)*B4(kG,jG,lG,mG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,l,i)*B4(k,j,m,l);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,lG,iG)*B4(kG,jG,mG,lG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,l,i)*B4(k,l,j,m);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,lG,iG)*B4(kG,lG,jG,mG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,l,i)*B4(k,l,m,j);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,lG,iG)*B4(kG,lG,mG,jG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,l,i)*B4(k,m,j,l);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,lG,iG)*B4(kG,mG,jG,lG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,l,i)*B4(k,m,l,j);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,lG,iG)*B4(kG,mG,lG,jG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,l,i)*B4(l,j,k,m);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,lG,iG)*B4(lG,jG,kG,mG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,l,i)*B4(l,j,m,k);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,lG,iG)*B4(lG,jG,mG,kG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,l,i)*B4(l,k,j,m);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,lG,iG)*B4(lG,kG,jG,mG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,l,i)*B4(l,k,m,j);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,lG,iG)*B4(lG,kG,mG,jG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,l,i)*B4(l,m,j,k);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,lG,iG)*B4(lG,mG,jG,kG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,l,i)*B4(l,m,k,j);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,lG,iG)*B4(lG,mG,kG,jG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,l,i)*B4(m,j,k,l);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,lG,iG)*B4(mG,jG,kG,lG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,l,i)*B4(m,j,l,k);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,lG,iG)*B4(mG,jG,lG,kG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,l,i)*B4(m,k,j,l);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,lG,iG)*B4(mG,kG,jG,lG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,l,i)*B4(m,k,l,j);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,lG,iG)*B4(mG,kG,lG,jG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,l,i)*B4(m,l,j,k);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,lG,iG)*B4(mG,lG,jG,kG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C2(i,m)+=A4(j,k,l,i)*B4(m,l,k,j);
           }
        }
     }
        }
}

C2Test(iG,mG)=A4(jG,kG,lG,iG)*B4(mG,lG,kG,jG);
assert(C2==C2Test);


C2=0;


}
