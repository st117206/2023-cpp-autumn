#include <iostream>

int main()
{
    int answer_correct = 0;
    int answer_student = 0;
    std::cin >> answer_correct;
    std::cin >> answer_student;
    if (((answer_correct == 1) && (answer_student == 1)) || ((answer_correct != 1) && (answer_student != 1)))
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }
    return 0;
}
