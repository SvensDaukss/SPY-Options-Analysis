#include <stdio.h>
#include <stdlib.h>
#include "dataParsing.h"
#include "dataAnalysis.h"

int main() {
    MarketData* data = NULL;
    int dataSize = 0;
	
	const char* filepath = "/mnt/c/Users/dauks/Desktop/SPY-Options-Analysis/data/spxpc.csv";

    readCSVFile(filepath, &data, &dataSize);
    printf("Data Size: %d\n\n", dataSize);
	
	// Raw data from the spxpc.csv
	for (int i = 0; i < dataSize && i < 2331; i++) {
        printMarketData(&data[i]);
    }
	
	// Printing Calculations from dataAnalysis.c
	// printf("\n\nTEST void analyzeData(MarketData* data, int dataSize){}\n");
	analyzeData(data, dataSize);
	
	// Memory Allocation
    if (data) {
        free(data);
    }

    return 0;
}
