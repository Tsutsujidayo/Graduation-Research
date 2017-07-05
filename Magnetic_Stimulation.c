#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include"magnetic.h"




package_type node[element];
coordinate_type coil_node[element];

int main(void)
{
	int i,j,k;
	int flag;

	if((flag = generation_round_coil(element, 10.0, coil_node, 50, 50))==0){
		exit(1);
	}

	for(i=0;i<element;i++){
		for (j=0;j<element;j++){
			for(k=0;k<element;k++){
					
			}
		}
	}



	return 0;
}
