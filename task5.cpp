#include <iostream>

using namespace std;
int commonCharacters(string series1, string series2);

int main()
{
    string series1;
    string series2;
    cout << "Enter the first string: ";
    cin>> series1;
    cout << "Enter the second string: ";
    cin>> series2;
    cout << "Number of common characters: " << commonCharacters(series1, series2);
}
int commonCharacters(string series1, string series2)
{
    string result = "";
    int count = 0;
    bool alreadyPresent ;
    for (int i = 0; series1[i] != 0; i++)
    {
        alreadyPresent = false ;
        for(int j = 0 ; result[j] != '\0' ; j++)
        {
            if(result[j] == series1[i]) 
            {
                alreadyPresent = true ;
                break ;
            } 
        }
        if(alreadyPresent == true) continue; 
        if (series1[i] != series2[i])
        {
            
                result = result + series1[i];
            }
        
    }
    for(int j=0;result[j]!='\0';j++){
        count++;
    }
    return count;
}