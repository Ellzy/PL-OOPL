#include<iostream>
class weather
{
public: int input_data();
        int display_data_data();
        int day, high, low, rainfall, saturation;
}a[50];
int main()
{
  int n=0;
  int a=0;
  int m=0;
  int counter=0;
  int flag = 1;
  while (flag != 0)
  {
    std::cout << "------------------------------------" << std::endl;
    std::cout << "   Welcome To The Weather Report    " << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "                                    " << std::endl;
    std::cout << "-> Press 1 to Enter Data            " << std::endl;
    std::cout << "-> Press 2 to display_data Data          " << std::endl;
    std::cout << "-> Press 0 to Exit                  " << std::endl;
    std::cout << "                                    " << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cin >> n;
    weather  a;
    switch (n)
    {
      case 1:
        std::cout << "Enter the number of days' data to add" << std::endl;
        std::cin >> a;
        for(int i=0; i<a; i++)
        {
          a[i].input_data();
          std::cout << "------------------------------------" << std::endl;
          std::cout << "Do you wish to return to main menu ?" << std::endl;
          std::cout << "------------------------------------" << std::endl;
          std::cout << "                                    " << std::endl;
          std::cout << "-> Press 1 for YES                  " << std::endl;
          std::cout << "-> Press 2 for NO                   " << std::endl;
          std::cout << "                                    " << std::endl;
          std::cout << "                                    " << std::endl;
          std::cout << "------------------------------------" << std::endl;
          std::cin >> b;
          if (b=2)
          {
            flag = 0;
          }
        }
          break;
      case 2:
          std::cout << "------------------------------------" << std::endl;
          std::cout << "   Enter the how to display_data data    " << std::endl;
          std::cout << "------------------------------------" << std::endl;
          std::cout << "                                    " << std::endl;
          std::cout << "-> Press 1 for Single data          " << std::endl;
          std::cout << "-> Press 2 for Multiple Data        " << std::endl;
          std::cout << "                                    " << std::endl;
          std::cout << "                                    " << std::endl;
          std::cout << "------------------------------------" << std::endl;

          a.display_data_data();
          std::cout << "                                    " << std::endl;
          std::cout << "Do you wish to return to main menu ?" << std::endl;
          std::cout << "-> Press 1 for YES" << std::endl;
          std::cout << "-> Press 2 for NO " << std::endl;
          std::cin >> b;
          if (b=2)
          {
            flag = 0;
            break;
          }
          break;
      case 0:
        flag = 0;
        std::cout << "Thank you For using our Database" << std::endl;
        break;
      default:
        std::cout << "Enter the CORRECT input value" << std::endl;
        break;
      }
    }
  return 0;
  }
}
int weather::input_data()
{
  std::cout << "Enter the Day" << std::endl;
  std::cin >> day;
  std::cout << "Enter Highest Temperature" << std::endl;
  std::cin >> high;
  std::cout << "Enter Lowest Temperature" << std::endl;
  std::cin >> low;
  std::cout << "Enter Rainfall" << std::endl;
  std::cin >> rain;
  std::cout << "Enter Saturation level" << std::endl;
  std::cin >> saturation;
}
int weather::display_data_data()
{

}