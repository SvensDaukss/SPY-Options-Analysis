#include <stdio.h>
#include "dataAnalysis.h"

void analyzeData(MarketData* data, int dataSize) {
    if (dataSize <= 0) return;

    float totalRatio = 0;
    for (int i = 0; i < dataSize; i++) {
        totalRatio += data[i].putCallRatio;
    }
    float averageRatio = totalRatio / dataSize;
    printf("Average Put/Call Ratio: %.2f\n", averageRatio);

    for (int i = 0; i < dataSize && i < 10; i++) {
        printf("Entry %d: Date: %s, Put/Call Ratio: %.2f\n", i + 1, data[i].date, data[i].putCallRatio);
    }
	
	// We can add more calculations here...
}

