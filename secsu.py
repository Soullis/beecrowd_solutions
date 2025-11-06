n = int(input())

dic = {}

for i in range(n):
    nome, cpf, idade = input().split()

    if cpf not in dic.keys():
        dic[cpf] = [nome, idade]

print("\nResposta: ")

for i in dic.keys():
    print(dic[i][0], i, dic[i][1])
