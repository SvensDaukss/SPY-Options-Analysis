#include <stdio.h>
#include <stdlib.h>
#include "dataParsing.h"
#include "dataAnalysis.h"

int main() {
    MarketData* data = NULL;
    int dataSize = 0;
	
    // const char* filepath = "/this/should/fail/spxpc.csv";
	const char* filepath = "/mnt/c/Users/dauks/Desktop/SPY-Options-Analysis/data/spxpc.csv";

    readCSVFile(filepath, &data, &dataSize);
    printf("Data size: %d\n", dataSize);
	
	// Printing Calculations from dataAnalysis.c
	printf("\n\nTEST void analyzeData(MarketData* data, int dataSize){}\n");
	analyzeData(data, dataSize);
	
	// Test to see raw data from the spxpc.csv
	printf("\n\nTEST void printMarketData(const MarketData* data){}\n");
	for (int i = 0; i < dataSize && i < 10; i++) {
        printMarketData(&data[i]);
    }
	
	// Memory Allocation
    if (data) {
        free(data);
    }

    return 0;
}
