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

// Function: sub_0034A318
// Address: 0x34a318 - 0x34a6a0
void sub_0034A318_0x34a318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034A318_0x34a318");
#endif

    switch (ctx->pc) {
        case 0x34a360u: goto label_34a360;
        default: break;
    }

    ctx->pc = 0x34a318u;

    // 0x34a318: 0x46116180  add.s       $f6, $f12, $f17
    ctx->pc = 0x34a318u;
    ctx->f[6] = FPU_ADD_S(ctx->f[12], ctx->f[17]);
    // 0x34a31c: 0x46007106  mov.s       $f4, $f14
    ctx->pc = 0x34a31cu;
    ctx->f[4] = FPU_MOV_S(ctx->f[14]);
    // 0x34a320: 0x461269c0  add.s       $f7, $f13, $f18
    ctx->pc = 0x34a320u;
    ctx->f[7] = FPU_ADD_S(ctx->f[13], ctx->f[18]);
    // 0x34a324: 0x460422c2  mul.s       $f11, $f4, $f4
    ctx->pc = 0x34a324u;
    ctx->f[11] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x34a328: 0x46063042  mul.s       $f1, $f6, $f6
    ctx->pc = 0x34a328u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x34a32c: 0x460738c2  mul.s       $f3, $f7, $f7
    ctx->pc = 0x34a32cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x34a330: 0x46067882  mul.s       $f2, $f15, $f6
    ctx->pc = 0x34a330u;
    ctx->f[2] = FPU_MUL_S(ctx->f[15], ctx->f[6]);
    // 0x34a334: 0x46078002  mul.s       $f0, $f16, $f7
    ctx->pc = 0x34a334u;
    ctx->f[0] = FPU_MUL_S(ctx->f[16], ctx->f[7]);
    // 0x34a338: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x34a338u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x34a33c: 0x46001380  add.s       $f14, $f2, $f0
    ctx->pc = 0x34a33cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x34a340: 0x14e00009  bnez        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x34A340u;
    {
        const bool branch_taken_0x34a340 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x34A344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A340u;
        // 0x34a344: 0x460b0a01  sub.s       $f8, $f1, $f11 (Delay Slot)
        ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[11]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a340) {
            ctx->pc = 0x34A368u;
            goto label_34a368;
        }
    }
    ctx->pc = 0x34A348u;
    // 0x34a348: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34a348u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34a34c: 0x0  nop
    ctx->pc = 0x34a34cu;
    // NOP
    // 0x34a350: 0x460e0036  c.le.s      $f0, $f14
    ctx->pc = 0x34a350u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a354: 0x0  nop
    ctx->pc = 0x34a354u;
    // NOP
    // 0x34a358: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x34A358u;
    {
        const bool branch_taken_0x34a358 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a358) {
            ctx->pc = 0x34A368u;
            goto label_34a368;
        }
    }
    ctx->pc = 0x34A360u;
label_34a360:
    // 0x34a360: 0x3e00008  jr          $ra
    ctx->pc = 0x34A360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A360u;
        // 0x34a364: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A368u;
label_34a368:
    // 0x34a368: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x34a368u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x34a36c: 0x0  nop
    ctx->pc = 0x34a36cu;
    // NOP
    // 0x34a370: 0x46094036  c.le.s      $f8, $f9
    ctx->pc = 0x34a370u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a374: 0x0  nop
    ctx->pc = 0x34a374u;
    // NOP
    // 0x34a378: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x34A378u;
    {
        const bool branch_taken_0x34a378 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a378) {
            ctx->pc = 0x34A37Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A378u;
            // 0x34a37c: 0x46077a82  mul.s       $f10, $f15, $f7 (Delay Slot)
            ctx->f[10] = FPU_MUL_S(ctx->f[15], ctx->f[7]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A38Cu;
            goto label_34a38c;
        }
    }
    ctx->pc = 0x34A380u;
    // 0x34a380: 0xe4890000  swc1        $f9, 0x0($a0)
    ctx->pc = 0x34a380u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x34a384: 0x3e00008  jr          $ra
    ctx->pc = 0x34A384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A384u;
        // 0x34a388: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A38Cu;
label_34a38c:
    // 0x34a38c: 0x460680c2  mul.s       $f3, $f16, $f6
    ctx->pc = 0x34a38cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[16], ctx->f[6]);
    // 0x34a390: 0x46035081  sub.s       $f2, $f10, $f3
    ctx->pc = 0x34a390u;
    ctx->f[2] = FPU_SUB_S(ctx->f[10], ctx->f[3]);
    // 0x34a394: 0x46024836  c.le.s      $f9, $f2
    ctx->pc = 0x34a394u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a398: 0x0  nop
    ctx->pc = 0x34a398u;
    // NOP
    // 0x34a39c: 0x45020062  bc1fl       . + 4 + (0x62 << 2)
    ctx->pc = 0x34A39Cu;
    {
        const bool branch_taken_0x34a39c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a39c) {
            ctx->pc = 0x34A3A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A39Cu;
            // 0x34a3a0: 0x460f2002  mul.s       $f0, $f4, $f15 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[15]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A528u;
            goto label_34a528;
        }
    }
    ctx->pc = 0x34A3A4u;
    // 0x34a3a4: 0x46102002  mul.s       $f0, $f4, $f16
    ctx->pc = 0x34a3a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[16]);
    // 0x34a3a8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x34a3a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a3ac: 0x0  nop
    ctx->pc = 0x34a3acu;
    // NOP
    // 0x34a3b0: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x34A3B0u;
    {
        const bool branch_taken_0x34a3b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34A3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A3B0u;
        // 0x34a3b4: 0x46000286  mov.s       $f10, $f0 (Delay Slot)
        ctx->f[10] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a3b0) {
            ctx->pc = 0x34A440u;
            goto label_34a440;
        }
    }
    ctx->pc = 0x34A3B8u;
    // 0x34a3b8: 0x46108042  mul.s       $f1, $f16, $f16
    ctx->pc = 0x34a3b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[16], ctx->f[16]);
    // 0x34a3bc: 0x460f7902  mul.s       $f4, $f15, $f15
    ctx->pc = 0x34a3bcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[15], ctx->f[15]);
    // 0x34a3c0: 0x460e7002  mul.s       $f0, $f14, $f14
    ctx->pc = 0x34a3c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x34a3c4: 0x46008887  neg.s       $f2, $f17
    ctx->pc = 0x34a3c4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[17]);
    // 0x34a3c8: 0x46012140  add.s       $f5, $f4, $f1
    ctx->pc = 0x34a3c8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x34a3cc: 0x460090c7  neg.s       $f3, $f18
    ctx->pc = 0x34a3ccu;
    ctx->f[3] = FPU_NEG_S(ctx->f[18]);
    // 0x34a3d0: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x34a3d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x34a3d4: 0x46082842  mul.s       $f1, $f5, $f8
    ctx->pc = 0x34a3d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x34a3d8: 0xe4c30000  swc1        $f3, 0x0($a2)
    ctx->pc = 0x34a3d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x34a3dc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x34a3dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x34a3e0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x34a3e0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x34a3e4: 0x0  nop
    ctx->pc = 0x34a3e4u;
    // NOP
    // 0x34a3e8: 0x0  nop
    ctx->pc = 0x34a3e8u;
    // NOP
    // 0x34a3ec: 0x46000044  c1          0x44
    ctx->pc = 0x34a3ecu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x34a3f0: 0x46090832  c.eq.s      $f1, $f9
    ctx->pc = 0x34a3f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a3f4: 0x0  nop
    ctx->pc = 0x34a3f4u;
    // NOP
    // 0x34a3f8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x34A3F8u;
    {
        const bool branch_taken_0x34a3f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A3F8u;
        // 0x34a3fc: 0x46004886  mov.s       $f2, $f9 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[9]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a3f8) {
            ctx->pc = 0x34A418u;
            goto label_34a418;
        }
    }
    ctx->pc = 0x34A400u;
    // 0x34a400: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34a400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34a404: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34a404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34a408: 0x0  nop
    ctx->pc = 0x34a408u;
    // NOP
    // 0x34a40c: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x34a40cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x34a410: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x34A410u;
    {
        const bool branch_taken_0x34a410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A410u;
        // 0x34a414: 0x46027002  mul.s       $f0, $f14, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a410) {
            ctx->pc = 0x34A41Cu;
            goto label_34a41c;
        }
    }
    ctx->pc = 0x34A418u;
label_34a418:
    // 0x34a418: 0x46027002  mul.s       $f0, $f14, $f2
    ctx->pc = 0x34a418u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
label_34a41c:
    // 0x34a41c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34a41cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34a420: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x34a420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34a424: 0x46024082  mul.s       $f2, $f8, $f2
    ctx->pc = 0x34a424u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x34a428: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34a428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a42c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x34a42cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34a430: 0x0  nop
    ctx->pc = 0x34a430u;
    // NOP
    // 0x34a434: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x34a434u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x34a438: 0x3e00008  jr          $ra
    ctx->pc = 0x34A438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A438u;
        // 0x34a43c: 0xe4820000  swc1        $f2, 0x0($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A440u;
label_34a440:
    // 0x34a440: 0x46097836  c.le.s      $f15, $f9
    ctx->pc = 0x34a440u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[15], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a444: 0x0  nop
    ctx->pc = 0x34a444u;
    // NOP
    // 0x34a448: 0x4501ffc5  bc1t        . + 4 + (-0x3B << 2)
    ctx->pc = 0x34A448u;
    {
        const bool branch_taken_0x34a448 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a448) {
            ctx->pc = 0x34A360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34a360;
        }
    }
    ctx->pc = 0x34A450u;
    // 0x34a450: 0x461269c1  sub.s       $f7, $f13, $f18
    ctx->pc = 0x34a450u;
    ctx->f[7] = FPU_SUB_S(ctx->f[13], ctx->f[18]);
    // 0x34a454: 0x460f7802  mul.s       $f0, $f15, $f15
    ctx->pc = 0x34a454u;
    ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[15]);
    // 0x34a458: 0x46108042  mul.s       $f1, $f16, $f16
    ctx->pc = 0x34a458u;
    ctx->f[1] = FPU_MUL_S(ctx->f[16], ctx->f[16]);
    // 0x34a45c: 0x46077882  mul.s       $f2, $f15, $f7
    ctx->pc = 0x34a45cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[15], ctx->f[7]);
    // 0x34a460: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x34a460u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x34a464: 0x46024836  c.le.s      $f9, $f2
    ctx->pc = 0x34a464u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a468: 0x0  nop
    ctx->pc = 0x34a468u;
    // NOP
    // 0x34a46c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x34A46Cu;
    {
        const bool branch_taken_0x34a46c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34A470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A46Cu;
        // 0x34a470: 0x46010140  add.s       $f5, $f0, $f1 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a46c) {
            ctx->pc = 0x34A48Cu;
            goto label_34a48c;
        }
    }
    ctx->pc = 0x34A474u;
    // 0x34a474: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x34a474u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x34a478: 0x46055802  mul.s       $f0, $f11, $f5
    ctx->pc = 0x34a478u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[5]);
    // 0x34a47c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x34a47cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a480: 0x0  nop
    ctx->pc = 0x34a480u;
    // NOP
    // 0x34a484: 0x4501ffb6  bc1t        . + 4 + (-0x4A << 2)
    ctx->pc = 0x34A484u;
    {
        const bool branch_taken_0x34a484 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a484) {
            ctx->pc = 0x34A360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34a360;
        }
    }
    ctx->pc = 0x34A48Cu;
label_34a48c:
    // 0x34a48c: 0x46008807  neg.s       $f0, $f17
    ctx->pc = 0x34a48cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[17]);
    // 0x34a490: 0x460a1036  c.le.s      $f2, $f10
    ctx->pc = 0x34a490u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a494: 0x0  nop
    ctx->pc = 0x34a494u;
    // NOP
    // 0x34a498: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x34A498u;
    {
        const bool branch_taken_0x34a498 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A498u;
        // 0x34a49c: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a498) {
            ctx->pc = 0x34A4C0u;
            goto label_34a4c0;
        }
    }
    ctx->pc = 0x34A4A0u;
    // 0x34a4a0: 0x46043000  add.s       $f0, $f6, $f4
    ctx->pc = 0x34a4a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x34a4a4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x34a4a4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x34a4a8: 0x460f0003  div.s       $f0, $f0, $f15
    ctx->pc = 0x34a4a8u;
    { if (ctx->f[15] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[15]); }
    // 0x34a4ac: 0x46100042  mul.s       $f1, $f0, $f16
    ctx->pc = 0x34a4acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[16]);
    // 0x34a4b0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x34a4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x34a4b4: 0x46016840  add.s       $f1, $f13, $f1
    ctx->pc = 0x34a4b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
    // 0x34a4b8: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x34A4B8u;
    {
        const bool branch_taken_0x34a4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A4B8u;
        // 0x34a4bc: 0xe4c10000  swc1        $f1, 0x0($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a4b8) {
            ctx->pc = 0x34A694u;
            goto label_34a694;
        }
    }
    ctx->pc = 0x34A4C0u;
label_34a4c0:
    // 0x34a4c0: 0x46073882  mul.s       $f2, $f7, $f7
    ctx->pc = 0x34a4c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x34a4c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34a4c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34a4c8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x34a4c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x34a4cc: 0x46063042  mul.s       $f1, $f6, $f6
    ctx->pc = 0x34a4ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x34a4d0: 0x46078002  mul.s       $f0, $f16, $f7
    ctx->pc = 0x34a4d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[16], ctx->f[7]);
    // 0x34a4d4: 0x460678c2  mul.s       $f3, $f15, $f6
    ctx->pc = 0x34a4d4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[15], ctx->f[6]);
    // 0x34a4d8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x34a4d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x34a4dc: 0x46001b80  add.s       $f14, $f3, $f0
    ctx->pc = 0x34a4dcu;
    ctx->f[14] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x34a4e0: 0x460b0a01  sub.s       $f8, $f1, $f11
    ctx->pc = 0x34a4e0u;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[11]);
    // 0x34a4e4: 0x460e7002  mul.s       $f0, $f14, $f14
    ctx->pc = 0x34a4e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x34a4e8: 0x46082842  mul.s       $f1, $f5, $f8
    ctx->pc = 0x34a4e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x34a4ec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x34a4ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x34a4f0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x34a4f0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x34a4f4: 0x0  nop
    ctx->pc = 0x34a4f4u;
    // NOP
    // 0x34a4f8: 0x0  nop
    ctx->pc = 0x34a4f8u;
    // NOP
    // 0x34a4fc: 0x46000004  c1          0x4
    ctx->pc = 0x34a4fcu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x34a500: 0x0  nop
    ctx->pc = 0x34a500u;
    // NOP
    // 0x34a504: 0x0  nop
    ctx->pc = 0x34a504u;
    // NOP
    // 0x34a508: 0x46002083  div.s       $f2, $f4, $f0
    ctx->pc = 0x34a508u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
    // 0x34a50c: 0x46027042  mul.s       $f1, $f14, $f2
    ctx->pc = 0x34a50cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x34a510: 0x46024002  mul.s       $f0, $f8, $f2
    ctx->pc = 0x34a510u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x34a514: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x34a514u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x34a518: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x34a518u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x34a51c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x34a51cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x34a520: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x34A520u;
    {
        const bool branch_taken_0x34a520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A520u;
        // 0x34a524: 0xe4d20000  swc1        $f18, 0x0($a2) (Delay Slot)
        { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a520) {
            ctx->pc = 0x34A694u;
            goto label_34a694;
        }
    }
    ctx->pc = 0x34A528u;
label_34a528:
    // 0x34a528: 0x46001047  neg.s       $f1, $f2
    ctx->pc = 0x34a528u;
    ctx->f[1] = FPU_NEG_S(ctx->f[2]);
    // 0x34a52c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34a52cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a530: 0x0  nop
    ctx->pc = 0x34a530u;
    // NOP
    // 0x34a534: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x34A534u;
    {
        const bool branch_taken_0x34a534 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34A538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A534u;
        // 0x34a538: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a534) {
            ctx->pc = 0x34A5A4u;
            goto label_34a5a4;
        }
    }
    ctx->pc = 0x34A53Cu;
    // 0x34a53c: 0x46108042  mul.s       $f1, $f16, $f16
    ctx->pc = 0x34a53cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[16], ctx->f[16]);
    // 0x34a540: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34a540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34a544: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x34a544u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x34a548: 0x460f7942  mul.s       $f5, $f15, $f15
    ctx->pc = 0x34a548u;
    ctx->f[5] = FPU_MUL_S(ctx->f[15], ctx->f[15]);
    // 0x34a54c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34a54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a550: 0x460e7002  mul.s       $f0, $f14, $f14
    ctx->pc = 0x34a550u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x34a554: 0x46008887  neg.s       $f2, $f17
    ctx->pc = 0x34a554u;
    ctx->f[2] = FPU_NEG_S(ctx->f[17]);
    // 0x34a558: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x34a558u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x34a55c: 0x460090c7  neg.s       $f3, $f18
    ctx->pc = 0x34a55cu;
    ctx->f[3] = FPU_NEG_S(ctx->f[18]);
    // 0x34a560: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x34a560u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x34a564: 0x46082842  mul.s       $f1, $f5, $f8
    ctx->pc = 0x34a564u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x34a568: 0xe4c30000  swc1        $f3, 0x0($a2)
    ctx->pc = 0x34a568u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x34a56c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x34a56cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x34a570: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x34a570u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x34a574: 0x0  nop
    ctx->pc = 0x34a574u;
    // NOP
    // 0x34a578: 0x0  nop
    ctx->pc = 0x34a578u;
    // NOP
    // 0x34a57c: 0x46000004  c1          0x4
    ctx->pc = 0x34a57cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x34a580: 0x0  nop
    ctx->pc = 0x34a580u;
    // NOP
    // 0x34a584: 0x0  nop
    ctx->pc = 0x34a584u;
    // NOP
    // 0x34a588: 0x46002083  div.s       $f2, $f4, $f0
    ctx->pc = 0x34a588u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
    // 0x34a58c: 0x46027042  mul.s       $f1, $f14, $f2
    ctx->pc = 0x34a58cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x34a590: 0x46024002  mul.s       $f0, $f8, $f2
    ctx->pc = 0x34a590u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x34a594: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x34a594u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x34a598: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x34a598u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x34a59c: 0x3e00008  jr          $ra
    ctx->pc = 0x34A59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A59Cu;
        // 0x34a5a0: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A5A4u;
label_34a5a4:
    // 0x34a5a4: 0x46098036  c.le.s      $f16, $f9
    ctx->pc = 0x34a5a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[16], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a5a8: 0x0  nop
    ctx->pc = 0x34a5a8u;
    // NOP
    // 0x34a5ac: 0x4501ff6c  bc1t        . + 4 + (-0x94 << 2)
    ctx->pc = 0x34A5ACu;
    {
        const bool branch_taken_0x34a5ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a5ac) {
            ctx->pc = 0x34A360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34a360;
        }
    }
    ctx->pc = 0x34A5B4u;
    // 0x34a5b4: 0x46116181  sub.s       $f6, $f12, $f17
    ctx->pc = 0x34a5b4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[12], ctx->f[17]);
    // 0x34a5b8: 0x460f7882  mul.s       $f2, $f15, $f15
    ctx->pc = 0x34a5b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[15], ctx->f[15]);
    // 0x34a5bc: 0x46108002  mul.s       $f0, $f16, $f16
    ctx->pc = 0x34a5bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[16], ctx->f[16]);
    // 0x34a5c0: 0x46068042  mul.s       $f1, $f16, $f6
    ctx->pc = 0x34a5c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[16], ctx->f[6]);
    // 0x34a5c4: 0x46001140  add.s       $f5, $f2, $f0
    ctx->pc = 0x34a5c4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x34a5c8: 0x46015081  sub.s       $f2, $f10, $f1
    ctx->pc = 0x34a5c8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[10], ctx->f[1]);
    // 0x34a5cc: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x34a5ccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x34a5d0: 0x46004836  c.le.s      $f9, $f0
    ctx->pc = 0x34a5d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a5d4: 0x0  nop
    ctx->pc = 0x34a5d4u;
    // NOP
    // 0x34a5d8: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x34A5D8u;
    {
        const bool branch_taken_0x34a5d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a5d8) {
            ctx->pc = 0x34A5DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A5D8u;
            // 0x34a5dc: 0x46009047  neg.s       $f1, $f18 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[18]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A600u;
            goto label_34a600;
        }
    }
    ctx->pc = 0x34A5E0u;
    // 0x34a5e0: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x34a5e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x34a5e4: 0x46055802  mul.s       $f0, $f11, $f5
    ctx->pc = 0x34a5e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[5]);
    // 0x34a5e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x34a5e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a5ec: 0x0  nop
    ctx->pc = 0x34a5ecu;
    // NOP
    // 0x34a5f0: 0x4501ff5b  bc1t        . + 4 + (-0xA5 << 2)
    ctx->pc = 0x34A5F0u;
    {
        const bool branch_taken_0x34a5f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a5f0) {
            ctx->pc = 0x34A360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34a360;
        }
    }
    ctx->pc = 0x34A5F8u;
    // 0x34a5f8: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x34a5f8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x34a5fc: 0x46009047  neg.s       $f1, $f18
    ctx->pc = 0x34a5fcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[18]);
label_34a600:
    // 0x34a600: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x34a600u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a604: 0x0  nop
    ctx->pc = 0x34a604u;
    // NOP
    // 0x34a608: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x34A608u;
    {
        const bool branch_taken_0x34a608 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34A60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A608u;
        // 0x34a60c: 0xe4c10000  swc1        $f1, 0x0($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a608) {
            ctx->pc = 0x34A630u;
            goto label_34a630;
        }
    }
    ctx->pc = 0x34A610u;
    // 0x34a610: 0x46043800  add.s       $f0, $f7, $f4
    ctx->pc = 0x34a610u;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[4]);
    // 0x34a614: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x34a614u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x34a618: 0x46100003  div.s       $f0, $f0, $f16
    ctx->pc = 0x34a618u;
    { if (ctx->f[16] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[16]); }
    // 0x34a61c: 0x460f0042  mul.s       $f1, $f0, $f15
    ctx->pc = 0x34a61cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[15]);
    // 0x34a620: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x34a620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x34a624: 0x46016040  add.s       $f1, $f12, $f1
    ctx->pc = 0x34a624u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x34a628: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x34A628u;
    {
        const bool branch_taken_0x34a628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A628u;
        // 0x34a62c: 0xe4a10000  swc1        $f1, 0x0($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a628) {
            ctx->pc = 0x34A694u;
            goto label_34a694;
        }
    }
    ctx->pc = 0x34A630u;
label_34a630:
    // 0x34a630: 0x46073882  mul.s       $f2, $f7, $f7
    ctx->pc = 0x34a630u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x34a634: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34a634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34a638: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x34a638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x34a63c: 0x46063042  mul.s       $f1, $f6, $f6
    ctx->pc = 0x34a63cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x34a640: 0x46078002  mul.s       $f0, $f16, $f7
    ctx->pc = 0x34a640u;
    ctx->f[0] = FPU_MUL_S(ctx->f[16], ctx->f[7]);
    // 0x34a644: 0x460678c2  mul.s       $f3, $f15, $f6
    ctx->pc = 0x34a644u;
    ctx->f[3] = FPU_MUL_S(ctx->f[15], ctx->f[6]);
    // 0x34a648: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x34a648u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x34a64c: 0x46001b80  add.s       $f14, $f3, $f0
    ctx->pc = 0x34a64cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x34a650: 0x460b0a01  sub.s       $f8, $f1, $f11
    ctx->pc = 0x34a650u;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[11]);
    // 0x34a654: 0x460e7002  mul.s       $f0, $f14, $f14
    ctx->pc = 0x34a654u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x34a658: 0x46082842  mul.s       $f1, $f5, $f8
    ctx->pc = 0x34a658u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x34a65c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x34a65cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x34a660: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x34a660u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x34a664: 0x0  nop
    ctx->pc = 0x34a664u;
    // NOP
    // 0x34a668: 0x0  nop
    ctx->pc = 0x34a668u;
    // NOP
    // 0x34a66c: 0x46000004  c1          0x4
    ctx->pc = 0x34a66cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x34a670: 0x0  nop
    ctx->pc = 0x34a670u;
    // NOP
    // 0x34a674: 0x0  nop
    ctx->pc = 0x34a674u;
    // NOP
    // 0x34a678: 0x46002083  div.s       $f2, $f4, $f0
    ctx->pc = 0x34a678u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
    // 0x34a67c: 0x46027042  mul.s       $f1, $f14, $f2
    ctx->pc = 0x34a67cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x34a680: 0x46024002  mul.s       $f0, $f8, $f2
    ctx->pc = 0x34a680u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x34a684: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x34a684u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x34a688: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x34a688u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x34a68c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x34a68cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x34a690: 0xe4b10000  swc1        $f17, 0x0($a1)
    ctx->pc = 0x34a690u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_34a694:
    // 0x34a694: 0x3e00008  jr          $ra
    ctx->pc = 0x34A694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A694u;
        // 0x34a698: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A69Cu;
    // 0x34a69c: 0x0  nop
    ctx->pc = 0x34a69cu;
    // NOP
    ctx->pc = 0x34a6a0u;
}
