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
**      An Interface of ReferenceWrapper class.
**
**      @file       NesMan/ReferenceWrapper.h
**/

#pragma once

#if !defined( NESDBG_SYS_STL_INCLUDED_MEMORY )
#    include    <memory>
#    define   NESDBG_SYS_STL_INCLUDED_MEMORY
#endif


using namespace System;

namespace  NesDbgWrap  {
namespace  NesMan  {


//========================================================================
//
//    ReferenceWrapper  class.
//

template  <typename T>
public ref  class  ReferenceWrapper
{

//========================================================================
//
//    Internal Type Definitions.
//
private:

    /**   ラップ対象の型。          **/
    typedef     T                   WrapTarget;

    /**   ラップ対象のポインタ型。  **/
#if defined( NESDBG_DISABLE_SHAREDPTR )
    typedef     T *                 PWrapTarget;
#else
    typedef     std::shared_ptr<T>  PWrapTarget;
#endif


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
#if defined( NESDBG_DISABLE_SHAREDPTR )
    ReferenceWrapper(
            PWrapTarget  const  ptrObj)
        : m_ptrObj(ptrObj)
    { }
#else
    ReferenceWrapper(
            PWrapTarget  const  ptrObj)
        : m_ptrObj(new PWrapTarget())
    {
        this->m_ptrObj->operator = (ptrObj);
    }
#endif

    //----------------------------------------------------------------
    /**   インスタンスを破棄する
    **  （デストラクタ）。
    **
    **/
    virtual  ~ReferenceWrapper()
    {
        //  マネージドリソースを破棄する。              //

        //  続いて、アンマネージドリソースも破棄する。  //
        this->!ReferenceWrapper();
    }

    //----------------------------------------------------------------
    /**   インスタンスを破棄する
    **  （ファイナライザ）。
    **
    **/
    !ReferenceWrapper()
    {
#if defined( NESDBG_DISABLE_SHAREDPTR )
        //  すでに存在しているインスタンスの    //
        //  参照を保持しているだけであるから、  //
        //  リソースを解放してはいけない。      //
#else
        //  ただし、ポインタを格納するための    //
        //  領域自体は不要になるので削除する。  //
        delete  this->m_ptrObj;
#endif
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
private:

#if defined( NESDBG_DISABLE_SHAREDPTR )
    PWrapTarget     m_ptrObj;
#else
    PWrapTarget *   m_ptrObj;
#endif

};

}   //  End of namespace  NesMan
}   //  End of namespace  NesDbgWrap
