#include <stdio.h>
#include <stdlib.h>
#include "dataParsing.h"
#include "dataAnalysis.h"

int main() {
	
	const char* filepath = "/mnt/c/Users/ComputerName/Desktop/SPY-Options-Analysis/data/spxpc.csv"; // Adjust this to where your spxpc.csv is actually located

	int dataSize = 0;
    MarketData* data = NULL;
	data = malloc(dataSize * sizeof(MarketData));
	
	if (data == NULL) {
		fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }
	
    readCSVFile(filepath, &data, &dataSize);
	
	int startRow = 0; // Adjust this for the row number you want printed first
	int numberOfRowsToPrint = dataSize; // Adjust this for the number of rows to print after the startRow
    printMarketDataRange(data, dataSize, startRow, numberOfRowsToPrint);
	analyzeData(data, dataSize);

    free(data);

    return 0;
}
