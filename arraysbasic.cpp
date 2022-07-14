#include <iostream>
using namespace std;

int main()
{
    int arrayOfInts[5];
    char arrayOfChars[5] = {'a', 'b', 'c', 'd', 'e'}; // declare and initialize
    double arrayOfDoubles[5] = {1.14159, 2.14159, 3.14159, 4.14159, 5.14159};
    string arrayOfStrings[5] = {"C++", "is", "super", "duper", "great!"};

    int const n_rows = 3;
    int const n_cols = 7;
    int const m[n_rows][n_cols] = // A raw array matrix.
        {
            {1, 2, 3, 4, 5, 6, 7},
            {8, 9, 10, 11, 12, 13, 14},
            {15, 16, 17, 18, 19, 20, 21}};
    for (int y = 0; y < n_rows; ++y)
    {
        for (int x = 0; x < n_cols; ++x)
        {
            cout << m[y][x]; // Note: do NOT use m[y,x]!
        }
        cout << '\n';
    }

    return 0;
}