#include <iostream>
#define CHECK_OOB
#include<fstream>

using namespace std;

//macros definitions

//order order 4 vs 1

int main() {

    ifstream in;
    ofstream out;

    char a,b,c,d,e,f;

// type A3(i,j,k)*B(k)
    in.open("4vs2.input");
    out.open("4vs2.cpp");
out<<" #include \"TExprs.h\" \n \
#include <iostream> \n \
#define CHECK_OOB \n \
#include<fstream> \n \
int main(void){   \n \
Marray<double,4> A4(3,3,3,3);\n \
Marray<double,2> B2(3,3); \n \
Marray<double,2> C2Test(3,3);\n \
Marray<double,2> C2(3,3); \n \
A4.sucesion(0,1); \n \
B2.sucesion(0,1); \n \
IndexG<'i'> iG; \n \
IndexG<'j'> jG; \n \
IndexG<'k'> kG; \n \
IndexG<'l'> lG; \n \
IndexG<'m'> mG; \n \
";




    if(!in.is_open()){
        cout<<"Error";
        return 0;
        }

    in>>a;  in>>b;  in>>c;  in>>d;  in>>e;  in>>e; in>>f;

    while(!in.eof()){
        out<<"for (int i=0;i<3;i++) { \n \
    for (int j=0;j<3;j++){ \n \
        for (int l=0;l<3;l++){ \n\
            for(int k=0;k<3;k++){ \n ";

        out<<"                C2(i,j)+=A4("<<a<<","<<b<<","<<c<<","<<d<<")*B2("<<e<<","<<f<<"); \n";
        out<<"           }\n        }\n        }\n} \n\n";

        out<<"C2Test(iG,jG)=A4("<<a<<"G,"<<b<<"G,"<<c<<"G,"<<d<<"G)*B2("<<e<<"G,"<<f<<"G); \n";
        out<<"assert(C2==C2Test); \n\n\n";

        out<<"C2=0;\n\n\n";
        in>>a;  in>>b;  in>>c;  in>>d;  in>>e;  in>>e; in>>f;

        }

    out<<"}\n";


    in.close();
    out.close();

    }
