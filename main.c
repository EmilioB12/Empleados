#include<stdio.h>

int main(){
  int reinicio, cont, horas, hora_extra;
  float valor, pago, bono, ventas, pago_bruto;
  cont=0;  
  while(cont<1){
  	do{
  		printf("Ingrese el número de horas trabajadas: ");
  		scanf("%i",&horas);
  	}while(horas<0);
  	do{
  		printf("Ingrese el valor a pagar por hora: ");
  		scanf("%f",&valor);
  	}while(valor<0);
  	do{
  		printf("Ingrese el valor de ventas: ");
  		scanf("%f",&ventas);
  	}while(horas<0);
  	if (horas>40 && horas<=50){
		hora_extra=horas-40;
	    bono=(valor*1.1);
	    pago_bruto=(valor*40)+(bono*hora_extra);	    
  	}else if (horas>50 && horas<=55){
    	hora_extra=horas-40;
    	bono=valor*1.15;
    	pago_bruto=(valor*40)+(bono*hora_extra);	
  	}else if (horas>55){
    	hora_extra=horas-40;
    	bono=valor*1.2;
    	pago_bruto=(valor*40)+(bono*hora_extra);	
  	}else{
  		pago_bruto=valor*horas;
  	}
  	if(ventas>0 && ventas<=800){
  		pago=pago_bruto+(ventas*0.02)-(pago_bruto*0.0945);
		printf("El salario del empleado es de: $%.2f\n",pago);    		
  	}else if (ventas>800 && ventas<=1500){
  		pago=pago_bruto+(ventas*0.04)-(pago_bruto*0.0945);
  		printf("El salario del empleado es de: $%.2f\n",pago);
  	}else if (ventas>1500 && ventas<=3000){
  		pago=pago_bruto+(ventas*0.06)-(pago_bruto*0.0945);
  		printf("El salario del empleado es de: $%.2f\n",pago);
  	}else if (ventas>3000){
  		pago=pago_bruto+(ventas*0.08)-(pago_bruto*0.0945);
  		printf("El salario del empleado es de: $%.2f\n",pago);
  	}else{
  		pago=pago_bruto-(pago_bruto*0.0945);
  		printf("El salario del empleado es de: $%.2f\n",pago);
  	}
   	printf("¿Desea ingresar los datos de otro empleado?: \n");
   	printf("Digite 1 para SI o valor 2 para NO: ");
    scanf("%i",&reinicio);	    	
    if (reinicio>1){
    	cont++;
    }else{
    	cont=0;
    }
 }
  printf("Gracias motherfuckers")
 	return 0;
}