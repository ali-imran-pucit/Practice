#include <iostream>
#include <string>
using namespace std;

void main()
{
    int n1, n2, min;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    min = (n1 < n2) ? n1 : n2;
    do
    {
        if (n1 % min == 0 &&  n2 % min == 0)
        {
            cout << "HCF = " << min;
            break;
        }
        else{
            --min;
        }
    } while (true);
}
