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

// Function: sub_00107338
// Address: 0x107338 - 0x1073c8
void sub_00107338_0x107338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107338_0x107338");
#endif

    ctx->pc = 0x107338u;

    // 0x107338: 0x3c013f02  lui         $at, 0x3F02
    ctx->pc = 0x107338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16130 << 16));
    // 0x10733c: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x10733cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x107340: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x107340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x107344: 0xc481002c  lwc1        $f1, 0x2C($a0)
    ctx->pc = 0x107344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107348: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x107348u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10734c: 0x0  nop
    ctx->pc = 0x10734cu;
    // NOP
    // 0x107350: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x107350u;
    {
        const bool branch_taken_0x107350 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x107350) {
            ctx->pc = 0x107364u;
            goto label_107364;
        }
    }
    ctx->pc = 0x107358u;
    // 0x107358: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x107358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x10735c: 0x3e00008  jr          $ra
    ctx->pc = 0x10735Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10735Cu;
        // 0x107360: 0xc4400018  lwc1        $f0, 0x18($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10735Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107364u;
label_107364:
    // 0x107364: 0x3c013fc1  lui         $at, 0x3FC1
    ctx->pc = 0x107364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16321 << 16));
    // 0x107368: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x107368u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x10736c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10736cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x107370: 0x0  nop
    ctx->pc = 0x107370u;
    // NOP
    // 0x107374: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x107374u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107378: 0x0  nop
    ctx->pc = 0x107378u;
    // NOP
    // 0x10737c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x10737Cu;
    {
        const bool branch_taken_0x10737c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10737c) {
            ctx->pc = 0x107390u;
            goto label_107390;
        }
    }
    ctx->pc = 0x107384u;
    // 0x107384: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x107384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x107388: 0x3e00008  jr          $ra
    ctx->pc = 0x107388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107388u;
        // 0x10738c: 0xc4400018  lwc1        $f0, 0x18($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107390u;
label_107390:
    // 0x107390: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x107390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x107394: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x107394u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
    // 0x107398: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x107398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10739c: 0x0  nop
    ctx->pc = 0x10739cu;
    // NOP
    // 0x1073a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1073a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1073a4: 0x0  nop
    ctx->pc = 0x1073a4u;
    // NOP
    // 0x1073a8: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1073A8u;
    {
        const bool branch_taken_0x1073a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1073a8) {
            ctx->pc = 0x1073ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1073A8u;
            // 0x1073ac: 0x8c820020  lw          $v0, 0x20($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1073BCu;
            goto label_1073bc;
        }
    }
    ctx->pc = 0x1073B0u;
    // 0x1073b0: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1073b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1073b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1073B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1073B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1073B4u;
        // 0x1073b8: 0xc4400018  lwc1        $f0, 0x18($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1073B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1073BCu;
label_1073bc:
    // 0x1073bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1073BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1073C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1073BCu;
        // 0x1073c0: 0xc4400018  lwc1        $f0, 0x18($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1073BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1073C4u;
    // 0x1073c4: 0x0  nop
    ctx->pc = 0x1073c4u;
    // NOP
    ctx->pc = 0x1073c8u;
}
