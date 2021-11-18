#include <stdio.h>
// implementar las funciones de libprueba.h aca
// imprime un saludo: Hola, name (name es el arg)
void saludar(char *name){
  printf("Hola, %s\n", name);
}

// devuelve la enesima potencia de dos
int potencia_de_dos(int n){



// m == n * n;
int r = 1;
// printf("%f\n", m );
for (int i = 0; i < n; i++) {
r =  r * 2;
}
return r;
}

// imprime un array de enteros de dimension size
void print_array(int a[], int size){

for (size_t i = 0; i < size; i++) {
printf("%d ",a[i] );
}
printf("\n");
}



// pone el resultado de u + v en result
// todos vectores de dimension n
void suma_vectorial(int u[], int v[], int result[], int n){

for (int i = 0; i < n; i++) {

result[i] = u[i]  + v[i];

}
// return result;

}

// realiza un cifrado por desplazamiento usando el entero key
// como cantidad de letras a desplazar
void cifrar(char word[], int key){
// 
// for (int i = 0; i < key; i++) {
// word[i] += key;
// }
// printf("%d\n",word);

}
