#pragma once
#include <iostream>
template<typename T>
class DynamicArray
{
public:
	DynamicArray<T>();
	~DynamicArray<T>();
	void addItem(T item);
	bool removeItem(T item);
	void sortItems();
	bool getItem(int index, T* item);
	int getLength();
	void print();

private:
	T* m_items;
	int m_length;
};

template<typename T>
inline DynamicArray<T>::DynamicArray()
{
	m_items = nullptr;
	m_length = 0;
}

template<typename T>
inline DynamicArray<T>::~DynamicArray()
{
	delete[] m_items;
}

template<typename T>
inline void DynamicArray<T>::addItem(T item)
{
	T* appendedArray = new T[getLength() + 1];

	for (int i = 0; i < getLength(); i++)
	{
		appendedArray[i] = m_items[i];
	}

	appendedArray[getLength()] = item;

	m_items = appendedArray;
	m_length++;
}

template<typename T>
inline bool DynamicArray<T>::removeItem(T item)
{
	if (item < 0 || item >= getLength())
	{
		return false;
	}

	bool itemRemoved = false;

	T* newArray = new T[getLength() - 1];

	int j = 0;

	for (int i = 0; i < getLength(); i++)
	{
		if (item != m_items[i])
		{
			newArray[j] = m_items[i];
			j++;
		}
		else
		{
			itemRemoved = true;
		}
	}

	m_items = newArray;
	m_length--;
	return itemRemoved;
}

template<typename T>
inline void DynamicArray<T>::sortItems()
{
	for (int i = 0; i < getLength(); i++)
	{
		for (int j = getLength() - 1; j > i; j--)
		{
			if (m_items[j] < m_items[j - 1])
			{
				T temp = m_items[j];
				m_items[j] = m_items[j - 1];
				m_items[j - 1] = temp;
			}
		}
	}
}

template<typename T>
inline bool DynamicArray<T>::getItem(int index, T* item)
{
	if (!item || index < 0 || index >= getLength())
		return false;

	item = &m_items[index];

	return false;
}

template<typename T>
inline int DynamicArray<T>::getLength()
{
	return m_length;
}

template<typename T>
inline void DynamicArray<T>::print()
{
	for (int i = 0; i < getLength(); i++)
	{
		std::cout << m_items[i] << std::endl;
	}
}
