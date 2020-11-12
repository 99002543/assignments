#include<thread>
#include<iostream>
#include<chrono>
#include<functional>

constexpr int max=10;
std::chrono::milliseconds delay(1000);
//std::chrono::duration<int,std::milli>delay(1000);
void fcompute()
{	 for (int i=0;i<5;i++)
{
	std::cout<<"thread-A"<<std::endl;
	std::this_thread::sleep_for(delay);
}
}

void gcompute()
{   for (int i=0;i<5;i++)
	{std::cout<<"thread-B"<<std::endl;\
	std::this_thread::sleep_for(delay);
	}
}
void compute(std::string label) {
  std::cout << "Thread--" << label << "\n";
  for(int i=1;i<=max;i++) {
    std::cout << label << "--" << i << "\n";
    std::this_thread::sleep_for(delay);
  }
}

int main()
{
	std::cout<<"exe main"<<std::endl;
	/*std::thread t1(fcompute);
	std::thread t2(gcompute);*/
	std::thread t1(std::bind(compute, "A"));
  std::thread t2(std::bind(compute, "B"));
  std::thread t2(compute, "B");                 //also works
	std::thread t3([] ( ) { std::cout<<"Thread-c\n";});
	
	t1.join();
	t2.join();
	t3.join();
	std::cout<<"Thank you"<<std::endl;
	return 0;
}

/*void print_range(int start,int end) {
  std::cout << "printing range from:" << start << "to:" << end << "\n";
  for(int i=start;i<=end;i++) {
    std::cout << i << "\n";
    std::this_thread::sleep_for(delay);
  }
}
int main() {
  std::cout << "Main -- Welcome\n";
  int start,end,i;
  int n=10;
  std::thread tarr[n];//default ctor
  for(int i=0;i<n;i++) {
    start = i*10+1;
    end = start+10;
    tarr[i] = std::thread(print_range,start,end);
    //tarr[i]=std::thread(std::bind(print_range,start,end));
  }
  for(i=0;i<n;i++)
    tarr[i].join();
  return 0;
}*/

