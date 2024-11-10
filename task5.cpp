#include <iostream>
using namespace std;
string statusofArry(int size, string arr[]);
main()
{
    int size;
    cout << "Enter the size of array :";
    cin >> size;
    string arr[size];
    string result = statusofArry(size, arr);
    cout << result;
}
string statusofArry(int size, string arr[])
{
    string r = "false";
    cout << "Enter the entries of string :" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < size ; j++)
    {
        if (arr[j] == arr[j + 1] && arr[j + 1] == arr[j + 2] && arr[j + 2] == arr[j + 3])
        {
            r = "true";
            break;
        }
    }
    return r;
}