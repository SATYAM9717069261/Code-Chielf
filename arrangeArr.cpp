/**
 * Suppose we have an array of elements  [6,5,1,3,2,4]
 * store its position like decreasing order [1 is smallest ellement at 3rd index = 3 ] and delete that element
 * now array is [6,5,3,2,4]
 * store smallest element from updated array on next index [ 1,2 in 4th index= 4, ] and delete that element
 * now array is [6,5,3,4 ]
 * store smallest element from updated array on next index [1,4, 3 in 3rd index =3 ] and delete that element
 * ... so on
 * final array => [3,4,3,3,2,1]
 *
 * that final array is given and and your task is to find [6,5,1,3,2,4] that array.
 *
 * ============================= Answer ============================
 *	 
 *
 * */

#include<bits/stdc++.h>
using namespace std;

