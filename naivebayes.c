#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


void * naivebayesFaces (char** trainfile, char** trainlabels, char** testfile, int percent){
	//start training
	FILE * trainlabels = fopen(labelsfile);
	FILE * traindata = fopen(trainfile);

	short * features = malloc(sizeof(short) * 25);//each element is a feature/cell of size 12x14 that counts number of black pixels
}
void * naivebayesDigits (char** trainfile, char** labelsfile, char** testfile, int percent){

}
void * naivebayes (char** type, char** traindatafile, char** labelsfile, char** testdatafile, int percent){//returns array of shorts 0-9

	if (strcmp(type, "faces") == 0){//classifying faces
		naivebayesFaces();
	}
	else if (strcmp(type, "digits") == 0){//classifying digits
		naivebayesDigits();
	}
	else{//not a proper classifying type
		printf("%s is not a proper classifying type!\nTypes: faces, digits\n", type);
		return 0;
	}
}
