#include "test.h"
/// <summary>
/// ������ �����������
/// </summary>
test::test()
{
}

test::test(int S) : fule(S)
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
