//-------------------------------------
#include "Solution.h"
//-------------------------------------
//https://www.acmicpc.net/problem/1011
#pragma region 1011
void boj_1011()
{
    // variable
    long long a = 0;
    long long x = 0;
    long long y = 0;

    // implement
    cin >> x >> y;
    a = (int)sqrt(y - x);
    if ((y - x) == a * a)
        cout << 2 * a - 1 << endl;
    else if (a * a < (y - x) && (y - x) <= a * a + a)
        cout << 2 * a << endl;
    else if (a * a + a < (y - x) && (y - x) < (a + 1) * (a + 1))
        cout << 2 * a + 1 << endl;

    return;
}
#pragma endregion
//-------------------------------------
//https://www.acmicpc.net/problem/10870
#pragma region 10870
void boj_10870()
{
    // variable
    int n = 0;
    int narr[21] = { 0,1, };

    // implement
    cin >> n;
    if (n == 0)
        cout << 0 << endl;
    else if (n == 1)
        cout << 1 << endl;
    else
    {
        for (int i = 2; i <= n; i++)
        {
            narr[i] = narr[i - 2] + narr[i - 1];
        }
        cout << narr[n] << endl;
    }

    return;
}
#pragma endregion
//-------------------------------------
//https://www.acmicpc.net/problem/1978
#pragma region 1978
bool IsPrime(int nNumber);
//-------------------------------------
void boj_1978()
{
    // variable
    int n = 0;
    int narr[100] = { 0, };
    int nCount = 0;

    // implement
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> narr[i];
    }

    for (int i = 0; i < n; i++)
    {
        bool bResult = IsPrime(narr[i]);
        if (bResult)
            nCount++;
    }

    cout << nCount;

    return;
}
//-------------------------------------
bool IsPrime(int nNumber)
{
    if (nNumber == 2)
        return true;
    // 짝수인지 걸러
    if (nNumber % 2 == 0)
        return false;

    if (nNumber <= 5)
    {
        if (nNumber == 1)
            return false;
        if (nNumber == 3)
            return true;
        if (nNumber == 5)
            return true;
    }

    for (int i = 3; i <= nNumber/2; i+=2)
    {
        if (nNumber % i == 0)
            return false;
    } 

    return true;
}
#pragma endregion
//-------------------------------------
//https://www.acmicpc.net/problem/2581
#pragma region 2581
//-------------------------------------
void boj_2581()
{
    // variable
    int M = 0;
    int N = 0;
    bool bFound = false;
    int nMin = 0;
    int nSum = 0;

    // implement
    cin >> M;
    cin >> N;

    for (int i = N; i >= M; i--)
    {
        bool bResult = IsPrime(i);
        if (bResult)
        {
            bFound = true;
            nMin = i;
            nSum += i;
        }
    }

    if (bFound == false)
        cout << -1 << endl;
    else
        cout << nSum << endl << nMin << endl;

    return;
}
#pragma endregion
//-------------------------------------
//https://www.acmicpc.net/problem/11653
#pragma region 11653
void boj_11653()
{
    // variable

    // implement
    

    return;
}
#pragma endregion
//-------------------------------------
//https://www.acmicpc.net/problem/1929
#pragma region 1929
void boj_1929()
{
    // variable
    int M = 0;
    int N = 0;
    bool barr[1000001] = {};

    // implement
    cin >> M >> N;
    barr[0] = true;
    barr[1] = true;
    for (int i = 2; i <= N; i++)
    {
        for (int j = 2; i * j <= N; j++)
        {
            barr[i * j] = true;
        }
    }

    for (int i = M; i <= N; i++)
    {
        if (barr[i] == false)
            cout << i << endl;
    }

    return;
}
#pragma endregion
//-------------------------------------