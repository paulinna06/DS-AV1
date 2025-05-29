float preço;
   printf("Diga o preço: ");
   scanf("%f", &preço);

   if (preço < 100)
       preço *= 1.10;
   else
       preço *= 1.20;

   printf("preço inflacionado: %.2f\n", preço);
