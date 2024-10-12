#include<iostream>
using namespace std;
string CalculateGrade(float percentage)
{
    
     if(percentage==100 && percentage>=90)
     {
        return "A+";
     }
     else if(percentage<90 && percentage>=80)
     {
        return "A";
     }
     else if(percentage<80 && percentage>=70)
     {
        return "B+";
     }
     else if(percentage<70 && percentage>=60)
     {
        return "B";
     }
     else if(percentage<60 && percentage>=50)
     {
        return "C";
     }
     else if(percentage<50 && percentage>=40)
     {
        return "D";
     }
     else if(percentage<40)
     {
        return "F ";
     }
     
}
main()
{
   int marks1,marks2,marks3,marks4,marks5,total;
   string name;
   float percentage;
   cout << "Enter your name:";
   cin >> name ;
   cout << "Enter your marks in English:";
   cin >> marks1;
   cout << "Enter your marks in Maths :";
   cin >> marks2;
   cout << "Enter your marks in Chemistry :";     
   cin >> marks3;
   cout << "Enter your marks in Social Sciences:";
   cin >> marks4;
   cout << "Enter your marks in Biology:";
   cin >> marks5;
   total = marks1 + marks2 + marks3 + marks4 + marks5;
   percentage = total/5;
   cout << "Welcome  " << name << endl;
   cout << "Your percentage is :" << percentage <<endl;
   cout << "Your Grade is :" << CalculateGrade;
} 
