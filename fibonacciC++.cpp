// Fibonacci sequence
#include <iostream>
#include <vector>

int main()
{
    int userChoice;
    std::cout << "How long do you want your fibonacci sequence to be? : ";
    std::cin >> userChoice;
    std::vector<int> fib{1, 1};
    for (int i = 0; i < 999; i++)
    {
        fib.push_back(fib[i] + fib[i + 1]);
        if (fib.size() >= userChoice)
        {
            break;
        }
    }
    for (int v : fib) {
        std::cout << v << ", ";
    }
    return 0;
}