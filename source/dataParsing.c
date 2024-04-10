#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dataParsing.h"

#define MAX_LINE_LENGTH 2331
#define INITIAL_SIZE 100

void parseLine(char* line, MarketData* data) {
    sscanf(line, "%10[^,],%f,%d,%d,%d", data->date, &data->putCallRatio, &data->putVolume, &data->callVolume, &data->totalVolume);
}

void printMarketData(const MarketData* data) {
	printf("Date: %s, Put/Call Ratio: %.2f, Put Volume: %d, Call Volume: %d, Total Volume: %d\n", data->date, data->putCallRatio, data->putVolume, data->callVolume, data->totalVolume);
}

void processLine(char* line) {
    MarketData data;
    parseLine(line, &data);
    printMarketData(&data);
}

void readCSVFile(const char* filepath, MarketData** data, int* dataSize) {
    FILE* file = fopen(filepath, "r");
	if (!file) {
		perror("Error opening file");
		return;
	}
	printf("File opened successfully: %s\n", filepath);

    char line[MAX_LINE_LENGTH];
    int capacity = INITIAL_SIZE;
    *dataSize = 0;
    *data = malloc(capacity * sizeof(MarketData));

    // Logic for reading and ignoring the header
    fgets(line, MAX_LINE_LENGTH, file);

    while (fgets(line, MAX_LINE_LENGTH, file)) {
        if (*dataSize >= capacity) {
            capacity *= 2;
            *data = realloc(*data, capacity * sizeof(MarketData));
        }
        
        parseLine(line, &((*data)[*dataSize]));
        (*dataSize)++;
    }

    fclose(file);
}
