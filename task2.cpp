#include <iostream>

using namespace std;
string containsSeven(int array[], int size);

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> array[i];
    }
    cout << containsSeven(array, size);
}
string containsSeven(int array[], int size)
{
    string result = "there is no 7 in the array";

    int leftDigit = 0;
    int digit = 0;
    for (int i = 0; i < size; i++)
    {
        leftDigit = array[i];
        digit = leftDigit;

        while (leftDigit != 0)
        {
            if (digit == 7)
            {
                result = "Boom!";
            }
            digit = leftDigit % 10;
            leftDigit = leftDigit / 10;
        }
    }
    return result;
}
