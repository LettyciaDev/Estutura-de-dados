// ************** 

typedef struct vetor Vetor;

// cria o vetor
Vetor* create(int capacity);
//  destruir vetor
void destroy(Vetor* v);
// retorna o tamanho do vetor(número atual de elementos inseridos)
int sizeVetor(Vetor* v);
// retorna a capacidade do vetor(número máximo de elementos)
int capacityVetor(Vetor* v);
// retorna o elemento do índice 'index' 
float atVetor(Vetor* v, int index);
// retorna o elemento do índice
float getVetor(Vetor* v, int index);
// adiciona o valor 'val' no final do vetor. Informa erro se o vetor estiver cheio
void appendVetor(Vetor* v, float val);
// remove valor no index
void remove(Vetor* v, int index);
// atribui o valor 'val' no índice 'index' do vetor de tipo 'tad'
void setVetor(Vetor* v, int index, float val);
// imprime todos os elementos do vetor
void printVetor(Vetor* v);