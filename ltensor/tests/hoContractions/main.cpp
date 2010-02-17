#include <iostream>
#define CHECK_OOB
#include<fstream>

using namespace std;

//macros definitions

//order order 3 vs 1

int main() {

    ifstream in;
    ofstream out;

    char a,b,c,d;

// type A3(i,j,k)*B(k)
    in.open("3vs1.input");
    out.open("3vs1.cpp");
out<<" #include \"TExprs.h\" \n \
#include <iostream> \n \
#define CHECK_OOB \n \
#include<fstream> \n \
int main(void){   \n \
Marray<double,3> A3(3,3,3);\n \
Marray<double,1> B1(3); \n \
Marray<double,2> C2Test(3,3);\n \
Marray<double,2> C2(3,3); \n \
A3.sucesion(0,1); \n \
B1.sucesion(0,1); \n \
IndexG<'i'> iG; \n \
IndexG<'j'> jG; \n \
IndexG<'k'> kG; \n \
";




    if(!in.is_open()){
        cout<<"Error";
        return 0;
        }

    in>>a;  in>>b;  in>>c;  in>>d;  in>>d;

    while(!in.eof()){
        out<<"for (int i=0;i<3;i++) { \n \
    for (int j=0;j<3;j++){ \n \
        for(int k=0;k<3;k++){ \n ";
        out<<"              C2(i,j)+=A3("<<a<<","<<b<<","<<c<<")*B1(k); \n";
        out<<"          }\n     }\n } \n\n";

        out<<"C2Test(iG,jG)=A3("<<a<<"G,"<<b<<"G,"<<c<<"G)*B1(kG); \n";
        out<<"assert(C2==C2Test); \n\n\n";

        out<<"C2=0;\n\n\n";
        in>>a;  in>>b;  in>>c;  in>>d;  in>>d;

        }

    out<<"}\n";


    in.close();
    out.close();

    }
