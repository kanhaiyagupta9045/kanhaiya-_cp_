#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *ptr = new int(n);
    cout << "Enter the array element" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> ptr[i];
    }
    cout << endl;
    cout << "Array element before bubble sort" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << ptr[i] << '\t';
    }
    cout<<endl;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (ptr[j] > ptr[j + 1])
            {
                int temp;
                temp = ptr[j];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = temp;
            }
        }
    }
    cout << "Array element after bubble sort" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << ptr[i] << '\t';
    }

    return 0;
}