/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-12 16:06:39
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, A9, A10, A11, A12, A13, A14, };

int inferenceTPG() {
	enum vertices currentVertex = T8;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[2] = { A11, A13,  };

			double T0Scores[2];

			T0Scores[0] = P0();
			T0Scores[1] = P1();

			int best = bestProgram(T0Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[4] = { A11, A12, A14, A9,  };

			double T1Scores[4];

			T1Scores[0] = P0();
			T1Scores[1] = P2();
			T1Scores[2] = P3();
			T1Scores[3] = P4();

			int best = bestProgram(T1Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[3] = { A12, A11, A14,  };

			double T2Scores[3];

			T2Scores[0] = P5();
			T2Scores[1] = P0();
			T2Scores[2] = P3();

			int best = bestProgram(T2Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[3] = { A14, T1, T2,  };

			double T3Scores[3];

			T3Scores[0] = P6();
			T3Scores[1] = P7();
			T3Scores[2] = P8();

			int best = bestProgram(T3Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[4] = { T2, A10, A14, A13,  };

			double T4Scores[4];

			T4Scores[0] = P9();
			T4Scores[1] = P10();
			T4Scores[2] = P11();
			T4Scores[3] = P12();

			int best = bestProgram(T4Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[3] = { T1, A14, T0,  };

			double T5Scores[3];

			T5Scores[0] = P13();
			T5Scores[1] = P14();
			T5Scores[2] = P15();

			int best = bestProgram(T5Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[2] = { T4, A10,  };

			double T6Scores[2];

			T6Scores[0] = P16();
			T6Scores[1] = P17();

			int best = bestProgram(T6Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[6] = { T5, T2, T1, A10, T3, T6,  };

			double T7Scores[6];

			T7Scores[0] = P18();
			T7Scores[1] = P19();
			T7Scores[2] = P20();
			T7Scores[3] = P17();
			T7Scores[4] = P21();
			T7Scores[5] = P22();

			int best = bestProgram(T7Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[2] = { T7, A10,  };

			double T8Scores[2];

			T8Scores[0] = P23();
			T8Scores[1] = P24();

			int best = bestProgram(T8Scores, 2);
			currentVertex = next[best];
			break;
		}
		case A9: {
			return 1;
			break;
		}
		case A10: {
			return 2;
			break;
		}
		case A11: {
			return 4;
			break;
		}
		case A12: {
			return 6;
			break;
		}
		case A13: {
			return 7;
			break;
		}
		case A14: {
			return 5;
			break;
		}
		}
	}
}