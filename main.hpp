#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

class exec_time
{
public:
  exec_time();
  void start();
  void stop();
  void print_exec();

private:
  int start_time;
  int stop_time;
};
