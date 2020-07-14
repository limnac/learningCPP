#include <iostream>
using namespace std;

int enum_test();

int main() {
    enum_test();
    return 0;
}

int enum_test(){
    enum YourCards {Ace, Jack, Queen=45, King};
    cout << Ace << endl;
    cout << Jack << endl;
    cout << Queen << endl;
    cout << King << endl;
    return 0;
}
