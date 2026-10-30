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

// Function: sub_00234E58
// Address: 0x234e58 - 0x234ef8
void sub_00234E58_0x234e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234E58_0x234e58");
#endif

    switch (ctx->pc) {
        case 0x234e78u: goto label_234e78;
        case 0x234e80u: goto label_234e80;
        case 0x234e9cu: goto label_234e9c;
        case 0x234eb4u: goto label_234eb4;
        case 0x234ec0u: goto label_234ec0;
        case 0x234eccu: goto label_234ecc;
        case 0x234ed4u: goto label_234ed4;
        case 0x234ee4u: goto label_234ee4;
        default: break;
    }

    ctx->pc = 0x234e58u;

    // 0x234e58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x234e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x234e5c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x234e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x234e60: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x234e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x234e64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x234e64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234e68: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x234e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x234e6c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x234e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x234e70: 0xc0e4060  jal         func_390180
    ctx->pc = 0x234E70u;
    SET_GPR_U32(ctx, 31, 0x234E78u);
    ctx->pc = 0x234E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234E70u;
    // 0x234e74: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x234E70u, 0x234E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E78u;
label_234e78:
    // 0x234e78: 0xc08a61a  jal         func_229868
    ctx->pc = 0x234E78u;
    SET_GPR_U32(ctx, 31, 0x234E80u);
    ctx->pc = 0x234E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234E78u;
    // 0x234e7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x234E78u, 0x234E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E80u;
label_234e80:
    // 0x234e80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x234e80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234e84: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x234E84u;
    {
        const bool branch_taken_0x234e84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x234E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E84u;
        // 0x234e88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234e84) {
            ctx->pc = 0x234EE4u;
            goto label_234ee4;
        }
    }
    ctx->pc = 0x234E8Cu;
    // 0x234e8c: 0x16220013  bne         $s1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x234E8Cu;
    {
        const bool branch_taken_0x234e8c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x234e8c) {
            ctx->pc = 0x234EDCu;
            goto label_234edc;
        }
    }
    ctx->pc = 0x234E94u;
    // 0x234e94: 0xc089f98  jal         func_227E60
    ctx->pc = 0x234E94u;
    SET_GPR_U32(ctx, 31, 0x234E9Cu);
    ctx->pc = 0x234E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234E94u;
    // 0x234e98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x234E94u, 0x234E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E9Cu;
label_234e9c:
    // 0x234e9c: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x234E9Cu;
    {
        const bool branch_taken_0x234e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x234e9c) {
            ctx->pc = 0x234EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234E9Cu;
            // 0x234ea0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234EE8u;
            goto label_234ee8;
        }
    }
    ctx->pc = 0x234EA4u;
    // 0x234ea4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x234ea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234ea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234eac: 0xc08bc40  jal         func_22F100
    ctx->pc = 0x234EACu;
    SET_GPR_U32(ctx, 31, 0x234EB4u);
    ctx->pc = 0x234EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234EACu;
    // 0x234eb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F100u, 0x234EACu, 0x234EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234EB4u;
label_234eb4:
    // 0x234eb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234eb8: 0xc0899aa  jal         func_2266A8
    ctx->pc = 0x234EB8u;
    SET_GPR_U32(ctx, 31, 0x234EC0u);
    ctx->pc = 0x234EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234EB8u;
    // 0x234ebc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x234EB8u, 0x234EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234EC0u;
label_234ec0:
    // 0x234ec0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234ec4: 0xc089974  jal         func_2265D0
    ctx->pc = 0x234EC4u;
    SET_GPR_U32(ctx, 31, 0x234ECCu);
    ctx->pc = 0x234EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234EC4u;
    // 0x234ec8: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x234EC4u, 0x234ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234ECCu;
label_234ecc:
    // 0x234ecc: 0xc08a0e2  jal         func_228388
    ctx->pc = 0x234ECCu;
    SET_GPR_U32(ctx, 31, 0x234ED4u);
    ctx->pc = 0x234ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234ECCu;
    // 0x234ed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228388u, 0x234ECCu, 0x234ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234ED4u;
label_234ed4:
    // 0x234ed4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x234ED4u;
    {
        const bool branch_taken_0x234ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234ED4u;
        // 0x234ed8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234ed4) {
            ctx->pc = 0x234EE8u;
            goto label_234ee8;
        }
    }
    ctx->pc = 0x234EDCu;
label_234edc:
    // 0x234edc: 0xc08a0ea  jal         func_2283A8
    ctx->pc = 0x234EDCu;
    SET_GPR_U32(ctx, 31, 0x234EE4u);
    ctx->pc = 0x234EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234EDCu;
    // 0x234ee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2283A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2283A8u, 0x234EDCu, 0x234EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234EE4u;
label_234ee4:
    // 0x234ee4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x234ee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_234ee8:
    // 0x234ee8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x234ee8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234eec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x234eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x234EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234EF0u;
        // 0x234ef4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234EF8u;
}
