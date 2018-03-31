// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CCurveFittingFunction;
class CExpAvgFunction;
class CMovingAvgFunction;
class CStdDeviationFunction;
class CRSIFunction;
class CBollingerFunction;
class CADXFunction;
class CMACDFunction;
class CRMSFunction;
class CAverageFunction;
class CSmoothingFunction;
class CCustomFunction;
class CCompressFunction;
class CCLVFunction;
class COBVFunction;
class CCCIFunction;
class CPVOFunction;
class CPerformanceFunction;
class CModeFunction;
class CMedianFunction;
class CDownSamplingFunction;
class CTrendFunction;
class CSubsetTeeFunction;
class CExpMovAvgFunction;
class CSARFunction;
class CHistogramFunction;

/////////////////////////////////////////////////////////////////////////////
// CTeeFunction wrapper class

class CTeeFunction : public COleDispatchDriver
{
public:
	CTeeFunction() {}		// Calls COleDispatchDriver default constructor
	CTeeFunction(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CTeeFunction(const CTeeFunction& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	double GetPeriod();
	void SetPeriod(double newValue);
	CCurveFittingFunction GetAsCurveFit();
	CExpAvgFunction GetAsExpAvg();
	CMovingAvgFunction GetAsMovAvg();
	long GetPeriodStyle();
	void SetPeriodStyle(long nNewValue);
	long GetPeriodAlign();
	void SetPeriodAlign(long nNewValue);
	CStdDeviationFunction GetAsStdDeviation();
	void BeginUpdate();
	void EndUpdate();
	CRSIFunction GetAsRSI();
	CBollingerFunction GetAsBollinger();
	CADXFunction GetAsADX();
	CMACDFunction GetAsMACD();
	CRMSFunction GetAsRMS();
	CAverageFunction GetAsAverage();
	CSmoothingFunction GetAsSmoothing();
	CCustomFunction GetAsCustom();
	CCompressFunction GetAsCompress();
	CCLVFunction GetAsCLV();
	COBVFunction GetAsOBV();
	CCCIFunction GetAsCCI();
	CPVOFunction GetAsPVO();
	CPerformanceFunction GetAsPerformance();
	CModeFunction GetAsMode();
	CMedianFunction GetAsMedian();
	void Recalculate();
	CDownSamplingFunction GetAsDownSampling();
	CTrendFunction GetAsTrend();
	CSubsetTeeFunction GetAsSubset();
	CExpMovAvgFunction GetAsExpMovAvg();
	CSARFunction GetAsSAR();
	CHistogramFunction GetAsHistogram();
};
