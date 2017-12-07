#include <iostream>
#include <vector>

using namespace std;

vector<int> sort(vector<int> A){

    int size = A.size();
    vector<int> result = A;

    if (size > 1){
        int midpoint = size / 2;

        //Sort left and right halves
        vector<int> left_half = sort(vector<int>(A.begin(), A.begin() + midpoint)), 
            right_half = sort(vector<int>(A.begin() + midpoint, A.end()));

        //Merge two arrays in one sorted
        int i = 0, j = 0;
        while (i < left_half.size() && j < right_half.size()){
            if (left_half[i] > right_half[j]){
                result[i + j] = right_half[j];
                j++;
            }
            else {
                result[i + j] = left_half[i];
                i++;
            }
        }
        while (j < right_half.size()){
            result[i + j] = right_half[j];
            j++;
        }
        while (i < left_half.size()){
            result[i + j] = left_half[i];
            i++;
        }
    }
    return result;
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
    cout << endl;
    return 0;
}