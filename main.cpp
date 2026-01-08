#include <iostream>
#include <stdexcept>

//просмотренно в 12:11 29.12.2025

long long calculateFactorial() 
{
    int factorial;
    long long result = 1;
    std::cout << "ordinary factorial" << std::endl;
    std::cout << "input factorial: ";
    std::cin >> factorial;

    if (factorial < 0){
        //only for negative
        throw std::invalid_argument("Factorial of negative number doesn't exist");
    }
    else if (factorial == 0) {
        //0! = 1.
        result = 1;
        std::cout << "Facorial = " << result << std::endl;

        return result;
    }
    else {
        for (int i = 1; i <= factorial; i++) //the cycle is greater than the factorial 
        {
            result *= i; //multiplying the el. loop by res, which is equal to 1
            std::cout << i << "." << result << std::endl;
        }
    }

    std::cout << "Factorial = " << result << std::endl;
    return result;
}

long long calculateDoubleFactorial() 
{
    int factorial;
    long long result = 1;
    std::cout << "double factorial" << std::endl;
    std::cout << "factorial: ";
    std::cin >> factorial;

    if (factorial <= 0) 
    { 
        throw std::invalid_argument("Double factorial input must be positive"); //if the factorial is less than or equal to 0
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

int main() {
    int n;

    std::cout << "choose factorial" << std::endl;
    std::cout << "1.(n!) or 2.(n!!): "; //choosing between regular or double factorial 
    std::cin >> n;

    switch (n) 
    {
    case 1:
        try {
        calculateFactorial();
        }
        catch (std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        } break;

    case 2:
        try {
        calculateDoubleFactorial();
        }
        catch (std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        } break;
    default:
        std::cout << "Error input number." << std::endl;
    }

    return 0;
}

