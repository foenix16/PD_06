#include<iostream>
using namespace std;
int main()
{
    int Examhour,ExamMin,Studenthour,Studentmin;
    cout << "Enter the Exam Starting Time(Hour) : ";
    cin >> Examhour;
    cout << "Enter the Exam Starting Time(minutes) : ";
    cin >> ExamMin;
    cout << "Enter the Student Arrival Time(Hour) : ";
    cin >> Studenthour;
    cout << "Enter the Student Arrival Time(minutes) : ";
    cin >> Studentmin;

    int examtime = (Examhour*60)+ExamMin;
    int arrivaltime = (Student*60)+Studentmin;
    
    int timedifference = examtime - arrivaltime;
    if(timedifference >0)
    { 
       cout << "Late";
       if(timedifference>=60)
       {
        cout <<"You arrive" timedifference/60 << ":" << timedifference%60 << "after the exam";
       }
       else
       {
        cout << timedifference << "minutes after the exam; 
       }
    }	
    else if(timedifference>=-30)
    { 
       cout << "On Time";
       if(timedifference<0)
       {
        cout << "you arrive " << -timedifference << " before the Exam";
       }
       else
       {
        cout << "Early" << endl;
        timeDifference = -timeDifference; 
        if (timeDifference >= 60) 
        {
         cout << timeDifference / 60 << ":" << timeDifference % 60 << " hours before the start" << endl;
        } 
        else 
        {
         cout << timeDifference << " minutes before the start" << endl;
        }
    }

    return 0;
}
       


