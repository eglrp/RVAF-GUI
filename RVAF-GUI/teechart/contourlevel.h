// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CLevelSegment;
class CPen1;

/////////////////////////////////////////////////////////////////////////////
// CContourLevel wrapper class

class CContourLevel : public COleDispatchDriver
{
public:
	CContourLevel() {}		// Calls COleDispatchDriver default constructor
	CContourLevel(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CContourLevel(const CContourLevel& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	unsigned long GetColor();
	void SetColor(unsigned long newValue);
	double GetUpToValue();
	void SetUpToValue(double newValue);
	CLevelSegment GetSegments(long Index);
	long GetNumSegments();
	CPen1 GetPen();
	void ClearSegments();
	BOOL Clicked(long XCoord, long YCoord, long* SegmentIndex, long* PointIndex);
	BOOL ClickedSegment(long XCoord, long YCoord, long SegmentIndex, long* PointIndex);
	BOOL GetDefaultPen();
};
