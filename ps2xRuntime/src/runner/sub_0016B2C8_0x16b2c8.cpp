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

// Function: sub_0016B2C8
// Address: 0x16b2c8 - 0x16b358
void sub_0016B2C8_0x16b2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B2C8_0x16b2c8");
#endif

    switch (ctx->pc) {
        case 0x16b300u: goto label_16b300;
        case 0x16b308u: goto label_16b308;
        case 0x16b310u: goto label_16b310;
        case 0x16b318u: goto label_16b318;
        case 0x16b32cu: goto label_16b32c;
        default: break;
    }

    ctx->pc = 0x16b2c8u;

    // 0x16b2c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16b2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16b2cc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16b2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16b2d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16b2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16b2d4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16b2d4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16b2d8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x16b2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x16b2dc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x16b2dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b2e0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x16b2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x16b2e4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x16b2e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b2e8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x16b2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x16b2ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16b2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b2f0: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x16B2F0u;
    {
        const bool branch_taken_0x16b2f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16B2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B2F0u;
        // 0x16b2f4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b2f0) {
            ctx->pc = 0x16B33Cu;
            goto label_16b33c;
        }
    }
    ctx->pc = 0x16B2F8u;
    // 0x16b2f8: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16B2F8u;
    SET_GPR_U32(ctx, 31, 0x16B300u);
    ctx->pc = 0x16B2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B2F8u;
    // 0x16b2fc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16B2F8u, 0x16B300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B300u;
label_16b300:
    // 0x16b300: 0x24510048  addiu       $s1, $v0, 0x48
    ctx->pc = 0x16b300u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x16b304: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16b304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16b308:
    // 0x16b308: 0xc137866  jal         func_4DE198
    ctx->pc = 0x16B308u;
    SET_GPR_U32(ctx, 31, 0x16B310u);
    ctx->pc = 0x16B30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B308u;
    // 0x16b30c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE198u, 0x16B308u, 0x16B310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B310u;
label_16b310:
    // 0x16b310: 0xc0e409a  jal         func_390268
    ctx->pc = 0x16B310u;
    SET_GPR_U32(ctx, 31, 0x16B318u);
    ctx->pc = 0x16B314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B310u;
    // 0x16b314: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x16B310u, 0x16B318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B318u;
label_16b318:
    // 0x16b318: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16B318u;
    {
        const bool branch_taken_0x16b318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B318u;
        // 0x16b31c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b318) {
            ctx->pc = 0x16B32Cu;
            goto label_16b32c;
        }
    }
    ctx->pc = 0x16B320u;
    // 0x16b320: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16b320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b324: 0xc089c7c  jal         func_2271F0
    ctx->pc = 0x16B324u;
    SET_GPR_U32(ctx, 31, 0x16B32Cu);
    ctx->pc = 0x16B328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B324u;
    // 0x16b328: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2271F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2271F0u, 0x16B324u, 0x16B32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B32Cu;
label_16b32c:
    // 0x16b32c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16b32cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16b330: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x16b330u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x16b334: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x16B334u;
    {
        const bool branch_taken_0x16b334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B334u;
        // 0x16b338: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b334) {
            ctx->pc = 0x16B308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16b308;
        }
    }
    ctx->pc = 0x16B33Cu;
label_16b33c:
    // 0x16b33c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x16b33cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16b340: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x16b340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16b344: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16b344u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b348: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x16b348u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b34c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b34cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b350: 0x3e00008  jr          $ra
    ctx->pc = 0x16B350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B350u;
        // 0x16b354: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B358u;
}
