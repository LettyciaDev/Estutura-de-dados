/* TIPOS ABSTRATOS DE DADOS
-> PERMITE EXPANDIR OS DATA TYPES PRIMITIVOS
 ORIGINALMENTE IMBUTIDOS EM UMA LINGUGAEM DE 
 PROGRAMAÇÃO.

 -> UM CONJUNTO DE OBJETOS COM 
 MESMA ESTRUTURAS DE MEMÓRIA E OPERAÇÕES
 ASSOCIADAS NA MEMÓRIA HEAP.asm

 -> PERMITE UMA SEPARAÇÃO DE RESPONSABILIDADES:
   .IMPLEMENTAÇÃO
   .


  DATA TYPE 

  ->PRIMITIVO (VALUE) 
    .INT
    .BOOLEAN
    .FLOAT
    .DOUBLE
    .CHAR 

  ->NÃO PRIMITIVO(REFERENCIA)
    .*INT
    .**FLOAT

    ->USER DEFINED TYPE
    STRUCT ARRAYLIST{
        *INT 
        INT    
    }
    
                           INTERFACE
    -----------     -------------------------      -----------------------------------------
    | CLIENTE | --> | CREATE/DESTROY/INSERT |  --> | VARIÁVEIS E IMPLEMENTAÇOES DAS FUNÇÕES|
    -----------     -------------------------      -----------------------------------------
     MAIN.C               ARRAY.H                              ARRAYIMPL.C

*/
