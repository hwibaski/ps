# ver.2023-02-21 - 혼자 풀었음
def solution(s: list[str]) -> list[list[str]]:
    ana_dict = {}
    for x in s:
        temp = sorted(x)
        sorted_str = ''.join(temp)

        if sorted_str not in ana_dict:
            ana_dict[sorted_str] = []
            ana_dict[sorted_str].append(x)
        else:
            ana_dict[sorted_str].append(x)

    result = []
    for strs in ana_dict:
        result.append(ana_dict[strs])

    return result


solution(["eat","tea","tan","ate","nat","bat"])