#include<iostream>
using namespace std;
string Activity(string temp, string humidity)
{  
    string result;
    if(temp == "warm" && humidity == "dry")
    {
       result = "playtennis";
    }
    if(temp == "warm" && humidity == "humid")
    {
       result = "Swimming";
    }
    if(temp == "cold" && humidity == "dry")
    {
       result = "playBasketball";
    }
    if(temp == "cold" && humidity == "humid")
    {
       result = "watchTV";
    }
    return result;
} 
int main()
{
    string temp;
    string humidity;
    cout << " Enter temperature(warm or cold) : ";
    cin >> temp;
    cout << " Enter humidity (dry or humid) : ";
    cin >> humidity;
    cout << "Recommended Activity :" << Activity(temp,humidity);
    return 0;
}