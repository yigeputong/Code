/**
 * #pragma once
 * 你可以使用上面这个预处理器指令来防止头文件被重复包含
 * 但是我更喜欢使用条件编译指令来防止头文件被重复包含(你不觉得很高级吗)
 * 语法：
 * #ifndef (一个独特的名称，通常是文件名的大写形式)
 * #define (与上面的名称相同)
 * 
 * 头文件的内容
 * 
 * #endif
**/
#ifndef SWAP_H
#define SWAP_H
void swap(int* a, int* b)  // 函数声明
/*
{
    //你也可以把定义放在头文件里
    int temp = *a;
    *a = *b;
    *b = temp;
}
*/
;
#endif
