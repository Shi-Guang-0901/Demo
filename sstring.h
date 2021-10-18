//
// Created by 姚康 on 2021/10/14.
//

#ifndef SSTRING_H_INCLUDED
#define SSTRING_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

#define boolean int
#define TRUE 1
#define FALSE 0
#define STR_ERROR -1
#define STR_OK 0

typedef struct{
    char *values;
    int length;
}SString;


/**
 * 根据给定的字符数组生成SString
 * @param string SString地址
 * @param chars 字符串数组地址
 * @return 如果创建成功，返回STR_OK(0),否则返回STR_ERROR(-1)
 */
int create_string(SString *string, const char *chars);

/**
 * 根据给定的串，创建新的串
 * @param dest 新的串的内存地址
 * @param src 指定的串
 * @return 如果创建成功，返回STR_OK(0),否则返回STR_ERROR(-1)
 */
int create_string(SString *dest, const SString src);

/**
 * 根据给定的字符数组创建新串
 * @param string 新串的内存地址
 * @param chars 字符数组
 * @param offset 开始下标
 * @param length 长度
 * @return 如果创建成功，返回STR_OK(0),否则返回STR_ERROR(-1)
 */
int create_string(SString *string, const char* chars, const int offset, const int length);

/**
 * 从串string中从pos开始删除的子串T
 * @param S 给定的串
 * @param T 要删除的子串
 * @param pos 开始下标
 * @return 如果删除成功，返回STR_OK(0),否则返回STR_ERROR(-1)
 */
int delete_string(SString *S,const SString T, const int pos);

/**
 * 从串string中删除从pos开始的len长度的子串
 * @param string 给定的串
 * @param pos 开始下标
 * @param len 长度
 * @return 如果删除成功，返回STR_OK(0),否则返回STR_ERROR(-1)
 */
int delete_string(SString *string,const int pos,const int len);

/**
 * 从串string中删除所有子串T
 * @param S 给定的串
 * @param T 子串
 * @return 如果删除成功，返回STR_OK(0),否则返回STR_ERROR(-1)
 */
int delete_string_all(SString *S, const SString T);

/**
 * 从串string中删除第一个子串T
 * @param string 给定的串
 * @param T 子串
 * @return 如果删除成功，返回STR_OK(0),否则返回STR_ERROR(-1)
 */
int delete_string(SString *string, const SString T);

/**
 * 判断串是否空串
 * @param S 指定的串
 * @return 若为空，返回TRUE(1) ，反之，返回FALSE(0)
 */
boolean string_empty(const SString S);

/**
 * 比较两个串先按字节比较，若都相同，则比较长度
 *
 * @param S 一个串
 * @param T 另一个串
 * @return 若S>T,则返回大于零的数;
 * 若S<T,则返回小于零的数;若S=T,则返回0
 */
int compare_string(const SString S, const SString T);

/**
 * 获得串的长度
 * @param S 一个串
 * @return 返回串的长度
 */
int string_length(const SString S);

/**
 * 清空串
 * @param S 一个串
 */
void clear_string(SString *S);

/**
 * 将串S1与串S2连接后放到T中
 * @param T 存放连接后的串
 * @param S1 一个串
 * @param S2 另一个串
 */
void concat_string( SString *T, const SString S1, const SString S2);

/**
 * 从主串中截取子串
 * @param sub 子串存放位置
 * @param S 主串
 * @param pos 开始下标
 * @param len 长度
 * @return 如果截取成功，返回STR_OK(0),否则返回STR_ERROR(-1)
 */
int sub_string( SString *sub, const SString S, const int pos, const int len);

/**
 * 在主串中查找子串，只返回第一次出现的下标
 * @param S 主串
 * @param sub 子串
 * @return 如果找到，则返回对应的下标，否则返回-1
 */
int index(const SString S, const SString sub);

/**
 * 从指定的下标开始查找子串
 * @param S 主串
 * @param sub 子串
 * @param pos 开始的下标
 * @return 如果找到，则返回对应的下标，否则返回-1
 */
int index(const SString S, const SString sub, const int pos);

/**
 * 判断主串是否为子串开始
 * @param S 主串
 * @param sub 子串
 * @return 如果是，则返回TRUE(1),否则返回FALSE(0)
 */
boolean start(const SString S,const SString sub);

/**
 * 判断主创是否为子串结尾
 * @param S 主创
 * @param sub 子串
 * @return 如果是，则返回TRUE(1),否则返回FALSE(0)
 */
boolean ends(const SString S,const SString sub);

/**
 * 判断主串中是否包含串T
 * @param S 主串
 * @param T 目标串
 * @return 如果包含，则返回TRUE(1),否则返回FALSE(0)
 */
boolean contains(const SString S, const SString T);

/**
 * 在主串指定的位置插入指定的串
 * @param S 主串
 * @param pos 插入位置
 * @param T 要插入的串
 * @return 如果插入成功，返回STR_OK(0),否则返回STR_ERROR(-1)
 */
int insert_string( SString *S, const int pos, const SString T);

/**
 * 将主串中的所有串T换成串V
 * @param S 主串
 * @param T 被替换的串
 * @param V 替换的串
 * @return 如果替换成功，返回STR_OK(0),否则返回STR_ERROR(-1)
 */
int replace(SString *S, const SString T, const SString V);

/**
 * 打印串
 * @param T 要打印的串
 */
void print_string(const SString T);

#endif // SSTRING_H_INCLUDED

