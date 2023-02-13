# 풀지도 못함

s = input()
strs = []
for char in s:
    if char.isalnum():
        strs.append(char.lower())

is_right = True
for i in range(len(strs)):
    if strs[i] != str[len(strs) - 1]:
        is_right = False
        break

print(is_right)

# A man, a plan, a canal: Panama