import java.util.Scanner;
import java.util.Arrays;
 class Main {
    public static void crivo(int n) {
        boolean[] ehPrimo = new boolean[n + 1];
        Arrays.fill(ehPrimo, true); // Inicialmente, todos são primos
        ehPrimo[0] = ehPrimo[1] = false; // 0 e 1 não são primos

        for (int p = 2; p * p <= n; p++) {
            if (ehPrimo[p]) {
                for (int i = p * p; i <= n; i += p) {
                    ehPrimo[i] = false; // Marcando múltiplos de p como não primos
                }
            }
        }

        // Exibindo números primos
        for (int i = 2; i <= n; i++) {
            if (ehPrimo[i]) {
                System.out.print(i + " ");
            }
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Digite o valor de n: ");
        int n = scanner.nextInt();
        System.out.println("Números primos até " + n + ":");
        crivo(n);
    }
}
