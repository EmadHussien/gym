#include <iostream>
using namespace std;

struct player_info {

 string name [10] ;
 long long  phone_num [10] ;
 string gender [10];
 long long natio_ID [ 10 ] ;
  string subtype [10] ;
 string exercise_type [10] ;
  float  weight [ 10 ];
  float  height [10] ;


};


struct G_data {
 int player_iD [10];




};

int tyears=2018;
int tmonth=1;
int tdays=20;
player_info p1 ;
G_data G1 ;
void minu ()
{
    cout<<"1 - Add New player " <<endl;
    cout<<"2 - search " <<endl;
    cout<<"3 - player Login " <<endl;





}
int ID=1000;
int counter=0 ;

void Add_player ()
  {

      for(int i=counter;i<counter+1;++i)
        {
            cout<<endl;
        cout<<"Name : " ;
            cin>>p1.name[i] ;
        cout<<"phone Number : " ;
            cin>>p1.phone_num[i] ;
        cout<<"Gender (Male / female ) : " ;
            cin>>p1.gender[i];
        cout<<"National ID : " ;
            cin>>p1.natio_ID[i];
        cout<<"sub type (annual / monthly ) : " ;
            cin>>p1.subtype[i];
        cout<<"weight : ";
            cin>>p1.weight[i] ;
        cout<<"height : ";
            cin>>p1.height[i] ;
        cout<<"type of exercise (fitness / bodybuilding ): " ;
            cin>>p1.exercise_type[i];

        G1.player_iD[i]=ID;
        cout<<"Your ID Is  : "<<G1.player_iD[i]<<endl;



        }
     ++ID;
     ++counter ;

  }


  void searchf()
  {
      cout<<"Enter player name : " ;
      string name ;
      cin>>name;
      cout<<"Enter player ID : " ;
      int id ;
      cin>>id;
      cout<<endl;
     for(int i =0;i<10 ;++i)
       {

           if(name==p1.name[i] && id==G1.player_iD[i])
           {

            cout<<"Name :  "<<p1.name[i] <<endl;
            cout<<"phone Number : "<<p1.phone_num[i]<<endl ;
            cout<<"Gender (Male / female ) : "<<p1.gender[i]<<endl ;
            cout<<"National ID : "<<p1.natio_ID[i] <<endl;
            cout<<"sub type (annual / monthly ) : "<<p1.subtype[i]<<endl ;
            cout<<"weight : "<<p1.weight[i]<<endl;
            cout<<"height : "<<p1.height[i]<<endl;
            cout<<"type of exercise (fitness / bodybuilding ): " <<p1.exercise_type[i]<<endl ;
            cout<<"Player ID  : "<<G1.player_iD[i]<<endl;
                 break;
           }

       }

      cout<<endl;


  }



  void login()
  {

      for(int i =0;i<10;++i)
        {
            cout<<"Enter player name : " ;
            string name ;
            cin>>name;
            cout<<"Enter player ID : ";
            int ID;
            cin>>ID;
            if(name==p1.name[i] && ID==G1.player_iD[i])
             {
                 cout<<"Welcome " <<p1.name[i]<<endl;
                 break;
             }

        }



  }










int main()
{

     string x="yes";
 while (x!="no" || x!="exit")
  {
   cout<<"select from the following choices : "<<endl;

    minu();

      int choice ;
  cin>>choice ;
   if(choice==1)
    {
      Add_player() ;
  }
else if (choice==2)
{
    cout<<endl;
    searchf();

}

else if (choice==3)
{
    cout<<endl;
    login();
}




  cout<<"Do you want to continue ? " ;
   cin>>x;
   if(x=="yes" )
     {
         continue ;
     }

   else break ;

  }










    return 0;
}
