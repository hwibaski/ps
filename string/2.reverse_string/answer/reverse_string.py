from typing import List

s_input = ["h", "e", "l", "l", "o"]


# 1
def reverse_string_swap(s_list: List[str]) -> None:
    left, right = 0, len(s_list) - 1
    while left < right:
        s_list[left], s_list[right] = s_list[right], s_list[left]
        left += 1
        right -= 1


# 2
def reverse_string_slice(s_list: List[str]) -> None:
    s_list[:] = s_list[::-1]


# 3
def reverse_string_method(s_list: List[str]) -> None:
    s_list.reverse()
