#include<iostream>
int main()
{
    int num = 0;
    int &newnum = num; //参照

    num = 200;
    std::cout << "num: " << num << std::endl;
    std::cout << "newnum: " << newnum << std::endl;

    newnum = 400;
    std::cout << "num: " << num << std::endl;
    std::cout << "newnum: " << newnum << std::endl;
    return 0;
}
