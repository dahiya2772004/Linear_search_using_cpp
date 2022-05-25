#include <iostream>
using namespace std;
int linearsearch(int a1[], int noofelements, int key){
    for(int i=0;i<noofelements;i++){
        if(a1[i]==key){
            return i;
        }
    }
    return -1;
}
int main()
{
    
    int noofelements;
    cin>>noofelements;
    
    int a1[noofelements];
    for(int i=0; i < noofelements;i++){
        cin>>a1[i];
    }
    int key;
    cin>> key;
    cout << linearsearch(a1,noofelements,key) << std::endl;
    return 0;

    /* output
    7- we told machine to take 7 elements of array
12  -index 0    element 1
24  -index 1    element 2
36  -index 2    element 3    
48  -index 3    element 4
60  -index 4    element 5
72  -index 5    element 6
96  -index 6    element 7
48  here we entered the element we wish to search
3   next we get the index value of the element we wished to get output of

    */
    

    return 0;
}
