#include<iostream>
#include<thread>
#include<chrono>
#include<functional>
using namespace std;
int block_mov=0;
int sum=0;
void sum_Array(int *arr, int thrd, int n)
{
    //int n=sizeof(arr)/sizeof(arr[0]);
    for(int i =(block_mov*n)/thrd; i<(n*(block_mov+1))/thrd;i++)
    {
        sum+=arr[i];
    }
     block_mov++;
}
int main()
{   int t ,len;
    //std::cin>>n;
    //std::cin>>len;
    t=4;
    len=10;
    int arr[len]={1,2,3,4,5,6,7,8,9,10};
    /*for(int i =0;i<len;i++)
    {
        arr[i]=rand()%100;
    }*/
    std::thread tr[t];

    for(int i=0;i<t;i++)
    {
        std::thread tr[i](sum_Array,arr[],t,len);
    }
    for(int i=0;i<t;i++)
    tr[i].join();
    std::cout<<sum;
}

    


