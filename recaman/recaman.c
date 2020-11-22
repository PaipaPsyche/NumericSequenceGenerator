# include <stdio.h>
# include <math.h>

#define it 1000



int actual_number = 0;
int sequence[it];


int valueinarray(int val, int seq[])
{
    int i;
    for(i = 0; i < it; i++)
    {
        if(seq[i] == val){
            return 1;
          }
    }
    return 0;
}



int recaman(int seq[] ,int c, int n){
    int subs = n-c;
    if(valueinarray(subs,seq)==1 || subs<=0){
      return n+c;
    }
    return subs;
}

void generar()
{
int i;
for(i=0;i<it-1;i++)
    {
    sequence[i+1]=recaman(sequence,i+1,sequence[i]);
    }


}
int imprimirArreglo(char archivo[])
{
    int i;
    FILE *doc =fopen(archivo,"w+");
    for(i = 0;i<it;i++){

            fprintf(doc,"%d\n",sequence[i]);


    }
    return 0;

}

int main()
{
sequence[0] = 0;
printf("%s%d%s\n","Generating the first ",it," recaman sequence numbers...");
generar();
int aa =imprimirArreglo("recaman.txt");
printf("%s","Done.\n");
return 0;


}
