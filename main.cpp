#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int d1=0;
    cin >> d1;
    float a[d1];
    for (int i = 0; i < d1; i++) {
        cin >> a[i];
    }
    cout << f(a, d1);
    return 0;
}
