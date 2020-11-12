#include<iostream>
#include<algorithm>
#include<vector>

/*Class Point{
 double x,y;
 public:
 Point()
 {
 	x=(rand()%10000)-5000;
 	y=(rand()%10000)-5000;
 }
 
 void print()
 {
 std::cout<< <<"["<<x<<y<<"]"<<std::endl;
 }
 };*/
int main()

{
	auto sayfun=[](int a,int b){
		return(a+b);
		}; //----> simple implementation of lambda functions 
		std::cout<<sayfun(1,2)<<std::endl;
	int i=10; int j=100;
	
	auto sayfunn=[&](int a,int b){
	i=i+1;
	
		return(a+b+i+j);
		}; //---->  implementation of lambda functions with capturing reference 
		std::cout<<sayfunn(1,2)<<std::endl;
		
	auto saynoref=[=](int a, int b){
		return(i+j+a+b);
		};//-------->implementation of lamda functions capturing pass by value method;
		std::cout<<saynoref(1,50)<<std::endl;
		
	std::vector<int> arr={1,2,3,4,5};
	double total=0;
	std::for_each(begin(arr),end(arr),[&](int x){total+=x;});
	std::cout<<total<<std::endl;    // implementation of for_each, vector and a lambda function.
	
	/*int count=100;
	vector<Point> points;
	for(int i=0;i<count;i++) points.push_back(Point());
	
	std::cout<<"unsorted"<<std::endl;
	for(int i =0;i<10;i++) points[i].Print();
	
	std:: sort(points.begin(),points.end(),[](const Point& a, const Point& b)
	{
		return(a.x*/
	
		
}
