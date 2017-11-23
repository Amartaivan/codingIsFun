there are lots of problem which is aimed to find best node from sorted datas.

Input:
14
-10 -6 -6 -1 0 0 2 3 4 4 4 4 100 2000
2
Output
index is : 6

So worst solution is find as linear. O(N)

So this algo is implement by estimate half of unnecessary segments at once time. O(logN)

Explaining:
a0 a1 a2 a3 a4 ......... aM-1 aM aM+1 ......    aN-2 aN-1

step 1: 
    
    * choose M = (0 + (N - 1) )/ 2
    * a0 - aM-1, aM+1 - aN-1       we will check aM element
    * estimated array size = N / 2

step 2:
    
    * choose M
    * evaluate half of half elements    
    * estimated array size = N / 4

....

step (logN)

    * choose M
    * evaluate half of half elements    
    * estimated array size = N / 2^(logN)



Maximium approach is step(logN), 
Minimium approach is step(1).

    a0 a1
    size is 2
    M = (0 + 2 - 1) / 2 = 0
    a0 - a(-1), a1 - a1, we will check a0







