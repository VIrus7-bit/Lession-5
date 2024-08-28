#include "Counter.h"


Counter::Counter(int start_value) :num(start_value) {}
void Counter::increase() { num++; };
void Counter::decrease() { num--; };
int  Counter::count()    { std::cout << num << std::endl; return num; };




