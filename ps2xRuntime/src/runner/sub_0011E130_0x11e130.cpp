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

// Function: sub_0011E130
// Address: 0x11e130 - 0x11e188
void sub_0011E130_0x11e130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E130_0x11e130");
#endif

    switch (ctx->pc) {
        case 0x11e14cu: goto label_11e14c;
        case 0x11e164u: goto label_11e164;
        case 0x11e174u: goto label_11e174;
        default: break;
    }

    ctx->pc = 0x11e130u;

    // 0x11e130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11e130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11e134: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x11e134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x11e138: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x11e138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x11e13c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11e13cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e140: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11e140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11e144: 0xc0e4060  jal         func_390180
    ctx->pc = 0x11E144u;
    SET_GPR_U32(ctx, 31, 0x11E14Cu);
    ctx->pc = 0x11E148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E144u;
    // 0x11e148: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x11E144u, 0x11E14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E14Cu;
label_11e14c:
    // 0x11e14c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11E14Cu;
    {
        const bool branch_taken_0x11e14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E14Cu;
        // 0x11e150: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e14c) {
            ctx->pc = 0x11E174u;
            goto label_11e174;
        }
    }
    ctx->pc = 0x11E154u;
    // 0x11e154: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E154u;
    {
        const bool branch_taken_0x11e154 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x11e154) {
            ctx->pc = 0x11E16Cu;
            goto label_11e16c;
        }
    }
    ctx->pc = 0x11E15Cu;
    // 0x11e15c: 0xc048cf0  jal         func_1233C0
    ctx->pc = 0x11E15Cu;
    SET_GPR_U32(ctx, 31, 0x11E164u);
    ctx->pc = 0x11E160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E15Cu;
    // 0x11e160: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1233C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1233C0u, 0x11E15Cu, 0x11E164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E164u;
label_11e164:
    // 0x11e164: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11E164u;
    {
        const bool branch_taken_0x11e164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E164u;
        // 0x11e168: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e164) {
            ctx->pc = 0x11E178u;
            goto label_11e178;
        }
    }
    ctx->pc = 0x11E16Cu;
label_11e16c:
    // 0x11e16c: 0xc048cfa  jal         func_1233E8
    ctx->pc = 0x11E16Cu;
    SET_GPR_U32(ctx, 31, 0x11E174u);
    ctx->pc = 0x11E170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E16Cu;
    // 0x11e170: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1233E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1233E8u, 0x11E16Cu, 0x11E174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E174u;
label_11e174:
    // 0x11e174: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x11e174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_11e178:
    // 0x11e178: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11e178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11e17c: 0x3e00008  jr          $ra
    ctx->pc = 0x11E17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E17Cu;
        // 0x11e180: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E17Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E184u;
    // 0x11e184: 0x0  nop
    ctx->pc = 0x11e184u;
    // NOP
    ctx->pc = 0x11e188u;
}
