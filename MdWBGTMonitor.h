/* インクルードガード */
#pragma once
#include "M5All-In-One-Gadget.h"//WbgtIndex型をしようするため、WbgtIndex型の構造体が格納されているファイルを指定

class MdWBGTMonitor // classの定義
{
private: // privateはクラス内からしかアクセスできない
public:  // publicはどこからでもアクセス可能
    void init();
    void getWBGT(double *temperature, double *humidity, WbgtIndex *index);
};
