#include<iostream>
#include<string>
using namespace std;

void main_manue();
void custmor_main();        //user main manue
void rate_list();
void buy();
void food();
void drink();
void rooms();
void bill(long &bill);
void manger_main();             //for manger
void about();
void input(int *a,int b);
int sum(int *a,int b);                 //for sum
int main()
{
    // code by ali



    cout<<"                              UU      UU     IIIIII    IIIIII    TTTTTTTTTT    "<<endl;
    cout<<"                              UU      UU       II        II          TT        "<<endl;
    cout<<"                              UU      UU       II        II          TT        "<<endl;
    cout<<"                              UU      UU       II        II          TT        "<<endl;
    cout<<"                              UU      UU       II        II          TT        "<<endl;
    cout<<"                              UU      UU       II        II          TT        "<<endl;
    cout<<"                              UU      UU       II        II          TT        "<<endl;
    cout<<"                              UUUUUUUUUU       II        II          TT        "<<endl;
    cout<<"                              UUUUUUUUUU     IIIIII    IIIIII        TT        "<<endl;
    cout<<endl<<endl;;
    cout<<"       RRRRRRRRR EEEEEEEE SSSSSSSSS TTTTTTTTTT AAAAAAAAA UU     UU RRRRRRRRR AAAAAAAAA NNN       NN TTTTTTTTT "<<endl;
    cout<<"       RR     RR EE       SS            TT     AA     AA UU     UU RR     RR AA     AA NN NN     NN     TT    "<<endl;
    cout<<"       RR     RR EE       SS            TT     AA     AA UU     UU RR     RR AA     AA NN  NN    NN     TT    "<<endl;
    cout<<"       RRRRRRRRR EEEEEE   SSSSSSSSS     TT     AAAAAAAAA UU     UU RRRRRRRRR AAAAAAAAA NN   NN   NN     TT    "<<endl;
    cout<<"       RR RR     EE              SS     TT     AA     AA UU     UU RR RR     AA     AA NN    NN  NN     TT    "<<endl;
    cout<<"       RR   RR   EE              SS     TT     AA     AA UUUUUUUUU RR   RR   AA     AA NN     NN NN     TT    "<<endl;
    cout<<"       RR     RR EEEEEEEE SSSSSSSSS     TT     AA     AA UUUUUUUUU RR     RR AA     AA NN       NNN     TT    "<<endl;

    int ch;
    int fc[3],vc[3],fr[3],mt[3];        //food variable
    int drk[6];                           //drink variable
    int room[20],room_chk[20];                         //for the saving of rooms
    long tsum=0,all_sum=0;int sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0;             //total sum
    int s[6];              //it is the sum of all the things which are selled today and for manger
    string un= "ali",askun;               //user name for password
    int pas=123,rpas;                    //password
    input(s,6);
    input(room_chk,20);

    goto_main_manue:

    input(fc,3);
    input(vc,3);
    input(fr,3);
    input(mt,3);
    input(drk,6);
    input(room,20);

    main_manue();
    cin>>ch;            //take a value for customer or manger
    if(ch==1)
    {
        goto_custmor_main:
        custmor_main();
        cin>>ch;                 //take a value for custmor main functoin
        if(ch==1)
        {
            rate_list();
            cin>>ch;
            if(ch==0)
            {
                goto goto_custmor_main;
            }
            else 
            {
                goto goto_custmor_main;
            }
        }
        else if(ch==2)
        {
            goto_buy:
            buy();            //this section is for buy something
            cin>>ch;
            if(ch==1)
            {
                while(1)
                {
                    food();
                    cin>>ch;
                    switch (ch)
                    {
                        case 0: 
                            goto goto_buy;
                            break;
                        case 1:
                            cout<<"\tPrice of BURGER   :130rs"<<endl;
                            cout<<"\tHow much you want to Buy    ?\b";
                            cin>>ch;
                            fc[0]+=ch*130;
                            break;
                        case 2:
                            cout<<"\tPrice of CHEESEBURGER   :250rs"<<endl;
                            cout<<"\tHow much you want to Buy    ?\b";
                            cin>>ch;
                            fc[1]+=ch*250;
                            break;
                        case 3:
                            cout<<"\tPrice of SANDWICH   :350rs"<<endl;
                            cout<<"\tHow much you want to Buy    ?\b";
                            cin>>ch;
                            fc[2]+=ch*350;
                            break;
                        
                        case 4:
                            cout<<"\tPrice of ROASTED VEGETABLES   :200rs"<<endl;
                            cout<<"\tHow much you want to Buy    ?\b";
                            cin>>ch;
                            vc[0]+=ch*200;
                            break;
                        case 5:
                            cout<<"\tPrice of ROASTED BROCOLI   :300rs"<<endl;
                            cout<<"\tHow much you want to Buy    ?\b";
                            cin>>ch;
                            vc[1]+=ch*300;
                            break;
                        case 6:
                            cout<<"\tPrice of CAPRESE SALAD   :250rs"<<endl;
                            cout<<"\tHow much you want to Buy    ?\b";
                            cin>>ch;
                            vc[2]+=ch*250;
                            break;
                        case 7:
                            cout<<"\tPrice of APPLE (/kg)   :250rs"<<endl;
                            cout<<"\tHow much you want to Buy    ?\b";
                            cin>>ch;
                            fr[0]+=ch*250;
                            break;
                        case 8:
                            cout<<"\tPrice of ORANGE (/dozen)   :120rs"<<endl;
                            cout<<"\tHow much you want to Buy    ?\b";
                            cin>>ch;
                            fr[1]+=ch*120;
                            break;
                        case 9:
                            cout<<"\tPrice of MANGOES (/kg)   :190rs"<<endl;
                            cout<<"\tHow much you want to Buy    ?\b";
                            cin>>ch;
                            fr[2]+=ch*190;
                            break;
                        case 10:
                            cout<<"\tPrice of SPL FISH (/kg)   :1400rs"<<endl;
                            cout<<"\tHow much you want to Buy    ?\b";
                            cin>>ch;
                            fr[0]+=ch*1400;
                            break;
                        case 11:
                            cout<<"\tPrice of BEEF (/kg)   :1300rs"<<endl;
                            cout<<"\tHow much you want to Buy    ?\b";
                            cin>>ch;
                            mt[1]+=ch*1300;
                            break;
                        case 12:
                            cout<<"\tPrice of CHICKEN (/kg)   :1000rs"<<endl;
                            cout<<"\tHow much you want to Buy    ?\b";
                            cin>>ch;
                            mt[2]+=ch*1000;
                            break;
                        case 14:
                            goto goto_main_manue;
                            break;
                        
                        
                        default:
                            cout<<"\t\tPLEASE ENTER THE RIGHT KEY"<<endl;
                            break;
                    }
                    
                } 
            }
            else if(ch==2)
            {
                while (1)
                {
                    drink();
                    cin>>ch;
                    switch (ch)
                    {
                        case 0: 
                            goto goto_buy;
                                    
                            break;
                        case 1:
                            cout<<"\tPrice of WATER (/lt)   :40rs"<<endl;
                            cout<<"\tHow much you want to Buy    ?\b";
                            cin>>ch;
                            drk[0]+=ch*40;
                            break;
                        case 2:
                            cout<<"\tPrice of MILK (/lt)   :130rs"<<endl;
                            cout<<"\tHow much you want to Buy    ?\b";
                            cin>>ch;
                            drk[1]+=ch*130;
                            break;
                        case 3:
                            cout<<"\tPrice of JUICE (/lt)   :120rs"<<endl;
                            cout<<"\tHow much you want to Buy    ?\b";
                            cin>>ch;
                            drk[2]+=ch*120;
                            break;
                        case 4:
                            cout<<"\tPrice of 7UP (/lt)   :60rs"<<endl;
                            cout<<"\tHow much you want to Buy    ?\b";
                            cin>>ch;
                            drk[3]+=ch*60;
                            break;
                        case 5:
                            cout<<"\tPrice of GOURMET (/lt)   :50rs"<<endl;
                            cout<<"\tHow much you want to Buy    ?\b";
                            cin>>ch;
                            drk[4]+=ch*50;
                            break;
                        case 6:
                            cout<<"\tPrice of TEA (/1CUP)   :40rs"<<endl;
                            cout<<"\tHow much you want to Buy    ?\b";
                            cin>>ch;
                            drk[5]+=ch*40;
                            break;                      
                        default:
                            cout<<"\t\tPLEASE ENTER THE RIGHT KEY"<<endl;
                            break;
                    }
                }
            }
            else if(ch==3)
            {
                while(1)
                {
                    // cout<<"\t\tTHE ROOMS WHICH ARE AVAILABLE \n\t\t[";
                    // for(int i=0;i<20;i++)
                    // {
                    //     if(room_chk==0)
                    //     {
                    //         cout<<i<<", ";
                    //     }
                    // }
                    cout<<"]"<<endl;
                    rooms();
                    cin>>ch;
                    switch(ch)
                    {
                        case 0:
                            goto goto_buy;  
                            break;
                        case 1:
                            if(room_chk[0]==0)
                            {
                                cout<<"\t\tFor How Much Days?    [?]\b\b";
                                cin>>ch;
                                room[0]=2500*ch;
                                room_chk[0]++;
                            }
                            else 
                            {
                                cout<<"\t\tTHIS ROOM IS NOT AVAILABLE"<<endl;
                            }
                            break;
                        case 2:
                            if(room_chk[1]==0)
                            {
                                cout<<"\t\tFor How Much Days?    [?]\b\b";
                                cin>>ch;
                                room[1]=2500*ch;
                                room_chk[1]++;
                            }
                            else 
                            {
                                cout<<"\t\tTHIS ROOM IS NOT AVAILABLE"<<endl;
                            }
                            break;
                        case 3:
                            if(room_chk[2]==0)
                            {
                                cout<<"\t\tFor How Much Days?    [?]\b\b";
                                cin>>ch;
                                room[2]=2500*ch;
                                room_chk[2]++;
                            }
                            else 
                            {
                                cout<<"\t\tTHIS ROOM IS NOT AVAILABLE"<<endl;
                            }
                            break;
                        case 4:
                            if(room_chk[3]==0)
                            {
                                cout<<"\t\tFor How Much Days?    [?]\b\b";
                                cin>>ch;
                                room[3]=2500*ch;
                                room_chk[3]++;
                            }
                            else 
                            {
                                cout<<"\t\tTHIS ROOM IS NOT AVAILABLE"<<endl;
                            }
                            break;
                        case 5:
                            if(room_chk[4]==0)
                            {
                                cout<<"\t\tFor How Much Days?    [?]\b\b";
                                cin>>ch;
                                room[4]=2500*ch;
                                room_chk[4]++;
                            }
                            else 
                            {
                                cout<<"\t\tTHIS ROOM IS NOT AVAILABLE"<<endl;
                            }
                            break;
                        case 6:
                            if(room_chk[5]==0)
                            {
                                cout<<"\t\tFor How Much Days?    [?]\b\b";
                                cin>>ch;
                                room[5]=2500*ch;
                                room_chk[5]++;
                            }
                            else 
                            {
                                cout<<"\t\tTHIS ROOM IS NOT AVAILABLE"<<endl;
                            }
                            break;
                        case 7:
                            if(room_chk[6]==0)
                            {
                                cout<<"\t\tFor How Much Days?    [?]\b\b";
                                cin>>ch;
                                room[6]=2500*ch;
                                room_chk[6]++;
                            }
                            else 
                            {
                                cout<<"\t\tTHIS ROOM IS NOT AVAILABLE"<<endl;
                            }
                            break;
                        case 8:
                            if(room_chk[7]==0)
                            {
                                cout<<"\t\tFor How Much Days?    [?]\b\b";
                                cin>>ch;
                                room[7]=2500*ch;
                                room_chk[7]++;
                            }
                            else 
                            {
                                cout<<"\t\tTHIS ROOM IS NOT AVAILABLE"<<endl;
                            }
                            break;
                        case 9:
                            if(room_chk[8]==0)
                            {
                                cout<<"\t\tFor How Much Days?    [?]\b\b";
                                cin>>ch;
                                room[8]=2500*ch;
                                room_chk[8]++;
                            }
                            else 
                            {
                                cout<<"\t\tTHIS ROOM IS NOT AVAILABLE"<<endl;
                            }
                            break;
                        case 10:
                            if(room_chk[9]==0)
                            {
                                cout<<"\t\tFor How Much Days?    [?]\b\b";
                                cin>>ch;
                                room[9]=2500*ch;
                                room_chk[9]++;
                            }
                            else 
                            {
                                cout<<"\t\tTHIS ROOM IS NOT AVAILABLE"<<endl;
                            }
                            break;
                        case 11:
                            if(room_chk[10]==0)
                            {
                                cout<<"\t\tFor How Much Days?    [?]\b\b";
                                cin>>ch;
                                room[10]=2500*ch;
                                room_chk[10]++;
                            }
                            else 
                            {
                                cout<<"\t\tTHIS ROOM IS NOT AVAILABLE"<<endl;
                            }
                            break;
                        case 12:
                            if(room_chk[11]==0)
                            {
                                cout<<"\t\tFor How Much Days?    [?]\b\b";
                                cin>>ch;
                                room[11]=2500*ch;
                                room_chk[11]++;
                            }
                            else 
                            {
                                cout<<"\t\tTHIS ROOM IS NOT AVAILABLE"<<endl;
                            };
                            break;
                        case 13:
                            if(room_chk[12]==0)
                            {
                                cout<<"\t\tFor How Much Days?    [?]\b\b";
                                cin>>ch;
                                room[12]=2500*ch;
                                room_chk[12]++;
                            }
                            else 
                            {
                                cout<<"\t\tTHIS ROOM IS NOT AVAILABLE"<<endl;
                            }
                            break;
                        case 14:
                            if(room_chk[13]==0)
                            {
                                cout<<"\t\tFor How Much Days?    [?]\b\b";
                                cin>>ch;
                                room[13]=3500*ch;
                                room_chk[13]++;
                            }
                            else 
                            {
                                cout<<"\t\tTHIS ROOM IS NOT AVAILABLE"<<endl;
                            }
                            break;
                        case 15:
                            if(room_chk[14]==0)
                            {
                                cout<<"\t\tFor How Much Days?    [?]\b\b";
                                cin>>ch;
                                room[14]=3500*ch;
                                room_chk[14]++;
                            }
                            else 
                            {
                                cout<<"\t\tTHIS ROOM IS NOT AVAILABLE"<<endl;
                            }
                            break;
                        case 16:
                            if(room_chk[15]==0)
                            {
                                cout<<"\t\tFor How Much Days?    [?]\b\b";
                                cin>>ch;
                                room[15]=3500*ch;
                                room_chk[15]++;
                            }
                            else 
                            {
                                cout<<"\t\tTHIS ROOM IS NOT AVAILABLE"<<endl;
                            }
                            break;
                        case 17:
                            if(room_chk[16]==0)
                            {
                                cout<<"\t\tFor How Much Days?    [?]\b\b";
                                cin>>ch;
                                room[16]=3500*ch;
                                room_chk[16]++;
                            }
                            else 
                            {
                                cout<<"\t\tTHIS ROOM IS NOT AVAILABLE"<<endl;
                            }
                            break;
                        case 18:
                            if(room_chk[17]==0)
                            {
                                cout<<"\t\tFor How Much Days?    [?]\b\b";
                                cin>>ch;
                                room[17]=3500*ch;
                                room_chk[17]++;
                            }
                            else 
                            {
                                cout<<"\t\tTHIS ROOM IS NOT AVAILABLE"<<endl;
                            }
                            break;
                        case 19:
                            if(room_chk[18]==0)
                            {
                                cout<<"\t\tFor How Much Days?    [?]\b\b";
                                cin>>ch;
                                room[18]=3500*ch;
                                room_chk[18]++;
                            }
                            else 
                            {
                                cout<<"\t\tTHIS ROOM IS NOT AVAILABLE"<<endl;
                            }
                            break;
                        case 20:
                            if(room_chk[19]==0)
                            {
                                cout<<"\t\tFor How Much Days?    [?]\b\b";
                                cin>>ch;
                                room[19]=3500*ch;
                                room_chk[19]++;
                            }
                            else 
                            {
                                cout<<"\t\tTHIS ROOM IS NOT AVAILABLE"<<endl;
                            }
                            break;
                        default:
                            cout<<"\t\tPLEASE ENTER THE RIGHT KEY"<<endl;
                            break;
                    }
                }
            }
            else if(ch==0)
            {
                goto goto_custmor_main;
            }
            else 
            goto goto_buy;
        }
        else if (ch==3)
        {
            sum1=sum(fc,3);                  //this is the sum of all fast foods
            s[0]+=sum1;
            sum2=sum(vc,3);                  //this is the sum of all vagitables
            s[1]+=sum2;
            sum3=sum(fr,3);                  //this is the sum of all fruits
            s[2]+=sum3;
            sum4=sum(mt,3);                  //this is the sum of all meat
            s[3]+=sum4;
            sum5=sum(drk,6);                  //this is the sum of all drinks
            s[4]+=sum5;
            sum6=sum(room,20);                  //this is the sum of all rooms
            s[5]+=sum6;
            tsum=sum1+sum2+sum3+sum4+sum5+sum6;
            all_sum+=tsum;
            cout<<"\t\tThe Total Amount Is := "<<tsum<<" rs\n";
            cout<<"\t\t[0] BACK"<<endl;
            cout<<"\n\t[?]\b\b";
            cin>>ch;
            input(fc,3);
            input(vc,3);
            input(fr,3);
            input(mt,3);
            input(drk,6);
            input(room,20);
            sum1=0;sum2=0;sum3=0;sum4=0;sum5=0;sum6=0;tsum=0;
            goto goto_custmor_main;
        }
        else if(ch==0)
        {
            goto goto_main_manue;
        }
        else 
        {
            goto goto_custmor_main;
        }
    }
    else if(ch==2)
    {
        goto_rechk:
        cin.ignore();
        cout<<"\nPLEASE ENTER YOUR USERNAME_____";
        cin>>askun;
        cout<<"PLEASE ENTER YOUR PASSWORD_____";
        cin>>rpas;
        if(un==askun && pas==rpas)
        {
            goto_manger_main:
            manger_main();
            cin>>ch;
            if(ch==1)
            {
                // all_sum+=tsum;
                cout<<"\t\tThe Total Amount Is := "<<all_sum<<" rs\n";
                cout<<"\t\t[0] BACK"<<endl;
                cout<<"\n\t[?]\b\b";
                cin>>ch;
                goto goto_manger_main;
            }
            else if(ch==2)
            {
                cout<<endl;
                cout<<"\t\tAMOUNT FROM FAST FOOD  := "<<s[0]<<" rs"<<endl;
                cout<<"\t\tAMOUNT FROM VEGETABLES := "<<s[1]<<" rs"<<endl;
                cout<<"\t\tAMOUNT FROM FRUITS     := "<<s[2]<<" rs"<<endl;
                cout<<"\t\tAMOUNT FROM MEAT       := "<<s[3]<<" rs"<<endl;
                cout<<"\t\tAMOUNT FROM DRINKS     := "<<s[4]<<" rs"<<endl;
                cout<<"\t\tAMOUNT FROM ROOMS      := "<<s[5]<<" rs"<<endl;
                cout<<"\t\tTOTAL AMOUNT           := "<<all_sum<<" rs"<<endl; 
                cout<<"\n\t[?]\b\b";
                cin>>ch;
                goto goto_manger_main;

            }
            else if(ch==3)
            {
                rate_list();
                cin>>ch;
                goto goto_manger_main;
            }
            else if(ch==4)
            {
                about();
                cin>>ch;
                goto goto_manger_main;
            }
            else if(ch==5)
            {
                goto goto_return;
            }
            else if(ch==0)
            {
                goto goto_main_manue;

            }
            else
            {
                goto goto_manger_main;
            }

  
        }
        else 
        {
            cout<<"PLEASE ENTER YOUR RIGHT PASSWORD OR USERNAME"<<endl;
            goto goto_rechk;
        }
    }
    else 
    {
        cout<<"PLEASE ENTER THE RIGHT CHOICE\n\n";
        goto goto_main_manue;
    }
    chk_bil:

    sum1=sum(fc,3);                  //this is the sum of all fast foods
    sum2=sum(vc,3);                  //this is the sum of all vagitables
    sum3=sum(fr,3);                  //this is the sum of all fruits
    sum4=sum(mt,3);                  //this is the sum of all meat
    sum5=sum(drk,6);                  //this is the sum of all drinks
    sum6=sum(room,20);                  //this is the sum of all rooms
    tsum=sum1+sum2+sum3+sum4+sum5+sum6;    
    cout<<tsum;
    
    //its the last lines just for manger
    goto_return:
    cout<<"\n\n\t\t\t\t\tTHANKS FOR USING MY PROGRAMM AND GOOD NIGHT \n";
    cout<<"\t\t\t\t\t            **********SAQIB ALI**********\n\n\n";

    return 0;
}




// Shows the main manue 
void main_manue()
{
    int ch;
    cout<<"\n\t\t[#]Please Select Any Option"<<endl;
    cout<<"\t\t[1] Customer\n\t\t[2] Manager\n";
    cout<<"\n\t[?]\b\b";
 
}


// This Show The List Of The  Customer Options
void custmor_main()
{
    cout<<"\n\t\t[#]Please Select Any Option"<<endl;
    cout<<"\t\t[1] RATE LIST"<<endl;
    cout<<"\t\t[2] BUY "<<endl;
    cout<<"\t\t[3] BILL"<<endl;
    cout<<"\t\t[0] BACK"<<endl;
    cout<<"\n\t[?]\b\b";
}


// Shows the list of Products
void rate_list()
{
    cout<<"\n* * * * *FOOD* * * * * * *"<<endl;
    cout<<"\t\t[*] FAST FOODS\t\t[*] VEGETABLES\t\t      [*] FRUITS\t[*] MEAT, POULTRY & SEAFOOD"<<endl;
    cout<<"\t\t[#] BURGER      [130]   [#] ROASTED VEGETABLES[200]   [#] APPLE  [250]  [#] SPL FISH[1400]   "<<endl;
    cout<<"\t\t[#] CHEESEBURGER[250]   [#] ROASTED BROCOLI   [300]   [#] ORANGES[120]  [#] BEEF    [1300]   "<<endl;
    cout<<"\t\t[#] SANDWICH    [350]   [#] CAPRESE SALAD     [250]   [#] MANGOES[190]  [#] CHICKEN [1000]   "<<endl;
    cout<<"\n\n* * * * *DRINK* * * * * * *"<<endl;
    cout<<"\t\t[#] WATER[040]    \t[#] 7UP    [60]   "<<endl;
    cout<<"\t\t[#] MILK [130]   \t[#] GOURMET[50]   "<<endl;
    cout<<"\t\t[#] JUICE[120]   \t[#] TEA    [40]   "<<endl;
    cout<<"\n\n\t[#][0] BACK"<<endl;   
    cout<<"\n\t[?]\b\b";
}


// Show the product list for selling
void  buy()
{
    cout<<"\n\t\t[#]Please Select Any Option"<<endl;
    cout<<"\t\t[1] FOODS"<<endl;
    cout<<"\t\t[2] DRINKS"<<endl;
    cout<<"\t\t[3] ROOMS"<<endl;
    cout<<"\t\t[0] BACK"<<endl;
    cout<<"\t[?]\b\b";
}


// Show the foods 
void food()
{
    cout<<"\n\t\t[#]Please Select Any Option\n"<<endl;
    cout<<"\t\t[*] FAST FOODS\t\t[*] VEGETABLES\t\t[*] FRUITS\t\t[**] MEAT, POULTRY & SEAFOOD"<<endl;
    cout<<"\t\t[1] HAMBURGER\t\t[4] ROASTED VEGETABLES\t[7] APPLE\t\t[10] SPL FISH"<<endl;
    cout<<"\t\t[2] CHEESEBURGER\t[5] ROASTED BROCOLI\t[8] ORANGES\t\t[11] BEEF"<<endl;
    cout<<"\t\t[3] SANDWICH\t\t[6] CAPRESE SALAD\t[9] MANGOES\t\t[12] CHICKEN"<<endl;
    cout<<"\t\t[0] BACK\t\t\t\t\t\t\t\t"<<endl;
    cout<<"\t[?]\b\b";

}

// show the drinks
void drink()
{
    cout<<"\n\n\t\t[#]Please Select Any Option\n"<<endl;
    cout<<"\t\t[*] DRINKS"<<endl;
    cout<<"\t\t[1] WATER\t\t[4] 7UP"<<endl;
    cout<<"\t\t[2] MILK\t\t[5] GOURMET"<<endl;
    cout<<"\t\t[3] JUICE\t\t[6] TEA"<<endl;
    cout<<"\t\t[0] BACK"<<endl;
  
    cout<<"\t[?]\b\b";

}

// shows the rooms
void rooms()
{
    cout<<"\t\t[#]Please Select Any Option\n"<<endl;
    cout<<"\t\t[**] SINGLE BED\t\t[**] DOUBLE BED"<<endl;
    cout<<"\t\t[01] ROOM 01\t\t[14] ROOM 14"<<endl;
    cout<<"\t\t[02] ROOM 02\t\t[15] ROOM 15"<<endl;
    cout<<"\t\t[03] ROOM 03\t\t[16] ROOM 16"<<endl;
    cout<<"\t\t[04] ROOM 04\t\t[17] ROOM 17"<<endl;
    cout<<"\t\t[05] ROOM 05\t\t[18] ROOM 18"<<endl;
    cout<<"\t\t[06] ROOM 06\t\t[19] ROOM 19"<<endl;
    cout<<"\t\t[07] ROOM 07\t\t[20] ROOM 20"<<endl;
    cout<<"\t\t[08] ROOM 08\t\t"<<endl;
    cout<<"\t\t[09] ROOM 09\t\t"<<endl;
    cout<<"\t\t[10] ROOM 11\t\t"<<endl;
    cout<<"\t\t[11] ROOM 12\t\t[0] BACK"<<endl;
    cout<<"\t\t[12] ROOM 13\t\t"<<endl;
    cout<<"\t[?]\b\b";
}


// This show the bill and payment method to the user
void bill(long &bil)
{
    cout<<"\t\tYour Total Bill Is := "<<bil<<" rs"<<endl;
    cout<<"\t\t[0] BACK "<<endl;
    cout<<"\t[?]\b\b";
}


// This Function is use to initially give 0 to all the values 
void input(int *a,int b)
{
    for(int i=0;i<b;i++)
    {
        a[i]=0;
    }
}

// This function is use for adding the different values
int sum(int *a,int b)
{
    int sum=0;
    for(int i=0;i<b;i++)
    {
        sum+=a[i];
    }
    return sum;
}


// Shows the manger options
void manger_main()
{
    cout<<"\n\n\t\t[#]Please Select Any Option"<<endl;
    cout<<"\t\t[1] MONEY "<<endl;
    cout<<"\t\t[2] SELLING LIST "<<endl;
    cout<<"\t\t[3] AVAILABLE PRODUCTS AND RATES"<<endl;
    // cout<<"\t\t[4] ADD PRODUCT"<<endl;
    // cout<<"\t\t[5] REMOVE PRODUCT"<<endl;
    cout<<"\t\t[4] ABOUT"<<endl;
    cout<<"\t\t[5] EXIT PROGRAM"<<endl;
    cout<<"\t\t[0] BACK"<<endl;
    cout<<"\n\t[?]\b\b";
}

// about the programmer
void about()
{
    cout<<"\t\t\t\t*************************"<<endl;
    cout<<"\t\t\t\t|                       |"<<endl;
    cout<<"\t\t\t\t|                       |"<<endl;
    cout<<"\t\t\t\t|                       |"<<endl;
    cout<<"\t\t\t\t|          ALI          |"<<endl;
    cout<<"\t\t\t\t|                       |"<<endl;
    cout<<"\t\t\t\t|                       |"<<endl;
    cout<<"\t\t\t\t|                       |"<<endl;
    cout<<"\t\t\t\t*************************"<<endl;
    cout<<"\t\t\t\t*********CODE BY*********"<<endl;
    cout<<"\t\t\t\t*********Mr. Ali*********"<<endl;
    cout<<"\n\n\t\t\t           CONTACT NO. +92306*******"<<endl;
    cout<<"\t\t\tGitHub 'https://github.com/codewithprofessor'"<<endl;
    cout<<"\n\t[?]\b\b";
}