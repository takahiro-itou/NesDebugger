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
**      An Implementation of NesManager class.
**
**      @file       Images/NesManager.cpp
**/

#include    "PreCompile.h"

#include    <msclr/marshal_cppstd.h>

#include    "NesManager.h"
#include    "BaseCpuCore.h"
#include    "BasePpuCore.h"


namespace  NesDbgWrap  {
namespace  NesMan  {

namespace  {

}   //  End of (Unnamed) namespace


//========================================================================
//
//    NesManager  class.
//

//========================================================================
//
//    Constructor(s) and Destructor.
//

//----------------------------------------------------------------
//    インスタンスを初期化する
//  （デフォルトコンストラクタ）。
//

NesManager::NesManager()
    : m_ptrObj(new WrapTarget())
{
}

//----------------------------------------------------------------
//    インスタンスを破棄する
//  （デストラクタ）。
//

NesManager::~NesManager()
{
    //  マネージドリソースを破棄する。              //

    //  続いて、アンマネージドリソースも破棄する。  //
    this->!NesManager();
}

//----------------------------------------------------------------
//    インスタンスを破棄する
//  （ファイナライザ）。
//

NesManager::!NesManager()
{
    delete  this->m_ptrObj;
    this->m_ptrObj  = nullptr;
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
//    CPU インスタンスを取得する。
//

BaseCpuCore^
NesManager::getOrCreateCpuInstance()
{
    if ( this->m_wCpuCur == nullptr ) {
        this->m_wCpuCur = gcnew BaseCpuCore(
                this->m_ptrObj->getOrCreateCpuInstance());
    }
    return ( this->m_wCpuCur );
}

//----------------------------------------------------------------
//    PPU インスタンスを取得する。
//

BasePpuCore^
NesManager::getOrCreatePpuInstance()
{
    if ( this->m_wPpuCur == nullptr ) {
    }
    return ( this->m_wPpuCur );
}

//----------------------------------------------------------------
//    ROM ファイルを読み込む。
//

void
NesManager::openRomFile(
        System::String^ fileName)
{
    std::string tmp = msclr::interop::marshal_as<std::string>(fileName);
    this->m_ptrObj->openRomFile(tmp.c_str());
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
//    ラップ対象オブジェクトを取得する。
//

NesManager::WrapTarget  *
NesManager::UnmanagedObject::get()
{
    return ( this->m_ptrObj );
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
