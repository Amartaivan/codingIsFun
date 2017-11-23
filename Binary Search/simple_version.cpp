int binarySearch(int a[], int l, int r, int x){

  while (l <= r)
  {
    int m = (l + r) / 2;
    // Check if x is present at mid
    if (a[m] == x) 
        // sometimes we can find the element before logN step
        return m;  
 
    // If x greater, ignore left half  
    if (a[m] < x) 
        l = m + 1; 
 
    // If x is smaller, ignore right half 
    else
         r = m - 1; 
  }
  
  // if we reach here, then element was not present
  return -1; 
}