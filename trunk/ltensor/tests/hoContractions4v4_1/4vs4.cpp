 #include "../../LTensor.h"
 #include <iostream>
 #define CHECK_OOB
 #include<fstream>
 int main(void){
 Marray<double,4> A4(3,3,3,3);
 Marray<double,4> B4(3,3,3,3);
 Marray<double,4> C4Test(3,3,3,3);
 Marray<double,4> C4(3,3,3,3);
 A4.sucesion(0,1);
 B4.sucesion(0,1);
 Index<'i'> iG;
 Index<'j'> jG;
 Index<'k'> kG;
 Index<'l'> lG;
 Index<'m'> mG;
 Index<'n'> nG;
 for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(i,j,k,l)*B4(k,l,m,n);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(iG,jG,kG,lG)*B4(kG,lG,mG,nG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(i,j,k,l)*B4(k,m,l,n);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(iG,jG,kG,lG)*B4(kG,mG,lG,nG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(i,j,k,l)*B4(k,m,n,l);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(iG,jG,kG,lG)*B4(kG,mG,nG,lG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(i,j,k,l)*B4(l,k,m,n);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(iG,jG,kG,lG)*B4(lG,kG,mG,nG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(i,j,k,l)*B4(l,m,k,n);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(iG,jG,kG,lG)*B4(lG,mG,kG,nG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(i,j,k,l)*B4(l,m,n,k);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(iG,jG,kG,lG)*B4(lG,mG,nG,kG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(i,j,k,l)*B4(m,k,l,n);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(iG,jG,kG,lG)*B4(mG,kG,lG,nG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(i,j,k,l)*B4(m,k,n,l);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(iG,jG,kG,lG)*B4(mG,kG,nG,lG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(i,j,k,l)*B4(m,l,k,n);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(iG,jG,kG,lG)*B4(mG,lG,kG,nG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(i,j,k,l)*B4(m,l,n,k);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(iG,jG,kG,lG)*B4(mG,lG,nG,kG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(i,j,k,l)*B4(m,n,k,l);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(iG,jG,kG,lG)*B4(mG,nG,kG,lG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(i,j,k,l)*B4(m,n,l,k);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(iG,jG,kG,lG)*B4(mG,nG,lG,kG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(i,j,l,k)*B4(l,k,m,n);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(iG,jG,lG,kG)*B4(lG,kG,mG,nG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(i,k,j,l)*B4(k,l,m,n);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(iG,kG,jG,lG)*B4(kG,lG,mG,nG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(i,k,j,l)*B4(k,m,l,n);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(iG,kG,jG,lG)*B4(kG,mG,lG,nG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(i,k,j,l)*B4(k,m,n,l);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(iG,kG,jG,lG)*B4(kG,mG,nG,lG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(i,k,j,l)*B4(l,k,m,n);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(iG,kG,jG,lG)*B4(lG,kG,mG,nG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(i,k,j,l)*B4(l,m,k,n);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(iG,kG,jG,lG)*B4(lG,mG,kG,nG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(i,k,j,l)*B4(l,m,n,k);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(iG,kG,jG,lG)*B4(lG,mG,nG,kG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(i,k,j,l)*B4(m,k,l,n);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(iG,kG,jG,lG)*B4(mG,kG,lG,nG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(i,k,j,l)*B4(m,k,n,l);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(iG,kG,jG,lG)*B4(mG,kG,nG,lG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(i,k,j,l)*B4(m,l,k,n);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(iG,kG,jG,lG)*B4(mG,lG,kG,nG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(i,k,j,l)*B4(m,l,n,k);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(iG,kG,jG,lG)*B4(mG,lG,nG,kG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(i,k,j,l)*B4(m,n,k,l);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(iG,kG,jG,lG)*B4(mG,nG,kG,lG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(i,k,j,l)*B4(m,n,l,k);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(iG,kG,jG,lG)*B4(mG,nG,lG,kG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(i,k,l,j)*B4(k,l,m,n);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(iG,kG,lG,jG)*B4(kG,lG,mG,nG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(i,k,l,j)*B4(k,m,l,n);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(iG,kG,lG,jG)*B4(kG,mG,lG,nG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(i,k,l,j)*B4(k,m,n,l);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(iG,kG,lG,jG)*B4(kG,mG,nG,lG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(i,k,l,j)*B4(l,k,m,n);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(iG,kG,lG,jG)*B4(lG,kG,mG,nG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(i,k,l,j)*B4(l,m,k,n);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(iG,kG,lG,jG)*B4(lG,mG,kG,nG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(i,k,l,j)*B4(l,m,n,k);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(iG,kG,lG,jG)*B4(lG,mG,nG,kG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(i,k,l,j)*B4(m,k,l,n);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(iG,kG,lG,jG)*B4(mG,kG,lG,nG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(i,k,l,j)*B4(m,k,n,l);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(iG,kG,lG,jG)*B4(mG,kG,nG,lG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(i,k,l,j)*B4(m,l,k,n);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(iG,kG,lG,jG)*B4(mG,lG,kG,nG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(i,k,l,j)*B4(m,l,n,k);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(iG,kG,lG,jG)*B4(mG,lG,nG,kG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(i,k,l,j)*B4(m,n,k,l);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(iG,kG,lG,jG)*B4(mG,nG,kG,lG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(i,k,l,j)*B4(m,n,l,k);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(iG,kG,lG,jG)*B4(mG,nG,lG,kG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(k,i,j,l)*B4(k,l,m,n);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(kG,iG,jG,lG)*B4(kG,lG,mG,nG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(k,i,j,l)*B4(k,m,l,n);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(kG,iG,jG,lG)*B4(kG,mG,lG,nG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(k,i,j,l)*B4(k,m,n,l);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(kG,iG,jG,lG)*B4(kG,mG,nG,lG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(k,i,j,l)*B4(l,k,m,n);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(kG,iG,jG,lG)*B4(lG,kG,mG,nG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(k,i,j,l)*B4(l,m,k,n);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(kG,iG,jG,lG)*B4(lG,mG,kG,nG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(k,i,j,l)*B4(l,m,n,k);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(kG,iG,jG,lG)*B4(lG,mG,nG,kG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(k,i,j,l)*B4(m,k,l,n);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(kG,iG,jG,lG)*B4(mG,kG,lG,nG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(k,i,j,l)*B4(m,k,n,l);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(kG,iG,jG,lG)*B4(mG,kG,nG,lG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(k,i,j,l)*B4(m,l,k,n);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(kG,iG,jG,lG)*B4(mG,lG,kG,nG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(k,i,j,l)*B4(m,l,n,k);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(kG,iG,jG,lG)*B4(mG,lG,nG,kG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(k,i,j,l)*B4(m,n,k,l);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(kG,iG,jG,lG)*B4(mG,nG,kG,lG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(k,i,j,l)*B4(m,n,l,k);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(kG,iG,jG,lG)*B4(mG,nG,lG,kG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(k,i,l,j)*B4(k,l,m,n);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(kG,iG,lG,jG)*B4(kG,lG,mG,nG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(k,i,l,j)*B4(k,m,l,n);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(kG,iG,lG,jG)*B4(kG,mG,lG,nG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(k,i,l,j)*B4(k,m,n,l);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(kG,iG,lG,jG)*B4(kG,mG,nG,lG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(k,i,l,j)*B4(l,k,m,n);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(kG,iG,lG,jG)*B4(lG,kG,mG,nG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(k,i,l,j)*B4(l,m,k,n);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(kG,iG,lG,jG)*B4(lG,mG,kG,nG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(k,i,l,j)*B4(l,m,n,k);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(kG,iG,lG,jG)*B4(lG,mG,nG,kG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(k,i,l,j)*B4(m,k,l,n);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(kG,iG,lG,jG)*B4(mG,kG,lG,nG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(k,i,l,j)*B4(m,k,n,l);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(kG,iG,lG,jG)*B4(mG,kG,nG,lG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(k,i,l,j)*B4(m,l,k,n);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(kG,iG,lG,jG)*B4(mG,lG,kG,nG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(k,i,l,j)*B4(m,l,n,k);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(kG,iG,lG,jG)*B4(mG,lG,nG,kG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(k,i,l,j)*B4(m,n,k,l);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(kG,iG,lG,jG)*B4(mG,nG,kG,lG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(k,i,l,j)*B4(m,n,l,k);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(kG,iG,lG,jG)*B4(mG,nG,lG,kG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(k,l,i,j)*B4(k,l,m,n);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(kG,lG,iG,jG)*B4(kG,lG,mG,nG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(k,l,i,j)*B4(k,m,l,n);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(kG,lG,iG,jG)*B4(kG,mG,lG,nG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(k,l,i,j)*B4(k,m,n,l);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(kG,lG,iG,jG)*B4(kG,mG,nG,lG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(k,l,i,j)*B4(l,k,m,n);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(kG,lG,iG,jG)*B4(lG,kG,mG,nG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(k,l,i,j)*B4(l,m,k,n);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(kG,lG,iG,jG)*B4(lG,mG,kG,nG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(k,l,i,j)*B4(l,m,n,k);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(kG,lG,iG,jG)*B4(lG,mG,nG,kG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(k,l,i,j)*B4(m,k,l,n);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(kG,lG,iG,jG)*B4(mG,kG,lG,nG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(k,l,i,j)*B4(m,k,n,l);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(kG,lG,iG,jG)*B4(mG,kG,nG,lG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(k,l,i,j)*B4(m,l,k,n);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(kG,lG,iG,jG)*B4(mG,lG,kG,nG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(k,l,i,j)*B4(m,l,n,k);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(kG,lG,iG,jG)*B4(mG,lG,nG,kG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(k,l,i,j)*B4(m,n,k,l);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(kG,lG,iG,jG)*B4(mG,nG,kG,lG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for (int n=0;n<3;n++){
                    for(int k=0;k<3;k++){
                 C4(i,j,m,n)+=A4(k,l,i,j)*B4(m,n,l,k);
           }
        }
     }
     }
        }
}

C4Test(iG,jG,mG,nG)=A4(kG,lG,iG,jG)*B4(mG,nG,lG,kG);
assert(C4==C4Test);


C4=0;


}
