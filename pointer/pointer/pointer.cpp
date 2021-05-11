#include <iostream>
using namespace std;
int main()
{
    int a[100], m;
    cin >> m;
    for (int i = 0; i < m; i++)
        cin >> a[i];
    int* b[100];
    for (int i = 0; i < m; i++)
        b[i] = &a[i];
    for (int i = 0; i < m; i++)
        cout << b[i] << endl;
}
