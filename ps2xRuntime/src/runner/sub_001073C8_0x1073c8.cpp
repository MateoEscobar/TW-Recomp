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

// Function: sub_001073C8
// Address: 0x1073c8 - 0x107458
void sub_001073C8_0x1073c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001073C8_0x1073c8");
#endif

    switch (ctx->pc) {
        case 0x1073ecu: goto label_1073ec;
        default: break;
    }

    ctx->pc = 0x1073c8u;

    // 0x1073c8: 0x3c013f02  lui         $at, 0x3F02
    ctx->pc = 0x1073c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16130 << 16));
    // 0x1073cc: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x1073ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x1073d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1073d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1073d4: 0xc481002c  lwc1        $f1, 0x2C($a0)
    ctx->pc = 0x1073d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1073d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1073d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1073dc: 0x0  nop
    ctx->pc = 0x1073dcu;
    // NOP
    // 0x1073e0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1073E0u;
    {
        const bool branch_taken_0x1073e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1073e0) {
            ctx->pc = 0x1073F8u;
            goto label_1073f8;
        }
    }
    ctx->pc = 0x1073E8u;
    // 0x1073e8: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1073e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_1073ec:
    // 0x1073ec: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1073ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1073f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1073F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1073F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1073F0u;
        // 0x1073f4: 0xc460000c  lwc1        $f0, 0xC($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1073F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1073F8u;
label_1073f8:
    // 0x1073f8: 0x3c013fc1  lui         $at, 0x3FC1
    ctx->pc = 0x1073f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16321 << 16));
    // 0x1073fc: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1073fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x107400: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x107400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x107404: 0x0  nop
    ctx->pc = 0x107404u;
    // NOP
    // 0x107408: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x107408u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10740c: 0x0  nop
    ctx->pc = 0x10740cu;
    // NOP
    // 0x107410: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x107410u;
    {
        const bool branch_taken_0x107410 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x107410) {
            ctx->pc = 0x107420u;
            goto label_107420;
        }
    }
    ctx->pc = 0x107418u;
    // 0x107418: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x107418u;
    {
        const bool branch_taken_0x107418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107418u;
        // 0x10741c: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107418) {
            ctx->pc = 0x1073ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1073ec;
        }
    }
    ctx->pc = 0x107420u;
label_107420:
    // 0x107420: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x107420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x107424: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x107424u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
    // 0x107428: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x107428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10742c: 0x0  nop
    ctx->pc = 0x10742cu;
    // NOP
    // 0x107430: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x107430u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107434: 0x0  nop
    ctx->pc = 0x107434u;
    // NOP
    // 0x107438: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x107438u;
    {
        const bool branch_taken_0x107438 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x107438) {
            ctx->pc = 0x10743Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107438u;
            // 0x10743c: 0x8c820020  lw          $v0, 0x20($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107448u;
            goto label_107448;
        }
    }
    ctx->pc = 0x107440u;
    // 0x107440: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x107440u;
    {
        const bool branch_taken_0x107440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107440u;
        // 0x107444: 0x8c820024  lw          $v0, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107440) {
            ctx->pc = 0x1073ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1073ec;
        }
    }
    ctx->pc = 0x107448u;
label_107448:
    // 0x107448: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x107448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x10744c: 0x3e00008  jr          $ra
    ctx->pc = 0x10744Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10744Cu;
        // 0x107450: 0xc460000c  lwc1        $f0, 0xC($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10744Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107454u;
    // 0x107454: 0x0  nop
    ctx->pc = 0x107454u;
    // NOP
    ctx->pc = 0x107458u;
}
