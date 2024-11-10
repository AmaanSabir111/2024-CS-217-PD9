#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter the number of colors :";
    cin >> size;
    string arr[size];
    cout << "Enter the array of colors :" << endl;
    int i;
    int count = 0;
    count = size * 2;
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
        if(arr[i]!=arr[i-1] && i>0){
            count++;
        }
    }
    
    cout << count;
}