logs = ["dig1 8 1 5 1", "let1 art can", "dig2 3 6", "let2 own kit dig", "let3 art zero"]

# 실패
def solution(logs: list[str]) -> list[str]:
    logs.sort(key=lambda x: x.split()[1])
    # print(logs.pop(i))
    alpha = []
    non_alpha = []
    for i, v in enumerate(logs):
        if v.split()[1].isalpha():
            alpha.append(logs[i])
        else:
            non_alpha.append(logs[i])

    print(alpha + non_alpha)


print(solution(logs))

# expected
# ["let1 art can","let3 art zero","let2 own kit dig","dig1 8 1 5 1","dig2 3 6"]
