#include<iostream>
class weather
{
public:
  float ht, lt, ra, sa; int day;
  void accept(); void display();
  weather()
  {
    day=0;ht=45;lt=45;ra=45;sa=45;
  }
}w[5];
int i;

void weather::accept();
{
  cout<<"Enter day\thighest temp\tlowest temp\train amount\tsnow amount"<<endl;
  for (int i = 0; i < 5; i++)
  {
    cin>>w[i].day\tw[i].ht\tw[i].lt\tw[i].ra\tw[i].sa>>endl;
  }
}

void weather::display()
{
  int s1=0,s2=0,s3=0,s4=0;
  cout<<"Day\thighest temp\tlowest temp\train amount\tsnow amount"<<endl;
  for(int i=0; i<5; i++)
  {
    cout<<w[i].day\tw[i].ht\tw[i].lt\tw[i].ra\tw[i].sa<<endl;
  }
}

int main()
{
  int
}
