#include <iostream>
using namespace std;
string result(int numbers[], int size);
main()
{
    int size;
    cout << "Enter size of array :";
    cin >> size;
    int numbers[size];
    cout << "Enter the array of numbers" << endl;
    for (int i= 0; i < size; i++)
    {
        cin >> numbers[i];
    }
    string resultt = result(numbers, size);
    cout << resultt;
}
string result(int numbers[], int size)
{
    int j;
    string r="There is no 7 in the array";
    for (j = 0; j < size; j++)
    {
        if (numbers[j] == 7)
        {
            r = "Boom";
        }
        
        
    }
    return r;
}