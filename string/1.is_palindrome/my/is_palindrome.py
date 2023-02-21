# ver.2023-02-14
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


# -----------------------------------------------------------------


# ver.2023-02-21
def solution(s: str):
    strArr = [s.lower() for s in s if s.isalnum()]
    reverse = strArr[::-1]
    print(strArr)
    print(reverse)
    if strArr == reverse:
        return True
    else:
        return False


print(solution("A man, a plan, a canal: Panama"))

# -----------------------------------------------------------------
