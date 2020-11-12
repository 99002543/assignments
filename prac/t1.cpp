#include<iostream>

namespace a{
	int i=100;}
	
namespace b
{
	int i=0;
	}
	
int main()
{
	std::cout<<a::i<<std::endl;
	std::cout<<b::i<<std::endl;
return 0;
}

