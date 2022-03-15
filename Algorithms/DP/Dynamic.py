def Fib(n):
    if n <= 2:
        return 1
    return Fib(n - 1) + Fib(n - 2)


# memo is dictionary:
# Memoization: Cache the results to use them later on
def FibMemoization(n, memo={}):
    if n in memo: return memo[n]
    if n <= 2: return 1
    memo[n] = FibMemoization(n - 1, memo) + FibMemoization(n - 2, memo)
    return memo[n]


# Travel From one point to another using only two moves: (right, down)
# Travel from top Left to bottom Right
# Moving Bottom reduces m value
# Moving Left reduces n value
def GridTraveller(m, n):
    if m == 0 or n == 0: return 0
    if (m, n) == (1, 1): return 1
    # Down + Right
    return GridTraveller(m - 1, n) + GridTraveller(m, n - 1)


def GridTravellerMemoization(m, n, memo={}):
    keys = str(m) + "," + str(n)
    if keys in memo: return memo[keys]
    if m == 0 or n == 0: return 0
    if (m, n) == (1, 1): return 1
    # Down + Right
    memo[keys] = GridTravellerMemoization(m - 1, n, memo) + GridTravellerMemoization(m, n - 1, memo)
    return memo[keys]


def fact(n, memo):
    if n in memo: return memo[n]
    if n <= 1: return n
    memo[n] = fact(n, memo) * fact(n - 1, memo)
    return memo[n]


# TimeComplexity of a tree is calc: O(n^m) where m is the height of the tree and n is the branching factor
# canSum(10, [5,5, 4, 6]) -> True
def canSum(target, nums):
    if target == 0: return True
    if target < 0: return False
    for i in nums:
        if canSum(target - i, nums):
            return True
    return False


def canSumMemoization(target, nums, memo={}):
    if target in memo:
        return memo[target]
    if target == 0:
        return True
    if target < 0:
        return False
    for i in nums:
        if canSum(target - i, nums):
            memo[target] = True
            return True
    memo[target] = False
    return False


def howSum():
    pass


def showSum():
    pass


if __name__ == "__main__":
    print(canSumMemoization(10, [1, 2, 3, 4, 32]))
