/******************************************************************************

Pablo Silva Noreña 180462
    
1	
"r"

Opens a file for reading. The file must exist.

2	
"w"

Creates an empty file for writing. If a file with the same name already exists, its content is erased and the file is considered as a new empty file.

3	
"a"

Appends to a file. Writing operations, append data at the end of the file. The file is created if it does not exist.

4	
"r+"

Opens a file to update both reading and writing. The file must exist.

5	
"w+"

Creates an empty file for both reading and writing.

6	
"a+"

Opens a file for reading and appending.
    
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Abrir un archivo para escribir
    FILE *archivo = fopen("ejemplo.txt", "w");

    if (archivo == NULL) {
        perror("Error al abrir el archivo");
        return 1;
    }

    // Escribir una cadena en el archivo
    char cadena[] = "Hola, este es un ejemplo de manejo de archivos en C.\n";
    fprintf(archivo, "%s", cadena);

    // Cerrar el archivo
    fclose(archivo);

    // Abrir el archivo para lectura
    archivo = fopen("ejemplo.txt", "r");

    if (archivo == NULL) {
        perror("Error al abrir el archivo");
        return 1;
    }

    // Leer y mostrar la cadena desde el archivo
    char buffer[100];
    fgets(buffer, sizeof(buffer), archivo);
    printf("Contenido del archivo: %s", buffer);

    // Cerrar el archivo
    fclose(archivo);

    return 0;
}
