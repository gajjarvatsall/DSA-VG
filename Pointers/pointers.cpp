#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a  = 5;
    // cout<<"Value : "<<a<<endl;

    int *ptr = &a; // * is used to make a variable pointer type
    // & is used to get the address of that variable
    // cout<<"Address : "<<b<<endl;


    cout<<" -------- "<<endl;

    cout<<a<<endl;
    // cout<<*a<<endl; ---> Error
    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<*ptr<<endl;
    
    
    ptr = ptr + 1;
    *ptr = *ptr/2;
    *ptr = *ptr +1;
    
    cout<<&ptr<<endl;
    cout<<*ptr<<endl;

    int *c = 0; // Creating a null pointer

    int *p = &a;
    int *q = p; // copying the pointer p


    // Creating pointer with an array
    int arr[10];
    int *ptr1 = arr; // pointer pointing to arr[0]

    // arr, &arr, &arr[0] ------> all are the same as they are pointing to arr[0]


    char ch[20] = "Vatsal";
    char *cptr = ch;

    cout<<ch<<endl;
    cout<<&ch<<endl;
    cout<<ch[0]<<endl;
    cout<<&cptr<<endl;
    cout<<*cptr<<endl;
    cout<<*(cptr+2)<<endl;
    cout<<cptr<<endl;

    return 0;
}