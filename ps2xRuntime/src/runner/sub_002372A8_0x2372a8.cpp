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

// Function: sub_002372A8
// Address: 0x2372a8 - 0x237328
void sub_002372A8_0x2372a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002372A8_0x2372a8");
#endif

    switch (ctx->pc) {
        case 0x2372c4u: goto label_2372c4;
        case 0x2372ccu: goto label_2372cc;
        case 0x237304u: goto label_237304;
        case 0x237314u: goto label_237314;
        default: break;
    }

    ctx->pc = 0x2372a8u;

    // 0x2372a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2372a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2372ac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2372acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2372b0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2372b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2372b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2372b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2372b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2372b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2372bc: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2372BCu;
    SET_GPR_U32(ctx, 31, 0x2372C4u);
    ctx->pc = 0x2372C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2372BCu;
    // 0x2372c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2372BCu, 0x2372C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2372C4u;
label_2372c4:
    // 0x2372c4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2372C4u;
    SET_GPR_U32(ctx, 31, 0x2372CCu);
    ctx->pc = 0x2372C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2372C4u;
    // 0x2372c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2372C4u, 0x2372CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2372CCu;
label_2372cc:
    // 0x2372cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2372ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2372d0: 0x50800011  beql        $a0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2372D0u;
    {
        const bool branch_taken_0x2372d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2372d0) {
            ctx->pc = 0x2372D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2372D0u;
            // 0x2372d4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237318u;
            goto label_237318;
        }
    }
    ctx->pc = 0x2372D8u;
    // 0x2372d8: 0x808201b0  lb          $v0, 0x1B0($a0)
    ctx->pc = 0x2372d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x2372dc: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2372dcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2372e0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2372E0u;
    {
        const bool branch_taken_0x2372e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2372E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2372E0u;
        // 0x2372e4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2372e0) {
            ctx->pc = 0x23730Cu;
            goto label_23730c;
        }
    }
    ctx->pc = 0x2372E8u;
    // 0x2372e8: 0x8c850380  lw          $a1, 0x380($a0)
    ctx->pc = 0x2372e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x2372ec: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2372ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x2372f0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2372f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2372f4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2372f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2372f8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2372f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2372fc: 0xc10796c  jal         func_41E5B0
    ctx->pc = 0x2372FCu;
    SET_GPR_U32(ctx, 31, 0x237304u);
    ctx->pc = 0x237300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2372FCu;
    // 0x237300: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x2372FCu, 0x237304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237304u;
label_237304:
    // 0x237304: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x237304u;
    {
        const bool branch_taken_0x237304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237304u;
        // 0x237308: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237304) {
            ctx->pc = 0x237318u;
            goto label_237318;
        }
    }
    ctx->pc = 0x23730Cu;
label_23730c:
    // 0x23730c: 0xc088a60  jal         func_222980
    ctx->pc = 0x23730Cu;
    SET_GPR_U32(ctx, 31, 0x237314u);
    ctx->pc = 0x237310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23730Cu;
    // 0x237310: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222980u, 0x23730Cu, 0x237314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237314u;
label_237314:
    // 0x237314: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x237314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_237318:
    // 0x237318: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x237318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23731c: 0x3e00008  jr          $ra
    ctx->pc = 0x23731Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23731Cu;
        // 0x237320: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23731Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237324u;
    // 0x237324: 0x0  nop
    ctx->pc = 0x237324u;
    // NOP
    ctx->pc = 0x237328u;
}
