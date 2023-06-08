#include <stdio.h>
#include <stdlib.h>

int main(){
	int P = 1;
	int Q = 0;
	int R = 1;
	int T = 0;
	
	printf("P y R: %d\n", P&R);
	printf("Q o T: %d\n", Q|T);
	printf("P y Q o R y T: %d\n", P&Q|R&T);
	printf("P xor Q xor R xor T: %d\n", P^Q^R^T);
	printf("not Q y not T: %d\n", !Q&!T);
	printf("not not not P: %d\n", !!!P);
	return 0;
}