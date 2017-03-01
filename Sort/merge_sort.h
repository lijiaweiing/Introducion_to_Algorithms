#ifndef MERGE_SORT_H
#define MERGE_SORT_H
#include<vector>
#include<cmath>
#include<algorithm>
/*
 * 算法导论2.3节
 *归并排序
 *分解：　分解待排序的n个元素成格局n/2元素的子序列
 *解决：　使用归并排序排列两个子程序
 *合并：　合并两个已排序的子序列以产生已排序的答案
 *T（n） = 2T(n/2) +theta(n);
 *T(n ) = nlgn
 *
 *
 *
 *
 *
*/
template<typename Iter>void Merge(Iter begin, Iter end, Iter mid)
{
    typedef typename std::iterator_traits<Iter>::value_type T;
    std::vector<T> vec_a(begin,mid);
    std::vector<T> vec_b(mid,end);
    auto left_vec = vec_a.begin();
    auto right_vec = vec_b.begin();
    auto current = begin;
   while(left_vec != vec_a.end() && right_vec != vec_b.end())
   {
       if(*left_vec<= *right_vec)
       {
           *current++ = *left_vec++;
       }
       else
       {
           *current++ = *right_vec++;
       }

   }
   if(left_vec == vec_a.end()&& right_vec != vec_b.end() )
   {
        std::copy(right_vec,vec_b.end(),current);
   }
   if(right_vec  == vec_b.end() && left_vec != vec_a.end())
   {
      std::copy(left_vec,vec_b.end(),current);
   }
}

template<typename Iter> void Merge_Sort(Iter begin,Iter end)
{
    if(begin != end-1){
    auto mid = begin + std::distance(begin,end)/2;
    Merge_Sort(begin,mid);
    Merge_Sort(mid,end);
    Merge(begin,end,mid);

    }
}















#endif // MERGE_SORT_H
