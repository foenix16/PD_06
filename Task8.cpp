#include<iostream>
#include<cmath>
using namespace std;
int calculateVolleyballGames(string TypeofYear, int holidays, int weekends)
{
    int totalweekends = 48;
    double Sofiaweekends = totalweekends-weekends;
    double SofiaweekendsPlay = Sofiaweekends *3/4;
    double HolidaysGames = holidays*2/3;
    double total = weekends + SofiaweekendsPlay + HolidaysGames;
     
    if(TypeofYear == "Leap")
    {
      total = total*1.15;
    }
   
  return floor(total);
}

main()
{
   string TypeofYear;
   int holidays,weekends;
   cout << "Enter the year type(Leap,Normal) : ";
   cin >> TypeofYear;
   cout << "Enter number of holidays : ";
   cin >> holidays;
   cout << "Enter the number of weekends Vladmir travels to his home : ";
   cin >> weekends;
   cout << "The number of times Vladmir plays is : " << calculateVolleyballGames(TypeofYear, holidays, weekends);
}  