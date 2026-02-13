#include <iostream>

int rec(int x) {
    if (x < 10) {
        return x;
    }   else {
        return x % 10 + rec(x / 10);
    }
}

int recR(int x) {
    if (x < 10) {
        return x;
    }   else {
        int sum = rec(x / 10);
        return x % 10 + sum;
    }
}

int min(int x) {
    if (x < 10) {
        return x;
    }   else {
        int digit = x % 10;
        return digit + min(x / 10);
    }
}

int minR(int x) {   
    if (x < 10) {
        return x;
    }   else {
        int min = minR(x / 10);
        return x % 10 + min;
    }
}

int main() {
    int inp = 0;
    int sum = 0;
    
    std::cin >> inp;

    sum = rec(inp);

    std::cout << sum;

    return 0;
}