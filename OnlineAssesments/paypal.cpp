//
//  main.cpp
//  OnlineAssesments
//
//  Created by Ries Cheung on 2022-10-22.
//

/*
 Questions statement:
 • Given a string array that contains n elements, each composed of lowercase English letters,
 and q queries, each query of the format /-r, for each query, determine how many strings
 starting from index / and ending at index r have vowels as the first and last character.
 Vowels are in (a, e,i,o,u).
 
 Example:
 • strArr = ['aba', 'beb', 'ece', 'aa', 'e']
 • queries = ['1-3','2-5', 2-2']
 • These strings represent two dash delimited integers / and r, the start and end indices of
 the interval, inclusive. Using 1-based indexing in the string array, the interval 1-3 \
 contains two strings that start and end with a vowel: 'aba' and 'ece'.
 The interval 2-5 also has three. The third interval, from 2-2, the only element in the
 interval, 'beb' does not begin and end with a vowel. The return array for the queries
 is [2, 3, 0].
 */


#include <iostream>
#include <vector>
#include <string>










int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

/*
 Test case 1:
 aab
 bed
 awe
 bbbbbu
 7
 2-3
 4-5
 Correct output: 1 1
 
 Test case 2:
 3
 yy
 u
 oe
 2
 1-2
 2-3
 Correct output: 1 2
 */
