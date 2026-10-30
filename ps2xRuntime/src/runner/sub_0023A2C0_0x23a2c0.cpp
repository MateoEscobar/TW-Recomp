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

// Function: sub_0023A2C0
// Address: 0x23a2c0 - 0x23a328
void sub_0023A2C0_0x23a2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A2C0_0x23a2c0");
#endif

    switch (ctx->pc) {
        case 0x23a2dcu: goto label_23a2dc;
        case 0x23a2e4u: goto label_23a2e4;
        default: break;
    }

    ctx->pc = 0x23a2c0u;

    // 0x23a2c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23a2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23a2c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23a2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23a2c8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23a2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x23a2cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23a2ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a2d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23a2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23a2d4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x23A2D4u;
    SET_GPR_U32(ctx, 31, 0x23A2DCu);
    ctx->pc = 0x23A2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A2D4u;
    // 0x23a2d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23A2D4u, 0x23A2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A2DCu;
label_23a2dc:
    // 0x23a2dc: 0xc08a61a  jal         func_229868
    ctx->pc = 0x23A2DCu;
    SET_GPR_U32(ctx, 31, 0x23A2E4u);
    ctx->pc = 0x23A2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A2DCu;
    // 0x23a2e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x23A2DCu, 0x23A2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A2E4u;
label_23a2e4:
    // 0x23a2e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23a2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a2e8: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x23A2E8u;
    {
        const bool branch_taken_0x23a2e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a2e8) {
            ctx->pc = 0x23A2ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A2E8u;
            // 0x23a2ec: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A318u;
            goto label_23a318;
        }
    }
    ctx->pc = 0x23A2F0u;
    // 0x23a2f0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23A2F0u;
    {
        const bool branch_taken_0x23a2f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A2F0u;
        // 0x23a2f4: 0x24031000  addiu       $v1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a2f0) {
            ctx->pc = 0x23A304u;
            goto label_23a304;
        }
    }
    ctx->pc = 0x23A2F8u;
    // 0x23a2f8: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x23a2f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x23a2fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23A2FCu;
    {
        const bool branch_taken_0x23a2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A2FCu;
        // 0x23a300: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a2fc) {
            ctx->pc = 0x23A310u;
            goto label_23a310;
        }
    }
    ctx->pc = 0x23A304u;
label_23a304:
    // 0x23a304: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x23a304u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x23a308: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x23a308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x23a30c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23a30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_23a310:
    // 0x23a310: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x23a310u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
    // 0x23a314: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23a314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23a318:
    // 0x23a318: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23a318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23a31c: 0x3e00008  jr          $ra
    ctx->pc = 0x23A31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A31Cu;
        // 0x23a320: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A31Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A324u;
    // 0x23a324: 0x0  nop
    ctx->pc = 0x23a324u;
    // NOP
    ctx->pc = 0x23a328u;
}
