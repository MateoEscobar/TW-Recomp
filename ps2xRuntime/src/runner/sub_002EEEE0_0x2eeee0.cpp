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

// Function: sub_002EEEE0
// Address: 0x2eeee0 - 0x2eef78
void sub_002EEEE0_0x2eeee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EEEE0_0x2eeee0");
#endif

    switch (ctx->pc) {
        case 0x2eef30u: goto label_2eef30;
        default: break;
    }

    ctx->pc = 0x2eeee0u;

    // 0x2eeee0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2eeee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2eeee4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2eeee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2eeee8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2eeee8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeeec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2eeeecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2eeef0: 0x246327c0  addiu       $v1, $v1, 0x27C0
    ctx->pc = 0x2eeef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10176));
    // 0x2eeef4: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x2eeef4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x2eeef8: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x2eeef8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
    // 0x2eeefc: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2eeefcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x2eef00: 0xad03000c  sw          $v1, 0xC($t0)
    ctx->pc = 0x2eef00u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
    // 0x2eef04: 0x248416c0  addiu       $a0, $a0, 0x16C0
    ctx->pc = 0x2eef04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
    // 0x2eef08: 0xa1000004  sb          $zero, 0x4($t0)
    ctx->pc = 0x2eef08u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eef0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eef0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eef10: 0xa1000005  sb          $zero, 0x5($t0)
    ctx->pc = 0x2eef10u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eef14: 0x25050024  addiu       $a1, $t0, 0x24
    ctx->pc = 0x2eef14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 36));
    // 0x2eef18: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2eef18u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5116C0u));
    // 0x2eef1c: 0xa1060034  sb          $a2, 0x34($t0)
    ctx->pc = 0x2eef1cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 52), (uint8_t)GPR_U32(ctx, 6));
    // 0x2eef20: 0x7d020010  sq          $v0, 0x10($t0)
    ctx->pc = 0x2eef20u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 2));
    // 0x2eef24: 0xad000020  sw          $zero, 0x20($t0)
    ctx->pc = 0x2eef24u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 0));
    // 0x2eef28: 0xa1000035  sb          $zero, 0x35($t0)
    ctx->pc = 0x2eef28u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 53), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eef2c: 0xa1000036  sb          $zero, 0x36($t0)
    ctx->pc = 0x2eef2cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 54), (uint8_t)GPR_U32(ctx, 0));
label_2eef30:
    // 0x2eef30: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x2eef30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2eef34: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2eef34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2eef38: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x2eef38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x2eef3c: 0x2d220008  sltiu       $v0, $t1, 0x8
    ctx->pc = 0x2eef3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2eef40: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x2eef40u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2eef44: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2EEF44u;
    {
        const bool branch_taken_0x2eef44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EEF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEF44u;
        // 0x2eef48: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eef44) {
            ctx->pc = 0x2EEF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eef30;
        }
    }
    ctx->pc = 0x2EEF4Cu;
    // 0x2eef4c: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x2eef4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2eef50: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x2eef50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
    // 0x2eef54: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x2eef54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
    // 0x2eef58: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x2eef58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eef5c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2eef5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2eef60: 0x84830092  lh          $v1, 0x92($a0)
    ctx->pc = 0x2eef60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 146)));
    // 0x2eef64: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2eef64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2eef68: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2eef68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2eef6c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2eef6cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2eef70: 0x3e00008  jr          $ra
    ctx->pc = 0x2EEF70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EEF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEF70u;
        // 0x2eef74: 0x7d040010  sq          $a0, 0x10($t0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEF70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EEF78u;
}
