#include <iostream>
#include <vector>

using namespace std;

vector<int> sort(vector<int> array){
    size_t n = array.size();
    vector<int> result = array;

    if (n > 1){
        vector<int> less, equal, greater;
        int pivot = (array[0] + array[n / 2] + array[n - 1]) / 3; //Find pivot

        for (int element : array){ 
            //Put elements less, equal, greater than pivot into arrays
            if (element < pivot)
                less.push_back(element);
            else if (element == pivot)
                equal.push_back(element);
            else
                greater.push_back(element);
        }

        result.clear(); //Clear result array
        //Sort arrays
        less = sort(less);
        greater = sort(greater);
        
        for (int element : less)
            result.push_back(element);
        for (int element : equal)
            result.push_back(element);
        for (int element : greater)
            result.push_back(element);
    }
    return result;
}

int main(){

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