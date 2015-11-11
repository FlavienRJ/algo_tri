#include "main.hpp"
#include "algo_tri.hpp"
#include "tab_mng.hpp"

//using namespace std;

int main(int argc, char const *argv[])
{
  exec_time timer;
  timer.start();
  srand(time(NULL));
  std::vector<double> tab=create_tab<double>();
  int const size = 10;
  populate_tab(tab,size);
  print_tab(tab);
  //Tri::bubble_sort(tab);     //0.557s /10*5 /11.29 /1000 /
  //Tri::selection_sort(tab);  //0.413s        /12.95
  Tri::insertion_sort(tab);    //0.306s    /7.3
  print_tab(tab);

  timer.stop();
  timer.print_exec();
  return 0;
}

/*
*Classe de calcul du temps d'execution
*/
exec_time::exec_time()
{
  start_time=0;
  stop_time=0;
}

void exec_time::start()
{
  start_time=clock();
}

void exec_time::stop()
{
  stop_time=clock();
}

void exec_time::print_exec()
{
  std::cout << "time: " << (stop_time-start_time)/double(CLOCKS_PER_SEC)*1000 << std::endl;
}
