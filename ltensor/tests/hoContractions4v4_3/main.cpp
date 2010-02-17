#include <iostream>
#define CHECK_OOB
#include<fstream>

using namespace std;

//macros definitions

//order order 4 vs 4

int main() {

    ifstream in;
    ofstream out;

    char a,b,c,d,e,f,g,h;


    in.open("4vs4.input");
    out.open("4vs4.cpp");
out<<" #include \"TExprs.h\" \n \
#include <iostream> \n \
#define CHECK_OOB \n \
#include<fstream> \n \
int main(void){   \n \
Marray<double,4> A4(3,3,3,3);\n \
Marray<double,4> B4(3,3,3,3); \n \
double CTest=0.0;\n \
double C=0.0; \n \
A4.sucesion(0,1); \n \
B4.sucesion(0,1); \n \
IndexG<'i'> iG; \n \
IndexG<'j'> jG; \n \
IndexG<'k'> kG; \n \
IndexG<'l'> lG; \n \
";




    if(!in.is_open()){
        cout<<"Error";
        return 0;
        }

    in>>a;  in>>b;  in>>c;  in>>d;  in>>e;  in>>e; in>>f; in>>g;    in>>h;

    while(!in.eof()){
        out<<"for (int i=0;i<3;i++) { \n \
    for (int j=0;j<3;j++){ \n \
        for (int l=0;l<3;l++){ \n\
            for(int k=0;k<3;k++){ \n ";

        out<<"                C+=A4("<<a<<","<<b<<","<<c<<","<<d<<")*B4("<<e<<","<<f<<","<<g<<","<<h<<"); \n";
        out<<"           }\n        }\n        }\n} \n\n";

        out<<"CTest=A4("<<a<<"G,"<<b<<"G,"<<c<<"G,"<<d<<"G)*B4("<<e<<"G,"<<f<<"G,"<<g<<"G,"<<h<<"G); \n";
        out<<"assert(C==CTest); \n\n\n";

        out<<"C=0.0;\n\n\n";
        in>>a;  in>>b;  in>>c;  in>>d;  in>>e;  in>>e; in>>f;   in>>g;  in>>h;

        }

    out<<"}\n";


    in.close();
    out.close();

    }
