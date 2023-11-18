#include <iostream>

using namespace std;
bool isLengthEven(string wordLength);

int main()
{
    string wordLength;
    cout << "Enter a String: ";
    cin >> wordLength;

    cout << isLengthEven(wordLength);
}

bool isLengthEven(string wordLength)
{
    int count = 0;
    for (int i = 0; wordLength[i] != 0; i++)
    {
        count++;
    }
    if (count % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}