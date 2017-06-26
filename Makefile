INCLUDE = -Iinclude/
LIB = -Llib/
OBJSLISTAS = obj/Lista_*.o
SRCSLISTAS = src/Lista_*.c

exec: listas liblista prueba
	gcc -Wall $(LIB) $(INCLUDE) obj/pruebaLista.o -llista -o bin/execprueba

prueba: src/pruebaLista.c
	gcc -Wall -c $(INCLUDE) src/pruebaLista.c -o obj/pruebaLista.o

liblista: listas
	gcc -Wall -shared -fPIC $(INCLUDE) $(OBJSLISTAS) -o lib/liblista.so

listas: $(SRCSLISTAS)
	gcc -Wall -shared -fPIC -c $(INCLUDE) $(SRCSLISTAS)
	mv -f *.o obj/
	
