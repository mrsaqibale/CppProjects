#include<iostream>
using namespace std;

int main()
{
    // code by ali

 cout<<"                                                   *************************"<<endl;
    cout<<"                                                   |                       |"<<endl;
    cout<<"                                                   |                       |"<<endl;
    cout<<"                                                   |                       |"<<endl;
    cout<<"                                                   |    GAS BILL SYSTEM    |"<<endl;
    cout<<"                                                   |                       |"<<endl;
    cout<<"                                                   |                       |"<<endl;
    cout<<"                                                   |                       |"<<endl;
    cout<<"                                                   *************************"<<endl;
    cout<<"                                                   *********WELCOME*********"<<endl;
     cout<<"                                                    *******PROFESSOR******"<<endl;

float n,sum=0,nb;
char ch;

do
{


cout<<"\n\n\ni. Enter your Bill Unit  : ";
cin>>n;
cout<<"ii. Consumer Type  : ";
cin>>ch;

if(ch=='c' || ch=='C')
{
    cout<<"Your old bill is RS."<<n*350<<endl;
    n*=350;
    nb=n*0.4;
    sum=nb+n;
    cout<<"Your New Bill is Rs."<<sum<<endl;
}
else if(ch=='d' || ch=='D')
{
    if(n<=50 && n>0)
    {
         cout<<"Your old bill is RS."<<n*4<<endl;
         n*=4;
         nb=n*0.1;
         sum=nb+n;
        cout<<"Your New Bill is Rs."<<sum<<endl;

    }

    else if(n<=100 && n>50)
    {
         cout<<"Your old bill is RS."<<n*5<<endl;
         n*=5;
         nb=n*0.15;
         sum=nb+n;
        cout<<"Your New Bill is Rs."<<sum<<endl;

    }

    else if(n<=300 && n>100)
    {
         cout<<"Your old bill is RS."<<n*10<<endl;
         n*=10;
         nb=n*0.25;
         sum=nb+n;
        cout<<"Your New Bill is Rs."<<sum<<endl;

    }

    else if(n>300 )
    {
         cout<<"Your old bill is RS."<<n*20<<endl;
         n*=20;
         nb=n*1.43;
         sum=nb+n;
        cout<<"Your New Bill is Rs."<<sum<<endl;

    }

   
}
else 
{
    cout<<"Enter the correct key\n";
}
cout<<"Can you want to use again programm(Y/N)";
cin>>ch;
}while(ch=='y'||ch=='Y');





    return 0;
}