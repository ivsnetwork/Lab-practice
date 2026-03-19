#include <simplecpp>

int ternary_search(int arr[], int n, int x);

main_program {
    int n; cin >> n;
    int arr = (int*)malloc(n*sizeof(int));//ignore this is just int arr[n]
    for(int i = 0;i<n;i++) cin >> arr[i];
    int x; cin >> x;
    int m = ternary_search(arr,n,x);
    cout << m;
    free (arr);
    return 0;
}

// Your code starts from here -- DO NOT EDIT ANYTHING ABOVE
//Write your functions