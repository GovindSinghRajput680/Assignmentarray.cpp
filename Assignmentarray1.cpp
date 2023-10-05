#include<iostream>
using namespace std;
int main(){int n;
cout<<"Enter no.of elememts in array :  ";
cin>>n;
cout<<"Enter elements of array : ";
int arr[n];
for(int i = 0;i <n ;i++){
cin>>arr[i];
}
//Q 1
int m =1;
for(int i =0; i < n; i++){
    m*=arr[i];
}
cout<<"Ans. 1 - Product of all elements of the given array is "<<m;

//Q 2
int b,a = arr[0];
for(int i =1; i< n;i++){if(a<arr[i]){b=a;
    a =arr[i];
}

}
cout<<endl<<"Ans. 2 - 2nd largest element in the given array is "<<b;
//Q 3
int c = arr[0];
for(int i =1; i< n;i++){if(c>arr[i]){
    c =arr[i];
}

}
cout<<endl<<"Ans. 3 - minimum element in the given array is "<<c;
//Q 4
for(int i =0;i<n;i++){
    for(int j = i+1;j <n;j++){
        if(arr[i] == arr[j]){
            cout<<endl<<"Array contains duplicates.";
            i = n;
            break;
        }
        else if(i == n-1){
            cout<<endl<<"Ans. 4 - Arrary doesn't contains duplicates.";
        }}}
 //Q 5
int d =1;
for(int i = 1; i<=d;i++){
    for(int j =0; j<n;j++){
        if(d == arr[j]){
            d++;
            break;
        }
    }
}
                   

        
cout<<endl<<"Ans. 5 - Smallest missing positive element in the array is "<<d;

}