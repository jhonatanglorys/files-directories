#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>


void customStat();

char fullName[] = "ruta/archivo.txt";
struct stat fileStat;

int main(int argc, char **argv)
{
    
    if(stat(fullName,&fileStat) < 0)    
        return 1;
    customStat();
    return 0;
}

void customStat(){
    printf("Información para %s\n",fullName);
    printf("---------------------------\n");
    printf("Tamaño del archivo: \t\t%d bytes\n",fileStat.st_size);
    printf("Contador de referencias: \t%d\n",fileStat.st_nlink);
    printf("inode: \t\t%d\n",fileStat.st_ino);
    printf("Tamaño de bloque:\t%d\n", fileStat.st_blksize);
    printf("Cantidad de bloques asignado:\t%d\n", fileStat.st_blocks);
}