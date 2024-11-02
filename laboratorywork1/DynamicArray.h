//! \brief Структура динамического массива.
struct DynamicArray
{ //! \brief Размер массива.
	int Size;

	//! \brief Вместимость массива. 
	int Capacity;

	//! \brief Массив.
	int* Array;
};

//! \bried Изначальная вместимость массива.
const int InitialCapacity = 4;

//! \bried Фактор роста массива.
const int GrowthFactor = 2;

//! \brief Увеличивает вместимость массива.
//! \param array Структура динамического массива.
//! \param capacity Вместимость массива.
void Resize(DynamicArray* array, int capacity);

//! \brief Уменьшает вместимость массива.
//! \param array Структура динамического массива.
//! \param capacity Вместимость массива.
void Shrink(DynamicArray* array, int capacity);

//! \brief Создание динамического массива.
//! \return Возвращает новый массив динамической памяти
DynamicArray* CreateArray();

//! \brief Добавляет элемент в массив.
//! \param array Структура динамического массива.
//! \param index Индекс элемента, куда нужно добавить элемент.
//! \param value Значение элемента.
void AddElement(DynamicArray* array, int index, int value);

//! \brief Удаляет элемент массива по передаваемому индексу.
//! \param array Структура динамического массива.
//! \param index Индекс элемента, который нужно удалить.
void RemoveByIndex(DynamicArray* array, int index);

//! \brief Удаляет значение элемента по его передаваемому значению.
//! \param array Структура динамического массива.
//! \param value Посылаемое значение, которое нужно удалить.
void RemoveByValue(DynamicArray* array, int value);

//! \brief Возвращает элемент по индексу.
//! \param array Структура динамического массива.
//! \param index Индекс, по которому нужно получить значение.
//! \return Возвращает значение, которое находится под индексом.
int GetElement(DynamicArray* array, int index);

//! \brief Сортирует массив(сортировка вставками).
//! \param array Структура динамического массива.
//! \param left крайний лквый элемент
//! \param right урайний правый эдемент
void QuickSort(DynamicArray* array, int left, int right);

//! \brief Линейный поиск индекса элемента по передаваемому значению.
//! \param array Структура динамического массива.
//! \param value Значение, индекс которого нужно найти.
int LinearSearch(DynamicArray* array, int value);

//! \brief Бинарный поиск индекса элемента по передаваемому значению.
//! \param array Структура динамического массива.
//! \param value Значение, индекс которого нужно найти.
int BinarySearch(DynamicArray* array, int value);

//! \brief Очистка данных массива.
//! \param array Структура динамического массива.
void FreeArray(DynamicArray* array);