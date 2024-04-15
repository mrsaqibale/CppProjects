#include<iostream>
#include<cmath>
#include<string>
using namespace std;

// main file
int main()
{
  //code by ALI
  int pw,chng;
  chng=123;
  cout<<"Please Enter the Password";
  cout<<"Password       :";
  cin>>pw;
  if(pw!=chng)
  cout<<"Please Enter the Correct Password";
  else{
  
  //https://github.com/codewithprofessor
  int num;
  int y=1;
  cout<<"\n                       Code by Mr. ALI\n]";
   cout<<"                   ********************";
    cout<<"\n                    |                  |\n";
     cout<<"\n                    |    CALCULATOR    |\n";
      cout<<"\n                    |                  |\n";
       cout<<"                    ********************\n\n";
        cout<<"\t1.Additon\t\t\t2.Subtraction\t"<<endl;
         cout<<"\t3.Multiplication\t\t4.Division\t"<<endl;
          cout<<"\t5.Reminder\t\t\t6.Square Root\t"<<endl;
           cout<<"\t7.Square\t\t\t8.Cube\t"<<endl;
            cout<<"\t9.Power\t\t\t\t10.Sin(x)\t"<<endl;
             cout<<"\t11.Cos(x)\t\t\t12.Tan(x)\t"<<endl;
              cout<<"\t13.Help\t\t\t\t14.Contact Us(x)\t"<<endl;
              


cout<<"\nEnter the Opration\n";
cin>>num;


switch (num)
{
case 1:
int a,d;
cout<<"Please enter the two number"<<endl;
cin>>a>>d;
cout<<"Sum  = "<<a+d;
  break;
  case 2:
cout<<"Please enter the two number"<<endl;
cin>>a>>d;
cout<<"Subtraction = "<<a-d;
  break;
  case 3:
cout<<"Please enter the two number"<<endl;
cin>>a>>d;
cout<<"Multipliction  = "<<a*d;
  break;

  case 5:
cout<<"Please enter the two number"<<endl;
cin>>a>>d;
cout<<"Reminder  = "<<a%d;
  break;

  case 6:
cout<<"Please enter the Value"<<endl;
cin>>a;
cout<<"Square Root  = "<<sqrt(a);
  break;

  case 7:
cout<<"Please enter the number"<<endl;
cin>>a;
cout<<"Multipliction  = "<<a*a;
  break;

  case 8:
cout<<"Please enter the number"<<endl;
cin>>a;
cout<<"Square  = "<<a*a*a;
  break;

case 9:

  cout<<"Enter the number then power\n";
  cin>>a>>d;
  for(int i=1;i<=d;i++)
    y*=a;
  cout<<a<<"^"<<d<<" = "<<y;

  break;

case 4:
float f,e;
cout<<"Please enter the two number"<<endl;
cin>>f>>e;
if(e==0)
cout<<"Error\n";
else
cout<<"Divcision  = "<<f/e;
  break;

  case 10:
  cout<<"Enter the Angle in Radian"<<endl;
  cin>>f;
  double result;
  result =sin(f);
  cout<<"sin "<<f<<" =  "<<result<<endl;
  break;

 case 11:
  cout<<"Enter the Angle in Radian"<<endl;
  cin>>f;
  // double result;
  result =cos(f);
  cout<<"cos"<<f<<" =  "<<result<<endl;
  break;

  case 12:
  cout<<"Enter the Angle in Radian"<<endl;
  cin>>f;
  // double result;
  result =tan(f);
  cout<<"tan "<<f<<" =  "<<result<<endl;
  break;

  case 13:
    cout<<"This is a simple calculator.\n";
     cout<<"In which you can use any given operation.\n";
      cout<<"How you can use this Calculator?\n";
       cout<<"STEP 1:\nSelect the operation.\n";
        cout<<"STEP 2:\nEnter the value.\n";
         cout<<"STEP 3:\nAND GET THE CORRECT ANSWER.\n";
          cout<<"Thanks......\n";
  break;

  case 14:
   cout<<"CONTACT US:\n";
    cout<<"Name:\n";
     cout<<"    SAQIB ALI\n";
      cout<<"Contact Number:\n";
       cout<<"  03063928834\n";
        cout<<"Github :\n";
         cout<<"    https://github.com/codewithprofessor\n";

  break;


default:
cout<<"Please etner the Right Operation"<<endl;
  break;
}
    return 0;
}
}