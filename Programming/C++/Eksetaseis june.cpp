#include <iostream>
using namespace std;

class Point{

  private:
    double x, y;

  public:
    Point();
    Point(double mx, double my);
    double getx();
    double gety();
    void print();
    void move(double dx, double dy);
    virtual ~Point();
};

Point::Point(){
  x = 0.0;
  y = 0.0;
}

Point::Point(double mx, double my){
  x = mx;
  y = my;
}

double Point::getx(){
  return x;
}

double Point::gety(){
  return y;
}

void Point::move(double dx, double dy){
  x = x + dx;
  y = y + dy;
}

void Point::print(){
  cout << "(" << x << "," << y << ")" << endl;
}

Point::~Point(){

}

int main() {
  Point p1;
  Point p2(7 , 9);
  Point p3;

  cout << "Το p1 object" << endl;
  p1.print();

  cout << "Το p2 object" << endl;
  p2.print();

  cout << "Το p3 object" << endl;
  p3.print();

  p1.move(1, 1);

  cout << "Το p1 object" << endl;
  p1.print();

  system("pause");
  return 0;
}
