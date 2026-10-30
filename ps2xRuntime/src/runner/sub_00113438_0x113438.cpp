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

// Function: sub_00113438
// Address: 0x113438 - 0x113490
void sub_00113438_0x113438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113438_0x113438");
#endif

    switch (ctx->pc) {
        case 0x113484u: goto label_113484;
        default: break;
    }

    ctx->pc = 0x113438u;

    // 0x113438: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x113438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11343c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11343cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x113440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x113440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x113444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113448: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x113448u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11344c: 0x0  nop
    ctx->pc = 0x11344cu;
    // NOP
    // 0x113450: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x113450u;
    {
        const bool branch_taken_0x113450 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x113454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113450u;
        // 0x113454: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113450) {
            ctx->pc = 0x11345Cu;
            goto label_11345c;
        }
    }
    ctx->pc = 0x113458u;
    // 0x113458: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x113458u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_11345c:
    // 0x11345c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11345cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x113460: 0x0  nop
    ctx->pc = 0x113460u;
    // NOP
    // 0x113464: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x113464u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x113468: 0x0  nop
    ctx->pc = 0x113468u;
    // NOP
    // 0x11346c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x11346Cu;
    {
        const bool branch_taken_0x11346c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11346c) {
            ctx->pc = 0x113470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11346Cu;
            // 0x113470: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x113474u;
            goto label_113474;
        }
    }
    ctx->pc = 0x113474u;
label_113474:
    // 0x113474: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x113474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x113478: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x113478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11347c: 0xc04412a  jal         func_1104A8
    ctx->pc = 0x11347Cu;
    SET_GPR_U32(ctx, 31, 0x113484u);
    ctx->pc = 0x113480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11347Cu;
    // 0x113480: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1104A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1104A8u, 0x11347Cu, 0x113484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113484u;
label_113484:
    // 0x113484: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113488: 0x3e00008  jr          $ra
    ctx->pc = 0x113488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113488u;
        // 0x11348c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113490u;
}
