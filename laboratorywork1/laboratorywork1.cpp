#include <iostream> 
#include "DynamicArray.h" 
using namespace std;

//! \brief функция получения значения 
//! \param const string& ссылка на строку, которая не сможет быть изменена 
//! \param prompt для вывода на экран строки 
int GetInput(const string& prompt)
{
    int value;
    cout << prompt;
    cin >> value;
    return value;
}

//! \brief функция получения индекса 
//! \param index показывает индекс элемента 
void GetIndex(int index)
{
    if (index != -1)
    {
        cout << "Index found: " << index << endl;
    }
    else
    {
        cout << "Index not found " << endl;
    }
}

int main()
{
    DynamicArray* meinArray = CreateArray();

    //! \brief реализация меню с выводом текущего массива 
    //! \param true выполняет работу пока значение имеется 
    while (true)
    {
        cout << "Current array\n";
        for (int i = 0; i < meinArray->Size; i++)
        {
            cout << meinArray->Array[i] << ", ";
        }
        cout << endl;
        cout << endl;

        cout << "Menu: \n";
        //cout << "1. Add element \n"; 
        cout << "1. Delete by index \n";
        cout << "2. Delete by value \n";
        cout << "3. Add to beggining \n";
        cout << "4. Add to end \n";
        cout << "5. Add after \n";
        cout << "6. Sort array \n";
        cout << "7. Linnear search \n";
        cout << "8. Binnary search \n";
        cout << "0. End \n";

        //TODO: 
        int choice = GetInput("Your input: ");
        //cin >> choice;

        //! \brief реализация кейсов для меню 
        switch (choice)
        {
            /*case 1:
                int value = GetInput("Enter value to add: ");
                AddElement(meinArray, value);
                break;*/

        case 1:
        {
            int index = GetInput("Enter the index to delete: ");
            GetIndex(index);
            RemoveByIndex(meinArray, index);
            break;
        }

        case 2:
        {
            int value = GetInput("Enter the value to delete: ");
            RemoveByValue(meinArray, value);
            break;
        }

        case 3:
        {
            int value = GetInput("Enter the element to add at the beginning: ");
            AddElement(meinArray, 0, value);
            break;
        }

        case 4:
        {
            int value = GetInput("Enter the element to add at the end: ");
            AddElement(meinArray, meinArray->Size, value);
            break;
        }

        case 5:
        {
            int index = GetInput("Enter index to add: ");
            int value = GetInput("Enter the element to add after a certain one: ");
            AddElement(meinArray, index, value);
            GetIndex(index);
            break;
        }

        case 6:
        {
            QuickSort(meinArray, 0, meinArray -> Size - 1);
            cout << "The array is sorted." << endl;
            break;
        }

        case 7:
        {
            int value = GetInput("Enter a value for a linear search: ");
            int index = LinearSearch(meinArray, value);
            GetIndex(index);
            break;
        }

        case 8:
        {
            int value = GetInput("Enter a value for a binary search: ");
            int index = BinarySearch(meinArray, value);
            GetIndex(index);
            break;
        }

        case 0:
            return 0;
        default:
            cout << "Error " << endl;
        }
    }

    FreeArray(meinArray);
    return 0;
}