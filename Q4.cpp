#include <iostream>
#include <string>

bool isPalindrome(int num) {
    std::string stringVal = std::to_string(num);
    int length = stringVal.length();
    int halfLength = length / 2;
    std::string firstHalf = stringVal.substr(0, (length/2));
    std::string secHalf = stringVal.substr((length / 2), length - 1);
    std::reverse(secHalf.begin(), secHalf.end());
   

    if (firstHalf == secHalf) {
        return true;
    }
    else {
        return false;
    }
}

int main()
{
    int max = 0;
    for (int i = 0; i <= 999; i++) {
        for (int j = 0; j <= 999; j++) {
            if (isPalindrome(i * j)) {
                if ((i * j) > max) {
                    max = i * j;
                }
            }
        }
    }
    std::cout << max;
}
