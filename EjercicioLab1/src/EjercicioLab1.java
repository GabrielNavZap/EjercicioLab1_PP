import java.util.Scanner;

public class EjercicioLab1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Seleccione una operación:");
        System.out.println("1. División por restas sucesivas");
        System.out.println("2. Multiplicación por sumas sucesivas");
        System.out.println("3. Cálculo de factorial");
        int opcion = scanner.nextInt();

        switch (opcion) {
            case 1:
                System.out.print("Ingrese el dividendo: ");
                int dividendo = scanner.nextInt();
                System.out.print("Ingrese el divisor: ");
                int divisor = scanner.nextInt();
                int cociente = divisionRestasSucesivas(dividendo, divisor);
                System.out.println("El cociente es: " + cociente);
                break;

            case 2:
                System.out.print("Ingrese el primer número: ");
                int numero1 = scanner.nextInt();
                System.out.print("Ingrese el segundo número: ");
                int numero2 = scanner.nextInt();
                int producto = multiplicacionSumasSucesivas(numero1, numero2);
                System.out.println("El producto es: " + producto);
                break;

            case 3:
                System.out.print("Ingrese un número para calcular su factorial: ");
                int num = scanner.nextInt();
                long factorial = calcularFactorial(num);
                System.out.println("El factorial es: " + factorial);
                break;

            default:
                System.out.println("Opción no válida");
        }
    }

    public static int divisionRestasSucesivas(int dividendo, int divisor) {
        if (divisor == 0) {
            throw new ArithmeticException("No se puede dividir por cero");
        }

        int cociente = 0;
        while (dividendo >= divisor) {
            dividendo -= divisor;
            cociente++;
        }
        return cociente;
    }

    public static int multiplicacionSumasSucesivas(int a, int b) {
        int resultado = 0;
        for (int i = 0; i < b; i++) {
            resultado += a;
        }
        return resultado;
    }

    public static long calcularFactorial(int n) {
        if (n < 0) {
            throw new IllegalArgumentException("El factorial no está definido para números negativos");
        }

        long factorial = 1;
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        return factorial;
    }
}
