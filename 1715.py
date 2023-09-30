N, M = map(int, input().split())

jogadores = []

for i in range(N):
    linha = list(map(int, input().split()))
    jogadores.append(linha)

gol = 0

for i in range(N):
    gols = 1
    for j in range(M):
        if jogadores[i][j] == 0:
            gols = 0
            break
    if gols:
        gol += 1

print(gol)
