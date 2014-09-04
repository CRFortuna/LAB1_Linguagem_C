#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */




void calcula( int *pnum, int *pa, int *pcont, int *pmaior, int *pmenor, int *pcontpar, int *ppar ){
while(*pnum!=0)	{
		printf("informe valor: ");
		scanf("%d", &*pnum);	
		*pa=*pa+*pnum;
		(*pcont)++;
		if (*pnum > *pmaior && (*pnum != 0))
			*pmaior = *pnum;
		if ((*pnum < *pmenor) && (*pnum != 0))
			*pmenor = *pnum;
		if(*pnum%2==0)
		{
			*ppar=*ppar+*pnum;
			(*pcontpar)++;
		}
	}
	(*pcont)--;
	(*pcontpar)--;
	
	getch();	
	printf("numeros: %d\n",pcont);
	printf ( "A media dos numeros: %d\n",(pa)/(pcont ));
	printf ( "O Maior numero: %d\n" ,pmaior );
	printf ( "O Menor numeros: %d\n" ,pmenor );
	if(*pcontpar > 1 )
	printf( "(f) A mídia DOS numeros pares:%d \ n " ,  ppar /  pcontpar );
	else
	printf( "(f) Nao Teve numeros Pares \ n " );
	return;
	
	
}


int main()
{
	int  num =-1, a =0, cont =0, maior =-1000, menor =1000, contpar =0,par =0 ;
	calcula(&num,&a,&cont,&maior,&menor,&contpar,&par);

	sistema ( "pause" );
	return 0 ;
}
