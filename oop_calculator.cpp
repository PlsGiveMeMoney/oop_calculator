#include <iostream>

enum operations {
    plus, minus, mul, divine
};

float cal(float x, float y, operations op) {
    switch (op) {
    case(0):
        std::cout << "answer: ";
        return x + y;
    case(1):
        std::cout << "answer: ";
        return x - y;
    case(2):
        std::cout << "answer: ";
        return x * y;
    case(3):
        std::cout << "answer: ";
        return x / y;
    }
}

float codecal(float x, float y, short c) {
    switch (c) {
    case(0):
        return cal(x, y, plus);;
    case(1):
        return cal(x, y, minus);;
    case(2):
        return cal(x, y, mul);;
    case(3):
        return cal(x, y, divine);;
    }
}


int main()
{

    short c;
    float x, y;
    bool run = true;
    while (run) {
        std::cout << ("\nplease write number of operation\n0.plus\n1.minus\n2.multiplie\n3.divine\n4.exit\n");
        std::cin >> c;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        }
        else {
            if (c == 4) {
                run = false;
            }
            else if (c == 0 || c == 1 || c == 2 || c == 3) {
                std::cout << ("please write first number\n");
                std::cin >> x;
                std::cout << ("please write second number\n");
                std::cin >> y;
                std::cout << "\n";
                std::cout << codecal(x, y, c);
                std::cout << "\n";

            }
            else
            {
                std::cout << ("incorret operation code!!!\n");
            }

        }
    }
}