#include<iostream>
using namespace std;
namespace nmsp1 
{
    int num(){return3;}
}
namespace nmsp2 {
    int a=10;
    int num(){return2*a;}
};
int main ()
{
 cout<<nmsp1::num()<<'\n';
 cout<<nmsp2::num()<<'\n';

 //acess variables x directly
 cout<<nmsp2::a<<'\n';
 return 0;
}