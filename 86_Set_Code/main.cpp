#include<iostream>
#include<set>
using namespace std;

int main() {
    set<int> s {1, 1, 3, 4, 8, 9, 9, 10};
    cout << s.size() << endl;
    cout << s.max_size() << endl;

    s.insert(7);
    cout << s.size() << endl;
    s.erase(7);
    cout << s.size() << endl;
    // s.clear();
    // cout << s.size() << endl;
    s.empty();
    cout << s.empty() << endl;
}