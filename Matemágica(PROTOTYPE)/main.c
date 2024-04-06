#include <stdio.h>
#include <math.h>
#include <locale.h>

// Funções para cada opção do switch case

// Função para a calculadora com operações básicas
void calculadora() {
    int op;
    float num1, num2, resultado;
    
    system("cls");
    
    printf("Selecione a operação:\n");
    printf("1. Soma\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    scanf("%d", &op);
    
    printf("Digite dois números: ");
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
                printf("Erro! Divisão por zero.\n");
                return;
            }
            break;
        default:
            printf("Opção inválida!\n");
            return;
    }
    
    printf("Resultado: %.2f\n", resultado);
    system("pause");
}

// Função para exibir números pares
void exibirNumerosPares() {
    int numero, i;
    
    system("cls");
    
    printf("Digite um número positivo: ");
    scanf("%d", &numero);
    
    printf("Números pares até %d: ", numero);
    for(i = 0; i <= numero; i++) {
        if(i % 2 == 0)
            printf("%d ", i);
    }
    printf("\n");
    system("pause");
}

// Função para calcular a raiz quadrada
void calcularRaizQuadrada() {
    float numero;
    
    system("cls");
    
    printf("Digite um número: ");
    scanf("%f", &numero);
    
    printf("Raiz quadrada de %.2f: %.2f\n", numero, sqrt(numero));
    system("pause");
}

// Função para calcular a raiz cúbica
void calcularRaizCubica() {
    float numero;
    
    system("cls");
    
    printf("Digite um número: ");
    scanf("%f", &numero);
    
    printf("Raiz cúbica de %.2f: %.2f\n", numero, cbrt(numero));
    system("pause");
}

// Função para calcular as raízes da equação de segundo grau
void calcularRaizesEquacaoSegundoGrau() {
    float a, b, c, delta, x1, x2;
    
    system("cls");
    
    printf("Digite os coeficientes a, b e c da equação ax^2 + bx + c = 0: ");
    scanf("%f %f %f", &a, &b, &c);
    
    delta = b*b - 4*a*c;
    
    if(delta > 0) {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("Raízes reais distintas: x1 = %.2f, x2 = %.2f\n", x1, x2);
    }
    else if(delta == 0) {
        x1 = -b / (2*a);
        printf("Raiz real dupla: x = %.2f\n", x1);
    }
    else {
        printf("Raízes complexas.\n");
    }
    system("pause");
}

// Função para calcular potência
void calcularPotencia() {
    float base, expoente, resultado;
    
    system("cls");
    
    printf("Digite a base e o expoente: ");
    scanf("%f %f", &base, &expoente);
    
    resultado = pow(base, expoente);
    
    printf("Resultado: %.2f\n", resultado);
    
    system("pause");
}

// Função para calcular a área de um retângulo
void calcularAreaRetangulo() {
    float base, altura, area;
    
    system("cls");
    
    printf("Digite a base e a altura do retângulo: ");
    scanf("%f %f", &base, &altura);
    
    area = base * altura;
    
    printf("Área do retângulo: %.2f\n", area);
    system("pause");
}

// Função para calcular a área de um triângulo
void calcularAreaTriangulo() {
    float base, altura, area;
    
    system("cls");
    
    printf("Digite a base e a altura do triângulo: ");
    scanf("%f %f", &base, &altura);
    
    area = (base * altura) / 2;
    
    printf("Área do triângulo: %.2f\n", area);
    system("pause");
}

// Função para calcular o teorema de Pitágoras
void calcularTeoremaPitagoras() {
    float cateto1, cateto2, hipotenusa;
    
    system("cls");
    
    printf("Digite a medida dos dois catetos: ");
    scanf("%f %f", &cateto1, &cateto2);
    
    hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);
    
    printf("Hipotenusa: %.2f\n", hipotenusa);
    system("pause");
}

// Função principal
int main() {
	setlocale(LC_ALL,"portuguese");
    int opcao;
    
    do {
        printf("\n--- MATEMÁGICA ---\n");
        printf("1. Calculadora\n");
        printf("2. Exibir números pares\n");
        printf("3. Calcular raiz quadrada\n");
        printf("4. Calcular raiz cúbica\n");
        printf("5. Calcular raízes da equação de segundo grau\n");
        printf("6. Calcular potência\n");
        printf("7. Calcular área do retângulo\n");
        printf("8. Calcular área do triângulo\n");
        printf("9. Calcular teorema de Pitágoras\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
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
                printf("Opção inválida!\n");
        }
    } while(opcao != 0);
    system("pause");
    return 0;
}

