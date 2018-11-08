#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int le_arquivo(FILE *a,char ch,int *num);
int conta_linhas(FILE *a,char ch,int *num);

struct poi{
	int posicao ;
	char rua [50] ;
	float coordenada ;	
};

int main(){
	
	FILE *f;
	
	int num=0,i=0,prod,str;
	
	char url[]="C:\\Users\\Beto\\Desktop\\Pasta2.csv",ch; 
	f = fopen(url,"r"); 
	
	le_arquivo(f,ch,&num);
	printf("Existem %d linhas no arquivo\n", num);
	
	//struct poi[num];
	
	/*
	for(i=0; i<num; i++){
		poi.posicao= ;
		strcpy(poi.rua,"");
		poi.coordenada= ;
		fscanf(f,"%d,%s,%f\n", &poi[x].classificacao, nodo[x].pais, &nodo[x].consumo); // lê os dados e armazena em nodo
    	printf("%d - %s - %f\n", n[x].classificacao, n[x].pais, n[x].consumo);
	}
	*/
	/* strtok example */

	/*
  char str[] ="- This, a sample string.";
  char * pch;
  printf ("Splitting string \"%s\" into tokens:\n",str);
  pch = strtok (str," ,.-");
  while (pch != NULL)
  {
    printf ("%s\n",pch);
    pch = strtok (NULL, " ,.-");
  }
  */
  
  /*
  f = fopen("C:\\Users\\Beto\\Desktop\\Pasta2.csv","r" );
	if(f == NULL){
		printf("Erro na abertura! \n");
		system("pause");
		exit(1); //aborta o programa
	}
	else{
		char c;
		c=fgets(f);
		le_arquivo(f,c,)
		
				while(!feof(f)){
			prod=strtok(c,",");
			 	
			//printf("%c",c);
			c=fgets(f);

	
	
	}
	
}*/
	
	printf("Fim");
	
fclose(f);
return 0;	
}

int le_arquivo(FILE *a,char ch,int *num){
	
	if(a == NULL){
		printf("Erro na abertura! \n");
		system("pause");
		exit(1); //aborta o programa
	}
	else{
		conta_linhas(a,ch,num);	
	}
	//printf("Existem %d linhas no arquivo\n", *num);		
}

int conta_linhas(FILE *a,char ch,int *num){
		while( (ch=fgetc(a))!= EOF )
				if(ch == '\n') 
					*num = *num + 1;
}
