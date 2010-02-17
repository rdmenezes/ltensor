 #include "../../LTensor.h"
 #include <iostream>
 #define CHECK_OOB
 #include<fstream>
 int main(void){
 Marray<double,3> A3(3,3,3);
 Marray<double,3> B3(3,3,3);
 Marray<double,4> C4Test(3,3,3,3);
 Marray<double,4> C4(3,3,3,3);
 A3.sucesion(0,1);
 B3.sucesion(0,1);
 Index<'i'> iG;
 Index<'j'> jG;
 Index<'k'> kG;
 Index<'l'> lG;
 Index<'m'> mG;
 for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int m=0;m<3;m++){
                 for(int k=0;k<3;k++){
                 C4(j,k,l,m)+=A3(i,j,k)*B3(i,l,m);
           }
     }
        }
    }
}

C4Test(jG,kG,lG,mG)=A3(iG,jG,kG)*B3(iG,lG,mG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int m=0;m<3;m++){
                 for(int k=0;k<3;k++){
                 C4(j,k,l,m)+=A3(i,j,k)*B3(l,i,m);
           }
     }
        }
    }
}

C4Test(jG,kG,lG,mG)=A3(iG,jG,kG)*B3(lG,iG,mG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int m=0;m<3;m++){
                 for(int k=0;k<3;k++){
                 C4(j,k,l,m)+=A3(i,j,k)*B3(l,m,i);
           }
     }
        }
    }
}

C4Test(jG,kG,lG,mG)=A3(iG,jG,kG)*B3(lG,mG,iG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int m=0;m<3;m++){
                 for(int k=0;k<3;k++){
                 C4(j,k,l,m)+=A3(i,k,j)*B3(i,l,m);
           }
     }
        }
    }
}

C4Test(jG,kG,lG,mG)=A3(iG,kG,jG)*B3(iG,lG,mG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int m=0;m<3;m++){
                 for(int k=0;k<3;k++){
                 C4(j,k,l,m)+=A3(j,i,k)*B3(i,l,m);
           }
     }
        }
    }
}

C4Test(jG,kG,lG,mG)=A3(jG,iG,kG)*B3(iG,lG,mG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int m=0;m<3;m++){
                 for(int k=0;k<3;k++){
                 C4(j,k,l,m)+=A3(j,i,k)*B3(l,i,m);
           }
     }
        }
    }
}

C4Test(jG,kG,lG,mG)=A3(jG,iG,kG)*B3(lG,iG,mG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int m=0;m<3;m++){
                 for(int k=0;k<3;k++){
                 C4(j,k,l,m)+=A3(j,i,k)*B3(l,m,i);
           }
     }
        }
    }
}

C4Test(jG,kG,lG,mG)=A3(jG,iG,kG)*B3(lG,mG,iG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int m=0;m<3;m++){
                 for(int k=0;k<3;k++){
                 C4(j,k,l,m)+=A3(j,k,i)*B3(i,l,m);
           }
     }
        }
    }
}

C4Test(jG,kG,lG,mG)=A3(jG,kG,iG)*B3(iG,lG,mG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int m=0;m<3;m++){
                 for(int k=0;k<3;k++){
                 C4(j,k,l,m)+=A3(j,k,i)*B3(l,i,m);
           }
     }
        }
    }
}

C4Test(jG,kG,lG,mG)=A3(jG,kG,iG)*B3(lG,iG,mG);
assert(C4==C4Test);


C4=0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
         for (int l=0;l<3;l++){
            for(int m=0;m<3;m++){
                 for(int k=0;k<3;k++){
                 C4(j,k,l,m)+=A3(j,k,i)*B3(l,m,i);
           }
     }
        }
    }
}

C4Test(jG,kG,lG,mG)=A3(jG,kG,iG)*B3(lG,mG,iG);
assert(C4==C4Test);


C4=0;


}
