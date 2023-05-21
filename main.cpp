#include <iostream>
#include <string.h>
using namespace std;

class PrepInsta{
  char* prepString;
  public:
  PrepInsta(){
    
  }
  PrepInsta(const char* str) {
    prepString = new char[16];
    strcpy(prepString, str);
  }
  //userdefined copy const
  PrepInsta(const PrepInsta &obj1) {
     prepString = new char[16];
     strcpy(prepString, obj1.prepString);
  }
  ~PrepInsta() {
    delete []prepString;
  }
  void print() {
    cout << prepString << endl;
  }
  void concatenate(const char* str) {
    strcpy(prepString,str);
  }
};

int main() {
  PrepInsta obj1("Prep");
  PrepInsta obj2 = obj1;

  cout << "Before concat" << endl;
  
  obj1.print();
  obj2.print();

  cout << "After concat" << endl;
  
  obj1.print();
  obj2.print();
  
  return 0;
}

/*
class Parent{
public:

  Parent() {
    cout << "Parent const called" << endl;
  }
  ~Parent() {
    cout << "Parent destr called" << endl;
  }
};

class Child : public Parent{
public:
  Child() {
    cout << "Child const called" << endl;
  }
  ~Child() {
    cout << "Child destr called" << endl;
  }
  
};

int main() {
  Child obj;

  return 0;
}
*/

/*
class PrepInsta{
  private:
  int x,y;
  public:
PrepInsta() {
  cout << "def const called" << endl;
}  

PrepInsta(int xx, int yy) {
    x = xx;
    y = yy;
    cout << "Parameterised const called" << endl;
  }

  PrepInsta(const PrepInsta &p1) {
    x = p1.x;
    y = p1.y;
    cout << "copy const called" << endl;
  }
  int getX() {
    return x;
  }
  int getY() {
    return y;
  }

};

int main() {
  PrepInsta p1(10,20);
  PrepInsta p2(p1);
  PrepInsta p3 = p1;
  PrepInsta p4;
  p4  = p1;
  
  cout << "p1 x is " << p1.getX() << " & y is " << p1.getY() << endl;
  cout << "p2 x is " << p2.getX() << " & y is " << p2.getY() << endl;
  cout << "p3 x is " << p3.getX() << " & y is " << p3.getY() << endl;
  cout << "p4 x is " << p4.getX() << " & y is " << p4.getY() << endl;
  return 0;
}
*/

/*
class PrepInsta{

  int x,y;
  public:
  void display() {
    cout << "The values of x is " << x << " &  y is " << y << endl;
  }
  // parameterized constructor
  PrepInsta(int a = 0, int b = 0) {
    x = a;
    y = b;
  }
};

int main() {
  PrepInsta prep(100,200);
  prep.display();
// Parameterized conversion constructor invoked using multiple variables
  prep = {25,50};
  prep.display();

  prep = {15,35};
  prep.display();

  return 0;
}
*/
/*
class Demo {
  public:
  int i;
  float f;
  Demo(int in, float fl) {
    i = in;
    f = fl;
  }
};

int main() {
  Demo demo(2000, 5.0);
  Demo demo2(1000, 10.75);

  cout << static_cast<float>(demo.i) <<  " " << demo.f << " " <<  endl;
  cout << demo2.i <<  " " << demo2.f << " " <<  endl;
  return 0;
}
*/

/*
class A {
  public:
  // constructor
  A() {
    cout << "constructor called class" << endl;
  }
  // destructor
  ~A() {
    cout << "destructor called inside A" << endl;
  }
};
int main() {

  A obj1;
  cout << "Chceking ......" << endl;  
  A obj2;
  return 0;
}
*/

/*
class Base{
private:
int x;
protected:
int y;
public:
int z;
Base() {
  x = 10;
  y = 20;
  z = 30;
}
};

class Derived : public Base {
  public:
  void printValues() {
  cout << "private member" << x << endl;
  cout << "protected member" << y << endl;
  cout << "public member" << z << endl;
}
};
int main() {
  Derived der;
  der.printValues();
  return 0;
}
*/

/*
class Parent {

private :
int x;

protected :
int y;

public:
int z;

void setterPriv(int priv) {
  x = priv;
  cout << x << endl;
}
void setterProt(int proc) {
  y = proc;
  cout << y << endl;
}

};

int main() {
  Parent a;
  a.setterPriv(10);
  a.setterProt(20);
  a.z = 30;
  cout << a.z << endl;
  return 0;
}
*/

/*
class A {

public:
  int x;

protected:
  int y;

private:
  int z;
};

class B : public A {

  int d = x;
  int e = y;
  int f = z;

};

int main() { 
  A a;
  B b;
  b.d = 5;
  b.e = 6;
  b.f = 7;

  // a.x = 1;
  // a.y = 2;
  // a.z = 3;

  // b.x = 1;
  // b.y = 2;
  // b.z = 3;
  
  return 0;

}
*/


/*
class Shape {

private:
  int length, breadth;
};

class Rectangle : public Shape {

protected:
  int length, breadth;

public:
  void setLength(int len) { length = len; }

  void setBreadth(int bre) { breadth = bre; }

  int area() { return length * breadth; }
};

int main() {
  Rectangle rect;
  rect.setLength(24);
  rect.setBreadth(12);
  rect.area();
  return 0;
}
*/

/*
// Parent | Base | Super
class Parent {

public:
  int var1;

private:
  int var2;

protected:
  int var3;
};

class Child : public Parent {
public:
  int var4;
  void print() { cout << var1 + var4 << endl; }
};

int main() {
  Child c;
  c.var4 = 10;
  c.print();

  return 0;
}
*/

/*
class Rectangle {
private:
  int length, breadth;

public:
  void setLength(int len);

  void setBreadth(int bre);

  int area() { return length * breadth; }
};

void Rectangle ::setLength(int len) { length = len; }


void Rectangle :: setBreadth(int bre) { breadth = bre; }

int Rectangle :: area() {
  return length * breadth;
}

    int
    main() {

  Rectangle rect;
  rect.setLength(25);
  rect.setBreadth(40);

  cout << "area is " << rect.area();

  return 0;
}
*/
/*
class Car {
private:
  string color;

public:
  void setColor(string clr) { color = clr; }
  string getColor() { return color; }
};

int main() {
  Car carObj;
  carObj.setColor("blue");

  cout << "The color of car is " << carObj.getColor();
  return 0;
}
*/

/*
class Rectangle {

private:
  int length, breadth;

public:
  // setters
  void setLength(int len) { length = len; }

  void setBreadth(int bre) { breadth = bre; }
  // getters
  int getLength() { return length; }

  int getBreadth() { return breadth; }

public:
  int area() { return length * breadth; }
};

int main() {
  Rectangle rectObj;     // object to Reactangle class
  rectObj.setLength(10); // setting length
  rectObj.setBreadth(20);
  cout << "The length is " << rectObj.getLength(); // getting length
  cout << "The breadth is " << rectObj.getBreadth();
  cout << "the new area is " << rectObj.area();

  return 0;
}
*/