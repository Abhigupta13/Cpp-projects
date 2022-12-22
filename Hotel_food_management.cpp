#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main(){
    int count;
    int choice;
    int Qrooms=0,Qpasta=0,Qburger=0,Qnoodles=0,Qshake=0,Qchicken_roll=0;  //have at hotel Quantity
    int Srooms=0,Spasta=0,Sburger=0,Snoodles=0,Sshake=0,Schicken_roll=0;  //sold food items
    int cTotal_rooms=0,cTotal_pasta=0,cTotal_burger=0,cTotal_noodles=0,cTotal_shake=0,cTotal_chicken_roll=0; //total price of items

    cout<<"\n\t Quantity of items we have";
    cout<<"\n Rooms available: ";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta :";
    cin>>Qpasta;
    cout<<"\n Quantity of burger :";
    cin>>Qburger;
    cout<<"\n Quantity of noodles :";
    cin>>Qnoodles;
    cout<<"\n Quantity of shake :";
    cin>>Qshake;
    cout<<"\n Quantity of chicken_roll :";
    cin>>Qchicken_roll;

    m:  //jump
    cout<<"\n\t\t\t Please select from the menu options  ";
    cout<<"\n\n1) Rooms";
     cout<<"\n2) pasta";
      cout<<"\n3) burger";
       cout<<"\n4) noodles";
     cout<<"\n5) shake";
      cout<<"\n6) chicken_roll";
      cout<<"\n7) Information regarding sales and collection";
      cout<<"\n8) Exit";

      cout<<"\n\n please Enter the chooce! ";
      cin>>choice;
      switch (choice)
      {
case 1:
        cout<<"\n\n Enter the number of rooms you want: ";
        cin>>count;
        if(Qrooms-Srooms>=count){
            Srooms+=count;
            cTotal_rooms+=count*1200;
            cout<<"\n\n\t\t"<<count<<" room/rooms have been alloted to you!";

        }
        else
            cout<<"\n\t Only "<<Qrooms-Srooms<<" Rooms remaining in hotel ";
        break;
case 2:     
        cout<<"\n\n Enter the Quantity of pasta you want: ";
        cin>>count;
        if(Qpasta-Spasta>=count){
            Spasta+=count;
            cTotal_pasta+=count*250;
            cout<<"\n\n\t\t"<<count<<" pasta is the order!";

        }
        else
            cout<<"\n\t Only "<<Qpasta-Spasta<<" pasta remaining in hotel ";
        break;
case 3:     
        cout<<"\n\n Enter the Quantity of burger you want: ";
        cin>>count;
        if(Qburger-Sburger>=count){
            Sburger+=count;
            cTotal_burger+=count*120;
            cout<<"\n\n\t\t"<<count<<" burger is the order!";

        }
        else
            cout<<"\n\t Only "<<Qburger-Sburger<<"burger remaining in hotel ";
        break;
case 4:     
        cout<<"\n\n Enter the Quantity of noodles you want: ";
        cin>>count;
        if(Qnoodles-Snoodles>=count){
            Snoodles+=count;
            cTotal_noodles+=count*140;
            cout<<"\n\n\t\t"<<count<<" noodles is the order!";

        }
        else
            cout<<"\n\t Only "<<Qnoodles-Snoodles<<"noodles remaining in hotel ";
        break;

case 5:     
        cout<<"\n\n Enter the Quantity of shake you want: ";
        cin>>count;
        if(Qshake-Sshake>=count){
            Sshake+=count;
            cTotal_shake+=count*120;
            cout<<"\n\n\t\t"<<count<<" shake is the order!";

        }
        else
            cout<<"\n\t Only "<<Qshake-Sshake<<"shake remaining in hotel ";
        break;
case 6:     
        cout<<"\n\n Enter the Quantity of chicken_roll you want: ";
        cin>>count;
        if(Qchicken_roll-Schicken_roll>=count){
            Schicken_roll+=count;
            cTotal_chicken_roll+=count*150;
            cout<<"\n\n\t\t"<<count<<" chicken_roll is the order!";

        }
        else
            cout<<"\n\t Only "<<Qchicken_roll-Schicken_roll<<"chicken_roll remaining in hotel ";
        break;
case 7:
        cout<<"\n Details of sales and collection :";
        cout<<"total money we made for the day: "<<cTotal_rooms+cTotal_pasta+cTotal_burger+cTotal_noodles+cTotal_shake+cTotal_chicken_roll<<" rs";
        break;
      
case 8:
        exit(0);

      default:
        cout<<"\n Please select valid option !";
        break;
      }
goto m;
    

 }
