#include "algo_tri.hpp"

Tri::Tri(){}
/*void bubble_sort(std::vector<int>& par)
{
  int s = par.size();
  bool e = true;
  int tmp;
  while ((s>0) and e)
  {
    e = false;
    for (int i = 1; i < s-1; i++)
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
}*/

/*void selection_sort(std::vector<int>& par)
{
  int s = par.size();
  int min = 0;
  int tmp;
  for (int i = 1; i < s-1; i++)
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
}*/
/*void insertion_sort(std::vector<int> & par)
{
  int s = par.size();
  int x;
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
*/
