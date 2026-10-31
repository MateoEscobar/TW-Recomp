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

// Function: sub_00237B70
// Address: 0x237b70 - 0x237be0
void sub_00237B70_0x237b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237B70_0x237b70");
#endif

    switch (ctx->pc) {
        case 0x237b8cu: goto label_237b8c;
        case 0x237b94u: goto label_237b94;
        default: break;
    }

    ctx->pc = 0x237b70u;

    // 0x237b70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x237b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x237b74: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x237b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x237b78: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x237b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x237b7c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x237b7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237b80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x237b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x237b84: 0xc0e4060  jal         func_390180
    ctx->pc = 0x237B84u;
    SET_GPR_U32(ctx, 31, 0x237B8Cu);
    ctx->pc = 0x237B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237B84u;
    // 0x237b88: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x237B84u, 0x237B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237B8Cu;
label_237b8c:
    // 0x237b8c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x237B8Cu;
    SET_GPR_U32(ctx, 31, 0x237B94u);
    ctx->pc = 0x237B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237B8Cu;
    // 0x237b90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x237B8Cu, 0x237B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237B94u;
label_237b94:
    // 0x237b94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x237b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237b98: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x237B98u;
    {
        const bool branch_taken_0x237b98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x237b98) {
            ctx->pc = 0x237B9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237B98u;
            // 0x237b9c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237BD4u;
            goto label_237bd4;
        }
    }
    ctx->pc = 0x237BA0u;
    // 0x237ba0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x237BA0u;
    {
        const bool branch_taken_0x237ba0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x237BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237BA0u;
        // 0x237ba4: 0xdc8200e0  ld          $v0, 0xE0($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ba0) {
            ctx->pc = 0x237BB8u;
            goto label_237bb8;
        }
    }
    ctx->pc = 0x237BA8u;
    // 0x237ba8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x237ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x237bac: 0x31c78  dsll        $v1, $v1, 17
    ctx->pc = 0x237bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 17);
    // 0x237bb0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x237BB0u;
    {
        const bool branch_taken_0x237bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237BB0u;
        // 0x237bb4: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237bb0) {
            ctx->pc = 0x237BCCu;
            goto label_237bcc;
        }
    }
    ctx->pc = 0x237BB8u;
label_237bb8:
    // 0x237bb8: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x237bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x237bbc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x237bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x237bc0: 0x318b8  dsll        $v1, $v1, 2
    ctx->pc = 0x237bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 2);
    // 0x237bc4: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x237bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x237bc8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x237bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_237bcc:
    // 0x237bcc: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x237bccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
    // 0x237bd0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x237bd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_237bd4:
    // 0x237bd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x237bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x237BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237BD8u;
        // 0x237bdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237BE0u;
}
