#include<iostream>

#define foo(a) foo_aux(a, __func__, __FILE__, __LINE__)

void foo_aux(int a, const char* func, char* file, int line);

int main()
{
    foo(6);
    return 0;
}

void foo_aux(int a, const char* func, char* file, int line)
{
    std::cout<<"Hey there|\n";
    std::cout<<"I was called "<<func<<" from line "<<line<<" in file "<<file<<" "<<__func__<<std::endl;
}
