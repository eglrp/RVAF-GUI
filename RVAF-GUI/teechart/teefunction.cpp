// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "teefunction.h"

// Dispatch interfaces referenced by this interface
#include "curvefittingfunction.h"
#include "expavgfunction.h"
#include "movingavgfunction.h"
#include "stddeviationfunction.h"
#include "rsifunction.h"
#include "bollingerfunction.h"
#include "adxfunction.h"
#include "macdfunction.h"
#include "rmsfunction.h"
#include "averagefunction.h"
#include "smoothingfunction.h"
#include "customfunction.h"
#include "compressfunction.h"
#include "clvfunction.h"
#include "obvfunction.h"
#include "ccifunction.h"
#include "pvofunction.h"
#include "performancefunction.h"
#include "modefunction.h"
#include "medianfunction.h"
#include "downsamplingfunction.h"
#include "trendfunction.h"
#include "subsetteefunction.h"
#include "expmovavgfunction.h"
#include "sarfunction.h"
#include "histogramfunction.h"


/////////////////////////////////////////////////////////////////////////////
// CTeeFunction properties

/////////////////////////////////////////////////////////////////////////////
// CTeeFunction operations

double CTeeFunction::GetPeriod()
{
	double result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void CTeeFunction::SetPeriod(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

CCurveFittingFunction CTeeFunction::GetAsCurveFit()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CCurveFittingFunction(pDispatch);
}

CExpAvgFunction CTeeFunction::GetAsExpAvg()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CExpAvgFunction(pDispatch);
}

CMovingAvgFunction CTeeFunction::GetAsMovAvg()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CMovingAvgFunction(pDispatch);
}

long CTeeFunction::GetPeriodStyle()
{
	long result;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CTeeFunction::SetPeriodStyle(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CTeeFunction::GetPeriodAlign()
{
	long result;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CTeeFunction::SetPeriodAlign(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CStdDeviationFunction CTeeFunction::GetAsStdDeviation()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CStdDeviationFunction(pDispatch);
}

void CTeeFunction::BeginUpdate()
{
	InvokeHelper(0x8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CTeeFunction::EndUpdate()
{
	InvokeHelper(0x9, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

CRSIFunction CTeeFunction::GetAsRSI()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CRSIFunction(pDispatch);
}

CBollingerFunction CTeeFunction::GetAsBollinger()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CBollingerFunction(pDispatch);
}

CADXFunction CTeeFunction::GetAsADX()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xc, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CADXFunction(pDispatch);
}

CMACDFunction CTeeFunction::GetAsMACD()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xd, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CMACDFunction(pDispatch);
}

CRMSFunction CTeeFunction::GetAsRMS()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xe, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CRMSFunction(pDispatch);
}

CAverageFunction CTeeFunction::GetAsAverage()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xf, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CAverageFunction(pDispatch);
}

CSmoothingFunction CTeeFunction::GetAsSmoothing()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xc9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CSmoothingFunction(pDispatch);
}

CCustomFunction CTeeFunction::GetAsCustom()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xca, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CCustomFunction(pDispatch);
}

CCompressFunction CTeeFunction::GetAsCompress()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xcb, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CCompressFunction(pDispatch);
}

CCLVFunction CTeeFunction::GetAsCLV()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xcc, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CCLVFunction(pDispatch);
}

COBVFunction CTeeFunction::GetAsOBV()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xcd, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return COBVFunction(pDispatch);
}

CCCIFunction CTeeFunction::GetAsCCI()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xce, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CCCIFunction(pDispatch);
}

CPVOFunction CTeeFunction::GetAsPVO()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xcf, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CPVOFunction(pDispatch);
}

CPerformanceFunction CTeeFunction::GetAsPerformance()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xd0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CPerformanceFunction(pDispatch);
}

CModeFunction CTeeFunction::GetAsMode()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xd1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CModeFunction(pDispatch);
}

CMedianFunction CTeeFunction::GetAsMedian()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xd2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CMedianFunction(pDispatch);
}

void CTeeFunction::Recalculate()
{
	InvokeHelper(0xd3, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

CDownSamplingFunction CTeeFunction::GetAsDownSampling()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xd4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CDownSamplingFunction(pDispatch);
}

CTrendFunction CTeeFunction::GetAsTrend()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xd5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CTrendFunction(pDispatch);
}

CSubsetTeeFunction CTeeFunction::GetAsSubset()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xd6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CSubsetTeeFunction(pDispatch);
}

CExpMovAvgFunction CTeeFunction::GetAsExpMovAvg()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xd7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CExpMovAvgFunction(pDispatch);
}

CSARFunction CTeeFunction::GetAsSAR()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xd8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CSARFunction(pDispatch);
}

CHistogramFunction CTeeFunction::GetAsHistogram()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xd9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CHistogramFunction(pDispatch);
}
