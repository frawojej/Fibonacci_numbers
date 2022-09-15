#include <iostream>
#include <time.h>       # Sleep()
#include <windows.h>    # system()
#include <iomanip>      # setw()    (spacing)

void print_fib(int x);

int main() {

    std::cout << "Fibbonaci numbers =D" << std::endl;
    Sleep(2000);
    system("cls");
    int amount;

    std::cout << "Amount of numbers: "; std::cin >> amount;
    print_fib(amount);

    std::cout << "DONE" << std::endl;

    return 0;
}

void print_fib(int x) {
    unsigned long long int a = 1, b = 1, c;
    for(int n = 1; n <= x; n++) {

        std::cout << std::setw(5) << n << ". " << std::setw(20) << a << std::endl;
        c = a;
        a = b;
        b += c;
    }
}
