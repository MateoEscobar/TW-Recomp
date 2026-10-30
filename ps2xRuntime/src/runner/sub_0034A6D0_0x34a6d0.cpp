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

// Function: sub_0034A6D0
// Address: 0x34a6d0 - 0x34a8d0
void sub_0034A6D0_0x34a6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034A6D0_0x34a6d0");
#endif

    switch (ctx->pc) {
        case 0x34a6f8u: goto label_34a6f8;
        default: break;
    }

    ctx->pc = 0x34a6d0u;

    // 0x34a6d0: 0x46116300  add.s       $f12, $f12, $f17
    ctx->pc = 0x34a6d0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[17]);
    // 0x34a6d4: 0x46008186  mov.s       $f6, $f16
    ctx->pc = 0x34a6d4u;
    ctx->f[6] = FPU_MOV_S(ctx->f[16]);
    // 0x34a6d8: 0x14e00009  bnez        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x34A6D8u;
    {
        const bool branch_taken_0x34a6d8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x34A6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A6D8u;
        // 0x34a6dc: 0x460e6100  add.s       $f4, $f12, $f14 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[12], ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a6d8) {
            ctx->pc = 0x34A700u;
            goto label_34a700;
        }
    }
    ctx->pc = 0x34A6E0u;
    // 0x34a6e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34a6e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34a6e4: 0x0  nop
    ctx->pc = 0x34a6e4u;
    // NOP
    // 0x34a6e8: 0x46007836  c.le.s      $f15, $f0
    ctx->pc = 0x34a6e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[15], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a6ec: 0x0  nop
    ctx->pc = 0x34a6ecu;
    // NOP
    // 0x34a6f0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x34A6F0u;
    {
        const bool branch_taken_0x34a6f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a6f0) {
            ctx->pc = 0x34A700u;
            goto label_34a700;
        }
    }
    ctx->pc = 0x34A6F8u;
label_34a6f8:
    // 0x34a6f8: 0x3e00008  jr          $ra
    ctx->pc = 0x34A6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A6F8u;
        // 0x34a6fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A6F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A700u;
label_34a700:
    // 0x34a700: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x34a700u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x34a704: 0x0  nop
    ctx->pc = 0x34a704u;
    // NOP
    // 0x34a708: 0x46041836  c.le.s      $f3, $f4
    ctx->pc = 0x34a708u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a70c: 0x0  nop
    ctx->pc = 0x34a70cu;
    // NOP
    // 0x34a710: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x34A710u;
    {
        const bool branch_taken_0x34a710 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a710) {
            ctx->pc = 0x34A714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A710u;
            // 0x34a714: 0x460f7842  mul.s       $f1, $f15, $f15 (Delay Slot)
            ctx->f[1] = FPU_MUL_S(ctx->f[15], ctx->f[15]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A724u;
            goto label_34a724;
        }
    }
    ctx->pc = 0x34A718u;
    // 0x34a718: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x34a718u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x34a71c: 0x3e00008  jr          $ra
    ctx->pc = 0x34A71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A71Cu;
        // 0x34a720: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A71Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A724u;
label_34a724:
    // 0x34a724: 0x46063002  mul.s       $f0, $f6, $f6
    ctx->pc = 0x34a724u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x34a728: 0x46061836  c.le.s      $f3, $f6
    ctx->pc = 0x34a728u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a72c: 0x460e71c2  mul.s       $f7, $f14, $f14
    ctx->pc = 0x34a72cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x34a730: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x34A730u;
    {
        const bool branch_taken_0x34a730 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34A734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A730u;
        // 0x34a734: 0x46000a00  add.s       $f8, $f1, $f0 (Delay Slot)
        ctx->f[8] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a730) {
            ctx->pc = 0x34A7F0u;
            goto label_34a7f0;
        }
    }
    ctx->pc = 0x34A738u;
    // 0x34a738: 0x46126c01  sub.s       $f16, $f13, $f18
    ctx->pc = 0x34a738u;
    ctx->f[16] = FPU_SUB_S(ctx->f[13], ctx->f[18]);
    // 0x34a73c: 0x460c3042  mul.s       $f1, $f6, $f12
    ctx->pc = 0x34a73cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
    // 0x34a740: 0x46107802  mul.s       $f0, $f15, $f16
    ctx->pc = 0x34a740u;
    ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[16]);
    // 0x34a744: 0x46010081  sub.s       $f2, $f0, $f1
    ctx->pc = 0x34a744u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x34a748: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x34a748u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a74c: 0x0  nop
    ctx->pc = 0x34a74cu;
    // NOP
    // 0x34a750: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x34A750u;
    {
        const bool branch_taken_0x34a750 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a750) {
            ctx->pc = 0x34A754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A750u;
            // 0x34a754: 0x46067002  mul.s       $f0, $f14, $f6 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[6]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A774u;
            goto label_34a774;
        }
    }
    ctx->pc = 0x34A758u;
    // 0x34a758: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x34a758u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x34a75c: 0x46083802  mul.s       $f0, $f7, $f8
    ctx->pc = 0x34a75cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
    // 0x34a760: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x34a760u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a764: 0x0  nop
    ctx->pc = 0x34a764u;
    // NOP
    // 0x34a768: 0x4501ffe3  bc1t        . + 4 + (-0x1D << 2)
    ctx->pc = 0x34A768u;
    {
        const bool branch_taken_0x34a768 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a768) {
            ctx->pc = 0x34A6F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34a6f8;
        }
    }
    ctx->pc = 0x34A770u;
    // 0x34a770: 0x46067002  mul.s       $f0, $f14, $f6
    ctx->pc = 0x34a770u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[6]);
label_34a774:
    // 0x34a774: 0x46008847  neg.s       $f1, $f17
    ctx->pc = 0x34a774u;
    ctx->f[1] = FPU_NEG_S(ctx->f[17]);
    // 0x34a778: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x34a778u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a77c: 0x0  nop
    ctx->pc = 0x34a77cu;
    // NOP
    // 0x34a780: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
    ctx->pc = 0x34A780u;
    {
        const bool branch_taken_0x34a780 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34A784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A780u;
        // 0x34a784: 0xe4a10000  swc1        $f1, 0x0($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a780) {
            ctx->pc = 0x34A840u;
            goto label_34a840;
        }
    }
    ctx->pc = 0x34A788u;
    // 0x34a788: 0x46108082  mul.s       $f2, $f16, $f16
    ctx->pc = 0x34a788u;
    ctx->f[2] = FPU_MUL_S(ctx->f[16], ctx->f[16]);
    // 0x34a78c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34a78cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34a790: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x34a790u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x34a794: 0x460c6042  mul.s       $f1, $f12, $f12
    ctx->pc = 0x34a794u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x34a798: 0x46103002  mul.s       $f0, $f6, $f16
    ctx->pc = 0x34a798u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[16]);
    // 0x34a79c: 0x460c78c2  mul.s       $f3, $f15, $f12
    ctx->pc = 0x34a79cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[15], ctx->f[12]);
    // 0x34a7a0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x34a7a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x34a7a4: 0x46001880  add.s       $f2, $f3, $f0
    ctx->pc = 0x34a7a4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x34a7a8: 0x46070981  sub.s       $f6, $f1, $f7
    ctx->pc = 0x34a7a8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x34a7ac: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x34a7acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x34a7b0: 0x46064042  mul.s       $f1, $f8, $f6
    ctx->pc = 0x34a7b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x34a7b4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x34a7b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x34a7b8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x34a7b8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x34a7bc: 0x0  nop
    ctx->pc = 0x34a7bcu;
    // NOP
    // 0x34a7c0: 0x0  nop
    ctx->pc = 0x34a7c0u;
    // NOP
    // 0x34a7c4: 0x46000004  c1          0x4
    ctx->pc = 0x34a7c4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x34a7c8: 0x0  nop
    ctx->pc = 0x34a7c8u;
    // NOP
    // 0x34a7cc: 0x0  nop
    ctx->pc = 0x34a7ccu;
    // NOP
    // 0x34a7d0: 0x46002003  div.s       $f0, $f4, $f0
    ctx->pc = 0x34a7d0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
    // 0x34a7d4: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x34a7d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x34a7d8: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x34a7d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x34a7dc: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x34a7dcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x34a7e0: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x34a7e0u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x34a7e4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x34a7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x34a7e8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x34A7E8u;
    {
        const bool branch_taken_0x34a7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A7E8u;
        // 0x34a7ec: 0xe4d20000  swc1        $f18, 0x0($a2) (Delay Slot)
        { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a7e8) {
            ctx->pc = 0x34A8C8u;
            goto label_34a8c8;
        }
    }
    ctx->pc = 0x34A7F0u;
label_34a7f0:
    // 0x34a7f0: 0x46126c00  add.s       $f16, $f13, $f18
    ctx->pc = 0x34a7f0u;
    ctx->f[16] = FPU_ADD_S(ctx->f[13], ctx->f[18]);
    // 0x34a7f4: 0x460c3042  mul.s       $f1, $f6, $f12
    ctx->pc = 0x34a7f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
    // 0x34a7f8: 0x46107802  mul.s       $f0, $f15, $f16
    ctx->pc = 0x34a7f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[16]);
    // 0x34a7fc: 0x46010081  sub.s       $f2, $f0, $f1
    ctx->pc = 0x34a7fcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x34a800: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x34a800u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a804: 0x0  nop
    ctx->pc = 0x34a804u;
    // NOP
    // 0x34a808: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x34A808u;
    {
        const bool branch_taken_0x34a808 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a808) {
            ctx->pc = 0x34A80Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A808u;
            // 0x34a80c: 0x46067002  mul.s       $f0, $f14, $f6 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[6]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A82Cu;
            goto label_34a82c;
        }
    }
    ctx->pc = 0x34A810u;
    // 0x34a810: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x34a810u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x34a814: 0x46083802  mul.s       $f0, $f7, $f8
    ctx->pc = 0x34a814u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
    // 0x34a818: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x34a818u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a81c: 0x0  nop
    ctx->pc = 0x34a81cu;
    // NOP
    // 0x34a820: 0x4501ffb5  bc1t        . + 4 + (-0x4B << 2)
    ctx->pc = 0x34A820u;
    {
        const bool branch_taken_0x34a820 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a820) {
            ctx->pc = 0x34A6F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34a6f8;
        }
    }
    ctx->pc = 0x34A828u;
    // 0x34a828: 0x46067002  mul.s       $f0, $f14, $f6
    ctx->pc = 0x34a828u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[6]);
label_34a82c:
    // 0x34a82c: 0x46008847  neg.s       $f1, $f17
    ctx->pc = 0x34a82cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[17]);
    // 0x34a830: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x34a830u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a834: 0x0  nop
    ctx->pc = 0x34a834u;
    // NOP
    // 0x34a838: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x34A838u;
    {
        const bool branch_taken_0x34a838 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34A83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A838u;
        // 0x34a83c: 0xe4a10000  swc1        $f1, 0x0($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a838) {
            ctx->pc = 0x34A860u;
            goto label_34a860;
        }
    }
    ctx->pc = 0x34A840u;
label_34a840:
    // 0x34a840: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x34a840u;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
    // 0x34a844: 0x0  nop
    ctx->pc = 0x34a844u;
    // NOP
    // 0x34a848: 0x460f0003  div.s       $f0, $f0, $f15
    ctx->pc = 0x34a848u;
    { if (ctx->f[15] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[15]); }
    // 0x34a84c: 0x46060042  mul.s       $f1, $f0, $f6
    ctx->pc = 0x34a84cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x34a850: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x34a850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x34a854: 0x46016840  add.s       $f1, $f13, $f1
    ctx->pc = 0x34a854u;
    ctx->f[1] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
    // 0x34a858: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x34A858u;
    {
        const bool branch_taken_0x34a858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A858u;
        // 0x34a85c: 0xe4c10000  swc1        $f1, 0x0($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a858) {
            ctx->pc = 0x34A8C8u;
            goto label_34a8c8;
        }
    }
    ctx->pc = 0x34A860u;
label_34a860:
    // 0x34a860: 0x46108002  mul.s       $f0, $f16, $f16
    ctx->pc = 0x34a860u;
    ctx->f[0] = FPU_MUL_S(ctx->f[16], ctx->f[16]);
    // 0x34a864: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34a864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34a868: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x34a868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x34a86c: 0x460c6042  mul.s       $f1, $f12, $f12
    ctx->pc = 0x34a86cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x34a870: 0x46103082  mul.s       $f2, $f6, $f16
    ctx->pc = 0x34a870u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[16]);
    // 0x34a874: 0x460c7902  mul.s       $f4, $f15, $f12
    ctx->pc = 0x34a874u;
    ctx->f[4] = FPU_MUL_S(ctx->f[15], ctx->f[12]);
    // 0x34a878: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x34a878u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34a87c: 0x46009147  neg.s       $f5, $f18
    ctx->pc = 0x34a87cu;
    ctx->f[5] = FPU_NEG_S(ctx->f[18]);
    // 0x34a880: 0x46022080  add.s       $f2, $f4, $f2
    ctx->pc = 0x34a880u;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x34a884: 0x46070981  sub.s       $f6, $f1, $f7
    ctx->pc = 0x34a884u;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x34a888: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x34a888u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x34a88c: 0x46064042  mul.s       $f1, $f8, $f6
    ctx->pc = 0x34a88cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x34a890: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x34a890u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x34a894: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x34a894u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x34a898: 0x0  nop
    ctx->pc = 0x34a898u;
    // NOP
    // 0x34a89c: 0x0  nop
    ctx->pc = 0x34a89cu;
    // NOP
    // 0x34a8a0: 0x46000004  c1          0x4
    ctx->pc = 0x34a8a0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x34a8a4: 0x0  nop
    ctx->pc = 0x34a8a4u;
    // NOP
    // 0x34a8a8: 0x0  nop
    ctx->pc = 0x34a8a8u;
    // NOP
    // 0x34a8ac: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x34a8acu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x34a8b0: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x34a8b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x34a8b4: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x34a8b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x34a8b8: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x34a8b8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x34a8bc: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x34a8bcu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x34a8c0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x34a8c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x34a8c4: 0xe4c50000  swc1        $f5, 0x0($a2)
    ctx->pc = 0x34a8c4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_34a8c8:
    // 0x34a8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x34A8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A8C8u;
        // 0x34a8cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A8C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A8D0u;
}
