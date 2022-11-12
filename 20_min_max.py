#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'miniMaxSum' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def miniMaxSum(arr):
    # Write your code here
    countList = []
    currentIndex = 0
    max_sum = 0
    min_sum = 0
    for i in range(len(arr)):
        for j, number in enumerate(arr):
            if j != currentIndex:
                    countList.append(number)
        if sum(countList) > max_sum:
            max_sum = sum(countList)
        if i == 0:
            min_sum = sum(countList)
        elif sum(countList) < min_sum:
            min_sum = sum(countList)
        currentIndex += 1
        countList = []
    print(min_sum, max_sum)

if __name__ == '__main__':

    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)
