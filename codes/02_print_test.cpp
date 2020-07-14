#include <iostream>
using namespace std;

int print_test();

int main() {
    print_test();
    return 0;
}

int print_test(){
    int a = 2, b = 3;
    cout << a+b << endl;
    cout << a-b << endl;
    cout << a*b << endl;
    cout << a/b << endl;
    return 0;
}
