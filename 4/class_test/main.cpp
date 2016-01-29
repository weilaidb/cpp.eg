#include <iostream>

using namespace std;

int main()
{
    int carrots;
    cout << "How many carrots do you have?" << endl;
    cin >> carrots;
    cout << "Here are tow more.";
    carrots = carrots * 2;
    //the next line concatenates output
    cout << "Now you have " << carrots << " carrots." << endl;
    cout << "Hello World!" << endl;
    cerr << "Here happens some err!" << endl;
    clog << "Record some logs" << endl;
    return 0;
}

