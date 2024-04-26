/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-12 16:05:37
 * With the CodeGen::ProgramGenerationEngine.
 */

#include "codeGenArmlearn_program.h"
#include "externHeader.h"
extern double* in1;
extern double* in2;
extern double* in3;
extern double* in4;

double P0(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in4[3];
		double op1 = in2[2];
		reg[3] = op0 + op1;
	}
	{
		double op0 = reg[3];
		double op1 = in3[1];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P1(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in2[2];
		double op1 = in4[0];
		reg[0] = ((op0) < (op1)) ? -1*(op0) : (op0);
	}
	return reg[0];
}

double P2(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	return reg[0];
}

double P3(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in1[0];
		reg[0] = log(op0);
	}
	{
		double op0 = reg[0];
		double op1 = in4[0];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P4(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in4[2];
		reg[5] = log(op0);
	}
	{
		double op0 = in3[0];
		reg[3] = sin(op0);
	}
	{
		double op0 = reg[3];
		double op1 = reg[5];
		reg[1] = ((op0) < (op1)) ? -1*(op0) : (op0);
	}
	{
		double op0 = in2[2];
		double op1 = reg[1];
		reg[0] = op0 + op1;
	}
	return reg[0];
}

double P5(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[1];
		reg[0] = exp(op0);
	}
	return reg[0];
}

double P6(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[2];
		double op1 = in4[0];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P7(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in2[2];
		double op1 = in4[0];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P8(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[1];
		reg[0] = exp(op0);
	}
	return reg[0];
}

double P9(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in4[4];
		double op1 = in1[0];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P10(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in2[2];
		double op1 = in3[2];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P11(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in4[0];
		double op1 = in1[1];
		reg[0] = op0 - op1;
	}
	return reg[0];
}

double P12(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[2];
		double op1 = in4[5];
		reg[0] = op0 * op1;
	}
	return reg[0];
}