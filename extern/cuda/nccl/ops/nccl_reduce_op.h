// ***************************************************************
// Copyright (c) 2020 
//     Guoye Yang <498731903@qq.com>. 
//     Dun Liang <randonlang@gmail.com>. 
// All Rights Reserved.
// This file is subject to the terms and conditions defined in
// file 'LICENSE.txt', which is part of this source code package.
// ***************************************************************
#pragma once
#include "op.h"

namespace jittor {

struct NcclReduceOp : Op {
    Var* x, * y;
    int root;

    NcclReduceOp(Var* x, int root);
    void infer_shape() override;
    
    const char* name() const override { return "nccl_reduce"; }
    DECLARE_jit_run;
};

} // jittor