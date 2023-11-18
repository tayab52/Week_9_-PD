#include <iostream>

using namespace std;
string longest7SegmentWord(string array[], int size);
  
int main()
{
    int size;
    cout << "Enter the  number of words: ";
    cin >> size;
    cout << "Enter the words, one by one: " << endl;
    string array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout << "Longest 7-segment word: "<< longest7SegmentWord(array, size);
}
string longest7SegmentWord(string array[], int size)
{
    string letters;
    string largestWord = "";
    int digits[size];
    for (int idx = 0; idx < size; idx++)
    {
        int i = 0;
        int count = 0;
        letters=array[idx];
        while (letters[i] != '\0')
        {

            if (letters[i] == 'k' || letters[i] == 'm' || letters[i] == 'v' || letters[i] == 'w' || letters[i] == 'x')
            {

                count++;
            }
            i++;
        }

        if (count == 0)
        {
            digits[idx] = i;
        }
        else
        {
            digits[idx] = 0;
        }
    }
    for (int j = 0; j < size; j++)
    {
        int number = 0;
        for (int i = 0; i < size - 1; i++)
        {

            if (digits[j] >= digits[i])
            {
                number++;
            }
        }

        if (number == (size - 1))
        {
            largestWord = array[j];
        }
    }
    return largestWord;
}