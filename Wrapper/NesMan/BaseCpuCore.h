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
**      An Interface of BaseCpuCore class.
**
**      @file       NesMan/BaseCpuCore.h
**/

#pragma once

#include    "../Common/ReferenceWrapper.h"


//  クラスの前方宣言。  //
namespace  NesDbg  {
namespace  NesMan  {
class   BaseCpuCore;
}   //  End of namespace  NesMan
}   //  End of namespace  NesDbg

using namespace System;

namespace  NesDbgWrap  {
namespace  NesMan  {


//========================================================================
//
//    BaseCpuCore  class.
//

public ref  class  BaseCpuCore
    : public ReferenceWrapper<NesDbg::NesMan::BaseCpuCore>
{

//========================================================================
//
//    Internal Type Definitions.
//
private:

    typedef     ReferenceWrapper<NesDbg::NesMan::BaseCpuCore>
    Super;

    typedef     typename  Super::PWrapTarget    PWrapTarget;


//========================================================================
//
//    Constructor(s) and Destructor.
//
public:

    //----------------------------------------------------------------
    /**   インスタンスを初期化する
    **  （コンストラクタ）。
    **
    **/
    BaseCpuCore(
            PWrapTarget  const  ptrObj);

    //----------------------------------------------------------------
    /**   インスタンスを破棄する
    **  （デストラクタ）。
    **
    **/
    virtual  ~BaseCpuCore();

    //----------------------------------------------------------------
    /**   インスタンスを破棄する
    **  （ファイナライザ）。
    **
    **/
    !BaseCpuCore();

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

//========================================================================
//
//    Member Variables.
//

};

}   //  End of namespace  NesMan
}   //  End of namespace  NesDbgWrap
