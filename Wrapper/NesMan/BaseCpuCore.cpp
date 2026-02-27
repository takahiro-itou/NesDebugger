//  -*-  coding: utf-8-with-signature;  mode: c++  -*-  //
/*************************************************************************
**                                                                      **
**                  ----   NES Debugger Project   ----                  **
**                                                                      **
**          Copyright (C), 2026-2026, Takahiro Itou                     **
**          All Rights Reserved.                                        **
**                                                                      **
**          License: (See COPYING or LICENSE files)                     **
**          GNU Affero General Public License (AGPL) version 3,         **
**          or (at your option) any later version.                      **
**                                                                      **
*************************************************************************/

/**
**      An Implementation of BaseCpuCore class.
**
**      @file       Images/BaseCpuCore.cpp
**/

#include    "PreCompile.h"

#include    "BaseCpuCore.h"


namespace  NesDbgWrap  {
namespace  NesMan  {

namespace  {

}   //  End of (Unnamed) namespace


//========================================================================
//
//    BaseCpuCore  class.
//

//========================================================================
//
//    Constructor(s) and Destructor.
//

//----------------------------------------------------------------
//    インスタンスを初期化する
//  （コンストラクタ）。
//

BaseCpuCore::BaseCpuCore(
        PWrapTarget  const  ptrObj)
    : Super(ptrObj)
{
}

//----------------------------------------------------------------
//    インスタンスを破棄する
//  （デストラクタ）。
//

BaseCpuCore::~BaseCpuCore()
{
    //  マネージドリソースを破棄する。              //

    //  続いて、アンマネージドリソースも破棄する。  //
    this->!BaseCpuCore();
}

//----------------------------------------------------------------
//    インスタンスを破棄する
//  （ファイナライザ）。
//

BaseCpuCore::!BaseCpuCore()
{
}

//========================================================================
//
//    Public Member Functions (Implement Pure Virtual).
//

//========================================================================
//
//    Public Member Functions (Overrides).
//

//========================================================================
//
//    Public Member Functions (Pure Virtual Functions).
//

//========================================================================
//
//    Public Member Functions (Virtual Functions).
//

//========================================================================
//
//    Public Member Functions.
//

//========================================================================
//
//    Accessors.
//

//========================================================================
//
//    Properties.
//

//========================================================================
//
//    Protected Member Functions.
//

//========================================================================
//
//    For Internal Use Only.
//

}   //  End of namespace  NesMan
}   //  End of namespace  NesDbgWrap
