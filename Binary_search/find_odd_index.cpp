#include<bits/stdc++.h>
using namespace std;

int singleNonDuplicate(int arr[],int size) {
        int s = 0;

        int e = size-1;
        int mid = s+(e-s)/2;

        while(s <= e) {
            //case 1: single element
            if(s == e) {
                return arr[s];
            }

            //mid index pr value 
            int currVal = arr[mid];
            //mid-1 index pr value, if exists
            int leftVal = -1;
            if(mid-1 >= 0) {
                leftVal = arr[mid-1];
            }
            //mid+1 index pr value, if exists
            int rightVal = -1;
            if(mid+1 < size-1) {
                rightVal = arr[mid+1];
            }

            //case 2: non duplicates
            if(currVal != leftVal && currVal != rightVal) {
                return currVal;
            }
            //case 3: left me duplicate mila 
            if(currVal == leftVal && currVal != rightVal) {
                int pairStartingIndex = mid-1;
                if(pairStartingIndex & 1) {
                    //agar index odd hua 
                    //standing on right part
                    //move to left
                    e = mid-1;
                }
                else {
                    //move to right
                    s = mid+1;
                }
            }//case 4: right me duplicate mila 
            else if(currVal != leftVal && currVal == rightVal) {
                int pairStartingIndex = mid;
                 if(pairStartingIndex & 1) {
                    
                    e = mid-1;
                }
                else {
                    
                    s = mid+1;
                }
            }
            mid = s+(e-s)/2;
        }
        return -1;
    }

int main()
{
    int arr[] = {1, 1, 2, 2, 3, 3, 4, 4, 5, 6, 6, 7, 7, 8, 8};
    int size = 15;

    int ans = singleNonDuplicate(arr, size);

    cout<<"Ans :- "<<ans<<endl;
    return 0;
}