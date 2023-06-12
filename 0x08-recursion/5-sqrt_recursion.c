#include "main.h"
#include <stdio.h>

/**
 * number - helps find the squareroot of natural squareroots
 * @n: natural number starting from 1
 * @root: sqyareroot number to be found
 *
 * Return: squareroot of answer
 * if root is not a natural squareroot returns -1
 * if root is less than 0 return -1
 */

/** _sqrt_recursion - returns the natural squareroot of a number
 * @n:number to calculate the squareroot
 *
 * Return: the resulting square root
 *
 */
int _sqrt_recursion(int n) {
    if (n < 0) {
        return -1;  // Square root of a negative number is undefined
    }

    if (n == 0 || n == 1) {
        return n;  // Base case: square root of 0 or 1 is the number itself
    }

    return sqrt_recursive_helper(n, 1, n);
}

/**
 * sqrt_recursive_helper - helps find the squareroot of natural squareroots
 * @start: defines the lower bound of the search range for finding the square root.
 * @end: defines the upper bound of the search range for finding the square root.
 *
 * Return: squareroot of answer
 */

int sqrt_recursive_helper(int n, int start, int end) {
    if (start > end) {
        return end;  // Returns the integer part of the square root
    }

    int mid = start + (end - start) / 2;

    if (mid == n / mid) {
        return mid;  // Found the natural square root
    }

    if (mid < n / mid) {
        return sqrt_recursive_helper(n, mid + 1, end);
    } else {
        return sqrt_recursive_helper(n, start, mid - 1);
    }
}
