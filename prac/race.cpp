#include<thread>
#include<iostream>
#include<chrono>
#include<functional>
#include <mutex>          // std::mutex

std::mutex mtx;  
int val=101; 
//std::atomic<int>val(100);
void fcompute(){

std::cout<<"thread-A"<<std::endl;

mtx.lock();	
	 for (int i=0;i<10000;i++)
{
	val++;
	
}
mtx.unlock();
}

void gcompute()
{
std::cout<<"thread-B"<<std::endl; 
mtx.lock();
for (int i=0;i<10000;i++)
	{
	val--;
	}
mtx.unlock();
}

int main()
{

   std::cout<<"exe main"<<std::endl;
	std::thread t1(fcompute);
	std::thread t2(gcompute);
	t1.join();
	t2.join();
	std::cout<<"final val"<<val<<std::endl;
	return 0;
}
