int lowerBound1(int arr[], int low, int high, int target, int n, int ans)
// {
//     if (low > high)
//         return -1;
//     int mid = (low + high) / 2;
//     if (arr[mid] >= target)
//     {
//         ans = mid;
//     }
//     else if (arr[mid] > target)
//     {
//         lowerBound(arr, low, mid - 1, target, n, ans);
//     }
//     else
//     {
//         lowerBound(arr, mid + 1, high, target, n, ans);
//     }
// }