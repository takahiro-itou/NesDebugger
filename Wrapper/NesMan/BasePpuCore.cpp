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
**      An Implementation of BasePpuCore class.
**
**      @file       Images/BasePpuCore.cpp
**/

#include    "PreCompile.h"

#include    "BasePpuCore.h"
#include    "NesManager.h"
#include    "../Images/FullColorImage.h"

#include    "NesDbg/NesMan/NesManager.h"
#include    "../../Core/Lib/NesMan/PpuNes/NesPpuImpl.h"


namespace  NesDbgWrap  {
namespace  NesMan  {

namespace  {

}   //  End of (Unnamed) namespace


//========================================================================
//
//    BasePpuCore  class.
//

//========================================================================
//
//    Constructor(s) and Destructor.
//

//----------------------------------------------------------------
//    インスタンスを初期化する
//  （コンストラクタ）。
//

BasePpuCore::BasePpuCore(
        NesManager^ manNes)
    : Super(manNes->UnmanagedObject->getOrCreatePpuInstance()),
      m_wImage(nullptr)
{
}

//----------------------------------------------------------------
//    インスタンスを破棄する
//  （デストラクタ）。
//

BasePpuCore::~BasePpuCore()
{
    //  マネージドリソースを破棄する。              //

    //  続いて、アンマネージドリソースも破棄する。  //
    this->!BasePpuCore();
}

//----------------------------------------------------------------
//    インスタンスを破棄する
//  （ファイナライザ）。
//

BasePpuCore::!BasePpuCore()
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

//----------------------------------------------------------------
//    画面を描画する。
//

void
BasePpuCore::drawScreen()
{
    this->UnmanagedObject->drawScreen();
}

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

//----------------------------------------------------------------
//    イメージオブジェクトを取得する。
//

Images::FullColorImage^
NesMan::BasePpuCore::TargetImage::get()
{
    return ( this->m_wImage );
}

//----------------------------------------------------------------
//    イメージオブジェクトを設定する。
//

void
NesMan::BasePpuCore::TargetImage::set(Images::FullColorImage^ value)
{
    this->m_wImage  = value;
    this->UnmanagedObject->setScreenImage(value->UnmanagedObject);
}

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
