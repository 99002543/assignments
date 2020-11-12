#include<iostream>
#include<vector>

void FuncPointerEx(int a)
{
	std::cout<<"hello world value "<<a<<std::endl;
}

void PrintValue(int value)
{
	std::cout<<"Value:"<<value<<std::endl;
}
void ForEach(std::vector<int>&values,void(*func)(int))
{
	for(int value:values)
	func(value);
}

int main()
{
	
	/*auto func = FuncPointerEx; // function usage.
	func(1);*/
	
	//above can be implemented as
	
	typedef void(*PointerEx)(int);
	PointerEx fuc=FuncPointerEx;
	//func1=FuncPointerEx;
	fuc(2);

	//implementing of foreach loop on vectors and passing of functions into another funtions.
	
	std::vector<int>values={1,2,3,4,5};
	ForEach(values,PrintValue);//passing one function into another function;
	
}

