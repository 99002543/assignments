#include<iostream>
#include<vector>
#include<algorithm>

 
int main()
{
 std::vector<int>v= {1,5,20,10,25,0};
 std::sort(v.begin(),v.end()
 
,[](int x, int y)
{return x<y;});
 
 std::cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<" "<<v[3]<<" "<<v[4]<<" "<<v[5];
 int min=10;
 int count=0;
 count = std::count_if(v.begin(),v.end(),[min](int x) { return(x>min);});
 
 std::cout<<" "<<count<<std::endl;
 auto iter= std::max_element(v.begin(),v.end(),[](int x,int y)
 {
 return x<y;
 }
);
 std::cout<<&(*iter)<<std::endl;
 
 
}
