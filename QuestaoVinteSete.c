    printf("Preço: ");
    scanf("%f", &preco);

    if (preco < 100)
        preco *= 1.10;
    else
        preco *= 1.20;

    printf("Novo preço: %.2f\n", preco);
