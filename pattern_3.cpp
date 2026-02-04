#include <bits/stdc++.h>
using namespace std;

int main() {
    int rows, columns;
    cin >> rows >> columns;

    int n = 1;
    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= columns; j++) {
            cout << n << " ";
            n++;
        }

        cout << endl;
    }

    return 0;
}