def fact(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n*fact(n-1)


n = int(input("Enter n : "))
s = fact(n)
print(s)
# if n == 1 or n == 0:
#     n = 1
# else:
#     for i in range(1, n):
#         n = n*i
# print(n)
