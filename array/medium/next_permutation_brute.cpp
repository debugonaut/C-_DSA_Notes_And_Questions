/* The brute for this problem will take up a lot of time as it has a time complexity of O(n! * n) which is really large to handle so we will not take up this problem for brute force but we can imagine and ideate the thought process behind it

 1. Generate All the possible permutation for the given array, for eg.

 arr[1,2] == arr[1,2] , arr[2,1]

 2. Sort it all all according to the array elements
        ex. arr[1,2,3] = [1,2,3], [1,3,2], [2,1,3], [2,3,1], [3,1,2], [3,2,1]

 3. Do a linear search and find the key element where the user want the next permutation and print the array next to it

 if(!next_permuation (i.e. last element))
 {
 print the first array
 }
*/