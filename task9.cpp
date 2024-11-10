#include <iostream>
using namespace std;
main()
{
    string MOVES[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    int pinCode[4];
    string genPin;
    int indx;
    cout << "Enter the pin along with spaces:";
    int i;
    for (i = 0; i < 4; i++)
    {
        cin >> pinCode[i];
        for (int j = 0; j <= i; j++)
        {
            indx = j + pinCode[j];
        }
        cout << MOVES[indx % 10] << " ";
    }
}