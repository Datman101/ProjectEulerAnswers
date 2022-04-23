#include <iostream>
#include <string>

bool isDivisible(int num) {
    for (int i = 1; i <= 20; i++) {
        if ((num % i) != 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    bool isFound = false;
    int num = 1;

    while (!isFound) {
        if (isDivisible(num)) {
            std::cout << num;
            isFound = true;
            break;
        }
        else {
            num++;
        }
    }
    
}
