#include <iostream>
using namespace std;

// function made for sequnce digit remove and that digit sum

int sumOfDigit(int n)
{

    int sum = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        n = n / 10;
        sum += lastdigit;
    }
    return sum;
}

// main mathod and call the function

int main()
{

    cout << sumOfDigit(12345); //             <= provade list of digit and sum of all the number
    return 0;
}