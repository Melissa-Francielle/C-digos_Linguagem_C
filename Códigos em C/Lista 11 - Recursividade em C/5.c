//Implemente uma função recursiva que receba dois numeros inteiros
//x e n e calcule o valor de X^n 

int num_potencia (int x, int numero){
    if ( numero == 0){
        return 1;
    }
    else {
        return x * num_potencia(x, numero-1);
    }
}
int main (){
    int numero, x;
    
    printf("Digite um valor para x (base) e para n (potencia) respectivamente: ");
    scanf ("%d%d", &x, &numero);

    printf("Resultado de %d elevado a %d eh = %d\n", x, numero, num_potencia(x, numero));
    return 0;
}