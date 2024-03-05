#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int number_1;
    int number_2;
    int result;
    

    cout << "Addition program" << endl;
    cout << "enter num 1 : ";
    cin >> number_1;
    
    cout << "enter num 2 : ";
    cin >> number_2;

    result = number_1 + number_2;

    cout << "Addition : " << result;    

    return 0;
}
