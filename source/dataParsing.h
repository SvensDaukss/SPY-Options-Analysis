#ifndef DATA_PARSING_H
#define DATA_PARSING_H

typedef struct {
    char date[11]; // "MM/DD/YYYY\0"
    float putCallRatio;
    int putVolume;
    int callVolume;
    int totalVolume;
} MarketData;

void readCSVFile(const char* filepath, MarketData** data, int* dataSize);

void printMarketData(const MarketData* data);

#endif
