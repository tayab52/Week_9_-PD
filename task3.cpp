#include<iostream>

using namespace std;
bool areAllElementsIdentical(string array[],int size);

int main(){
    int size;
    cout<<"Enter the size of Array: ";
    cin>>size;
    string array[size];
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter Element "<<i+1<<": ";
        cin>>array[i];
    }
    cout<< areAllElementsIdentical( array , size);
    

}
bool areAllElementsIdentical(string array[],int size){
int count=1;
for (int i = 0; i < size-1; i++)
{
    if(array[i]==array[i+1]){
        count ++;
    }
}
if(count==size){
    return true;
}
return false;


}
