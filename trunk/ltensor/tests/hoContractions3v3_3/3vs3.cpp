 #include "../../LTensor.h"
 #include <iostream>
 #define CHECK_OOB
 #include<fstream>
 int main(void){
 Marray<double,3> A3(3,3,3);
 Marray<double,3> B3(3,3,3);
 Marray<double,2> C2Test(3,3);
 Marray<double,2> C2(3,3);
 A3.sucesion(0,1);
 B3.sucesion(0,1);
 Index<'i'> iG;
 Index<'j'> jG;
 Index<'k'> kG;
 Index<'l'> lG;
 for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C2(k,l)+=A3(i,j,k)*B3(i,j,l);
           }
     }
        }
}

C2Test(kG,lG)=A3(iG,jG,kG)*B3(iG,jG,lG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C2(k,l)+=A3(i,j,k)*B3(i,l,j);
           }
     }
        }
}

C2Test(kG,lG)=A3(iG,jG,kG)*B3(iG,lG,jG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C2(k,l)+=A3(i,j,k)*B3(j,i,l);
           }
     }
        }
}

C2Test(kG,lG)=A3(iG,jG,kG)*B3(jG,iG,lG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C2(k,l)+=A3(i,j,k)*B3(j,l,i);
           }
     }
        }
}

C2Test(kG,lG)=A3(iG,jG,kG)*B3(jG,lG,iG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C2(k,l)+=A3(i,j,k)*B3(l,i,j);
           }
     }
        }
}

C2Test(kG,lG)=A3(iG,jG,kG)*B3(lG,iG,jG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C2(k,l)+=A3(i,j,k)*B3(l,j,i);
           }
     }
        }
}

C2Test(kG,lG)=A3(iG,jG,kG)*B3(lG,jG,iG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C2(k,l)+=A3(i,k,j)*B3(i,j,l);
           }
     }
        }
}

C2Test(kG,lG)=A3(iG,kG,jG)*B3(iG,jG,lG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C2(k,l)+=A3(i,k,j)*B3(i,l,j);
           }
     }
        }
}

C2Test(kG,lG)=A3(iG,kG,jG)*B3(iG,lG,jG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C2(k,l)+=A3(i,k,j)*B3(j,i,l);
           }
     }
        }
}

C2Test(kG,lG)=A3(iG,kG,jG)*B3(jG,iG,lG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C2(k,l)+=A3(i,k,j)*B3(j,l,i);
           }
     }
        }
}

C2Test(kG,lG)=A3(iG,kG,jG)*B3(jG,lG,iG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C2(k,l)+=A3(i,k,j)*B3(l,i,j);
           }
     }
        }
}

C2Test(kG,lG)=A3(iG,kG,jG)*B3(lG,iG,jG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C2(k,l)+=A3(i,k,j)*B3(l,j,i);
           }
     }
        }
}

C2Test(kG,lG)=A3(iG,kG,jG)*B3(lG,jG,iG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C2(k,l)+=A3(k,i,j)*B3(i,j,l);
           }
     }
        }
}

C2Test(kG,lG)=A3(kG,iG,jG)*B3(iG,jG,lG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C2(k,l)+=A3(k,i,j)*B3(i,l,j);
           }
     }
        }
}

C2Test(kG,lG)=A3(kG,iG,jG)*B3(iG,lG,jG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C2(k,l)+=A3(k,i,j)*B3(j,i,l);
           }
     }
        }
}

C2Test(kG,lG)=A3(kG,iG,jG)*B3(jG,iG,lG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C2(k,l)+=A3(k,i,j)*B3(j,l,i);
           }
     }
        }
}

C2Test(kG,lG)=A3(kG,iG,jG)*B3(jG,lG,iG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C2(k,l)+=A3(k,i,j)*B3(l,i,j);
           }
     }
        }
}

C2Test(kG,lG)=A3(kG,iG,jG)*B3(lG,iG,jG);
assert(C2==C2Test);


C2=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int k=0;k<3;k++){
                 C2(k,l)+=A3(k,i,j)*B3(l,j,i);
           }
     }
        }
}

C2Test(kG,lG)=A3(kG,iG,jG)*B3(lG,jG,iG);
assert(C2==C2Test);


C2=0;


}
