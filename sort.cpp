#include <iostream>
using namespace std;

// 冒泡排序函数
void bubbleSort(int arr[], int n) {
    // 外层循环控制排序轮数
    for (int i = 0; i < n - 1; i++) {
        // 内层循环进行相邻元素的比较和交换
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // 交换相邻的元素
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// 打印数组
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};  // 待排序数组
    int n = sizeof(arr) / sizeof(arr[0]);  // 数组的大小

    cout << "原始数组：";
    printArray(arr, n);

    bubbleSort(arr, n);  // 调用冒泡排序

    cout << "排序后的数组：";
    printArray(arr, n);

    return 0;
}
