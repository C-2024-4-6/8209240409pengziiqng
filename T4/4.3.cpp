#include <iostream> 
using namespace std;
void sortArray(int* arr, int size)
{
for (int i = 0; i < size - 1; i++) 
{
    for (int j = 0; j < size - 1 - i; j++) 
    {
        if (arr[j] > arr[j + 1]) 
        {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }
}
}

int main()
{
    int size;
    cout << "����������Ĵ�С: ";
    cin >> size;
    int* arr = new int[size];
    cout << "������ " << size << " ������:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "����Ԫ�ؼ����Ӧ�ĵ�ַ:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "arr[" << i << "] = " << arr[i] << " ��ַ: " << (arr + i) << endl;
    }
    sortArray(arr, size);
    cout << "����������:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;
    cout << "�����ڴ����ͷš�" << endl;
    return 0;
}
