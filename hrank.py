n = int(input())
s1 = input()
s2 = input()
s2 = s2[::-1]
s3 = ''
for i in range (0,n):
    s3 += s1[i] + s2[i]
print(s3)
