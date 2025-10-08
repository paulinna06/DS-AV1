public class Senha {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        String senhaCorreta = "123456"; // senha definida
        String senhaDigitada;

        
        do {
            System.out.print("Digite a senha: ");
            senhaDigitada = input.nextLine();

            if (!senhaDigitada.equals(senhaCorreta)) {
                System.out.println("Senha incorreta! Tente novamente.");
            }
        } while (!senhaDigitada.equals(senhaCorreta));

        
        System.out.println("Acesso permitido! Senha correta.");

        input.close();
    }
}
