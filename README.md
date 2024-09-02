# Implementação de Árvore Binária em C para Gestão de Elementos

## Descrição
Este projeto em C implementa uma árvore binária para gestão de elementos utilizando ponteiros e estruturas (struct). O código oferece funções para criação, inserção, e localização de nodos na árvore, permitindo a construção e manipulação eficiente de estruturas hierárquicas. 

## Funcionalidades
- **Criação de Árvore**: Inicializa a árvore como vazia e permite a criação da raiz.
- **Inserção de Elementos**: Insere elementos na árvore em posições específicas, respeitando a hierarquia de valores.
- **Localização de Elementos**: Localiza elementos na árvore binária de acordo com critérios definidos.
- **Impressão**: Permite imprimir os elementos da árvore em ordem crescente de acordo com o valor de venda.

## Como Usar
1. Compile o código utilizando um compilador C. Exemplo:
   ```bash
   gcc -o arvore_binaria arvore_binaria.c
   ```
2. Execute o programa para manipular a árvore binária de elementos:
   ```bash
   ./arvore_binaria
   ```
3. Use as funções para adicionar, localizar, e imprimir os elementos da árvore conforme necessário.

## Estrutura de Dados
O projeto utiliza uma estrutura `nodo` para representar cada nodo da árvore. Cada nodo contém:
- **info**: Informação do elemento armazenado.
- **esq**: Ponteiro para o filho à esquerda.
- **dir**: Ponteiro para o filho à direita.

## Funções Principais
- **define(tree *t)**: Inicializa a árvore como vazia.
- **criaRaiz(tree *t, elemento item)**: Cria a raiz da árvore.
- **inserirNaArvore(tree *t, elemento valor)**: Insere um novo elemento na árvore.
- **imprimirEmOrdem(tree t)**: Imprime os elementos da árvore em ordem crescente.

## Dependências
- Biblioteca padrão de C (`stdio.h`, `stdlib.h`, `string.h`).
- Funções auxiliares para manipulação dos elementos.

## Contribuições
Contribuições são bem-vindas! Sinta-se à vontade para abrir issues ou enviar pull requests.

## Licença
Este projeto está licenciado sob a [MIT License](LICENSE).
