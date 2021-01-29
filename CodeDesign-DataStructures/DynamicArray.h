#pragma once
template<typename T>
class DynamicArray
{
Public:
	m_array = new DynamicArray*[0];

	DynamicArray();

	~DynamicArray();

	void addItem(T)
	{
		T** appendedArray = new DynamicArray * [m_length + 1];

		for (int i = 0; i < m_length; i++)
		{
			appendedArray[i] = m_array[i];
		}

		appendedArray[m_length] = T;

		m_array = appendedArray;
		m_length++;
	}

	bool removeItem(T)
	{
		if (t < 0 || t >= m_length)
		{
			return false;
		}

		bool itemRemoved = false;

		T** newArray = new DynamicArray * [m_length - 1];

		int j = 0;

		for (int i = 0; i < m_length; i++)
		{
			if (i != T)
			{
				newArray[j] = m_array[i];
				j++;
			}
			else
			{
				delete m_array[i];
				itemRemoved = true;
			}
		}

		m_array = newArray;
		m_length--;
		return itemRemoved;
	}

	void sortItems()
	{

	}

	bool getItem(int index, T* item)
	{

	}

	int getLength()
	{
		return m_length;
	}

Private:
	T* m_items;
	int m_length;
};
