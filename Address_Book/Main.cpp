#include "FuncTion.h"
using namespace std;

int main() {
    FuncTion F;
    int A;
    while (1) {
        F.menu();
        cin >> A;
        if (A == 1)
            F.Add();
        else if (A == 2)
            F.Print();
        else if (A == 3)
            F.Dele();
        else if (A == 4)
            F.Find();
        else if (A == 5)
            F.Revise();
        else if (A == 6)
            F.Clear();
        else if (A == 0) {
            F._NULL();
            break;
        }
        else
            F._NULL();
    }
    return 0;
}