#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char** argv){
	int percent = 100;
	short * results[];

	if (argc < 2){
		printf("Not enough arguments: see -h for help\n");
		return 0;
	}
	if (strcmp(argv[1], "-h") == 0){
		printf("Usage: classifier <classifier name> <type> <training data file> <training labels file> <test data file> [percentage of training data to use 0-100 increments of 10 ");
		printf("default: 100]\n");
		printf("Example: classifier perceptron digits train.txt trainlabels.txt test.txt 10\n");
		printf("would run a perceptron trained on 10%% of digit training data on test.txt\n");
		return 1;
	}
	if (argc < 6){
		printf("Not enough arguments: see -h for help\n");
		return 0;
	}
	if (argc > 6){
		percent = atoi(argv[6]);//set percentage from arguments
	}

	char** type = argv[2];//faces or digits
	char** train = argv[3];
	char** labels = argv[4];
	char** test = argv[5];

	if (strcmp(argv[1], "perceptron") == 0){//call perceptron
		printf("DEBUG: Perceptron called!\n");
		results = perceptron(type, train, labels, test, percent);
	}
	else if (strcmp(argv[1], "naivebayes") == 0){//call naive bayes
		printf("DEBUG: Naive bayes classifier called!\n");
		results = naivebayes(type, train, labels, test, percent);
	}
	else if (strcmp(argv[1], "thirdclassifierhere") == 0){//call 3rd classifier
		printf("DEBUG: Perceptron called!\n");
		//INSERT 3RD CLASSIFIER HERE!
	}
	else{//argument not a classifier
		printf("%s is not a classifier!\nClassifiers: perceptron, naivebayes, thirdclassifierhere\nSee -h for help.\n", argv[1]);
		return 0;
	}
	
	return 1;

}
