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

// Function: sub_00235CE8
// Address: 0x235ce8 - 0x235d50
void sub_00235CE8_0x235ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235CE8_0x235ce8");
#endif

    switch (ctx->pc) {
        case 0x235d04u: goto label_235d04;
        case 0x235d0cu: goto label_235d0c;
        default: break;
    }

    ctx->pc = 0x235ce8u;

    // 0x235ce8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x235ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x235cec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x235cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x235cf0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x235cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x235cf4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x235cf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235cf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x235cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x235cfc: 0xc0e4060  jal         func_390180
    ctx->pc = 0x235CFCu;
    SET_GPR_U32(ctx, 31, 0x235D04u);
    ctx->pc = 0x235D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235CFCu;
    // 0x235d00: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x235CFCu, 0x235D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235D04u;
label_235d04:
    // 0x235d04: 0xc08a61a  jal         func_229868
    ctx->pc = 0x235D04u;
    SET_GPR_U32(ctx, 31, 0x235D0Cu);
    ctx->pc = 0x235D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235D04u;
    // 0x235d08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x235D04u, 0x235D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235D0Cu;
label_235d0c:
    // 0x235d0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x235d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235d10: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x235D10u;
    {
        const bool branch_taken_0x235d10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x235D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D10u;
        // 0x235d14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235d10) {
            ctx->pc = 0x235D3Cu;
            goto label_235d3c;
        }
    }
    ctx->pc = 0x235D18u;
    // 0x235d18: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x235D18u;
    {
        const bool branch_taken_0x235d18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x235D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D18u;
        // 0x235d1c: 0xdc8200e0  ld          $v0, 0xE0($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235d18) {
            ctx->pc = 0x235D2Cu;
            goto label_235d2c;
        }
    }
    ctx->pc = 0x235D20u;
    // 0x235d20: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x235d20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x235d24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x235D24u;
    {
        const bool branch_taken_0x235d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D24u;
        // 0x235d28: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235d24) {
            ctx->pc = 0x235D38u;
            goto label_235d38;
        }
    }
    ctx->pc = 0x235D2Cu;
label_235d2c:
    // 0x235d2c: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x235d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
    // 0x235d30: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x235d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x235d34: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x235d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_235d38:
    // 0x235d38: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x235d38u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
label_235d3c:
    // 0x235d3c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x235d3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235d40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x235d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235d44: 0x3e00008  jr          $ra
    ctx->pc = 0x235D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D44u;
        // 0x235d48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235D4Cu;
    // 0x235d4c: 0x0  nop
    ctx->pc = 0x235d4cu;
    // NOP
    ctx->pc = 0x235d50u;
}
