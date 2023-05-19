#include <stdio.h>
#include <math.h>

typedef struct {
    double real;
    double imag;
} Complexo;

Complexo soma(Complexo z, Complexo w) {
    Complexo resultado;
    resultado.real = z.real + w.real;
    resultado.imag = z.imag + w.imag;
    return resultado;
}

Complexo subtracao(Complexo z, Complexo w) {
    Complexo resultado;
    resultado.real = z.real - w.real;
    resultado.imag = z.imag - w.imag;
    return resultado;
}

Complexo produto(Complexo z, Complexo w) {
    Complexo resultado;
    resultado.real = z.real * w.real - z.imag * w.imag;
    resultado.imag = z.real * w.imag + z.imag * w.real;
    return resultado;
}

double modulo(Complexo z) {
    return sqrt(z.real * z.real + z.imag * z.imag);
}

int main() {
    Complexo z, w;

    printf("Digite o primeiro numero complexo (parte real parte imaginaria): ");
    scanf("%lf %lf", &z.real, &z.imag);

    printf("Digite o segundo numero complexo (parte real parte imaginaria): ");
    scanf("%lf %lf", &w.real, &w.imag);

    Complexo resultado_soma = soma(z, w);
    Complexo resultado_subtracao = subtracao(z, w);
    Complexo resultado_produto = produto(z, w);
    double modulo_z = modulo(z);
    double modulo_w = modulo(w);

    printf("Soma: %.2lf + %.2lfi\n", resultado_soma.real, resultado_soma.imag);
    printf("Subtracao: %.2lf + %.2lfi\n", resultado_subtracao.real, resultado_subtracao.imag);
    printf("Produto: %.2lf + %.2lfi\n", resultado_produto.real, resultado_produto.imag);
    printf("Modulo de z: %.2lf\n", modulo_z);
    printf("Modulo de w: %.2lf\n", modulo_w);

    return 0;
}

