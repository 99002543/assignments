#include<iostream>

class A
{
	int x;
	int y;
	void init()
	{
		x=0;
		}
public:
	
      A(){ init();y=0;}
      A(int p){init(); this->y=p;}
      void show()
      {
      	std::cout<<x<<" "<<y;
      }
};
      
int main()
{
	A a(1);
	a.show();
}
