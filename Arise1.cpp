#include<stdio.h>

int main(){
	int x[10];
	int cont;
	//for cont in range(1,10):
	//cont++ equivale a cont=cont+1
	//1� dnd empieza, 2� dnd acaba, 3� cuanto suma
	for(cont=1;cont<=10;cont++){
		//num=input("dame un numero: ")
		printf("Dame un numero: ");
		scanf("%d",&x[cont]);//%c
		
	}
	return(0);
	
	
}
