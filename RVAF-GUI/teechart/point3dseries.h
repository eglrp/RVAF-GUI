// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CValueList;
class CBrush1;
class CPen1;
class CPointer;

/////////////////////////////////////////////////////////////////////////////
// CPoint3DSeries wrapper class

class CPoint3DSeries : public COleDispatchDriver
{
public:
	CPoint3DSeries() {}		// Calls COleDispatchDriver default constructor
	CPoint3DSeries(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CPoint3DSeries(const CPoint3DSeries& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long AddXYZ(double AX, double AY, double AZ, LPCTSTR AXLabel, unsigned long Value);
	double MaxZValue();
	double MinZValue();
	long GetTimesZOrder();
	void SetTimesZOrder(long nNewValue);
	CValueList GetZValues();
	double GetZValue(long Index);
	void SetZValue(long Index, double newValue);
	CBrush1 GetBrush();
	CPen1 GetPen();
	void AddArrayXYZ(const VARIANT& XArray, const VARIANT& YArray, const VARIANT& ZArray);
	void AddArrayGrid(long NumX, long NumZ, const VARIANT& XZArray);
	long CalcZPos(long ValueIndex);
	double GetDepthSize();
	void SetDepthSize(double newValue);
	CPointer GetPointer();
	CPen1 GetLinePen();
	CPen1 GetBaseLine();
};
