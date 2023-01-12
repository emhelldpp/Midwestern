#include<iostream>
using namespace std;
int main()
{int no,i,count=0;
cout<<"enter the number"<<endl;
cin>>no;
for(i=1;i<no;i++)
{
    if(no%i==0)
    count++;
}
if(count==2)
cout<<"the number is not  prime"<<endl;
else
cout<<" the number is  prime"<<endl;
return 0;
}
