#pragma once?
#include <string>
#include <iostream>

class Counter
{
private:
    int num{};

public:
    Counter(int start_value);
    void increase();
    void decrease();
    int  count();
};