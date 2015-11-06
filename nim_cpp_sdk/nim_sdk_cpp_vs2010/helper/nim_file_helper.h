﻿/** @file nim_file_helper.h
  * @brief SDK文件操作辅助方法
  * @copyright (c) 2015, NetEase Inc. All rights reserved
  * @author Oleg
  * @date 2015/09/08
  */

#ifndef _NIM_SDK_CPP_FILE_HELPER_H_
#define _NIM_SDK_CPP_FILE_HELPER_H_

#include <string>
#include "assert.h"
#include "wtypes.h"

/**
* @namespace nim
* @brief namespace nim
*/
namespace nim
{

/** @fn std::wstring GetCurrentModuleDirectory()
  * @brief 获取当前SDK模块所在路径
  * @return 路径
  */
std::wstring GetCurrentModuleDirectory();

}

#endif //_NIM_SDK_CPP_FILE_HELPER_H_