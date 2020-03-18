#include <iostream> 
#include <fstream>
#include <array> 
using namespace std;
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
            cout << a[i] << ' ';
        }
        cout << endl;
    }
    double getSum(double x)
    {
        return 0;
    }
};
int main()
{
    int n;
    double x;
    cout << "n=";
    cin >> n;
    cout << "x=";
    cin >> x;
    double Sum = 0;
    Polynomial** aaPolynomial; // указатель на массив 
    aaPolynomial = new Polynomial * [n];
    for (int i = 0; i < n; i++)
    {
        aaPolynomial[i] = new Polynomial(n);
    }
    for (int i = 0; i < n; i++)
    {
        aaPolynomial[i]->print();
    }

    // цикл для расчета суммы всех слагаемых 
    for (int i = 0; i < n; i++) Sum += aaPolynomial[i]->getSum(x);
    cout << "\nSum=" << Sum;// Вывод суммы  
    // Работа с файлом в текстовом режиме
    ofstream foutt("Polynomial.txt"); // открываем файл для записи в текстовом режиме
    foutt << Sum << endl; // Записываем n в текстовом режиме, далее переход на новую строкe
    foutt.close(); // закрываем файл
    system("pause");
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
