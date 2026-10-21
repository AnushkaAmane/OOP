#include<iostream>
namespace A
{
    int add(int a, int b)
    {
        return a+b;
    }
    void display()
    {
        std::cout<<"Addition using namespace A is:"<<add(2,4)<<std::endl;
    }
}
namespace B
{
    int add(int a, int b)
    {
        return a+b;
    }
    void display()
    {
        std::cout<<"Addition using namespace B is:"<<add(1,6)<<std::endl;
    }
}
int main()
{
    A::display();
    B::display();
    return 0;
}
