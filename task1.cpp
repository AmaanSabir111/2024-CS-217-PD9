#include <iostream>
using namespace std;
main()
{
    string fName;
    int quan;
    int fPrice;
    string fruit[4] = {"peach", "apple", "guava", "watermelon"};
    int price[4] = {60, 70, 40, 30};
    cout << "Enter the name of fruit :";
    cin >> fName;
    cout << "Enter the quantity in kgs :";
    cin >> quan;
    if (fName == fruit[0])
    {
        fPrice = price[0] * quan;
        cout << fPrice;
    }
    if (fName == fruit[1])
    {
        fPrice = price[1] * quan;
        cout << fPrice;
    }
    if (fName == fruit[2])
    {
        fPrice = price[2] * quan;
        cout << fPrice;
    }
    if (fName == fruit[3])
    {
        fPrice = price[3] * quan;
        cout << fPrice;
    }
    else{
        cout<<"This fruit is not available";
    }
}