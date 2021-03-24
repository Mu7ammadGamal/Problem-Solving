# n = input()
# string = input()
# A = string.count('A')
# D = string.count('D')
# if D == A:
#     print("Friendship")
# elif A > D:
#     print("Anton")
# else:
#     print("Danik")

d = int(input())-input().count('A')*2
print([['Friendship', 'Danik'][d > 0], 'Anton'][d < 0])
