#include "test.h"
#include <iostream>
using namespace std;
/// <summary>
/// ������ �����������
/// </summary>
test::test()
{
}

/// <summary>
/// ������ �� ������ ������������
/// </summary>
/// <param name="a">������ �����, ������� ����� ����������</param>
/// <param name="b">������ ����� ������� ����� ����������</param>
/// <returns></returns>
int test::min(int a, int b)
{
    return ((a < b) ? (a) : (b));
}

int test::min(std::vector<int> vec)
{
    return fule;
}

int sheet()
{
    int array_of_int[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

    for (int i = 0; i < 10; i++) {
        array_of_int[i] = i * 100;
        cout << array_of_int[i] << endl;
    }
}