/*
 Arquivo ".H": Protótipos das funções, 
 tipos de ponteiros, e dados globalmente acessível*/

typedef struct ponto Ponto;

// Protótipos das funções
// Cria um novo ponto == FOPEN
Ponto* pto_cria(float x, float y);

// Libera um ponto == FCLOSE
void pto_libera(Ponto* p);

// Acessa os valores de "x" e "y" de um ponto
void pto_acessa(Ponto* p, float* x, float* y);

// Atribui os valores "x" e "y" a um ponto
void pto_atribui(Ponto* p, float x, float y);

// Calcula a distância entre dois pontos
float pto_distancia(Ponto* p1, Ponto* p2);
