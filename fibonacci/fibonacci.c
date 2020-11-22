# include <stdio.h>
# include <math.h>

#define it 50

long int sequence[it];

void generar()
{
int i;
for(i=2;i<it;i++)
    {
    sequence[i]=sequence[i-2]+sequence[i-1];
    }

}
int imprimirArreglo(char archivo[])
{
    int i;
    FILE *doc =fopen(archivo,"w+");
    for(i = 0;i<it;i++){

            fprintf(doc,"%ld\n",sequence[i]);


    }
    return 0;

}

int main()
{
sequence[0]=0;
sequence[1]=1;
printf("%s%d%s","generating the first ",it," Fibonacci sequence numbers....");
generar();
int aa =imprimirArreglo("fibonacci.txt");
printf("%s\n","Done");
return 0;


}
