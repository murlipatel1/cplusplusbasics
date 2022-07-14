#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;   // Taking input
    cout << "The number is: " << num;

    int a = 5; // 0101b (0x05)
    int b = 9; // 1001b (0x09)
    int c = a ^ b;
    cout <<"\n" <<c;

    return 0;
}
