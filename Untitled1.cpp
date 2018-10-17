#include<iostream>
#include<string>
using namespace std;
class books
{
	public: char name[20], auth[20], publ[20];
	             int price, stock;
	             read_data();
	             display_data_single();
				 display_data_multiple(int p);
	             update_price();
	             
};

int main()
{	
	books a[50];
	int flag=1; int user=0, user_2=0, user_3=0, user_4=0; int n=0;
	while(flag!=0)
	{
		cout<<"============================================="<<endl;
		cout<<"           	 Library Database               "<<endl;
		cout<<"============================================="<<endl;
		cout<<"                                             "<<endl;
		cout<<"                                             "<<endl;
		cout<<"Press 1 -> Input Data                        "<<endl;
		cout<<"Press 2 -> display_data Data                 "<<endl;
		cout<<"Press 3 -> Update Price                      "<<endl;
		cout<<"Press 0 -> Exit                              "<<endl;
		cout<<"                                             "<<endl;
		cout<<"                                             "<<endl;
		cout<<"============================================="<<endl;

		cin>>user;
		switch(user)
		{
			case 1:
						cout<<"Enter the number of Books to add"<<endl;
					    cout<<"#### WARNING MAX 50 ALLOWED ####"<<endl;
					    cin>>n;
							for(int z=0; z<n; z++)
							{
								a[z].read_data();
							cout<<"============================================="<<endl;
					    	cout<<"     Do you wish to return to main menu ?    "<<endl;
						    cout<<"============================================="<<endl;
					    	cout<<"                                             "<<endl;
					    	cout<<"                                             "<<endl;
					    	cout<<"Press 1 -> Return to Main Menu               "<<endl;
					    	cout<<"Press 2 -> Exit the Library Database         "<<endl;
					    	cout<<"                                             "<<endl;
							cout<<"                                             "<<endl;
					    	cout<<"                                             "<<endl;
					    	cout<<"============================================="<<endl;
					    	cin>>user_2;
					    	if(user_2 == 2)
					    	{
					    			flag=0;
					    	}
					    	else if(user_2 == 1)
					    	{
					    			flag=1;
					    	}
					    	else
					    	{
					    	cout<<"Incorrect Input detected"<<endl;
					    	cout<<"Program will terminate now"<<endl;
					    	flag=0;
					    	}
							}
							break;
			case 2:
								cout<<"============================================="<<endl;
								cout<<"   How many books' data do you want to see   "<<endl;
								cout<<"============================================="<<endl;
								cout<<"                                             "<<endl;
								cout<<"                                             "<<endl;
								cout<<"Press 1 for single data output               "<<endl;
								cout<<"Press 2 for multiple data output             "<<endl;
								cout<<"                                             "<<endl;
								cout<<"                                             "<<endl;
								cout<<"                                             "<<endl;
								cout<<"============================================="<<endl;
								cin>>user_3;
					    	if(user_3 == 2)
					    	{
										int limit_low=0, limit_high=0;
					    			cout<<"Enter Index limit for books you want"<<endl;
										cin>>limit_low>>limit_high;
										if ( limit_low >=limit_high )
										{
											int temp_2=0;
											temp_2=limit_low;
											limit_low=limit_high;
											limit_high=temp_2;
										}
										for( int y=limit_low-1; y<limit_high; y++)
										{
											a[y].display_data_multiple(y);
										}
					    	}
					    	else if(user_3 == 1)
					    	{
										int temp_3=0;
					    			cout<<"Enter index of the book you want details off"<<endl;
										cin>>temp_3;
										a[temp_3].display_data_single();
					    	}
					    	else
					    	{
					    	cout<<"Incorrect Input detected"<<endl;
					    	cout<<"Program will terminate now"<<endl;
					    	flag=0;break;
					    	}
								cout<<"============================================="<<endl;
					    	cout<<"     Do you wish to return to main menu ?    "<<endl;
						    cout<<"============================================="<<endl;
					    	cout<<"                                             "<<endl;
					    	cout<<"                                             "<<endl;
					    	cout<<"Press 1 -> Return to Main Menu               "<<endl;
					    	cout<<"Press 2 -> Exit the Library Database         "<<endl;
					    	cout<<"                                             "<<endl;
								cout<<"                                             "<<endl;
					    	cout<<"                                             "<<endl;
					    	cout<<"============================================="<<endl;
					    	cin>>user_2;
					    	if(user_2 == 2)
					    	{
					    			flag=0;
					    	}
					    	else if(user_2 == 1)
					    	{
					    			flag=1;
					    	}
					    	else
					    	{
					    	cout<<"Incorrect Input detected"<<endl;
					    	cout<<"Program will terminate now"<<endl;
					    	flag=0;
					    	}
								break;
			case 3:
								cout<<"Enter the index of the book";
								int temp_4=0;
								cin>>temp_4;
								a[temp_4].update_price();
								cout<<"============================================="<<endl;
					    	cout<<"     Do you wish to return to main menu ?    "<<endl;
						    cout<<"============================================="<<endl;
					    	cout<<"                                             "<<endl;
					    	cout<<"                                             "<<endl;
					    	cout<<"Press 1 -> Return to Main Menu               "<<endl;
					    	cout<<"Press 2 -> Exit the Library Database         "<<endl;
					    	cout<<"                                             "<<endl;
								cout<<"                                             "<<endl;
					    	cout<<"                                             "<<endl;
					    	cout<<"============================================="<<endl;
					    	cin>>user_2;
					    	if(user_2 == 2)
					    	{
					    			flag=0;
					    	}
					    	else if(user_2 == 1)
					    	{
					    			flag=1;
					    	}
					    	else
					    	{
					    	cout<<"Incorrect Input detected"<<endl;
					    	cout<<"Program will terminate now"<<endl;
					    	flag=0;
					    	}
								break;

		}
	}
}

int books::read_data()
{
		cout<<"Enter title, author, publisher, price and stock of the book"<<endl;
		gets(name); gets(auth); gets(publ); cin>>price>>stock;
		return 0;
}

int books::display_data_single()
{
		cout<<"Title : "; puts(name); cout<<endl;
		cout<<"Author : "; puts(auth); cout<<endl;
		cout<<"Publisher : "; puts(publ); cout<<endl;
		cout<<"Price : "<<price<<endl;
		cout<<"Stock : "<<stock<<endl;
		return 0;
}

int books::display_data_multiple(int rank)
{
	cout<<endl<<rank;
	cout<<"Title : "; puts(name); cout<<endl;
	cout<<"Author : "; puts(auth); cout<<endl;
	cout<<"Publisher : "; puts(publ); cout<<endl;
	cout<<"Price : "<<price<<endl;
	cout<<"Stock : "<<stock<<endl;
	cout<<endl;
	return 0;
}

int books::update_price()
{
	int index=0; int temp=0;
	cout<<"Enter the index number of the books whose price is to be updated"<<endl;
	cin>>index;
	cout<<"Enter the new price"<<endl;
	price = temp;
	return 0;
}

