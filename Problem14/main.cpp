#include<iostream>

int main()
{
const int number = 1000000;
 
long sequenceLength = 0;
long startingNumber = 0;
long sequence;
 
for (int i = 2; i <= number; i++) {
    int length = 1;
    sequence = i;
    while (sequence != 1) {
        if ((sequence % 2) == 0) {
            sequence = sequence / 2;
        } else {
            sequence = sequence * 3 + 1;
        }
        length++;
    }
 
    //Check if sequence is the best solution
    if (length > sequenceLength) {
        sequenceLength = length;
        startingNumber = i;
    }
}
std::cout<<startingNumber;
}


/*  CACHING METHOD. HIGHLY EFFICIENT  */ 



// const int number = 1000000;
 
// int sequenceLength = 0;
// int startingNumber = 0;
// long sequence;
 
// int[] cache = new int[number + 1];
// //Initialise cache
// for (int i = 0; i < cache.Length; i++) {
//     cache[i] = -1;
// }
// cache[1] = 1;
 
// for (int i = 2; i <= number; i++) {
//     sequence = i;
//     int k = 0;
//     while (sequence != 1 && sequence >= i) {
//         k++;
//         if ((sequence % 2) == 0) {
//             sequence = sequence / 2;
//         } else {
//             sequence = sequence * 3 + 1;
//         }
//     }
//     //Store result in cache
//     cache[i] = k + cache[sequence];
 
//     //Check if sequence is the best solution
//     if (cache[i] > sequenceLength) {
//         sequenceLength = cache[i];
//         startingNumber = i;
//     }
// }