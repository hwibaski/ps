import collections
import re
from typing import Deque


def is_palindrome_normal(s: str) -> bool:
    strs = []
    for char in s:
        if char.isalnum():
            strs.append(char.lower())

    while len(strs) > 1:
        if strs.pop(0) != strs.pop():
            return False

    return True


result_normal = is_palindrome_normal("A man, a plan, a canal: Panama")
print("result_normal :", result_normal)


def is_palindrome_deque(s: str) -> bool:
    strs: Deque = collections.deque()

    for char in s:
        if char.isalnum():
            strs.append(char.lower())

    while len(strs) > 1:
        if strs.popleft() != strs.pop():
            return False

    return True


result_deque = is_palindrome_deque("A man, a plan, a canal: Panama")
print("result_deque :", result_deque)


def is_palindrome_slice(s: str) -> bool:
    s = s.lower()
    # 정규식으로 불필요한 문자 필터링
    s = re.sub('[^a-z0-9]', '', s)

    # s[::-1] 리스트 뒤집기
    return s == s[::-1]


print("result_slice :", is_palindrome_slice("A man, a plan, a canal: Panama"))


