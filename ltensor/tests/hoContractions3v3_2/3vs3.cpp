 #include "../../LTensor.h"
 #include <iostream>
 #define CHECK_OOB
 #include<fstream>
 int main(void){
 Marray<double,3> A3(3,3,3);
 Marray<double,3> B3(3,3,3);
 double C4Test=0.0;
 double C4=0.0;
 A3.sucesion(0,1);
 B3.sucesion(0,1);
 Index<'i'> iG;
 Index<'j'> jG;
 Index<'k'> kG;
 for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
                 for(int k=0;k<3;k++){
                 C4+=A3(i,j,k)*B3(i,j,k);
           }
     }
        }

C4Test=A3(iG,jG,kG)*B3(iG,jG,kG);
assert(C4==C4Test);


C4=0.0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
                 for(int k=0;k<3;k++){
                 C4+=A3(i,j,k)*B3(i,k,j);
           }
     }
        }

C4Test=A3(iG,jG,kG)*B3(iG,kG,jG);
assert(C4==C4Test);


C4=0.0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
                 for(int k=0;k<3;k++){
                 C4+=A3(i,j,k)*B3(j,i,k);
           }
     }
        }

C4Test=A3(iG,jG,kG)*B3(jG,iG,kG);
assert(C4==C4Test);


C4=0.0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
                 for(int k=0;k<3;k++){
                 C4+=A3(i,j,k)*B3(j,k,i);
           }
     }
        }

C4Test=A3(iG,jG,kG)*B3(jG,kG,iG);
assert(C4==C4Test);


C4=0.0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
                 for(int k=0;k<3;k++){
                 C4+=A3(i,j,k)*B3(k,i,j);
           }
     }
        }

C4Test=A3(iG,jG,kG)*B3(kG,iG,jG);
assert(C4==C4Test);


C4=0.0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
                 for(int k=0;k<3;k++){
                 C4+=A3(i,j,k)*B3(k,j,i);
           }
     }
        }

C4Test=A3(iG,jG,kG)*B3(kG,jG,iG);
assert(C4==C4Test);


C4=0.0;


for (int i=0;i<3;i++) {
     for (int j=0;j<3;j++){
                 for(int k=0;k<3;k++){
                 C4+=A3(j,i,k)*B3(j,i,k);
           }
     }
        }

C4Test=A3(jG,iG,kG)*B3(jG,iG,kG);
assert(C4==C4Test);


C4=0.0;


}
