#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>     /* assert */
#include "../include/miLista.h"

void Lista_SacarTodos(ListaEnlazada *lista){
	ElementoLista * elemento = &(lista->ancla);
	for (int i = 0; i < lista->numeroElementos; i++){
		elemento -> siguiente = NULL;
		elemento -> anterior = NULL;
		elemento -> objeto = NULL;
	}
	Lista_Inicializar(lista);
}
