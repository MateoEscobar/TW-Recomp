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

// Function: sub_00143F00
// Address: 0x143f00 - 0x143f68
void sub_00143F00_0x143f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143F00_0x143f00");
#endif

    switch (ctx->pc) {
        case 0x143f20u: goto label_143f20;
        default: break;
    }

    ctx->pc = 0x143f00u;

    // 0x143f00: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x143f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x143f04: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x143f04u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143f08: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x143f08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143f0c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x143f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x143f10: 0x18c00011  blez        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x143F10u;
    {
        const bool branch_taken_0x143f10 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x143F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F10u;
        // 0x143f14: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143f10) {
            ctx->pc = 0x143F58u;
            goto label_143f58;
        }
    }
    ctx->pc = 0x143F18u;
    // 0x143f18: 0x3c0800ff  lui         $t0, 0xFF
    ctx->pc = 0x143f18u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)255 << 16));
    // 0x143f1c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x143f1cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
label_143f20:
    // 0x143f20: 0x80e30000  lb          $v1, 0x0($a3)
    ctx->pc = 0x143f20u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x143f24: 0x22a02  srl         $a1, $v0, 8
    ctx->pc = 0x143f24u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x143f28: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x143f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143f2c: 0xa82824  and         $a1, $a1, $t0
    ctx->pc = 0x143f2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x143f30: 0x431826  xor         $v1, $v0, $v1
    ctx->pc = 0x143f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x143f34: 0x86202a  slt         $a0, $a0, $a2
    ctx->pc = 0x143f34u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x143f38: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x143f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x143f3c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x143f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x143f40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x143f40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x143f44: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x143f44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x143f48: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x143f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x143f4c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x143f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x143f50: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x143F50u;
    {
        const bool branch_taken_0x143f50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x143F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F50u;
        // 0x143f54: 0xa21026  xor         $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143f50) {
            ctx->pc = 0x143F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143f20;
        }
    }
    ctx->pc = 0x143F58u;
label_143f58:
    // 0x143f58: 0x3e00008  jr          $ra
    ctx->pc = 0x143F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F58u;
        // 0x143f5c: 0x21027  nor         $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143F60u;
    // 0x143f60: 0x71027  nor         $v0, $zero, $a3
    ctx->pc = 0x143f60u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 7)));
    // 0x143f64: 0x0  nop
    ctx->pc = 0x143f64u;
    // NOP
    ctx->pc = 0x143f68u;
}
