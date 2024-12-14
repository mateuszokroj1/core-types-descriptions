#include <empty-templates/TypeDescription.hpp>

#include <string>
#include <vector>
#include <map>

class B
{
    std::wstring text;
};

class A
{
    unsigned int a;
    B b;
    float c;
    std::vector<double> d;
    std::string e;

};



int main()
{
    return 0;
}