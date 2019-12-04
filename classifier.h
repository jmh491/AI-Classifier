#ifndef classifier_h
#define classifier_h
#include <math.h>
#include "perceptron.h"
#include "naivebayes.h"

void * perceptron(char **, char **, char **, char **, int);//takes in classification type, training data file, training labels, test data file and integer percentage of data to train on. Returns a pointer to an array of results
void * naivebayes(char **, char **, char**, char **, int);
//void * thirdclassifierhere(char **, char **, char **, char **, int);

#endif
