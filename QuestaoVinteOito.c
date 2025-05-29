float total;
    int opcao;

    printf("Informe o valor da sua compra: ");
    scanf("%f", &total);

    printf("\nEscolha a forma de pagamento:\n");
    printf("1 - À vista (10%% de desconto)\n");
    printf("2 - Em 2x sem juros\n");
    printf("3 - Em 3x com 10%% de juros\n");
    printf("Digite a opção desejada (1, 2 ou 3): ");
    scanf("%d", &opcao);

    printf("\n");

    if (opcao == 1)
        printf("Você vai pagar R$ %.2f com desconto à vista.\n", total * 0.9);
    else if (opcao == 2)
        printf("Você vai pagar 2 parcelas de R$ %.2f.\n", total / 2);
    else if (opcao == 3)
        printf("Você vai pagar 3 parcelas de R$ %.2f (Total com juros: R$ %.2f).\n", (total * 1.1) / 3, total * 1.1);
    else
        printf("Opção inválida. Por favor, tente novamente.\n");
