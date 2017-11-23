int binarySearchRecurse(int a[], int l, int r, int x){
    
    if (l <= r){
 
        int mid = (l + r) / 2;

        if (a[mid] == x)
            return mid;
        
        if (a[mid] > x)
            return binarySearchRecurse(a, l, mid - 1, x);
            
        return binarySearchRecurse(a, mid + 1, r, x);
    }
    return -1;
}