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
**      An Interface of NesManager class.
**
**      @file       NesMan/NesManager.h
**/

#pragma once

#include    "NesDbg/NesMan/NesManager.h"


using namespace System;

namespace  NesDbgWrap  {
namespace  NesMan  {

//========================================================================
//
//    NesManager  class.
//

public ref  class  NesManager
{

//========================================================================
//
//    Internal Type Definitions.
//
private:

    typedef     NesDbg::NesMan::NesManager      WrapTarget;

//========================================================================
//
//    Constructor(s) and Destructor.
//
public:

    //----------------------------------------------------------------
    /**   インスタンスを初期化する
    **  （デフォルトコンストラクタ）。
    **
    **/
    NesManager();

    //----------------------------------------------------------------
    /**   インスタンスを破棄する
    **  （デストラクタ）。
    **
    **/
    virtual  ~NesManager();

    //----------------------------------------------------------------
    /**   インスタンスを破棄する
    **  （ファイナライザ）。
    **
    **/
    !NesManager();

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
public:

    //----------------------------------------------------------------
    /**   ラップ対象オブジェクトを取得する。
    **
    **/
    property    WrapTarget  *
    UnmanagedObject
    {
        WrapTarget *    get();
    }

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
private:

    WrapTarget  *   m_ptrObj;
};

}   //  End of namespace  NesMan
}   //  End of namespace  NesDbgWrap
