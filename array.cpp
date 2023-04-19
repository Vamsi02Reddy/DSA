// array finding max ,min and sum of an array

#include <iostream>
#include <climits>

using namespace std;
int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int max_n = INT_MIN;
  int min_m = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
    min_m = min(min_m, arr[i]);
    max_n = max(max_n, arr[i]);
  }

  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
  }
  cout << endl
       << "max :" << max_n << endl;
  cout << "min :" << min_m << endl;
  cout << endl
       << "The array sum is " << sum;

  return 0;
}