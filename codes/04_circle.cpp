#include <iostream>
using namespace std;

int circle();
const double pi = 22.0/7;

int main() {
    circle();
    return 0;
}

int circle(){
    cout << "请输入圆的半径：" << endl;
    int r;
    cin >> r;
    cout << "圆的周长是：" << 2*pi*r << endl;
    cout << "圆的面积是：" << pi*r*r << endl;
    return 0;
}
