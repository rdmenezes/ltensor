 #include "../../LTensor.h"
 #include <iostream>
 #define CHECK_OOB
 #include<fstream>
 int main(void){
 Marray<double,4> A4(3,3,3,3);
 Marray<double,4> B4(3,3,3,3);
 double CTest=0.0;
 double C=0.0;
 A4.sucesion(0,1);
 B4.sucesion(0,1);
 Index<'i'> iG;
 Index<'j'> jG;
 Index<'k'> kG;
 Index<'l'> lG;
 for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C+=A4(i,j,k,l)*B4(i,j,k,l);
           }
        }
        }
}

CTest=A4(iG,jG,kG,lG)*B4(iG,jG,kG,lG);
assert(C==CTest);


C=0.0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C+=A4(i,j,k,l)*B4(i,j,l,k);
           }
        }
        }
}

CTest=A4(iG,jG,kG,lG)*B4(iG,jG,lG,kG);
assert(C==CTest);


C=0.0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C+=A4(i,j,k,l)*B4(i,k,j,l);
           }
        }
        }
}

CTest=A4(iG,jG,kG,lG)*B4(iG,kG,jG,lG);
assert(C==CTest);


C=0.0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C+=A4(i,j,k,l)*B4(i,k,l,j);
           }
        }
        }
}

CTest=A4(iG,jG,kG,lG)*B4(iG,kG,lG,jG);
assert(C==CTest);


C=0.0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C+=A4(i,j,k,l)*B4(i,l,j,k);
           }
        }
        }
}

CTest=A4(iG,jG,kG,lG)*B4(iG,lG,jG,kG);
assert(C==CTest);


C=0.0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C+=A4(i,j,k,l)*B4(i,l,k,j);
           }
        }
        }
}

CTest=A4(iG,jG,kG,lG)*B4(iG,lG,kG,jG);
assert(C==CTest);


C=0.0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C+=A4(i,j,k,l)*B4(j,i,k,l);
           }
        }
        }
}

CTest=A4(iG,jG,kG,lG)*B4(jG,iG,kG,lG);
assert(C==CTest);


C=0.0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C+=A4(i,j,k,l)*B4(j,i,l,k);
           }
        }
        }
}

CTest=A4(iG,jG,kG,lG)*B4(jG,iG,lG,kG);
assert(C==CTest);


C=0.0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C+=A4(i,j,k,l)*B4(j,k,i,l);
           }
        }
        }
}

CTest=A4(iG,jG,kG,lG)*B4(jG,kG,iG,lG);
assert(C==CTest);


C=0.0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C+=A4(i,j,k,l)*B4(j,k,l,i);
           }
        }
        }
}

CTest=A4(iG,jG,kG,lG)*B4(jG,kG,lG,iG);
assert(C==CTest);


C=0.0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C+=A4(i,j,k,l)*B4(j,l,i,k);
           }
        }
        }
}

CTest=A4(iG,jG,kG,lG)*B4(jG,lG,iG,kG);
assert(C==CTest);


C=0.0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C+=A4(i,j,k,l)*B4(j,l,k,i);
           }
        }
        }
}

CTest=A4(iG,jG,kG,lG)*B4(jG,lG,kG,iG);
assert(C==CTest);


C=0.0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C+=A4(i,j,k,l)*B4(k,i,j,l);
           }
        }
        }
}

CTest=A4(iG,jG,kG,lG)*B4(kG,iG,jG,lG);
assert(C==CTest);


C=0.0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C+=A4(i,j,k,l)*B4(k,i,l,j);
           }
        }
        }
}

CTest=A4(iG,jG,kG,lG)*B4(kG,iG,lG,jG);
assert(C==CTest);


C=0.0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C+=A4(i,j,k,l)*B4(k,j,i,l);
           }
        }
        }
}

CTest=A4(iG,jG,kG,lG)*B4(kG,jG,iG,lG);
assert(C==CTest);


C=0.0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C+=A4(i,j,k,l)*B4(k,j,l,i);
           }
        }
        }
}

CTest=A4(iG,jG,kG,lG)*B4(kG,jG,lG,iG);
assert(C==CTest);


C=0.0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C+=A4(i,j,k,l)*B4(k,l,i,j);
           }
        }
        }
}

CTest=A4(iG,jG,kG,lG)*B4(kG,lG,iG,jG);
assert(C==CTest);


C=0.0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C+=A4(i,j,k,l)*B4(k,l,j,i);
           }
        }
        }
}

CTest=A4(iG,jG,kG,lG)*B4(kG,lG,jG,iG);
assert(C==CTest);


C=0.0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C+=A4(i,j,k,l)*B4(l,i,j,k);
           }
        }
        }
}

CTest=A4(iG,jG,kG,lG)*B4(lG,iG,jG,kG);
assert(C==CTest);


C=0.0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C+=A4(i,j,k,l)*B4(l,i,k,j);
           }
        }
        }
}

CTest=A4(iG,jG,kG,lG)*B4(lG,iG,kG,jG);
assert(C==CTest);


C=0.0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C+=A4(i,j,k,l)*B4(l,j,i,k);
           }
        }
        }
}

CTest=A4(iG,jG,kG,lG)*B4(lG,jG,iG,kG);
assert(C==CTest);


C=0.0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C+=A4(i,j,k,l)*B4(l,j,k,i);
           }
        }
        }
}

CTest=A4(iG,jG,kG,lG)*B4(lG,jG,kG,iG);
assert(C==CTest);


C=0.0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C+=A4(i,j,k,l)*B4(l,k,i,j);
           }
        }
        }
}

CTest=A4(iG,jG,kG,lG)*B4(lG,kG,iG,jG);
assert(C==CTest);


C=0.0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C+=A4(i,j,k,l)*B4(l,k,j,i);
           }
        }
        }
}

CTest=A4(iG,jG,kG,lG)*B4(lG,kG,jG,iG);
assert(C==CTest);


C=0.0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C+=A4(i,k,j,l)*B4(i,k,j,l);
           }
        }
        }
}

CTest=A4(iG,kG,jG,lG)*B4(iG,kG,jG,lG);
assert(C==CTest);


C=0.0;


}
