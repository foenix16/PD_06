#include<iostream>
using namespace std;
string checkPointPosition(int h, int x, int y)
{
  bool Lower,Upper,OnLowerBorder,OnUpperBorder;

  Lower = (x >= 0 && x <= h*3 && y >= 0 && y <=h);
  Upper = (x >= h && x <=2*h && y >= h && y <= h*4);
  OnLowerBorder = (x >= 0 && x <= 3*h && y == 0) || (x >= 0 && x <= 3*h && y == h) || (x == 0 && y >= 0 && y <= h) || (x == 3*h && y >= 0 && y <= h); 
  OnUpperBorder = (x == h && y >= h && y <= 4*h) || (x == 2*h && y >= h && y <= 4*h) || (x >= h && x <= 2*h && y == h) || (x >= h && x <= 2*h && y == 4*h);
  if (OnLowerBorder || OnUpperBorder) 
    {
        return "Border";
    } 
  else if (Lower || Upper) 
    {
        return "Inside";
    } 
  else 
    {
        return "Outside";
    }
}

main()
{
  int h,x,y;
  cout << "Enter the height h : ";
  cin >> h;
  cout << "Enter the x cordinate : ";
  cin >> x;
  cout << "Enter the y cordinate : ";
  cin >> y;
  cout << checkPointPosition(h,x,y);
}