//! \brief ��������� ������������� �������.
struct DynamicArray
{ //! \brief ������ �������.
	int Size;

	//! \brief ����������� �������. 
	int Capacity;

	//! \brief ������.
	int* Array;
};

//! \bried ����������� ����������� �������.
const int InitialCapacity = 4;

//! \bried ������ ����� �������.
const int GrowthFactor = 2;

//! \brief ����������� ����������� �������.
//! \param array ��������� ������������� �������.
//! \param capacity ����������� �������.
void Resize(DynamicArray* array, int capacity);

//! \brief ��������� ����������� �������.
//! \param array ��������� ������������� �������.
//! \param capacity ����������� �������.
void Shrink(DynamicArray* array, int capacity);

//! \brief �������� ������������� �������.
//! \return ���������� ����� ������ ������������ ������
DynamicArray* CreateArray();

//! \brief ��������� ������� � ������.
//! \param array ��������� ������������� �������.
//! \param index ������ ��������, ���� ����� �������� �������.
//! \param value �������� ��������.
void AddElement(DynamicArray* array, int index, int value);

//! \brief ������� ������� ������� �� ������������� �������.
//! \param array ��������� ������������� �������.
//! \param index ������ ��������, ������� ����� �������.
void RemoveByIndex(DynamicArray* array, int index);

//! \brief ������� �������� �������� �� ��� ������������� ��������.
//! \param array ��������� ������������� �������.
//! \param value ���������� ��������, ������� ����� �������.
void RemoveByValue(DynamicArray* array, int value);

//! \brief ���������� ������� �� �������.
//! \param array ��������� ������������� �������.
//! \param index ������, �� �������� ����� �������� ��������.
//! \return ���������� ��������, ������� ��������� ��� ��������.
int GetElement(DynamicArray* array, int index);

//! \brief ��������� ������(���������� ���������).
//! \param array ��������� ������������� �������.
//! \param left ������� ����� �������
//! \param right ������� ������ �������
void QuickSort(DynamicArray* array, int left, int right);

//! \brief �������� ����� ������� �������� �� ������������� ��������.
//! \param array ��������� ������������� �������.
//! \param value ��������, ������ �������� ����� �����.
int LinearSearch(DynamicArray* array, int value);

//! \brief �������� ����� ������� �������� �� ������������� ��������.
//! \param array ��������� ������������� �������.
//! \param value ��������, ������ �������� ����� �����.
int BinarySearch(DynamicArray* array, int value);

//! \brief ������� ������ �������.
//! \param array ��������� ������������� �������.
void FreeArray(DynamicArray* array);