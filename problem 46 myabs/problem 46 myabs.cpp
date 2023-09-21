#include <iostream>
using namespace std;



int readNumber()
{
    int num;
    cout << "Enter a Number?\n";
    cin >> num;
    return num;
}

int myAbs(int num)
{
    if(num<0)
        return -num;
    else
        return num;
}

void printResult(int res)
{
    cout << "My abs result is: " << res<<endl << endl;
    cout << "C++ abs result is: " << res<<endl << endl;
}



int main()
{
    printResult(myAbs(readNumber()));

    return main();

}