//Declare Array
int arr = {...}

//Length of array
int n = sizeof(arr) / sizeof(arr[0]); 

//Ascending
sort(arr, arr + n);

//Descending
sort(arr, arr + n, greater<int>());
