#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H
#include<iostream>
template<typename Iter>void Itertion_Sort(Iter begin,Iter end)
{
    for(auto j = begin+1;j < end ;++j)
    {
        auto key = *j;
        auto i = j-1;
        while (i>=begin && key < *i) {
           *(i+1) = *i;
            i = i - 1;


        }
        *(i+1) = key;
    }
}

#endif // INSERTION_SORT_H
