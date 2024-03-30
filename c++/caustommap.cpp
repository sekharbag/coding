#include <iostream>

// Function to calculate the GCD using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate the LCM of two numbers
int lcm(int a, int b) {
    // Ensure a and b are non-zero to avoid division by zero
    if (a == 0 || b == 0) {
        return 0;
    }

    // Calculate the LCM using the GCD
    return std::abs(a * b) / gcd(a, b);
}

int main() {
    int num1, num2;

    // Input the two numbers
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Calculate and print the LCM
    int result = lcm(num1, num2);
    std::cout << "LCM of " << num1 << " and " << num2 << " is: " << result << std::endl;

    return 0;

	//9,18,90,180,360,720
}
