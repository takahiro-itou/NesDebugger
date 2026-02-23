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
**      An Interface of BasePpuCore class.
**
**      @file       NesMan/BasePpuCore.h
**/

#pragma once

#if !defined( NESDBG_NESMAN_INCLUDED_BASE_PPU_CORE_H )
#    include    "NesDbg/NesMan/BasePpuCore.h"
#endif


//  クラスの前方宣言。  //
namespace  NesDbg  {
namespace  NesMan  {
class   NesManager;
class   NesPpuImpl;
}   //  End of namespace  NesMan
}   //  End of namespace  NesDbg

using namespace System;

namespace  NesDbgWrap  {

//  クラスの前方宣言。  //
namespace  Images  {
ref  class  FullColorImage;
}   //  End of namespace  Images

namespace  NesMan  {

//  クラスの前方宣言。  //
ref  class  NesManager;

//========================================================================
//
//    BasePpuCore  class.
//

public ref  class  BasePpuCore
{

//========================================================================
//
//    Internal Type Definitions.
//
private:

    //  typedef     NesDbg::NesMan::BasePpuCore     WrapTarget;
    typedef     NesDbg::NesMan::NesPpuImpl      WrapTarget;

    typedef     NesDbg::NesMan::NesManager      WrapNesMan;

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
    BasePpuCore(
            NesManager^ manNes);

    //----------------------------------------------------------------
    /**   インスタンスを破棄する
    **  （デストラクタ）。
    **
    **/
    virtual  ~BasePpuCore();

    //----------------------------------------------------------------
    /**   インスタンスを破棄する
    **  （ファイナライザ）。
    **
    **/
    !BasePpuCore();

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
    /**   画面を描画する。
    **
    **/
    virtual  void
    drawScreen();

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
    /**   イメージオブジェクト。
    **
    **/
    property    Images::FullColorImage^     TargetImage
    {
        Images::FullColorImage^ get();
        void set(Images::FullColorImage^ value);
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

    WrapNesMan  *   m_pManNes;

    WrapTarget  *   m_ptrObj;

    NesManager ^    m_wManNes;

    Images::FullColorImage^     m_wImage;

};

}   //  End of namespace  NesMan
}   //  End of namespace  NesDbgWrap
