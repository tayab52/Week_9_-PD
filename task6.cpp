#include <iostream>

using namespace std;
int coloringTime(string cols[], int size);

int main()
{
    int size, number;
    cout << "Enter the size of Array: ";
    cin >> size;
    string cols[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> cols[i];
    }
    cout << "Time to color: " << coloringTime(cols, size) << " seconds";
}
int coloringTime(string cols[], int size)
{
    int colorSquare = size * 2;
    int count = 0, total;
    for (int i = 0; i < size - 1; i++)
    {
        if (cols[i] != cols[i + 1])
        {
            count++;
        }
    }
    total = colorSquare + count;
    return total;
}