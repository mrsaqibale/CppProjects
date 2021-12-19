#include<iostream>
#include <cstdlib>
using namespace std;

int main()
{
    // code by professor 
    // by 
    cout<<"                                                   *************************"<<endl;
    cout<<"                                                   |                       |"<<endl;
    cout<<"                                                   |                       |"<<endl;
    cout<<"                                                   |                       |"<<endl;
    cout<<"                                                   |    PARKING SYSTEM     |"<<endl;
    cout<<"                                                   |                       |"<<endl;
    cout<<"                                                   |                       |"<<endl;
    cout<<"                                                   |                       |"<<endl;
    cout<<"                                                   *************************"<<endl;
    cout<<"                                                   *********WELCOME*********"<<endl;
    cout<<"                                                   *******GOOD MORNING******"<<endl;
     cout<<"                                                    *******PROFESSOR******"<<endl;
    

    
     int car=0,bike=0,truck=0,blnc=0;
     int bk=0,cr=0,tk=0;
    char ch;
    do 
    {
    cout<<"\n\n\n\nSELECT THE ANY OPTION"<<endl;
    cout<<"Enter A for coming Trafic "<<endl;
    cout<<"Enter  B for Outbound Traific "<<endl;
    cin>>ch;
    if(ch=='A'  || ch=='a')
    {
        cout<<"\n\n         Enter B for Bikes\n         Enter C for Cars\n";
        cout<<"         Enter T for Truks\n";
        cin>>ch;
        switch (ch)
        {
        case 'b':
        case 'B':
            bike++;
            blnc+=10;
            break;

        case 'c':
        case 'C':
            car++;
            blnc+=20;
            break;

        case 't':
        case 'T':
            truck++;
            blnc+=30;
            break;    
        
        default:
        cout<<"Please Press the correct Key"<<endl;
            break;
        }
        

    }
    else if(ch=='b'  || ch=='B')
    {
        cout<<"\n\n         Enter B for Bikes\n         Enter C for Cars\n";
        cout<<"         Enter T for Truks\n";
        cin>>ch;

        switch (ch)
        {
            
        case 'b':
        case 'B':
        if(bike!=0)
        {
            bike==bk;
            bk--;
            break;
        }
        else
        {
        cout<<"There is no bike in the park\n";
        break;
        }    

        case 'c':
        case 'C':
        if(car!=0)
        {
            
            car==cr;
            cr--;
            break;
        }
        else
        {
        cout<<"There is no Car in the park\n";
        break;
        }    
        case 't':
        case 'T':
        if(truck!=0)
        {
            tk=truck;
            tk--;
            break;
        }
        else
        {
        cout<<"There is no Truck in the park\n";
        break;
        }    
        default:
        cout<<"Please Press the correct Key"<<endl;
            break;
        }
        
    }
    else 
    {
    cout<<"Please Press the correct Key"<<endl;
    }
    cout<<"\nCan you want to Run Again(Y/N) : ";
    cin>>ch;
    }while(ch=='Y' || ch=='y');  
    cout<<"\n\n                                 ***ENTERY REPORT***\n\n";
    cout<<"Bikes enter in the park      : "<<bike<<endl;
    cout<<"Cars enter in the park       : "<<car<<endl;
    cout<<"Truck enter in the park      : "<<truck<<endl;

     cout<<"\n\n                               ***EXIT  REPORT***\n";
    cout<<"Bike exits form the park        : "<<bk*(-1)<<endl;
    cout<<"Car exits form the park         : "<<cr*(-1)<<endl;
    cout<<"Truk exits form the park        : "<<tk*(-1)<<endl;

    cout<<"\n\n                               ***Remaining Trafic***\n";
     cout<<"Bikes in the Park the park         : "<<bike+bk<<endl;
     cout<<"Cars in the Park the park          : "<<car+cr<<endl;
     cout<<"Trucks in the Park the park        : "<<truck+tk<<endl;

    cout<<"\n\n                               ***Tex Report***\n";
    cout<<"\nToday Tex        = "<<blnc<<endl;


 
    return 0;
}
