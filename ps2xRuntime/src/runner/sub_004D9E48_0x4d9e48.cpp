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

// Function: sub_004D9E48
// Address: 0x4d9e48 - 0x4d9ea0
void sub_004D9E48_0x4d9e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D9E48_0x4d9e48");
#endif

    switch (ctx->pc) {
        case 0x4d9e60u: goto label_4d9e60;
        case 0x4d9e68u: goto label_4d9e68;
        case 0x4d9e70u: goto label_4d9e70;
        case 0x4d9e78u: goto label_4d9e78;
        case 0x4d9e88u: goto label_4d9e88;
        case 0x4d9e90u: goto label_4d9e90;
        case 0x4d9e98u: goto label_4d9e98;
        default: break;
    }

    ctx->pc = 0x4d9e48u;

    // 0x4d9e48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d9e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4d9e4c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d9e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4d9e50: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x4D9E50u;
    {
        const bool branch_taken_0x4d9e50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D9E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9E50u;
        // 0x4d9e54: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9e50) {
            ctx->pc = 0x4D9EB0u;
            return;
        }
    }
    ctx->pc = 0x4D9E58u;
    // 0x4d9e58: 0xc10ceec  jal         func_433BB0
    ctx->pc = 0x4D9E58u;
    SET_GPR_U32(ctx, 31, 0x4D9E60u);
    ctx->pc = 0x433BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433BB0u, 0x4D9E58u, 0x4D9E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D9E60u;
label_4d9e60:
    // 0x4d9e60: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x4D9E60u;
    {
        const bool branch_taken_0x4d9e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D9E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9E60u;
        // 0x4d9e64: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9e60) {
            ctx->pc = 0x4D9EB4u;
            return;
        }
    }
    ctx->pc = 0x4D9E68u;
label_4d9e68:
    // 0x4d9e68: 0xc10b510  jal         func_42D440
    ctx->pc = 0x4D9E68u;
    SET_GPR_U32(ctx, 31, 0x4D9E70u);
    ctx->pc = 0x42D440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D440u, 0x4D9E68u, 0x4D9E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D9E70u;
label_4d9e70:
    // 0x4d9e70: 0xc10b644  jal         func_42D910
    ctx->pc = 0x4D9E70u;
    SET_GPR_U32(ctx, 31, 0x4D9E78u);
    ctx->pc = 0x42D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D910u, 0x4D9E70u, 0x4D9E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D9E78u;
label_4d9e78:
    // 0x4d9e78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4d9e78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9e7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4d9e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9e80: 0xc10b6e2  jal         func_42DB88
    ctx->pc = 0x4D9E80u;
    SET_GPR_U32(ctx, 31, 0x4D9E88u);
    ctx->pc = 0x4D9E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D9E80u;
    // 0x4d9e84: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42DB88u, 0x4D9E80u, 0x4D9E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D9E88u;
label_4d9e88:
    // 0x4d9e88: 0xc10b510  jal         func_42D440
    ctx->pc = 0x4D9E88u;
    SET_GPR_U32(ctx, 31, 0x4D9E90u);
    ctx->pc = 0x42D440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D440u, 0x4D9E88u, 0x4D9E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D9E90u;
label_4d9e90:
    // 0x4d9e90: 0xc10b6a4  jal         func_42DA90
    ctx->pc = 0x4D9E90u;
    SET_GPR_U32(ctx, 31, 0x4D9E98u);
    ctx->pc = 0x4D9E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D9E90u;
    // 0x4d9e94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42DA90u, 0x4D9E90u, 0x4D9E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D9E98u;
label_4d9e98:
    // 0x4d9e98: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x4D9E98u;
    {
        const bool branch_taken_0x4d9e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d9e98) {
            ctx->pc = 0x4D9E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d9e88;
        }
    }
    ctx->pc = 0x4D9EA0u;
}
