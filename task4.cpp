#include <iostream>

using namespace std;
void evenOddTransform(int array[], int size, int n);

int main()
{
    int size, number;
    cout << "Enter the size of Array: ";
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> array[i];
    }
    cout << "Enter number of times even-odd transformation need to be done: ";
    cin >> number;
    
    evenOddTransform(array, size, number);
}

void evenOddTransform(int array[], int size, int n)
{
    for (int i = 0; i < size; i = i + 2)
    {
        array[i] = array[i] + (n * 2);
    }
    for (int i = 1; i < size; i = i + 2)
    {
        array[i] = array[i] - (n * 2);
    }
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        cout << array[i];
        if (i < size - 1)
        {
            cout << ", ";
        }
    }
    cout << "]";
}