public class Fatorial {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int numero;

        
        do {
            System.out.print("Digite um número inteiro não negativo: ");
            numero = input.nextInt();

            if (numero < 0) {
                System.out.println("Número inválido! Digite novamente.");
            }
        } while (numero < 0);

        
        long fatorial = 1;
        for (int i = 1; i <= numero; i++) {
            fatorial *= i;
        }

        
        System.out.println("O fatorial de " + numero + " é " + fatorial + ".");

        input.close();
    }
}
