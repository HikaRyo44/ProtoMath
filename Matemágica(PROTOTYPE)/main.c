#include <stdio.h>
#include <math.h>
#include <locale.h>

// Fun��es para cada op��o do switch case

// Fun��o para a calculadora com opera��es b�sicas
void calculadora() {
    int op;
    float num1, num2, resultado;
    
    system("cls");
    
    printf("Selecione a opera��o:\n");
    printf("1. Soma\n");
    printf("2. Subtra��o\n");
    printf("3. Multiplica��o\n");
    printf("4. Divis�o\n");
    scanf("%d", &op);
    
    printf("Digite dois n�meros: ");
    scanf("%f %f", &num1, &num2);
    
    switch(op) {
        case 1:
            resultado = num1 + num2;
            break;
        case 2:
            resultado = num1 - num2;
            break;
        case 3:
            resultado = num1 * num2;
            break;
        case 4:
            if(num2 != 0)
                resultado = num1 / num2;
            else {
                printf("Erro! Divis�o por zero.\n");
                return;
            }
            break;
        default:
            printf("Op��o inv�lida!\n");
            return;
    }
    
    printf("Resultado: %.2f\n", resultado);
    system("pause");
}

// Fun��o para exibir n�meros pares
void exibirNumerosPares() {
    int numero, i;
    
    system("cls");
    
    printf("Digite um n�mero positivo: ");
    scanf("%d", &numero);
    
    printf("N�meros pares at� %d: ", numero);
    for(i = 0; i <= numero; i++) {
        if(i % 2 == 0)
            printf("%d ", i);
    }
    printf("\n");
    system("pause");
}

// Fun��o para calcular a raiz quadrada
void calcularRaizQuadrada() {
    float numero;
    
    system("cls");
    
    printf("Digite um n�mero: ");
    scanf("%f", &numero);
    
    printf("Raiz quadrada de %.2f: %.2f\n", numero, sqrt(numero));
    system("pause");
}

// Fun��o para calcular a raiz c�bica
void calcularRaizCubica() {
    float numero;
    
    system("cls");
    
    printf("Digite um n�mero: ");
    scanf("%f", &numero);
    
    printf("Raiz c�bica de %.2f: %.2f\n", numero, cbrt(numero));
    system("pause");
}

// Fun��o para calcular as ra�zes da equa��o de segundo grau
void calcularRaizesEquacaoSegundoGrau() {
    float a, b, c, delta, x1, x2;
    
    system("cls");
    
    printf("Digite os coeficientes a, b e c da equa��o ax^2 + bx + c = 0: ");
    scanf("%f %f %f", &a, &b, &c);
    
    delta = b*b - 4*a*c;
    
    if(delta > 0) {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("Ra�zes reais distintas: x1 = %.2f, x2 = %.2f\n", x1, x2);
    }
    else if(delta == 0) {
        x1 = -b / (2*a);
        printf("Raiz real dupla: x = %.2f\n", x1);
    }
    else {
        printf("Ra�zes complexas.\n");
    }
    system("pause");
}

// Fun��o para calcular pot�ncia
void calcularPotencia() {
    float base, expoente, resultado;
    
    system("cls");
    
    printf("Digite a base e o expoente: ");
    scanf("%f %f", &base, &expoente);
    
    resultado = pow(base, expoente);
    
    printf("Resultado: %.2f\n", resultado);
    
    system("pause");
}

// Fun��o para calcular a �rea de um ret�ngulo
void calcularAreaRetangulo() {
    float base, altura, area;
    
    system("cls");
    
    printf("Digite a base e a altura do ret�ngulo: ");
    scanf("%f %f", &base, &altura);
    
    area = base * altura;
    
    printf("�rea do ret�ngulo: %.2f\n", area);
    system("pause");
}

// Fun��o para calcular a �rea de um tri�ngulo
void calcularAreaTriangulo() {
    float base, altura, area;
    
    system("cls");
    
    printf("Digite a base e a altura do tri�ngulo: ");
    scanf("%f %f", &base, &altura);
    
    area = (base * altura) / 2;
    
    printf("�rea do tri�ngulo: %.2f\n", area);
    system("pause");
}

// Fun��o para calcular o teorema de Pit�goras
void calcularTeoremaPitagoras() {
    float cateto1, cateto2, hipotenusa;
    
    system("cls");
    
    printf("Digite a medida dos dois catetos: ");
    scanf("%f %f", &cateto1, &cateto2);
    
    hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);
    
    printf("Hipotenusa: %.2f\n", hipotenusa);
    system("pause");
}

// Fun��o principal
int main() {
	setlocale(LC_ALL,"portuguese");
    int opcao;
    
    do {
        printf("\n--- MATEM�GICA ---\n");
        printf("1. Calculadora\n");
        printf("2. Exibir n�meros pares\n");
        printf("3. Calcular raiz quadrada\n");
        printf("4. Calcular raiz c�bica\n");
        printf("5. Calcular ra�zes da equa��o de segundo grau\n");
        printf("6. Calcular pot�ncia\n");
        printf("7. Calcular �rea do ret�ngulo\n");
        printf("8. Calcular �rea do tri�ngulo\n");
        printf("9. Calcular teorema de Pit�goras\n");
        printf("0. Sair\n");
        printf("Escolha uma op��o: ");
        scanf("%d", &opcao);
        
        switch(opcao) {
            case 1:
                calculadora();
                break;
            case 2:
                exibirNumerosPares();
                break;
            case 3:
                calcularRaizQuadrada();
                break;
            case 4:
                calcularRaizCubica();
                break;
            case 5:
                calcularRaizesEquacaoSegundoGrau();
                break;
            case 6:
                calcularPotencia();
                break;
            case 7:
                calcularAreaRetangulo();
                break;
            case 8:
                calcularAreaTriangulo();
                break;
            case 9:
                calcularTeoremaPitagoras();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Op��o inv�lida!\n");
        }
    } while(opcao != 0);
    system("pause");
    return 0;
}

