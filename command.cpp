#include<stdio.h>
int main(int argc,char *argv[]){
		int i;
		printf("%d\n",argc);
		
		for(i=argc-1;i>=1;i--){
			printf("%s",argv[i]);
		}
		printf("\n");
		
		return 0;
}

//コマンドライン引数 ./oo.exe abc
//                    2
//                    abc

//					./oo.exe a bc de f
//                    5
//                    fdebca