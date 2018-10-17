#include<iostream>
using namespace std;
class weather_report 
{ public:
  int day;
  float ht,lt,ra,sa;
  void accept(); 
  void display();
  weather_report(){
  day=0;
  ht=43;
  lt=34;
  ra=32;
  sa=45;
  }
  }w[5];
 int i;
 void weather_report::accept() 
 {  cout<<"enter day  of month,"<<"enter high temp,"<<"enter low temp,"<<"enter rain amount,"<<"enter snow      amount,";
   for(i=0;i<5;i++) 
{ cin>>w[i].day>>w[i].ht>>w[i].lt>>w[i].ra>>w[i].sa;
 }
 }
 void weather_report::display()
 { cout<<"day of month :"<<"\t"<<"high temp :"<<"\t"<<"low temp :"<<"\t"<<"rain   amount :"<<"snow amount :"<<"\n";
  for(i=0;i<5;i++){ 
  cout<<w[i].day<<"\t\t"<<w[i].ht<<"\t\t"<<w[i].lt<<"\t\t"<<w[i].ra<<"\t\t"<<w[i].sa<<"\n";
                                 }
  int s1=0,s2=0,s3=0,s4=0;
   for(i=0;i<5;i++){
           s1=s1+w[i].ht;
           s2=s2+w[i].lt;                     
            s3=s3+w[i].ra;
            s4=s4+w[i].sa;
                                  }
                                   cout<<"avg"<<"\t\t"<<s1/5<<"\t\t"<<s2/5<<"\t\t"<<s3/5<<"\t\t"<<s4/5<<"\n";
 }
 int main() 
 { int ch;
  do{ cout<<"enter 1 for accepting data"<<"\n"<<"enter 2 for display data";
   cin>>ch;
   switch(ch){
               case 1:w[5].accept();
                          break;
               case 2:w[5].display(); 
                          break;
               default : cout<<"enter 1 or 2";
            }
  
  }while(ch!=3);
}

/* OUTPUT
enter 1 for accepting data
enter 2 for display data
1
enter day  of month,enter high temp,enter low temp,enter rain amount,enter snow amount,
1
23
22
21
21
2
34
32
32
43
3
43
23
32
45
4
23
21
34
24
5
34
24
24
21
enter 1 for accepting data
enter 2 for display data
2
day of month :  high temp :     low temp :      rain   amount :snow amount :
1               23              22              21              21
2               34              32              32              43
3               43              23              32              45
4               23              21              34              24
5               34              24              24              21
avg             31              24              28              30
enter 1 for accepting data
enter 2 for display data
/*
