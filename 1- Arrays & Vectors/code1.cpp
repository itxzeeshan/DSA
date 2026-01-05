#include <iostream>

using namespace std;

// int main(){
//     int marks[5] = {98 , 76, 85, 83, 46};

//     cout << marks[0] << endl;
//     cout << marks[1] << endl;
//     cout << marks[2] << endl;
//     cout << marks[3] << endl;
//     cout << marks[4] << endl;


//     int nums[] = {5 , 15, 54, -4, 2};
//     int size = 6;

//     int smallest = INT8_MAX;
//     int largest = INT8_MIN;

//     for (int i = 0; i < size; i++)
//     {
//         smallest = min(nums[i], smallest);
//         largest = max(nums[i],largest);
//     }
    
//     cout << "smallest = " << smallest << endl;
//     cout << "largest = " << largest << endl;
//     return 0;
// }
// int linearSearch(int arr[],int sz, int target) {
//     for (int i = 0; i < sz; i++)
//     {
//         if(arr[i] == target){
//             return i;
//         }
//     }

//     return -1;

// }

// int main() {
//     int arr[] = {4,2,7,8,9,0,6};
//     int sz = 7;
//     int target = 8;

//     cout << linearSearch(arr,sz,target) << endl;
//     return 0;
// }

int reverseArray(int arr[],int sz) {
    int start = 0, end = sz =1;
    
    while(start < end) {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[] = {4,2,7,8,9,0,6};
    int sz = 7;

    reverseArray(arr,sz);

    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
