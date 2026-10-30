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

// Function: sub_00397010
// Address: 0x397010 - 0x397078
void sub_00397010_0x397010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397010_0x397010");
#endif

    switch (ctx->pc) {
        case 0x39702cu: goto label_39702c;
        case 0x397040u: goto label_397040;
        case 0x39704cu: goto label_39704c;
        case 0x39705cu: goto label_39705c;
        case 0x397064u: goto label_397064;
        default: break;
    }

    ctx->pc = 0x397010u;

    // 0x397010: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x397010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x397014: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x397014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x397018: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x397018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x39701c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x39701cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x397020: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x397020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x397024: 0xc0e4060  jal         func_390180
    ctx->pc = 0x397024u;
    SET_GPR_U32(ctx, 31, 0x39702Cu);
    ctx->pc = 0x397028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397024u;
    // 0x397028: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x397024u, 0x39702Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39702Cu;
label_39702c:
    // 0x39702c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x39702cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397030: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x397030u;
    {
        const bool branch_taken_0x397030 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x397034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397030u;
        // 0x397034: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397030) {
            ctx->pc = 0x397064u;
            goto label_397064;
        }
    }
    ctx->pc = 0x397038u;
    // 0x397038: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x397038u;
    SET_GPR_U32(ctx, 31, 0x397040u);
    ctx->pc = 0x39703Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397038u;
    // 0x39703c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x397038u, 0x397040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397040u;
label_397040:
    // 0x397040: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x397040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x397044: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x397044u;
    SET_GPR_U32(ctx, 31, 0x39704Cu);
    ctx->pc = 0x397048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397044u;
    // 0x397048: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x397044u, 0x39704Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39704Cu;
label_39704c:
    // 0x39704c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x39704cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x397050: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x397050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x397054: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x397054u;
    SET_GPR_U32(ctx, 31, 0x39705Cu);
    ctx->pc = 0x397058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397054u;
    // 0x397058: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x397054u, 0x39705Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39705Cu;
label_39705c:
    // 0x39705c: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x39705Cu;
    SET_GPR_U32(ctx, 31, 0x397064u);
    ctx->pc = 0x397060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39705Cu;
    // 0x397060: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x39705Cu, 0x397064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397064u;
label_397064:
    // 0x397064: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x397064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x397068: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x397068u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39706c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39706cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x397070: 0x3e00008  jr          $ra
    ctx->pc = 0x397070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397070u;
        // 0x397074: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397078u;
}
