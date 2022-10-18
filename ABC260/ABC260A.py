S = input()
counter = 0

if S[0] != S[1] and S[1] != S[2] and S[2] != S[0]:
    print(S[0])

if S[0] == S[1] and S[1] != S[2]:
    print(S[2])

if S[1] == S[2] and S[2] != S[0]:
    print(S[0])

if S[2] == S[0] and S[0] != S[1]:
    print(S[1])

if S[0] == S[1] and S[0] == S[2]:
    print(-1)