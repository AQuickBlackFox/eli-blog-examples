#include<iostream>
#include<thread>
#include<vector>

void hello(int i)
{
    std::cout<<"Initiating thread "<<i<<std::endl;
}

int main()
{
    unsigned num_cpus = std::thread::hardware_concurrency();
    std::vector<std::thread> threads(num_cpus);
    for(int i=0;i<num_cpus;i++)
    {
        threads[i] = std::thread(hello, i);
    }
    for(int i=0;i<num_cpus;i++)
    {
        threads[i].join();
    }
}
