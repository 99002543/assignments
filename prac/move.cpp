#include<iostream>

class point
{
  int m_x;
  int m_y;
  public:
point():m_x(0),m_y(0)
{ std::cout << "Default Constructor\n";
}

point(int x, int y):m_x(x),m_y(y)
{ std::cout << "Paramterised Constructor\n";
}

point(const point &p):m_x(p.m_x), m_y(p.m_y)
{ std::cout << "Copy Constructor\n";
}


//move constructor
point(point &&p):m_x(p.m_x), m_y(p.m_y)
{
   std::cout << "Move Constructor\n";
}

//move operator=
 point& operator=(point &&p)
 {
    std::cout << "Move = operator\n";
     m_x = p.m_x;
     m_y = p.m_y;

     return *this;
 } 
 };

 int main()
{
  point p1;
  std::cout << "p1 -\n";
  point p2(2,3);
  std::cout << "p2 -\n";
  point p3(std::move(p2));
  std::cout << "p3 -\n";
  point p4;
  p4 = std::move(p2);
  std::cout << "p4 -\n";
 
      
}
