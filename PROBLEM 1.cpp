#include <iostream>

using namespace std;

int main() {
    int k, n, m;

    cin >> k >> n >> m;

    if (n == 0 && m == 0) {
        cout << 0 << endl;
        return 0;
    }

    if (n % 3 != 0 && m % 3 != 0) {
        cout << -1 << endl;
        return 0;
    }

    int move_2kg = n / 3;
    int move_1kg = m / 3;
    int steps = 0;

    if (move_2kg > 0) {
        
        int max_2kg = k / 2;

        if (max_2kg == 0) {
            cout << -1 << endl;
            return 0;
        }

        int leftover_2kg = move_2kg;
        
        while (leftover_2kg > 0) {
            leftover_2kg = leftover_2kg - max_2kg;
            steps = steps + 4;
        }
   }

   if (move_1kg > 0) {
    if (k < 1) {
        cout << -1 << endl;
        return 0;
    }

    int tot_1kg = move_1kg * 2;
    
    while (tot_1kg > 0) {
        if (tot_1kg <= k) {
            if (tot_1kg > move_1kg) {
                steps = steps + 3;
            }

            else {
                steps = steps + 2;
            }
            tot_1kg = 0;
        }

        else {
        tot_1kg == tot_1kg - k;
        steps = steps + 3;
      }
    }
   }
   cout << steps << endl;

   return 0;
}