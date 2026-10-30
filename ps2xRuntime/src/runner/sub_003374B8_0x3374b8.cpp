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

// Function: sub_003374B8
// Address: 0x3374b8 - 0x337568
void sub_003374B8_0x3374b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003374B8_0x3374b8");
#endif

    ctx->pc = 0x3374b8u;

    // 0x3374b8: 0x460d6032  c.eq.s      $f12, $f13
    ctx->pc = 0x3374b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3374bc: 0x0  nop
    ctx->pc = 0x3374bcu;
    // NOP
    // 0x3374c0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x3374C0u;
    {
        const bool branch_taken_0x3374c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3374c0) {
            ctx->pc = 0x3374D4u;
            goto label_3374d4;
        }
    }
    ctx->pc = 0x3374C8u;
    // 0x3374c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3374c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3374cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3374CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3374CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3374D4u;
label_3374d4:
    // 0x3374d4: 0x460c6834  c.lt.s      $f13, $f12
    ctx->pc = 0x3374d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3374d8: 0x0  nop
    ctx->pc = 0x3374d8u;
    // NOP
    // 0x3374dc: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x3374DCu;
    {
        const bool branch_taken_0x3374dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3374dc) {
            ctx->pc = 0x33751Cu;
            goto label_33751c;
        }
    }
    ctx->pc = 0x3374E4u;
    // 0x3374e4: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x3374e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x3374e8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3374e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x3374ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3374ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3374f0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3374f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x3374f4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3374f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x3374f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3374f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3374fc: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x3374fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x337500: 0x460d0000  add.s       $f0, $f0, $f13
    ctx->pc = 0x337500u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x337504: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x337504u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x337508: 0x0  nop
    ctx->pc = 0x337508u;
    // NOP
    // 0x33750c: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x33750Cu;
    {
        const bool branch_taken_0x33750c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33750c) {
            ctx->pc = 0x337554u;
            goto label_337554;
        }
    }
    ctx->pc = 0x337514u;
    // 0x337514: 0x3e00008  jr          $ra
    ctx->pc = 0x337514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337514u;
        // 0x337518: 0x460d6001  sub.s       $f0, $f12, $f13 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33751Cu;
label_33751c:
    // 0x33751c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x33751cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x337520: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x337520u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x337524: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x337524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337528: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x337528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x33752c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x33752cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x337530: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x337530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x337534: 0x460d0001  sub.s       $f0, $f0, $f13
    ctx->pc = 0x337534u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    // 0x337538: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x337538u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x33753c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x33753cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x337540: 0x0  nop
    ctx->pc = 0x337540u;
    // NOP
    // 0x337544: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x337544u;
    {
        const bool branch_taken_0x337544 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x337544) {
            ctx->pc = 0x337554u;
            goto label_337554;
        }
    }
    ctx->pc = 0x33754Cu;
    // 0x33754c: 0x3e00008  jr          $ra
    ctx->pc = 0x33754Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33754Cu;
        // 0x337550: 0x460c6801  sub.s       $f0, $f13, $f12 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33754Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337554u;
label_337554:
    // 0x337554: 0x3e00008  jr          $ra
    ctx->pc = 0x337554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33755Cu;
    // 0x33755c: 0x0  nop
    ctx->pc = 0x33755cu;
    // NOP
    // 0x337560: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x337560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x337564: 0x0  nop
    ctx->pc = 0x337564u;
    // NOP
    ctx->pc = 0x337568u;
}
