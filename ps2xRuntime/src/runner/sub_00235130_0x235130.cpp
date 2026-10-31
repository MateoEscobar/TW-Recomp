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

// Function: sub_00235130
// Address: 0x235130 - 0x235198
void sub_00235130_0x235130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235130_0x235130");
#endif

    switch (ctx->pc) {
        case 0x23514cu: goto label_23514c;
        case 0x235154u: goto label_235154;
        default: break;
    }

    ctx->pc = 0x235130u;

    // 0x235130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x235130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x235134: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x235134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x235138: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x235138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x23513c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23513cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235140: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x235140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x235144: 0xc0e4060  jal         func_390180
    ctx->pc = 0x235144u;
    SET_GPR_U32(ctx, 31, 0x23514Cu);
    ctx->pc = 0x235148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235144u;
    // 0x235148: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x235144u, 0x23514Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23514Cu;
label_23514c:
    // 0x23514c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x23514Cu;
    SET_GPR_U32(ctx, 31, 0x235154u);
    ctx->pc = 0x235150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23514Cu;
    // 0x235150: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x23514Cu, 0x235154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235154u;
label_235154:
    // 0x235154: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x235154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235158: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x235158u;
    {
        const bool branch_taken_0x235158 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x235158) {
            ctx->pc = 0x23515Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235158u;
            // 0x23515c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23518Cu;
            goto label_23518c;
        }
    }
    ctx->pc = 0x235160u;
    // 0x235160: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x235160u;
    {
        const bool branch_taken_0x235160 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x235164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235160u;
        // 0x235164: 0x3c030800  lui         $v1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235160) {
            ctx->pc = 0x235174u;
            goto label_235174;
        }
    }
    ctx->pc = 0x235168u;
    // 0x235168: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x235168u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x23516c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23516Cu;
    {
        const bool branch_taken_0x23516c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23516Cu;
        // 0x235170: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23516c) {
            ctx->pc = 0x235184u;
            goto label_235184;
        }
    }
    ctx->pc = 0x235174u;
label_235174:
    // 0x235174: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x235174u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x235178: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x235178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x23517c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x23517cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x235180: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x235180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_235184:
    // 0x235184: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x235184u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
    // 0x235188: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x235188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23518c:
    // 0x23518c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23518cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235190: 0x3e00008  jr          $ra
    ctx->pc = 0x235190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235190u;
        // 0x235194: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235198u;
}
