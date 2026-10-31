#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DF7A0
// Address: 0x2df7a0 - 0x2df890
void sub_002DF7A0_0x2df7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF7A0_0x2df7a0");
#endif

    switch (ctx->pc) {
        case 0x2df7dcu: goto label_2df7dc;
        case 0x2df7ecu: goto label_2df7ec;
        default: break;
    }

    ctx->pc = 0x2df7a0u;

    // 0x2df7a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2df7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2df7a4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2df7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2df7a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2df7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2df7ac: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x2df7acu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2df7b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2df7b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df7b4: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x2df7b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2df7b8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2df7b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2df7bc: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2df7bcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2df7c0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2df7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2df7c4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2df7c4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2df7c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2df7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2df7cc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2df7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2df7d0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2df7d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2df7d4: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2DF7D4u;
    SET_GPR_U32(ctx, 31, 0x2DF7DCu);
    ctx->pc = 0x2DF7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF7D4u;
    // 0x2df7d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AE40u, 0x2DF7D4u, 0x2DF7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF7DCu;
label_2df7dc:
    // 0x2df7dc: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2df7dcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x2df7e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2df7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df7e4: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2DF7E4u;
    SET_GPR_U32(ctx, 31, 0x2DF7ECu);
    ctx->pc = 0x2DF7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF7E4u;
    // 0x2df7e8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AE40u, 0x2DF7E4u, 0x2DF7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF7ECu;
label_2df7ec:
    // 0x2df7ec: 0xc6230024  lwc1        $f3, 0x24($s1)
    ctx->pc = 0x2df7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2df7f0: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x2df7f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
    // 0x2df7f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2df7f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2df7f8: 0x4603a834  c.lt.s      $f21, $f3
    ctx->pc = 0x2df7f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2df7fc: 0x46010142  mul.s       $f5, $f0, $f1
    ctx->pc = 0x2df7fcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2df800: 0x4605a129  min.s       $f4, $f20, $f5
    ctx->pc = 0x2df800u;
    ctx->f[4] = std::min(ctx->f[20], ctx->f[5]);
    // 0x2df804: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x2DF804u;
    {
        const bool branch_taken_0x2df804 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DF808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF804u;
        // 0x2df808: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df804) {
            ctx->pc = 0x2DF870u;
            goto label_2df870;
        }
    }
    ctx->pc = 0x2DF80Cu;
    // 0x2df80c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2df80cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2df810: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2df810u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2df814: 0x4603a841  sub.s       $f1, $f21, $f3
    ctx->pc = 0x2df814u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[3]);
    // 0x2df818: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2df818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2df81c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2df81cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2df820: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2df820u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2df824: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2df824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2df828: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2df828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2df82c: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x2df82cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2df830: 0x0  nop
    ctx->pc = 0x2df830u;
    // NOP
    // 0x2df834: 0x0  nop
    ctx->pc = 0x2df834u;
    // NOP
    // 0x2df838: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2df838u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2df83c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2DF83Cu;
    {
        const bool branch_taken_0x2df83c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DF840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF83Cu;
        // 0x2df840: 0x46030b40  add.s       $f13, $f1, $f3 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df83c) {
            ctx->pc = 0x2DF868u;
            goto label_2df868;
        }
    }
    ctx->pc = 0x2DF844u;
    // 0x2df844: 0x46162001  sub.s       $f0, $f4, $f22
    ctx->pc = 0x2df844u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[22]);
    // 0x2df848: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2df848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2df84c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2df84cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2df850: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2df850u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2df854: 0x0  nop
    ctx->pc = 0x2df854u;
    // NOP
    // 0x2df858: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x2df858u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x2df85c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2df85cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2df860: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2df860u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2df864: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x2df864u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
label_2df868:
    // 0x2df868: 0x460d2002  mul.s       $f0, $f4, $f13
    ctx->pc = 0x2df868u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[13]);
    // 0x2df86c: 0x46050029  min.s       $f0, $f0, $f5
    ctx->pc = 0x2df86cu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[5]);
label_2df870:
    // 0x2df870: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2df870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df874: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2df874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2df878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df87c: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x2df87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2df880: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x2df880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2df884: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2df884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2df888: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF888u;
        // 0x2df88c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF890u;
}
