#include<simplecpp>

int kth_max(int arr[],int n , int k){
// Your code starts from here -- DO NOT EDIT ANYTHING ABOVE

// Your code ends from here -- DO NOT EDIT ANYTHING BELOW
}

main_program{
    int n; cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++) cin >> arr[i];
    int k; cin >> k;
    int m = kth_max(arr,n,k);
    cout << m;
}