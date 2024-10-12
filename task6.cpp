#include<iostream>
using namespace std;
void calculateHotelPrices(string month, int numberOfStays)
{
   float studio;
   float apartment;

   if(month == "May" || month == "October")
   {
       studio = 50*numberOfStays;
       apartment = 65*numberOfStays;
       if (numberOfStays > 14) 
       {
           studio -= studio*0.30;  
       } 
       else if (numberOfStays > 7) 
       {
           studio -= studio*0.05;
       }  
   }
   
    else if(month == "June" || month == "September")
   {
       studio = 75.20*numberOfStays;
       apartment = 68.70*numberOfStays;
       if (numberOfStays > 14) 
       {
           studio -= studio*0.20;  
       }
   }
    else if(month == "July" || month == "August")
   {
       studio = 76*numberOfStays;
       apartment = 77*numberOfStays;
   }

   if (numberOfStays > 14)
   {
       apartment -= apartment*0.10;  
   }

   cout << "Apartment: " << apartment << "$." << endl;
   cout << "Studio: " << studio << "$." << endl;
}

int main()
{
   string month;
   int numberOfStays;

   cout <<"Enter the month (May, June, July, August, September, October): ";
   cin >> month;
   cout <<"Enter the number of days you stayed: ";
   cin >> numberOfStays;

   cout << "Your total will be: " << endl;
   calculateHotelPrices(month, numberOfStays);
   return 0;
}
