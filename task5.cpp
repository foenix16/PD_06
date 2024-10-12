#include<iostream>
using namespace std;

float Price(int quantity, string day, string itemName)
{
     float price;
     if(day=="monday" || day=="tuesday" || day=="wednesday" || day=="thursday" || day=="friday")
       {  
        if(itemName=="banana")
         {
          price=quantity*2.50;
          return price;
         }
         if(itemName=="orange")
         {
          price=quantity*0.85;
          return price;
         }
         if(itemName=="apple")
         {
          price=quantity*1.20;
          return price;
         }
         if(itemName=="grapefruit")
         {
          price=quantity*1.45;
          return price;
         }
         if(itemName=="kiwi")
         {
          price=quantity*2.70;
          return price;
         } 
         if(itemName=="pineapple")
         {
          price=quantity*5.50;
          return price;
         }
         if(itemName=="grapes")
         {
          price=quantity*3.85;
          return price;
         }
       }


        else if(day=="saturday" || day=="sunday")
         {  
        if(itemName=="banana")
         {
          price=quantity*2.70;
          return price;
         }
         if(itemName=="orange")
         {
          price=quantity*0.90;
          return price;
         }
         if(itemName=="apple")
         {
          price=quantity*1.25;
          return price;
         }
         if(itemName=="grapefruit")
         {
          price=quantity*1.60;
          return price;
         }
         if(itemName=="kiwi")
         {
          price=quantity*3.00;
          return price;
         } 
         if(itemName=="pineapple")
         {
          price=quantity*5.60;
          return price;
         }
         if(itemName=="grapes")
         {
          price=quantity*4.20;
          return price;
         }
       }
}
main()
{
    int quantity;
    string day;
    string itemName;
    cout << "Enter the Day you are shopping :";
    cin >> day;
    cout << "Enter the item you are buying(banana,apple,orange,grapefruit,kiwi,pineapple,grapes) :" ;
    cin >> itemName;
    cout << "Enter the number of items you bought :";
    cin >> quantity;
    cout << "The price will be : " << Price(quantity,day,itemName);
}
