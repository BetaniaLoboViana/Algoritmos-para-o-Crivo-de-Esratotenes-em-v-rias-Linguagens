def crivo(n):
    eh_primo = [True] * (n + 1)
    eh_primo[0] = eh_primo[1] = False  # 0 e 1 não são primos

    for p in range(2, int(n ** 0.5) + 1):
        if eh_primo[p]:
            for i in range(p * p, n + 1, p):
                eh_primo[i] = False  # Marcando múltiplos de p como não primos

    # Exibindo números primos
    for i in range(2, n + 1):
        if eh_primo[i]:
            print(i, end=" ")

n = int(input("Digite o valor de n: "))  # Entrada do valor n
print(f"Números primos até {n}:")
crivo(n)
