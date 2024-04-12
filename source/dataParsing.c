#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dataParsing.h"

#define MAX_ROW_LENGTH 2332

void parseLine(char* line, MarketData* data) {
    sscanf(line, "%10[^,],%f,%d,%d,%d", data->date, &data->putCallRatio, &data->putVolume, &data->callVolume, &data->totalOptionsVolume);
}

void printMarketData(const MarketData* data, int rowNumber) {
    printf(" %d |    %s    |         %.2f         |        %d        |       %d        |           %d\n-----------------------------------------------------------------------------------------------------------------\n", rowNumber, data->date, data->putCallRatio, data->putVolume, data->callVolume, data->totalOptionsVolume);
}

void printMarketDataRange(const MarketData* data, int dataSize, int startRow, int numberOfRowsToPrint) {
    printf("-----------------------------------------------------------------------------------------------------------------\n # |     Date     |    Put/Call Ratio    |      Put Volume      |     Call Volume     |   Total Options Volume \n-----------------------------------------------------------------------------------------------------------------\n");
    for (int i = startRow; i < startRow + numberOfRowsToPrint && i < dataSize; i++) {
        printMarketData(&data[i], i + 1);
    }
}

void processLine(char* line, MarketData* data, int rowNumber) {
    parseLine(line, data);
    printMarketData(data, rowNumber);
}

void readCSVFile(const char* filepath, MarketData** data, int* dataSize) {
    FILE* file = fopen(filepath, "r");
	if (!file) {
		perror("Error Opening File");
		return;
    } else {
		printf("File Opened Successfully: %s\n\n", filepath);
	}

	// This is the logic to ignore the first 2 rows in spxpc.csv
    char line[MAX_ROW_LENGTH];
    fgets(line, MAX_ROW_LENGTH, file);
    fgets(line, MAX_ROW_LENGTH, file);

    int count = 0;
    while (fgets(line, MAX_ROW_LENGTH, file)) {
        *data = realloc(*data, (count + 1) * sizeof(MarketData));
        if (*data == NULL) {
            fprintf(stderr, "Memory reallocation failed\n");
            fclose(file);
            return;
        } else {
			parseLine(line, &((*data)[count])); // Parse the literal numbers and data line into the array
			count++;
		}
    }

    fclose(file);
    *dataSize = count; // Update dataSize with the actual amount of lines instead of 0.
}
