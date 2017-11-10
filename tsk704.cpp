#include <iostream>
using namespace std;

class Point
{
public:
  Point(); 
  Point(int xval, int yval);
  void Move(int dx, int dy);
  int Get_X() const;
  int Get_Y() const;
  void Set_X(int xval);
  void Set_Y(int yval);
private:
  int X;
  int Y;
};  

Point::Point()
{
  X = 0;
  Y = 0;
}
Point::Point(int xval, int yval)
{
  X = xval;
  Y = yval;
}

void Point::Move(int dx, int dy)
{
  X += dx;
  Y += dy;
}
int Point::Get_X() const
{
  return X;
}
int Point::Get_Y() const
{
  return Y;
}
void Point::Set_X(int xval)
{
  X = xval;
} 
void Point::Set_Y(int yval)
{
  Y = yval;
} 
int main()
{
  Point p1;
  cout<< "The x value for p1 is " << p1.Get_X() << endl;
  cout<< "The y value for p1 is " << p1.Get_Y() << endl;
  Point p2(2, 3);
  cout<< "The x value for p2 is " << p2.Get_X() << endl;
  cout<< "The y value for p2 is " << p2.Get_Y() << endl;
  p2.Move(1, -1);
  cout<< "After the move:" << endl;
  cout<< "The x value for p2 is " << p2.Get_X() << endl;
  cout<< "The y value for p2 is " << p2.Get_Y() << endl;
  return 0;
}


