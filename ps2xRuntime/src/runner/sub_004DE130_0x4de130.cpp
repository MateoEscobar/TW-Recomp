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

// Function: sub_004DE130
// Address: 0x4de130 - 0x4de198
void sub_004DE130_0x4de130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DE130_0x4de130");
#endif

    switch (ctx->pc) {
        case 0x4de150u: goto label_4de150;
        case 0x4de158u: goto label_4de158;
        default: break;
    }

    ctx->pc = 0x4de130u;

    // 0x4de130: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4de130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4de134: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4de134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4de138: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4de138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4de13c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4de13cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de140: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4de140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4de144: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4de144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de148: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4de148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4de14c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x4de14cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4de150:
    // 0x4de150: 0xc0e4060  jal         func_390180
    ctx->pc = 0x4DE150u;
    SET_GPR_U32(ctx, 31, 0x4DE158u);
    ctx->pc = 0x4DE154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE150u;
    // 0x4de154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x4DE150u, 0x4DE158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DE158u;
label_4de158:
    // 0x4de158: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4de158u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4de15c: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x4DE15Cu;
    {
        const bool branch_taken_0x4de15c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x4DE160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE15Cu;
        // 0x4de160: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de15c) {
            ctx->pc = 0x4DE16Cu;
            goto label_4de16c;
        }
    }
    ctx->pc = 0x4DE164u;
    // 0x4de164: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4DE164u;
    {
        const bool branch_taken_0x4de164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DE168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE164u;
        // 0x4de168: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de164) {
            ctx->pc = 0x4DE180u;
            goto label_4de180;
        }
    }
    ctx->pc = 0x4DE16Cu;
label_4de16c:
    // 0x4de16c: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x4de16cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x4de170: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4DE170u;
    {
        const bool branch_taken_0x4de170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DE174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE170u;
        // 0x4de174: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de170) {
            ctx->pc = 0x4DE150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4de150;
        }
    }
    ctx->pc = 0x4DE178u;
    // 0x4de178: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4de178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4de17c: 0x8c62bd30  lw          $v0, -0x42D0($v1)
    ctx->pc = 0x4de17cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6EBD30u));
label_4de180:
    // 0x4de180: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4de180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4de184: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4de184u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4de188: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4de188u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4de18c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4de18cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4de190: 0x3e00008  jr          $ra
    ctx->pc = 0x4DE190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DE194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE190u;
        // 0x4de194: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DE190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DE198u;
}
