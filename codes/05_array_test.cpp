#include <iostream>
#include <string>
using namespace std;

int array_test();

int main() {
    array_test();
    return 0;
}


int array_test(){
    int a[3] =  {0};
    cout << a[0] << a[1] << a[2] << endl;
    char c[] = "wrsndm"; // 温柔是你的美
    cout << c << endl;
    char c1[] = {'w','r','s','n','d','m','\0'};
    cout << c1 << endl;
    string str = "wrsndm";
    cout << str << endl;

    return 0;
}
