// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CFilterItems;

/////////////////////////////////////////////////////////////////////////////
// CBackImage wrapper class

class CBackImage : public COleDispatchDriver
{
public:
	CBackImage() {}		// Calls COleDispatchDriver default constructor
	CBackImage(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CBackImage(const CBackImage& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CFilterItems GetFilters();
	void LoadImage(LPCTSTR FileName);
	void AssignImage(long ImageHandle);
	void ClearImage();
	BOOL ShowFiltersEditor();
	long GetHandle();
	void SaveToFile(LPCTSTR FileName);
	BOOL GetInside();
	void SetInside(BOOL bNewValue);
	long GetLeft();
	void SetLeft(long nNewValue);
	long GetTop();
	void SetTop(long nNewValue);
	long GetMode();
	void SetMode(long nNewValue);
};
