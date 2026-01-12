#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a = 10;
    int* ptr = &a;
    
    int** parptr = &ptr;

    cout << **(parptr) <<endl;

    return 0;
}