#include <stdio.h>
#include "dataAnalysis.h"

void analyzeData(MarketData* data, int dataSize) {
    if (dataSize <= 0) return;

	// Average Put Volume 2010-2019
    float totalPutVolume2010To2019 = 0;
    for (int i = 0; i < dataSize; i++) {
        totalPutVolume2010To2019 += data[i].putVolume;
    }
	float averageTotalPutVolume2010To2019 = totalPutVolume2010To2019 / dataSize;
    printf("Average Total Put Volume 2010-2019: %.7f\n", averageTotalPutVolume2010To2019);

	// Average Call Volume 2010-2019
    float totalCallVolume2010To2019 = 0;
    for (int i = 0; i < dataSize; i++) {
        totalCallVolume2010To2019 += data[i].callVolume;
    }
	float averageTotalCallVolume = totalCallVolume2010To2019 / dataSize;
    printf("Average Total Call Volume 2010-2019: %.7f\n", averageTotalCallVolume);


	// Average Put Volume 2010
    float totalPutVolume2010 = 0;
    for (int i = 0; i < 127; i++) {
        totalPutVolume2010 += data[i].putVolume;
    }
	float averageTotalPutVolume2010 = totalPutVolume2010 / 126;
    printf("\nAverage Total Put Volume in 2010: %.7f\n", averageTotalPutVolume2010);

	// Average Call Volume 2010
    float totalCallVolume2010 = 0;
    for (int i = 0; i < 127; i++) {
        totalCallVolume2010 += data[i].callVolume;
	}
	float averageTotalCallVolume2010 = totalCallVolume2010 / 126;
    printf("Average Total Call Volume in 2010: %.7f\n", averageTotalCallVolume2010);


	// Average Put Volume 2011
    float totalPutVolume2011 = 0;
    for (int i = 128; i < 379; i++) {
        totalPutVolume2011 += data[i].putVolume;
    }
	float averageTotalPutVolume2011 = totalPutVolume2011 / 252;
    printf("\nAverage Total Put Volume in 2011: %.7f\n", averageTotalPutVolume2011);

	// Average Call Volume 2011
    float totalCallVolume2011 = 0;
    for (int i = 128; i < 379; i++) {
        totalCallVolume2011 += data[i].callVolume;
	}
	float averageTotalCallVolume2011 = totalCallVolume2011 / 252;
    printf("Average Total Call Volume in 2011: %.7f\n", averageTotalCallVolume2011);


	// Average Put Volume 2012
    float totalPutVolume2012 = 0;
    for (int i = 380; i < 629; i++) {
        totalPutVolume2012 += data[i].putVolume;
    }
	float averageTotalPutVolume2012 = totalPutVolume2012 / 250;
    printf("\nAverage Total Put Volume in 2012: %.7f\n", averageTotalPutVolume2012);

	// Average Call Volume 2012
    float totalCallVolume2012 = 0;
    for (int i = 380; i < 629; i++) {
        totalCallVolume2012 += data[i].callVolume;
	}
	float averageTotalCallVolume2012 = totalCallVolume2012 / 250;
    printf("Average Total Call Volume in 2012: %.7f\n", averageTotalCallVolume2012);


	// Average Put Volume 2013
    float totalPutVolume2013 = 0;
    for (int i = 630; i < 881; i++) {
        totalPutVolume2013 += data[i].putVolume;
    }
	float averageTotalPutVolume2013 = totalPutVolume2013 / 252;
    printf("\nAverage Total Put Volume in 2013: %.7f\n", averageTotalPutVolume2013);
	
	// Average Call Volume 2013
    float totalCallVolume2013 = 0;
    for (int i = 630; i < 881; i++) {
        totalCallVolume2013 += data[i].callVolume;
	}
	float averageTotalCallVolume2013 = totalCallVolume2013 / 252;
    printf("Average Total Call Volume in 2013: %.7f\n", averageTotalCallVolume2013);
	

	// Average Put Volume 2014
    float totalPutVolume2014 = 0;
    for (int i = 882; i < 1134; i++) {
        totalPutVolume2014 += data[i].putVolume;
    }
	float averageTotalPutVolume2014 = totalPutVolume2014 / 252;
    printf("\nAverage Total Put Volume in 2014: %.7f\n", averageTotalPutVolume2014);
	
	// Average Call Volume 2014
    float totalCallVolume2014 = 0;
    for (int i = 882; i < 1134; i++) {
        totalCallVolume2014 += data[i].callVolume;
	}
	float averageTotalCallVolume2014 = totalCallVolume2014 / 252;
    printf("Average Total Call Volume in 2014: %.7f\n", averageTotalCallVolume2014);


	// Average Put Volume 2015
    float totalPutVolume2015 = 0;
    for (int i = 1134; i < 1385; i++) {
        totalPutVolume2015 += data[i].putVolume;
    }
	float averageTotalPutVolume2015 = totalPutVolume2015 / 252;
    printf("\nAverage Total Put Volume in 2015: %.7f\n", averageTotalPutVolume2015);

	// Average Call Volume 2015
    float totalCallVolume2015 = 0;
    for (int i = 1134; i < 1385; i++) {
        totalCallVolume2015 += data[i].callVolume;
	}
	float averageTotalCallVolume2015 = totalCallVolume2015 / 252;
    printf("Average Total Call Volume in 2015: %.7f\n", averageTotalCallVolume2015);


	// Average Put Volume 2016
    float totalPutVolume2016 = 0;
    for (int i = 1386; i < 1637; i++) {
        totalPutVolume2016 += data[i].putVolume;
    }
	float averageTotalPutVolume2016 = totalPutVolume2016 / 252;
    printf("\nAverage Total Put Volume in 2016: %.7f\n", averageTotalPutVolume2016);

	// Average Call Volume 2016
    float totalCallVolume2016 = 0;
    for (int i = 1386; i < 1637; i++) {
        totalCallVolume2016 += data[i].callVolume;
	}
	float averageTotalCallVolume2016 = totalCallVolume2016 / 252;
    printf("Average Total Call Volume in 2016: %.7f\n", averageTotalCallVolume2016);


	// Average Put Volume 2017
    float totalPutVolume2017 = 0;
    for (int i = 1638; i < 1888; i++) {
        totalPutVolume2017 += data[i].putVolume;
    }
	float averageTotalPutVolume2017 = totalPutVolume2017 / 251;
    printf("\nAverage Total Put Volume in 2017: %.7f\n", averageTotalPutVolume2017);
	
	// Average Call Volume 2017
    float totalCallVolume2017 = 0;
    for (int i = 1638; i < 1888; i++) {
        totalCallVolume2017 += data[i].callVolume;
	}
	float averageTotalCallVolume2017 = totalCallVolume2017 / 251;
    printf("Average Total Call Volume in 2017: %.7f\n", averageTotalCallVolume2017);


	// Average Put Volume 2018
    float totalPutVolume2018 = 0;
    for (int i = 1889; i < 2139; i++) {
        totalPutVolume2018 += data[i].putVolume;
    }
	float averageTotalPutVolume2018 = totalPutVolume2018 / 251;
    printf("\nAverage Total Put Volume in 2018: %.7f\n", averageTotalPutVolume2018);
	
	// Average Call Volume 2018
    float totalCallVolume2018 = 0;
    for (int i = 1889; i < 2139; i++) {
        totalCallVolume2018 += data[i].callVolume;
	}
	float averageTotalCallVolume2018 = totalCallVolume2018 / 251;
    printf("Average Total Call Volume in 2018: %.7f\n", averageTotalCallVolume2018);


	// Average Put Volume 2019
    float totalPutVolume2019 = 0;
    for (int i = 2140; i < 2331; i++) {
        totalPutVolume2019 += data[i].putVolume;
    }
	float averageTotalPutVolume2019 = totalPutVolume2019 / 192;
    printf("\nAverage Total Put Volume in 2019: %.7f\n", averageTotalPutVolume2019);

	// Average Call Volume 2019
    float totalCallVolume2019 = 0;
    for (int i = 2140; i < 2331; i++) {
        totalCallVolume2019 += data[i].callVolume;
	}
	float averageTotalCallVolume2019 = totalCallVolume2019 / 192;
    printf("Average Total Call Volume in 2019: %.7f\n", averageTotalCallVolume2019);


// #############################################################################


	// Average Put/Call ratio 2010-2019
    float totalRatio = 0;
    for (int i = 0; i < dataSize; i++) {
        totalRatio += data[i].putCallRatio;
    }
	float averageRatio = totalRatio / dataSize;
    printf("\nAverage Put/Call Ratio From 2010-2019: %.4f\n", averageRatio);


	// Average Put/Call ratio 2010
	float totalRatio2010 = 0;
	for (int i = 0; i < 127; i++) {
        totalRatio2010 += data[i].putCallRatio;
    }
	float averageRatio2010 = totalRatio2010 / 126;
    printf("Average Put/Call Ratio in 2010: %.4f\n", averageRatio2010);


	// Average Put/Call ratio 2011
	float totalRatio2011 = 0;
	for (int i = 128; i < 379; i++) {
        totalRatio2011 += data[i].putCallRatio;
    }
	float averageRatio2011 = totalRatio2011 / 252;
    printf("Average Put/Call Ratio in 2011: %.4f\n", averageRatio2011);


	// Average Put/Call ratio 2012
	float totalRatio2012 = 0;
	for (int i = 380; i < 629; i++) {
        totalRatio2012 += data[i].putCallRatio;
    }
	float averageRatio2012 = totalRatio2012 / 250;
    printf("Average Put/Call Ratio in 2012: %.4f\n", averageRatio2012);
	
	
	// Average Put/Call ratio 2013
	float totalRatio2013 = 0;
	for (int i = 630; i < 881; i++) {
        totalRatio2013 += data[i].putCallRatio;
    }
	float averageRatio2013 = totalRatio2013 / 252;
    printf("Average Put/Call Ratio in 2013: %.4f\n", averageRatio2013);
	
	
	// Average Put/Call ratio 2014
	float totalRatio2014 = 0;
	for (int i = 882; i < 1133; i++) {
        totalRatio2014 += data[i].putCallRatio;
    }
	float averageRatio2014 = totalRatio2014 / 252;
    printf("Average Put/Call Ratio in 2014: %.4f\n", averageRatio2014);


	// Average Put/Call ratio 2015
	float totalRatio2015 = 0;
	for (int i = 1134; i < 1385; i++) {
        totalRatio2015 += data[i].putCallRatio;
    }
	float averageRatio2015 = totalRatio2015 / 252;
    printf("Average Put/Call Ratio in 2015: %.4f\n", averageRatio2015);


	// Average Put/Call ratio 2016
	float totalRatio2016 = 0;
	for (int i = 1386; i < 1637; i++) {
        totalRatio2016 += data[i].putCallRatio;
    }
	float averageRatio2016 = totalRatio2016 / 252;
    printf("Average Put/Call Ratio in 2016: %.4f\n", averageRatio2016);


	// Average Put/Call ratio 2017
	float totalRatio2017 = 0;
	for (int i = 1638; i < 1888; i++) {
        totalRatio2017 += data[i].putCallRatio;
    }
	float averageRatio2017 = totalRatio2017 / 251;
    printf("Average Put/Call Ratio in 2017: %.4f\n", averageRatio2017);


	// Average Put/Call ratio 2018
	float totalRatio2018 = 0;
	for (int i = 1889; i < 2139; i++) {
        totalRatio2018 += data[i].putCallRatio;
    }
	float averageRatio2018 = totalRatio2018 / 251;
    printf("Average Put/Call Ratio in 2018: %.4f\n", averageRatio2018);


	// Average Put/Call ratio 2019
	float totalRatio2019 = 0;
	for (int i = 2140; i < 2331; i++) {
        totalRatio2019 += data[i].putCallRatio;
    }
	float averageRatio2019 = totalRatio2019 / 192;
    printf("Average Put/Call Ratio in 2019: %.4f\n", averageRatio2019);
}
