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

// Function: sub_00234038
// Address: 0x234038 - 0x2340a8
void sub_00234038_0x234038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234038_0x234038");
#endif

    switch (ctx->pc) {
        case 0x234054u: goto label_234054;
        case 0x23405cu: goto label_23405c;
        default: break;
    }

    ctx->pc = 0x234038u;

    // 0x234038: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x234038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23403c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23403cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x234040: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x234040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x234044: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x234044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234048: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x234048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23404c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x23404Cu;
    SET_GPR_U32(ctx, 31, 0x234054u);
    ctx->pc = 0x234050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23404Cu;
    // 0x234050: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23404Cu, 0x234054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234054u;
label_234054:
    // 0x234054: 0xc08a61a  jal         func_229868
    ctx->pc = 0x234054u;
    SET_GPR_U32(ctx, 31, 0x23405Cu);
    ctx->pc = 0x234058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234054u;
    // 0x234058: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x234054u, 0x23405Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23405Cu;
label_23405c:
    // 0x23405c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23405cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234060: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x234060u;
    {
        const bool branch_taken_0x234060 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x234060) {
            ctx->pc = 0x234064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234060u;
            // 0x234064: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23409Cu;
            goto label_23409c;
        }
    }
    ctx->pc = 0x234068u;
    // 0x234068: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x234068u;
    {
        const bool branch_taken_0x234068 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234068u;
        // 0x23406c: 0xdc8200e0  ld          $v0, 0xE0($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234068) {
            ctx->pc = 0x234080u;
            goto label_234080;
        }
    }
    ctx->pc = 0x234070u;
    // 0x234070: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x234070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x234074: 0x31f78  dsll        $v1, $v1, 29
    ctx->pc = 0x234074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 29);
    // 0x234078: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x234078u;
    {
        const bool branch_taken_0x234078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234078u;
        // 0x23407c: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234078) {
            ctx->pc = 0x234094u;
            goto label_234094;
        }
    }
    ctx->pc = 0x234080u;
label_234080:
    // 0x234080: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x234080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x234084: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x234084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x234088: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x234088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x23408c: 0x34633fff  ori         $v1, $v1, 0x3FFF
    ctx->pc = 0x23408cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16383);
    // 0x234090: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x234090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_234094:
    // 0x234094: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x234094u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
    // 0x234098: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x234098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23409c:
    // 0x23409c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23409cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2340a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2340A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2340A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2340A0u;
        // 0x2340a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2340A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2340A8u;
}
