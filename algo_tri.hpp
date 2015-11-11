#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

class Tri
{
public:
  Tri();
  template<typename T>
  static void bubble_sort(std::vector<T>& par)
  {
    int s = par.size();
    bool e = true;
    T tmp;
    while ((s>0) and e)
    {
      e = false;
      for (int i = 0; i < s-1; i++)
      {
        if (par[i]>par[i+1])
        {
          tmp = par[i];
          par[i] = par[i+1];
          par[i+1] = tmp;
          e = true;
        }
      }
      s--;
    }
  }
  template<typename T>
  static void selection_sort(std::vector<T>& par)
  {
    int s = par.size();
    int min = 0;
    T tmp;
    for (int i = 0; i < s-1; i++)
    {
      min = i;
      for (int j = i+1; j < s; j++)
      {
        if (par[j]<par[min])
        {
          min = j;
        }
      }
      if (i != min)
      {
        tmp = par[i];
        par[i] = par[min];
        par[min]=tmp;
      }
    }
  }
  template<typename T>
  static void insertion_sort(std::vector<T> & par)
  {
    int s = par.size();
    T x;
    int j = 0;
    for (int i = 1; i < s; i++)
    {
        x = par[i];
        j = i;
        while (j>0 and par[j-1]>x)
        {
            par[j] = par[j-1];
            j--;
        }
        par[j] = x;
    }
  }
};
