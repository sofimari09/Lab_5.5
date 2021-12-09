#include <iostream> 
#include <cmath>
using namespace std;

int counter;

int A(int m, int n)
{
    counter += 1;
    if (m == 0)
    {
        return n + 1;
    }
    else if ((m > 0) && (n == 0))
    {
        return A(m - 1, 1);
    }
    else if ((m > 0) && (n > 0))
    {
        return A(m - 1, A(m, n - 1));
    }
}

int main()
{
    int m, n;
    cout << "m = "; cin >> m;
    cout << "n = "; cin >> n;
    int B;
    B = A(m, n);
    cout << B << endl;
    cout << counter << endl;
    return 0;
}
