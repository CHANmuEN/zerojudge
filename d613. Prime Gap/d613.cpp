餘數運算具有分配律，規則如下：

1.當P為偶數時
B^P%M = ( (B^(P/2)%M) * (B^(P/2)%M) )%M

2.當P為奇數時
B^P%M = ( (B^1%M) * (B^((P-1)/2)%M) * (B^((P-1)/2)%M) )%M
#include <bits/stdc++.h>
using namespace std;
long long bigmod(long long B, long long P, long long M)
{
    if (P == 0)
        return 1;
    else if (P == 1)
        return B % M;
    else if (P % 2 == 0)
    {
        long long tmp = bigmod(B, P / 2, M) % M;
        return (tmp * tmp) % M;
    }
    else
    {
        long long tmp = bigmod(B, (P - 1) / 2, M) % M;
        return (B * tmp * tmp) % M;
    }
}

int main()
{
    long long B, P, M;
    while (cin >> B >> P >> M)
    {
        cout << bigmod(B, P, M) << "\n";
    }
}
