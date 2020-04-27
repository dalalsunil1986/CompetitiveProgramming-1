
;
int a[10] = [1,2,3,4,5,6,7,8,9,10]

int a = max

def maxsubsetsumlt(array, k):
    sums = {0}
    for elem in array:
        sums.update({sum_ + elem for sum_ in sums})
    return max(sum_ for sum_ in sums if sum_ < k)
