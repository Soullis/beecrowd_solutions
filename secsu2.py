class Dados():
    def __init__(self, cpf, nome, idade):
        self.cpf = cpf
        self.nome = nome
        self.idade = idade

    def isOverage(self):
        if self.idade >= 18:
            return True
        return False


pessoa1 = Dados(9999999, "jose", 17)

print(pessoa1.isOverage())
