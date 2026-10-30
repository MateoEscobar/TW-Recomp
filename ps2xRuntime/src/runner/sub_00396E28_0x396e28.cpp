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

// Function: sub_00396E28
// Address: 0x396e28 - 0x396ea0
void sub_00396E28_0x396e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396E28_0x396e28");
#endif

    switch (ctx->pc) {
        case 0x396e4cu: goto label_396e4c;
        case 0x396e60u: goto label_396e60;
        case 0x396e6cu: goto label_396e6c;
        case 0x396e7cu: goto label_396e7c;
        case 0x396e84u: goto label_396e84;
        default: break;
    }

    ctx->pc = 0x396e28u;

    // 0x396e28: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x396e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x396e2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x396e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x396e30: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x396e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x396e34: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x396e34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396e38: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x396e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x396e3c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x396e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x396e40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x396e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x396e44: 0xc0e4060  jal         func_390180
    ctx->pc = 0x396E44u;
    SET_GPR_U32(ctx, 31, 0x396E4Cu);
    ctx->pc = 0x396E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396E44u;
    // 0x396e48: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x396E44u, 0x396E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396E4Cu;
label_396e4c:
    // 0x396e4c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x396e4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396e50: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x396E50u;
    {
        const bool branch_taken_0x396e50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x396E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396E50u;
        // 0x396e54: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396e50) {
            ctx->pc = 0x396E84u;
            goto label_396e84;
        }
    }
    ctx->pc = 0x396E58u;
    // 0x396e58: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x396E58u;
    SET_GPR_U32(ctx, 31, 0x396E60u);
    ctx->pc = 0x396E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396E58u;
    // 0x396e5c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x396E58u, 0x396E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396E60u;
label_396e60:
    // 0x396e60: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x396e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x396e64: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x396E64u;
    SET_GPR_U32(ctx, 31, 0x396E6Cu);
    ctx->pc = 0x396E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396E64u;
    // 0x396e68: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x396E64u, 0x396E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396E6Cu;
label_396e6c:
    // 0x396e6c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x396e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x396e70: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x396e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x396e74: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x396E74u;
    SET_GPR_U32(ctx, 31, 0x396E7Cu);
    ctx->pc = 0x396E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396E74u;
    // 0x396e78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x396E74u, 0x396E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396E7Cu;
label_396e7c:
    // 0x396e7c: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x396E7Cu;
    SET_GPR_U32(ctx, 31, 0x396E84u);
    ctx->pc = 0x396E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396E7Cu;
    // 0x396e80: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x396E7Cu, 0x396E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396E84u;
label_396e84:
    // 0x396e84: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x396e84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x396e88: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x396e88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x396e8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x396e8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x396e90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x396e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x396e94: 0x3e00008  jr          $ra
    ctx->pc = 0x396E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396E94u;
        // 0x396e98: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396E9Cu;
    // 0x396e9c: 0x0  nop
    ctx->pc = 0x396e9cu;
    // NOP
    ctx->pc = 0x396ea0u;
}
