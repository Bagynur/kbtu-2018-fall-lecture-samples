#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main(){

    char c[3];
    c[0] = '1';
    c[1] = '2';
    c[2] = '1';

    int x = atoi(c);
    cout << sqrt(x) << endl;

    return 0;
}