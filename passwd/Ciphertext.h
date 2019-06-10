//
// Created by liuzhipeng on 19-6-10.
//

#ifndef UNTITLED_CIPHERTEXT_H
#define UNTITLED_CIPHERTEXT_H

#endif //UNTITLED_CIPHERTEXT_H

int transInt(char c)
{
    return c-97;
}

int transArgc(char str)
{
	return str - 48;
}

char encryption(int i)
{
    int tmp;
    if (i < 26)
        tmp = i;
    else if (i < 0)
        tmp = i + 26;
    else if (i >= 26)
        tmp = i - 26;
    return tmp + 97;
}

char deciphering(int i)
{
    int tmp;
    if (i > 0)
        tmp = i;
    else
        tmp = i + 26;

    return tmp + 97;
}


