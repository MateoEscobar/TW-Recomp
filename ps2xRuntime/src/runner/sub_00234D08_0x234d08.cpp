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

// Function: sub_00234D08
// Address: 0x234d08 - 0x234d70
void sub_00234D08_0x234d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234D08_0x234d08");
#endif

    switch (ctx->pc) {
        case 0x234d24u: goto label_234d24;
        case 0x234d2cu: goto label_234d2c;
        default: break;
    }

    ctx->pc = 0x234d08u;

    // 0x234d08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x234d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x234d0c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x234d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x234d10: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x234d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x234d14: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x234d14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234d18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x234d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x234d1c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x234D1Cu;
    SET_GPR_U32(ctx, 31, 0x234D24u);
    ctx->pc = 0x234D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234D1Cu;
    // 0x234d20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x234D1Cu, 0x234D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234D24u;
label_234d24:
    // 0x234d24: 0xc08a61a  jal         func_229868
    ctx->pc = 0x234D24u;
    SET_GPR_U32(ctx, 31, 0x234D2Cu);
    ctx->pc = 0x234D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234D24u;
    // 0x234d28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x234D24u, 0x234D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234D2Cu;
label_234d2c:
    // 0x234d2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x234d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234d30: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x234D30u;
    {
        const bool branch_taken_0x234d30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x234d30) {
            ctx->pc = 0x234D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234D30u;
            // 0x234d34: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234D64u;
            goto label_234d64;
        }
    }
    ctx->pc = 0x234D38u;
    // 0x234d38: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x234D38u;
    {
        const bool branch_taken_0x234d38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x234D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234D38u;
        // 0x234d3c: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234d38) {
            ctx->pc = 0x234D4Cu;
            goto label_234d4c;
        }
    }
    ctx->pc = 0x234D40u;
    // 0x234d40: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x234d40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x234d44: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x234D44u;
    {
        const bool branch_taken_0x234d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234D44u;
        // 0x234d48: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234d44) {
            ctx->pc = 0x234D5Cu;
            goto label_234d5c;
        }
    }
    ctx->pc = 0x234D4Cu;
label_234d4c:
    // 0x234d4c: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x234d4cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x234d50: 0x3c03fffb  lui         $v1, 0xFFFB
    ctx->pc = 0x234d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65531 << 16));
    // 0x234d54: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x234d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x234d58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x234d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_234d5c:
    // 0x234d5c: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x234d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
    // 0x234d60: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x234d60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_234d64:
    // 0x234d64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x234d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234d68: 0x3e00008  jr          $ra
    ctx->pc = 0x234D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234D68u;
        // 0x234d6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234D70u;
}
