logs = ["dig1 8 1 5 1", "let1 art can", "dig2 3 6", "let2 own kit dig", "let3 art zero"]


# 실패
# ver.2023-02-14
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


# ver.2023-02-21
# logs.sort() 부분이 잘 생각이 나지 않음
def solution2(logs: list[str]) -> list[str]:
    alpha = []
    non_alpha = []
    logs.sort(key=lambda x: (x.split()[0], x.split()[1]))
    for log in logs:
        if log.split()[1].isalpha():
            alpha.append(log)
        else:
            non_alpha.append(log)

    print(alpha + non_alpha)
    return alpha + non_alpha


solution2(logs)
