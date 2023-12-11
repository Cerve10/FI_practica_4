#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Verificar la cantidad correcta de argumentos
    if (argc != 3) {
        printf("Uso: %s <archivo_origen> <directorio_destino>\n", argv[0]);
        return 1;
    }

    // Obtener los nombres de archivo de origen y destino
    char *archivo_origen = argv[1];
    char *directorio_destino = argv[2];

    // Construir la ruta de destino
    char comando[100]; // Tamaño arbitrario para la cadena del comando
    sprintf(comando, "mv %s %s", archivo_origen, directorio_destino);

    // Ejecutar el comando usando la función system
    int resultado = system(comando);

    // Verificar si el comando se ejecutó correctamente
    if (resultado == 0) {
        printf("El archivo fue movido exitosamente.\n");
        return 0;
    } else {
        printf("Error al mover el archivo.\n");
        return 1;
    }
}
