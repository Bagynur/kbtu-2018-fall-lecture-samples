#include <iostream>

using namespace std;

void f(string s){
    for(int i = 1; i <= s.size(); ++i){
        cout << s.substr(0, i) << endl;
    }
}

void f2(string s){
    for(int i = 1; i <= s.size(); ++i){
        cout << s.substr(s.size()- i, i) << endl;
    }
}

int main(){

    string s;
    cin >> s;
    f2(s);

    return 0;
}

