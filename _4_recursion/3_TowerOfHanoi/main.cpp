/*
Rules:
    1. Only one disc moves at a time.
    2. No larger disc above smaller.
    3. Only the top disc of a tower can be moved.
*/
/*
The idea is to use the helper node to reach the destination using recursion. Below is the pattern for this problem:

    1. Shift ‘N-1’ disks from ‘A’ to ‘B’, using C.
    2. Shift last disk from ‘A’ to ‘C’.
    3. Shift ‘N-1’ disks from ‘B’ to ‘C’, using A.
*/

#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char fromRod, char toRod, char auxRod){
    if(n == 1){
        cout << "Move disc 1 from A to C" <<  endl;
        return;
    }
    towerOfHanoi(n-1, 'A', 'C', 'B');
    cout << "Move disc " << n << " from " << "A to C" << endl;
    towerOfHanoi(n-1, 'B', 'A', 'C');
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    towerOfHanoi(3, 'A', 'B', 'C');


    return 0;
}
