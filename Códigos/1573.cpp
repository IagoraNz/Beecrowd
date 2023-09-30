#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int A, B, C;
    
    while (true) {
        cin >> A >> B >> C;
        if (A == 0 && B == 0 && C == 0)
            break;

        int volume = A * B * C;
        int cube_edge = cbrt(volume);

        cout << cube_edge << endl;
    }

    return 0;
}
