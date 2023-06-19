#ifdef __cplusplus
#define NULL 0
#else
#define NULL (void*)0
#endif

template <class T>
class carray
{
	T* m_array;
	const int* count;
public:
	void addArray(T Aa) {
		if (!(m_array == NULL))
		{
			delete[] m_array;
			m_array = NULL;
		}
		m_array = new T[Aa];
		count = new T(Aa);
	}
	void setArray(T Aa, T val)
	{
		m_array[Aa] = val;
	}
	const T getArray(T Aa)
	{
		return m_array[Aa];
	}
	const int getCount()
	{
		return *count;
	}
	~carray()
	{
		if (!(m_array == NULL))
		{
			delete[] m_array;
			m_array = NULL;
		}
		delete count;
	}
};
