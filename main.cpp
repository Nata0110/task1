#include <iostream>
#include <string>
//using namespace std;

void print()
{
    std::cout <<"Hello! Who are you? "<<std::endl;
}

void answer()
{
    std::string question;
    int age;
    print();
    std::cin >> question;
    std::cout <<"How old are you?"<< std::endl;
    std::cin >> age;
    std::cout << "Hello " << question <<", " << age << " is the best age!!!"<< std::endl;
}


int main()
{
  answer();
}
