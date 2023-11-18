#include <iostream>

using namespace std;
string findBrokenKeys(string shouldTyped, string actualTyped);

int main()
{
    string shouldTyped;
    string actualTyped;
    cout << "Enter the correct phrase: ";
    getline(cin, shouldTyped);
    cout << "Enter what you actually typed: ";
    getline(cin, actualTyped);
    cout << "Broken keys: " << findBrokenKeys(shouldTyped, actualTyped);
}
string findBrokenKeys(string shouldTyped, string actualTyped)
{
    string result = "";
    int count = 0;
    bool alreadyPresent ;
    for (int i = 0; shouldTyped[i] != 0; i++)
    {
        alreadyPresent = false ;
        for(int j = 0 ; result[j] != '\0' ; j++)
        {
            if(result[j] == shouldTyped[i]) 
            {
                alreadyPresent = true ;
                break ;
            } 
        }
        if(alreadyPresent == true) continue; 
        if (shouldTyped[i] != actualTyped[i])
        {
            
                result = result + shouldTyped[i];
            }
        
    }
    return result;
}