// Given this array: [2,8,5,3,9,4,1]
// -> [2,5,8,3,9,4,1]
// -> [2,5,3,8,9,4,1] 
// -> [2,5,3,8,9,4,1] - 8,9 - right pos
// -> [2,5,3,8,4,9,1]
// -> [2,5,3,8,4,1,9] - 9 - last pos
// -> [2,3,5,8,4,1,9]
// -> [2,3,5,4,8,1,9]
// -> [2,3,5,4,1,8,9] - 8 - prelast pos
// -> [2,3,4,5,1,8,9] - you get a picture
// -> [2,3,4,1,5,8,9]
// -> [2,3,1,4,5,8,9]
// -> [2,1,3,4,5,8,9]
// -> [1,2,3,4,5,8,9] - last positions
// Pseudocode:
//for(i=1;i<n;i++){
//    for(j=0;j<=n-1;j++){
//        if(a[i] > a[j + 1]){
//            swap(a[j], a[j + 1])
//        }
//    }
//}

