#include <iostream> 
#include <fstream>
#include <array> 


class Polynomial
{
    int dimension;
    double* a;
public:
    Polynomial(int dimension)
    {
        this->dimension = dimension;
        a = new double[dimension + 1];
        for (int i = 0; i < dimension + 1; i++)
        {
            a[i] = i;
        }

    };
    ~Polynomial()
    {
        if (a != nullptr)
        {
            delete[] a;
        }
    };
    void print()
    {
        for (int i = 0; i <= dimension; i++)
        {
            std::cout << a[i] << ' ';
        }
        std::cout << endl;
    }
    double getSum(double x)
    {
        return 0;
    }
