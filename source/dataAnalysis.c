#include <stdio.h>
#include "dataAnalysis.h"

// ################################### Put Volumes | Call Volumes | Average Put/Call Ratio ###################################

void analyzeData(MarketData* data, int dataSize) {
    if (dataSize <= 0) return;




	// Average Put Volume 2010-2019
    float totalPutVolume2010To2019 = 0;
    for (int i = 0; i <= dataSize; i++) {
        totalPutVolume2010To2019 += data[i].putVolume;
    }
	float averageTotalPutVolume2010To2019 = totalPutVolume2010To2019 / dataSize;
    printf("\nAverage Total Put Volume 2010-2019: %.0f\n", averageTotalPutVolume2010To2019);

	// Average Call Volume 2010-2019
    float totalCallVolume2010To2019 = 0;
    for (int i = 0; i <= dataSize; i++) {
        totalCallVolume2010To2019 += data[i].callVolume;
    }
	float averageTotalCallVolume2010To2019 = totalCallVolume2010To2019 / dataSize;
    printf("Average Total Call Volume 2010-2019: %.0f\n", averageTotalCallVolume2010To2019);

	// Average Put/Call Ratio 2010-2019
    float totalPutCallRatio2010To2019 = 0;
    for (int i = 0; i <= dataSize; i++) {
        totalPutCallRatio2010To2019 += data[i].putCallRatio;
    }
	float averageTotalPutCallRatio2010To2019 = totalPutCallRatio2010To2019 / dataSize;
    printf("Average Put/Call Ratio From 2010-2019: %.3f\n", averageTotalPutCallRatio2010To2019);




	// Average Put Volume 2010
    float totalPutVolume2010 = 0;
    for (int i = 0; i <= 126; i++) {
        totalPutVolume2010 += data[i].putVolume;
    }
	float averageTotalPutVolume2010 = totalPutVolume2010 / 126;
    printf("\nAverage Total Put Volume in 2010: %.0f\n", averageTotalPutVolume2010);

	// Average Call Volume 2010
    float totalCallVolume2010 = 0;
    for (int i = 0; i <= 126; i++) {
        totalCallVolume2010 += data[i].callVolume;
	}
	float averageTotalCallVolume2010 = totalCallVolume2010 / 126;
    printf("Average Total Call Volume in 2010: %.0f\n", averageTotalCallVolume2010);

	// Average Put/Call Ratio 2010
	float totalPutCallRatio2010 = 0;
    for (int i = 0; i <= 126; i++) {
        totalPutCallRatio2010 += data[i].putCallRatio;
    }
	float averageTotalPutCallRatio2010 = totalPutCallRatio2010 / 126;
    printf("Average Put/Call Ratio in 2010: %.3f\n", averageTotalPutCallRatio2010);




	// Average Put Volume 2011
    float totalPutVolume2011 = 0;
    for (int i = 127; i <= 378; i++) {
        totalPutVolume2011 += data[i].putVolume;
    }
	float averageTotalPutVolume2011 = totalPutVolume2011 / 251;
    printf("\nAverage Total Put Volume in 2011: %.0f\n", averageTotalPutVolume2011);

	// Average Call Volume 2011
    float totalCallVolume2011 = 0;
    for (int i = 127; i <= 378; i++) {
        totalCallVolume2011 += data[i].callVolume;
	}
	float averageTotalCallVolume2011 = totalCallVolume2011 / 251;
    printf("Average Total Call Volume in 2011: %.0f\n", averageTotalCallVolume2011);

	// Average Put/Call Ratio 2011
	float totalPutCallRatio2011 = 0;
    for (int i = 127; i <= 378; i++) {
        totalPutCallRatio2011 += data[i].putCallRatio;
    }
	float averageTotalPutCallRatio2011 = totalPutCallRatio2011 / 251;
    printf("Average Put/Call Ratio in 2011: %.3f\n", averageTotalPutCallRatio2011);




	// Average Put Volume 2012
    float totalPutVolume2012 = 0;
    for (int i = 379; i <= 628; i++) {
        totalPutVolume2012 += data[i].putVolume;
    }
	float averageTotalPutVolume2012 = totalPutVolume2012 / 249;
    printf("\nAverage Total Put Volume in 2012: %.0f\n", averageTotalPutVolume2012);

	// Average Call Volume 2012
    float totalCallVolume2012 = 0;
    for (int i = 379; i <= 628; i++) {
        totalCallVolume2012 += data[i].callVolume;
	}
	float averageTotalCallVolume2012 = totalCallVolume2012 / 249;
    printf("Average Total Call Volume in 2012: %.0f\n", averageTotalCallVolume2012);

	// Average Put/Call Ratio 2012
	float totalPutCallRatio2012 = 0;
    for (int i = 379; i <= 628; i++) {
        totalPutCallRatio2012 += data[i].putCallRatio;
    }
	float averageTotalPutCallRatio2012 = totalPutCallRatio2012 / 249;
    printf("Average Put/Call Ratio in 2012: %.3f\n", averageTotalPutCallRatio2012);




	// Average Put Volume 2013
    float totalPutVolume2013 = 0;
    for (int i = 629; i <= 880; i++) {
        totalPutVolume2013 += data[i].putVolume;
    }
	float averageTotalPutVolume2013 = totalPutVolume2013 / 251;
    printf("\nAverage Total Put Volume in 2013: %.0f\n", averageTotalPutVolume2013);

	// Average Call Volume 2013
    float totalCallVolume2013 = 0;
    for (int i = 629; i <= 880; i++) {
        totalCallVolume2013 += data[i].callVolume;
	}
	float averageTotalCallVolume2013 = totalCallVolume2013 / 251;
    printf("Average Total Call Volume in 2013: %.0f\n", averageTotalCallVolume2013);

	// Average Put/Call Ratio 2013
	float totalPutCallRatio2013 = 0;
    for (int i = 629; i <= 880; i++) {
        totalPutCallRatio2013 += data[i].putCallRatio;
    }
	float averageTotalPutCallRatio2013 = totalPutCallRatio2013 / 251;
    printf("Average Put/Call Ratio in 2013: %.3f\n", averageTotalPutCallRatio2013);




	// Average Put Volume 2014
    float totalPutVolume2014 = 0;
    for (int i = 881; i <= 1132; i++) {
        totalPutVolume2014 += data[i].putVolume;
    }
	float averageTotalPutVolume2014 = totalPutVolume2014 / 251;
    printf("\nAverage Total Put Volume in 2014: %.0f\n", averageTotalPutVolume2014);

	// Average Call Volume 2014
    float totalCallVolume2014 = 0;
    for (int i = 881; i <= 1132; i++) {
        totalCallVolume2014 += data[i].callVolume;
	}
	float averageTotalCallVolume2014 = totalCallVolume2014 / 251;
    printf("Average Total Call Volume in 2014: %.0f\n", averageTotalCallVolume2014);

	// Average Put/Call Ratio 2014
	float totalPutCallRatio2014 = 0;
    for (int i = 881; i <= 1132; i++) {
        totalPutCallRatio2014 += data[i].putCallRatio;
    }
	float averageTotalPutCallRatio2014 = totalPutCallRatio2014 / 251;
    printf("Average Put/Call Ratio in 2014: %.3f\n", averageTotalPutCallRatio2014);




	// Average Put Volume 2015
    float totalPutVolume2015 = 0;
    for (int i = 1133; i <= 1384; i++) {
        totalPutVolume2015 += data[i].putVolume;
    }
	float averageTotalPutVolume2015 = totalPutVolume2015 / 251;
    printf("\nAverage Total Put Volume in 2015: %.0f\n", averageTotalPutVolume2015);

	// Average Call Volume 2015
    float totalCallVolume2015 = 0;
    for (int i = 1133; i <= 1384; i++) {
        totalCallVolume2015 += data[i].callVolume;
	}
	float averageTotalCallVolume2015 = totalCallVolume2015 / 251;
    printf("Average Total Call Volume in 2015: %.0f\n", averageTotalCallVolume2015);

	// Average Put/Call Ratio 2015
	float totalPutCallRatio2015 = 0;
    for (int i = 1133; i <= 1384; i++) {
        totalPutCallRatio2015 += data[i].putCallRatio;
    }
	float averageTotalPutCallRatio2015 = totalPutCallRatio2015 / 251;
    printf("Average Put/Call Ratio in 2015: %.3f\n", averageTotalPutCallRatio2015);




	// Average Put Volume 2016
    float totalPutVolume2016 = 0;
    for (int i = 1385; i <= 1636; i++) {
        totalPutVolume2016 += data[i].putVolume;
    }
	float averageTotalPutVolume2016 = totalPutVolume2016 / 251;
    printf("\nAverage Total Put Volume in 2016: %.0f\n", averageTotalPutVolume2016);

	// Average Call Volume 2016
    float totalCallVolume2016 = 0;
    for (int i = 1385; i <= 1636; i++) {
        totalCallVolume2016 += data[i].callVolume;
	}
	float averageTotalCallVolume2016 = totalCallVolume2016 / 251;
    printf("Average Total Call Volume in 2016: %.0f\n", averageTotalCallVolume2016);

	// Average Put/Call Ratio 2016
	float totalPutCallRatio2016 = 0;
    for (int i = 1385; i <= 1636; i++) {
        totalPutCallRatio2016 += data[i].putCallRatio;
    }
	float averageTotalPutCallRatio2016 = totalPutCallRatio2016 / 251;
    printf("Average Put/Call Ratio in 2016: %.3f\n", averageTotalPutCallRatio2016);




	// Average Put Volume 2017
    float totalPutVolume2017 = 0;
    for (int i = 1637; i <= 1887; i++) {
        totalPutVolume2017 += data[i].putVolume;
    }
	float averageTotalPutVolume2017 = totalPutVolume2017 / 250;
    printf("\nAverage Total Put Volume in 2017: %.0f\n", averageTotalPutVolume2017);

	// Average Call Volume 2017
    float totalCallVolume2017 = 0;
    for (int i = 1637; i <= 1887; i++) {
        totalCallVolume2017 += data[i].callVolume;
	}
	float averageTotalCallVolume2017 = totalCallVolume2017 / 250;
    printf("Average Total Call Volume in 2017: %.0f\n", averageTotalCallVolume2017);

	// Average Put/Call Ratio 2017
	float totalPutCallRatio2017 = 0;
    for (int i = 1637; i <= 1887; i++) {
        totalPutCallRatio2017 += data[i].putCallRatio;
    }
	float averageTotalPutCallRatio2017 = totalPutCallRatio2017 / 250;
    printf("Average Put/Call Ratio in 2017: %.3f\n", averageTotalPutCallRatio2017);




	// Average Put Volume 2018
    float totalPutVolume2018 = 0;
    for (int i = 1888; i <= 2138; i++) {
        totalPutVolume2018 += data[i].putVolume;
    }
	float averageTotalPutVolume2018 = totalPutVolume2018 / 250;
    printf("\nAverage Total Put Volume in 2018: %.0f\n", averageTotalPutVolume2018);

	// Average Call Volume 2018
    float totalCallVolume2018 = 0;
    for (int i = 1888; i <= 2138; i++) {
        totalCallVolume2018 += data[i].callVolume;
	}
	float averageTotalCallVolume2018 = totalCallVolume2018 / 250;
    printf("Average Total Call Volume in 2018: %.0f\n", averageTotalCallVolume2018);

	// Average Put/Call Ratio 2018
	float totalPutCallRatio2018 = 0;
    for (int i = 1888; i <= 2138; i++) {
        totalPutCallRatio2018 += data[i].putCallRatio;
    }
	float averageTotalPutCallRatio2018 = totalPutCallRatio2018 / 250;
    printf("Average Put/Call Ratio in 2018: %.3f\n", averageTotalPutCallRatio2018);



	// Average Put Volume 2019
    float totalPutVolume2019 = 0;
    for (int i = 2139; i <= dataSize; i++) {
        totalPutVolume2019 += data[i].putVolume;
    }
	float averageTotalPutVolume2019 = totalPutVolume2019 / (dataSize - 2139);
    printf("\nAverage Total Put Volume in 2019: %.0f\n", averageTotalPutVolume2019);

	// Average Call Volume 2019
    float totalCallVolume2019 = 0;
    for (int i = 2139; i <= dataSize; i++) {
        totalCallVolume2019 += data[i].callVolume;
	}
	float averageTotalCallVolume2019 = totalCallVolume2019 / (dataSize - 2139);
    printf("Average Total Call Volume in 2019: %.0f\n", averageTotalCallVolume2019);

	// Average Put/Call Ratio 2019
	float totalPutCallRatio2019 = 0;
    for (int i = 2139; i <= dataSize; i++) {
        totalPutCallRatio2019 += data[i].putCallRatio;
    }
	float averageTotalPutCallRatio2019 = totalPutCallRatio2019 / (dataSize - 2139);
    printf("Average Put/Call Ratio in 2019: %.3f\n", averageTotalPutCallRatio2019);
}
