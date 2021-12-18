#include<iostream>
using namespace std;

int main()
{
    // code by ali
    
    
    cout<<"                                 *************************"<<endl;
    cout<<"                                 |                       |"<<endl;
    cout<<"                                 |                       |"<<endl;
    cout<<"                                 |                       |"<<endl;
    cout<<"                                 |    PARKING SYSTEM     |"<<endl;
    cout<<"                                 |                       |"<<endl;
    cout<<"                                 |                       |"<<endl;
    cout<<"                                 |                       |"<<endl;
    cout<<"                                 *************************"<<endl;
    cout<<"                                 *********WELCOME*********"<<endl;
    cout<<"                                 *******GOOD MORNING******"<<endl;
    

    
     int car=0,bike=0,truck=0,blnc=0;
     int bk=0,cr=0,tk=0;
    char ch;
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
        cout<<"Enter the correct Selection\n";
            break;
        }
        

    }
    else if(ch=='b'  || ch=='B')
    {
        cout<<"\n\n         Enter B for Bikes\n         Enter C for Cars\n";
        cout<<"         Enter T for Truks\n";
        cin>>ch;
        int bk=0,cr=0,tk=0;

        switch (ch)
        {
            
        case 'b':
        case 'B':
        if(bike!=0)
        {
            bk--;
            break;
        }
        else
        {
        cout<<"There is no bike in the park";
        break;
        }    

        case 'c':
        case 'C':
        if(car!=0)
        {
            cr--;
            break;
        }
        else
        {
        cout<<"There is no Car in the park";
        break;
        }    
        case 't':
        case 'T':
        if(truck!=0)
        {
            tk--;
            break;
        }
        else
        {
        cout<<"There is no Truck in the park";
        break;
        }    
        default:
            break;
        }
    }
    cout<<"                               ***ENTERY REPORT***\n";
    cout<<"Bikes enter in the park      : "<<bike<<endl;
    cout<<"Cars enter in the park       : "<<car<<endl;
    cout<<"Truck enter in the park      : "<<truck<<endl;

     cout<<"\n\n                               ***EXIT  REPORT***\n";
    cout<<"Bike exits form the park        : "<<bk<<endl;
    cout<<"Car exits form the park         : "<<cr<<endl;
    cout<<"Truk exits form the park        : "<<tk<<endl;

    cout<<"\n\n                               ***Tex Report***\n";
    cout<<"\nToday Tex        = "<<blnc<<endl;

    
    return 0;
}