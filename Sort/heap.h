#ifndef HEAP_H
#define HEAP_H
#include<iostream>
#include<cmath>
/*template<typename Iter> class  heap
{
public:

    void operator()(Iter begin,Iter end);*/
   template<typename Iter>void Max_Heap(std::size_t i,const Iter begin,std::size_t size)
 {

   size_t left = i*2;
   size_t right = i*2+1;
   size_t largest;
   if(left<= size && *(begin+left-1) > *(begin+i-1) )
   {
       largest = left;
   }
   else
   {
       largest = i;
   }
   if(right <= size && *(begin+right-1) > *(begin+largest-1) )
   {
       largest = right;
   }
   if(largest != i)
   {
       std::swap(*(begin+largest-1) ,*(begin+i-1 ));
       Max_Heap(largest,begin,size);
   }


}

template<typename Iter>void Build_Heap(Iter begin,Iter end)
{
    std::size_t size_hu = std::distance(begin,end);
    for(std::size_t i = std::floor(size_hu/2);i>=1;--i )
    {
        Max_Heap(i,begin,size_hu);
    }

}
template<typename Iter>void Heap_Sort(Iter begin,Iter end)
{
    Build_Heap(begin,end);
    int size_sort = std::distance(begin,end);
    for(int i = std::distance(begin,end);i>=2;--i)
    {
        std::swap(*begin,*(begin+i-1));
        --size_sort;
        Max_Heap(1,begin,size_sort);
    }
}
    /*template<typename Iter> void Build_Heaap(Iter begin,Iter end)
    {
        size = std::distance(begin,end);

        for(int i = std::floor(size/2);i <= 0;--i)
        {
            Max_Heapify();
        }
    }*/

/*private:
    typedef typename std::iterator_traits<Iter>::value_type T;
    Iter _form;
    int size;//堆的大小
};*/
#endif // HEAP_H
