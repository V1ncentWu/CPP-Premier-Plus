//bondini.cpp -- using escape sequence
#include <iostream>
int main()
{
    using namespace std;
    cout << "\aOperation \"HyperHype\" is now activated!\n";
    cout << "Enter your agent code: ________\b\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "\aCode verified! Proceed with Plan Z3!\n";

    return 0;
}