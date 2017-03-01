#include<iostream>
#include<vector>
#include"quick_sort.h"
int main()
{
    std::vector<int> vec= {4,1,3,2,16,9,10,14,8};
    Quick_Sort(vec.begin(),vec.end());
    for(auto i : vec)
    {
        std::cout<<i<<" ";
    }

}
