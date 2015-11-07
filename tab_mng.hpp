#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

template<typename T>std::vector<T> create_tab();
template<typename T>void populate_tab(std::vector<T>& par1, int const par2);
template<typename T>void print_tab(std::vector<T> const& par);

template<typename T>
std::vector<T> create_tab()
{
  std::vector<T> tab;
  return tab;
}

template<typename T>
void populate_tab(std::vector<T>& par1,int const par2)
{
  for (int i = 0; i < par2; i++)
  {
    par1.push_back(rand()%100+1);
  }
}

template<typename T>
void print_tab(std::vector<T> const& par)
{
  for (int i = 0; i < par.size(); i++)
  {
    std::cout << i <<" : "<<par[i]<< std::endl;
  }
}
