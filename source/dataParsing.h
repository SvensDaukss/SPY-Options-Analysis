#ifndef DATA_PARSING_H
#define DATA_PARSING_H

typedef struct {
    char date[11];
    float putCallRatio;
    int putVolume;
    int callVolume;
    int totalOptionsVolume;
} MarketData;

void readCSVFile(const char* filepath, MarketData** data, int* dataSize);

void printMarketData(const MarketData* data, int rowNumber);

void printMarketDataRange(const MarketData* data, int dataSize, int startRow, int numberOfRowsToPrint);

#endif
