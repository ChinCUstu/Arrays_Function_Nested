#include <iostream>
using namespace std;

void read(int a[][5]);
void print(const int a[][5]);

int main() {
    int a[3][5];
    read(a);
    print(a);
}

void read(int a[][5]) {
    for (int i = 0; i < 3; i++)
    {
        cout << "Row " << i << ": "<< endl;
        for(int j = 0; j < 5; j ++)
            cin >> a[i][j];
    }
}

void print(const int a[][5]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << " " << a[i][j];
        cout << endl;
        }
    }
}