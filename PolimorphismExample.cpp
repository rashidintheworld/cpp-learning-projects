#include <iostream>
using namespace std;

class Shape {
  protected:
    double width;
    double height;

  public:
    void set_dimensions(double w, double h) {
        width = w;
        height = h;
    }
    virtual double area() {
        cout << "Area of shape not defined." << endl;
        return 0.0;
    }
};

class Rectangle : public Shape {
  public:
    double area() {
        return width * height;
    }
};

class Triangle : public Shape {
  public:
    double area() {
        return 0.5 * width * height;
    }
};

int main() {
  Shape* shape;
  Rectangle rect;
  Triangle tri;

  shape = &rect;
  shape->set_dimensions(5, 10);
  cout << "Rectangle area: " << shape->area() << endl;

  shape = &tri;
  shape->set_dimensions(5, 10);
  cout << "Triangle area: " << shape->area() << endl;

  return 0;
}