#include<iostream>
using namespace std;

int main(int argc, char** argv)
{
    int i, j;
    cout << endl;
    for (i = 4; i >= 1; i--) {
        cout << "\t";
        for (j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
