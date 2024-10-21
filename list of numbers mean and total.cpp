// list.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int main()
{
    std::cout << "Hello World!\n";

    std::vector<int> numbers;
    int n1, input;

    // Prompt for the number of elements
    std::cout << "Enter the amount of numbers in your list: ";
    std::cin >> n1;

    // Input numbers
    std::cout << "Enter " << n1 << " numbers: ";
    for (int i = 0; i < n1; ++i) {
        std::cin >> input;
        numbers.push_back(input);
    }

    // Display entered numbers
    std::cout << "You entered: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }

    // Calculate and display the mean
    int sum = 0;
    for (int num : numbers) {
        sum += num;
    }
    double mean = static_cast<double>(sum) / n1;
    std::cout << "\nThe mean of your list is: " << mean << std::endl;
    std::cout << "the total of your list is:" << sum;

    return 0;
}
