

typedef struct nodo *ptrNodo;
struct nodo1
{
    elemento1 info;
    ptrNodo 	esq;
    ptrNodo   dir;

}nodo1;

struct nodo
{
    elemento info;
    ptrNodo 	esq;
    ptrNodo   dir;

}nodo;

typedef ptrNodo tree;


void define(tree *t) {
      *t = NULL;
}

ptrNodo criaRaiz(tree *t, elemento item)
{
    tree no;
    no = (ptrNodo)malloc(sizeof(struct nodo));
    no->esq = NULL;
    no->dir = NULL;
    copiarElemento2(&no->info, item);
    *t = no;
    return no;

}


int vazia (tree t) {
   return (t==NULL);
}

ptrNodo criarNodoDir(tree t, elemento item)
{
  tree  no;
  no = (ptrNodo)malloc(sizeof(struct nodo));
    no->esq = NULL;
    no->dir = NULL;
    copiarElemento2(&no->info,item);
    t->dir = no;
    return no;
}

tree criarNodoEsq(tree t, elemento item) {


  tree  no;
  no = (ptrNodo)malloc(sizeof(struct nodo));
    no->esq = NULL;
    no->dir = NULL;
    copiarElemento2(&no->info,item);
    t->esq = no;
    return no;
}

ptrNodo localiza(tree t, elemento item)
{
    ptrNodo locesq, locdir;
    locesq = NULL;
    locdir = NULL;
    if (comparaelementos(t->info,item) != 0)
    {

        if (t->esq != NULL)
        {

            locesq = localiza(t->esq,item);
        }

        if (locesq == NULL)
        {
            if (t->dir != NULL)
            {

                locdir = localiza(t->dir,item);


            }



            if (locdir == NULL)
            {
                return NULL;

            }
            else
            {
                return locdir;
            }
        }
        else
        {
            return locesq;

        }
   }
   else
   {
      return t;
   }
}


int adicionarDirPai(tree t, elemento item_pai, elemento item)
{

    tree pai, no;
    pai = localiza(t,item_pai);

    if (pai != NULL)
    {
        if (pai->dir!=NULL)
        {
            return 0;
        }
        else
        {
            no = (ptrNodo)malloc(sizeof(struct nodo));
            no->esq = NULL;
            no->dir = NULL;
            copiarElemento(&no->info,item);
            pai->dir = no;
            return 1;
        }
   }

}



int adicionarEsqPai(tree t, elemento item_pai, elemento item) {
   tree pai, no;
   pai = localiza(t,item_pai);
   if (pai!=NULL)
      if (pai->esq!=NULL)
         return 0;
      else {
         no = (ptrNodo)malloc(sizeof(struct nodo));
         no->esq = NULL;
         no->dir = NULL;
         no->info = item;
         pai->esq = no;
         return 1;
      }
}









ptrNodo inserirNaArvore(tree *t, elemento valor) {

    tree raiz = t;
    // Se a árvore estiver vazia, cria um novo nodo como raiz
    if (raiz == NULL) {
        return criaRaiz(&raiz, valor);
    }

    // Caso contrário, insere recursivamente na subárvore apropriada
    if (valor.valor_venda < raiz->info.valor_venda) {
        raiz->esq = inserirNaArvore(raiz->esq, valor);
    } else if (valor.valor_venda > raiz->info.valor_venda) {
        raiz->dir = inserirNaArvore(raiz->dir, valor);
    }

    // Retorna a raiz atualizada
    return raiz;
}

// Função para imprimir a árvore em ordem
void imprimirEmOrdem(tree t) {

  tree raiz = t;
    if (raiz != NULL) {
      
        imprimirEmOrdem(raiz->esq);
        printf("(%.2f) - ", raiz->info.valor_venda);
        imprimirEmOrdem(raiz->dir);
    }
}