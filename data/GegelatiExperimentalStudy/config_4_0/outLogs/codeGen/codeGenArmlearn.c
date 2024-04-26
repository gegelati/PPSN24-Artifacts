/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-12 16:01:48
 * With the CodeGen::TPGGenerationEngine.
 */

#include "codeGenArmlearn.h"
#include "codeGenArmlearn_program.h"
#include <limits.h>
#include <assert.h>
#include <float.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <math.h>

int bestProgram(double *results, int nb) {
	int bestProgram = 0;
	double bestScore = (isnan(results[0]))? -INFINITY : results[0];
	for (int i = 1; i < nb; i++) {
		double challengerScore = (isnan(results[i]))? -INFINITY : results[i];
		if (challengerScore >= bestScore) {
			bestProgram = i;
			bestScore = challengerScore;
		}
	}
	return bestProgram;
}

enum vertices {T0, T1, T2, A3, A4, A5, A6, A7, A8, };

int inferenceTPG() {
	enum vertices currentVertex = T2;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[2] = { A4, A5,  };

			double T0Scores[2];

			T0Scores[0] = P0();
			T0Scores[1] = P1();

			int best = bestProgram(T0Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[4] = { T0, A3, A7, A8,  };

			double T1Scores[4];

			T1Scores[0] = P2();
			T1Scores[1] = P3();
			T1Scores[2] = P4();
			T1Scores[3] = P5();

			int best = bestProgram(T1Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[5] = { A6, T1, A3, A3, A3,  };

			double T2Scores[5];

			T2Scores[0] = P6();
			T2Scores[1] = P7();
			T2Scores[2] = P8();
			T2Scores[3] = P9();
			T2Scores[4] = P10();

			int best = bestProgram(T2Scores, 5);
			currentVertex = next[best];
			break;
		}
		case A3: {
			return 3;
			break;
		}
		case A4: {
			return 4;
			break;
		}
		case A5: {
			return 7;
			break;
		}
		case A6: {
			return 1;
			break;
		}
		case A7: {
			return 5;
			break;
		}
		case A8: {
			return 6;
			break;
		}
		}
	}
}