// Given this array: [2,8,5,3,9,4,1]
// Principle: temp, currmin, currmax;
// -> [2,8,5,3,9,4,1] currmin = 2
// -> [1,8,5,3,9,4,2] currmin = 1
// -> [1,2,5,3,9,4,8]
// -> [1,2,3,5,9,4,8] 
// -> [1,2,3,4,9,5,8]
// -> [1,2,3,4,5,9,8]
// -> [1,2,3,4,5,8,9] currmax = 9
// Pseudocode:
/*for(j = 0; j < n - 1; j++)
    int iMin = j;
    for(i = j + 1; i < n; i++)
        if(a[i] < a[iMin])
            iMin = i;
    if(iMin != j)
        swap(a[j], a[iMin]); */