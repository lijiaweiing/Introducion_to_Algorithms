#ifndef QUICK_SORT_H
#define QUICK_SORT_H
#include<cmath>
#include<vector>
/*
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */

template<typename Iter>Iter Partition(Iter begin,Iter end)
{
    auto x = (end-1);
    auto i = begin-1;
    for(auto j = begin;j != x;++j)
    {
        if(*x >= *j)
        {
            ++i;
            std::swap(*i,*j);
        }

    }
    std::swap(*(++i),*x);
    return i;
}
template<typename Iter>void Quick_Sort(Iter begin,Iter end)
{if(std::distance(begin,end) >1)
    {
    auto q = Partition(begin,end);
    Quick_Sort(begin,q);
    Quick_Sort(q+1,end);
    }
}


#endif // QUICK_SORT_H
