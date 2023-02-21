import collections
import string

paragraph = "Bob hit a ball, the hit BALL flew far after it was hit."
banned = ["hit"]

# ver.2023-02-21 실패
def solution(s, s2):
    temp = s.translate(str.maketrans('', '', string.punctuation))
    print(temp)

    temp2 = []

    i_case_s = [i.lower() for i in temp.split()]
    result = collections.Counter(i_case_s)
    for i in result:
        for i2 in s2:
            if i != i2:
                temp2.append(i)

    print(temp2)


solution(paragraph, banned)
