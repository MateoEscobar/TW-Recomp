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

// Function: sub_00234CB0
// Address: 0x234cb0 - 0x234d08
void sub_00234CB0_0x234cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234CB0_0x234cb0");
#endif

    switch (ctx->pc) {
        case 0x234cc8u: goto label_234cc8;
        case 0x234cd0u: goto label_234cd0;
        case 0x234ce4u: goto label_234ce4;
        case 0x234cf4u: goto label_234cf4;
        default: break;
    }

    ctx->pc = 0x234cb0u;

    // 0x234cb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x234cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x234cb4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x234cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x234cb8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x234cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x234cbc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x234cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x234cc0: 0xc0e4060  jal         func_390180
    ctx->pc = 0x234CC0u;
    SET_GPR_U32(ctx, 31, 0x234CC8u);
    ctx->pc = 0x234CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234CC0u;
    // 0x234cc4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x234CC0u, 0x234CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234CC8u;
label_234cc8:
    // 0x234cc8: 0xc08a61a  jal         func_229868
    ctx->pc = 0x234CC8u;
    SET_GPR_U32(ctx, 31, 0x234CD0u);
    ctx->pc = 0x234CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234CC8u;
    // 0x234ccc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x234CC8u, 0x234CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234CD0u;
label_234cd0:
    // 0x234cd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x234cd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234cd4: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x234CD4u;
    {
        const bool branch_taken_0x234cd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x234cd4) {
            ctx->pc = 0x234CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234CD4u;
            // 0x234cd8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234CF8u;
            goto label_234cf8;
        }
    }
    ctx->pc = 0x234CDCu;
    // 0x234cdc: 0xc08a00a  jal         func_228028
    ctx->pc = 0x234CDCu;
    SET_GPR_U32(ctx, 31, 0x234CE4u);
    ctx->pc = 0x234CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234CDCu;
    // 0x234ce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228028u, 0x234CDCu, 0x234CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234CE4u;
label_234ce4:
    // 0x234ce4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x234CE4u;
    {
        const bool branch_taken_0x234ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234CE4u;
        // 0x234ce8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234ce4) {
            ctx->pc = 0x234CF4u;
            goto label_234cf4;
        }
    }
    ctx->pc = 0x234CECu;
    // 0x234cec: 0xc0899aa  jal         func_2266A8
    ctx->pc = 0x234CECu;
    SET_GPR_U32(ctx, 31, 0x234CF4u);
    ctx->pc = 0x234CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234CECu;
    // 0x234cf0: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x234CECu, 0x234CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234CF4u;
label_234cf4:
    // 0x234cf4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x234cf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_234cf8:
    // 0x234cf8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x234cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x234CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234CFCu;
        // 0x234d00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234D04u;
    // 0x234d04: 0x0  nop
    ctx->pc = 0x234d04u;
    // NOP
    ctx->pc = 0x234d08u;
}
