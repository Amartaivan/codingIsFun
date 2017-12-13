#include <iostream>
#include <vector>

using namespace std;

void sort(vector<int> &a) {
  // Preventing to call size function every iteration
  size_t n = a.size();

  bool swapped;
  do{
    n--;
    swapped = false;
    for (size_t j = 0; j < n; j++) {
      if (a[j] > a[j + 1]) {
        swap(a[j], a[j + 1]);
        swapped = true;
      }
    }
  }while(swapped);

}

int main(){

  // Getting user input and declaring vars
  size_t n;
  cin >> n;
  vector<int> a(n);

  for (size_t i = 0; i < n; i++)
    cin >> a[i];

  sort(a);

  for (size_t i = 0; i < n; i++)
    cout << a[i] << " ";

  return 0;
}
