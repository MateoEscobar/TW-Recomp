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

// Function: sub_00234EF8
// Address: 0x234ef8 - 0x234f68
void sub_00234EF8_0x234ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234EF8_0x234ef8");
#endif

    switch (ctx->pc) {
        case 0x234f14u: goto label_234f14;
        case 0x234f1cu: goto label_234f1c;
        default: break;
    }

    ctx->pc = 0x234ef8u;

    // 0x234ef8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x234ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x234efc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x234efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x234f00: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x234f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x234f04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x234f04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234f08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x234f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x234f0c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x234F0Cu;
    SET_GPR_U32(ctx, 31, 0x234F14u);
    ctx->pc = 0x234F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234F0Cu;
    // 0x234f10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x234F0Cu, 0x234F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234F14u;
label_234f14:
    // 0x234f14: 0xc08a61a  jal         func_229868
    ctx->pc = 0x234F14u;
    SET_GPR_U32(ctx, 31, 0x234F1Cu);
    ctx->pc = 0x234F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234F14u;
    // 0x234f18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x234F14u, 0x234F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234F1Cu;
label_234f1c:
    // 0x234f1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x234f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234f20: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x234F20u;
    {
        const bool branch_taken_0x234f20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x234f20) {
            ctx->pc = 0x234F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234F20u;
            // 0x234f24: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234F5Cu;
            goto label_234f5c;
        }
    }
    ctx->pc = 0x234F28u;
    // 0x234f28: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x234F28u;
    {
        const bool branch_taken_0x234f28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x234F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F28u;
        // 0x234f2c: 0xdc8200e0  ld          $v0, 0xE0($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234f28) {
            ctx->pc = 0x234F40u;
            goto label_234f40;
        }
    }
    ctx->pc = 0x234F30u;
    // 0x234f30: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x234f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x234f34: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x234f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
    // 0x234f38: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x234F38u;
    {
        const bool branch_taken_0x234f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F38u;
        // 0x234f3c: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234f38) {
            ctx->pc = 0x234F54u;
            goto label_234f54;
        }
    }
    ctx->pc = 0x234F40u;
label_234f40:
    // 0x234f40: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x234f40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x234f44: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x234f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x234f48: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x234f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x234f4c: 0x34630007  ori         $v1, $v1, 0x7
    ctx->pc = 0x234f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7);
    // 0x234f50: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x234f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_234f54:
    // 0x234f54: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x234f54u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
    // 0x234f58: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x234f58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_234f5c:
    // 0x234f5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x234f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234f60: 0x3e00008  jr          $ra
    ctx->pc = 0x234F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F60u;
        // 0x234f64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234F68u;
}
