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

//  クラスの前方宣言。  //
ref  class  BasePpuCore;
ref  class  BaseCpuCore;


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
public:

    //----------------------------------------------------------------
    /**   CPU インスタンスを取得する。
    **
    **  インスタンスが存在しない場合は新規作成する。
    **/
    virtual  BaseCpuCore^
    getOrCreateCpuInstance();

    //----------------------------------------------------------------
    /**   PPU インスタンスを取得する。
    **
    **  インスタンスが存在しない場合は新規作成する。
    **/
    virtual  BasePpuCore^
    getOrCreatePpuInstance();

    //----------------------------------------------------------------
    /**   ROM ファイルを読み込む。
    **
    **  @param [in] fileName    ファイル名。
    **  @return     エラーコードを返す。
    **      -   異常終了の場合は、
    **          エラーの種類を示す非ゼロ値を返す。
    **      -   正常終了の場合は、ゼロを返す。
    **/
    virtual  void
    openRomFile(
            System::String^ fileName);

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

    BaseCpuCore^    m_wCpuCur;

    BasePpuCore^    m_wPpuCur;
};

}   //  End of namespace  NesMan
}   //  End of namespace  NesDbgWrap
