# Biblioteca struct
## O que é a biblioteca "struct.h"?

    A biblioteca "struct.h" é uma biblioteca com algumas funções que envolvem structs tipo deletar.

## Como usar a "struct.h"?
    Para usar você precisa adicionar o arquivo para a pasta do seu projeto e usar o comando #include "struct.h", lembrando que isso é uma referencia relativa então se estiver em uma pasta dentro da do seu arquivo é preciso colocar "nome da pasta"// e se estiver acima ..//

## Aviso! 
- Todas as funções dessa biblioteca começam com a abreviação "Stc".
- Todas as funções usam struct como parâmetros então você precisa adicionar ela no arquivo da biblioteca.

---

### StcDeletar:
Sintaxe: StcDeletar(**Tipo da struct** *Struct, **int** tamanho da struct, **int** posição para deletar)

   Deleta uma struct de uma posição, retornando o novo tamanho da struct.

---

Eu sei que parece meio inútil eu essa biblioteca só com uma função, porém eu quis dividir para caso eu queira adicionar mais funções sobre struct a ela, lembrando que essa biblioteca é para a linguagem C/C++.