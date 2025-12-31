#include <iostream>

//просмотренно в 12:11 29.12.2025

long long calculateFactorial(long long result) 
{
    int factorial;
    std::cout << "ordinary factorial" << std::endl;
    std::cout << "input factorial: ";
    std::cin >> factorial;

    if (factorial <= 0) 
    {
        std::cout << "factorial 0 or less" << std::endl;
    }
    else 
    {
        for (int i = 1; i <= factorial; i++) //the electric cycle is greater than the factorial 
        { 
            result *= i; //multiplying the el. loop by res, which is equal to 1
            std::cout << i << "." << result << std::endl;
        }
    }

    std::cout << "Factorial = " << result;

    return result;
}

long long calculateDoubleFactorial(long long result) 
{
    int factorial;
    std::cout << "double factorial" << std::endl;
    std::cout << "factorial: ";
    std::cin >> factorial;

    if (factorial <= 0) 
    { 
        std::cout << "factorial 0 or less"; //if the factorial is less than or equal to 0
    }
    else if (factorial % 2 == 0) 
    {
        for (int i = 2; i <= factorial; i += 2) //if the cycle factor is 2, less than or equal to, add 2 to the cycle factor until it is equal to the factorial
        { 
            result *= i;
            std::cout << i << "." << result << std::endl;
        }
    }
    else 
        {
        for (int i = 1; i <= factorial; i += 2) //if the cycle el. is 1 less than or equal to, add 2 to the cycle el. until it becomes equal to the factorial
    { 
        result *= i;
        std::cout << i << "." << result << std::endl; //output value with el cycle
    }
}
    std::cout << "double factorial = " << result << std::endl;

    return result;
}

int main() 
{
    int n;
    long long result = 1;

    std::cout << "choose factorial" << std::endl;
    std::cout << "1.(n!) or 2.(n!!): "; //choosing between regular or double factorial 
    std::cin >> n;

    switch (n) 
    {
    case 1:
        calculateFactorial(result); break;

    case 2:
        calculateDoubleFactorial(result); break;
    default:
        std::cout << "Error";
    }

    return 0;
}

