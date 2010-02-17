 #include "../../LTensor.h"
 #include <iostream>
 #define CHECK_OOB
 #include<fstream>
 int main(void){
 Marray<double,4> A4(3,3,3,3);
 Marray<double,2> B2(3,3);
 Marray<double,4> C4Test(3,3,3,3);
 Marray<double,4> C4(3,3,3,3);
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
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C4(i,j,k,m)+=A4(i,j,k,l)*B2(l,m);
           }
     }
        }
        }
}

C4Test(iG,jG,kG,mG)=A4(iG,jG,kG,lG)*B2(lG,mG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C4(i,j,k,m)+=A4(i,j,k,l)*B2(m,l);
           }
     }
        }
        }
}

C4Test(iG,jG,kG,mG)=A4(iG,jG,kG,lG)*B2(mG,lG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C4(i,j,k,m)+=A4(i,j,l,k)*B2(l,m);
           }
     }
        }
        }
}

C4Test(iG,jG,kG,mG)=A4(iG,jG,lG,kG)*B2(lG,mG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C4(i,j,k,m)+=A4(i,j,l,k)*B2(m,l);
           }
     }
        }
        }
}

C4Test(iG,jG,kG,mG)=A4(iG,jG,lG,kG)*B2(mG,lG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C4(i,j,k,m)+=A4(i,l,j,k)*B2(l,m);
           }
     }
        }
        }
}

C4Test(iG,jG,kG,mG)=A4(iG,lG,jG,kG)*B2(lG,mG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C4(i,j,k,m)+=A4(i,l,j,k)*B2(m,l);
           }
     }
        }
        }
}

C4Test(iG,jG,kG,mG)=A4(iG,lG,jG,kG)*B2(mG,lG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C4(i,j,k,m)+=A4(j,i,k,l)*B2(l,m);
           }
     }
        }
        }
}

C4Test(iG,jG,kG,mG)=A4(jG,iG,kG,lG)*B2(lG,mG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C4(i,j,k,m)+=A4(l,i,j,k)*B2(l,m);
           }
     }
        }
        }
}

C4Test(iG,jG,kG,mG)=A4(lG,iG,jG,kG)*B2(lG,mG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for (int m=0;m<3;m++){
                for(int k=0;k<3;k++){
                 C4(i,j,k,m)+=A4(l,i,j,k)*B2(m,l);
           }
     }
        }
        }
}

C4Test(iG,jG,kG,mG)=A4(lG,iG,jG,kG)*B2(mG,lG);
assert(C4==C4Test);


C4=0;


}
