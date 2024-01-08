#include <iostream>
#include <string>

class MyString
{
private:
    // class member of type String
    std::string myString;

public:
    // Constructor
    MyString(const std::string &str) : myString(str) {}

    // Overloaded operator* to repeat the string
    MyString operator*(int times)
    {
        MyString result = *this;
        for (int i = 1; i < times; ++i)
        {
            result.myString += myString;
        }
        return result;
    }

    // Display the string
    void displayString() const
    {
        std::cout << myString << "\n";
    }
};

int main()
{
    MyString ob("test");

    // Display the original string
    std::cout << "Original String: ";
    ob.displayString();

    // Use the overloaded operator* to repeat the string

    // CASE 1:
    MyString result = ob * 3;
    std::cout << "Result after repeating 3 times: ";
    result.displayString();

    // CASE 2:
    result = ob * 5;
    std::cout << "Result after repeating 5 times: ";
    result.displayString();

    // CASE 3:
    std::cout << "Enter a string: " << std::endl;
    std::string str1;
    std::getline(std::cin, str1);
    std::cout << "Enter the number to repeat the string:  " << std::endl;
    int count;
    std::cin >> count;
    MyString ob2(str1);
    result = ob2 * count;
    result.displayString();
    return 0;
}