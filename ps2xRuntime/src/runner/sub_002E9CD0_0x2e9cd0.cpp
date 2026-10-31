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

// Function: sub_002E9CD0
// Address: 0x2e9cd0 - 0x2e9d88
void sub_002E9CD0_0x2e9cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9CD0_0x2e9cd0");
#endif

    switch (ctx->pc) {
        case 0x2e9d64u: goto label_2e9d64;
        case 0x2e9d6cu: goto label_2e9d6c;
        default: break;
    }

    ctx->pc = 0x2e9cd0u;

    // 0x2e9cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e9cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e9cd4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2e9cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2e9cd8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e9cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e9cdc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2e9cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2e9ce0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e9ce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9ce4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e9ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e9ce8: 0x24632940  addiu       $v1, $v1, 0x2940
    ctx->pc = 0x2e9ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10560));
    // 0x2e9cec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2e9cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9cf0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e9cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e9cf4: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x2e9cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2e9cf8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2e9cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2e9cfc: 0xa2060025  sb          $a2, 0x25($s0)
    ctx->pc = 0x2e9cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 37), (uint8_t)GPR_U32(ctx, 6));
    // 0x2e9d00: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2e9d00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2e9d04: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2e9d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2e9d08: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x2e9d08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x2e9d0c: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2e9d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9d10: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2e9d10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9d14: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2e9d14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2e9d18: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2e9d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2e9d1c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2e9d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x2e9d20: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2e9d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2e9d24: 0xa2000024  sb          $zero, 0x24($s0)
    ctx->pc = 0x2e9d24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9d28: 0xa2000026  sb          $zero, 0x26($s0)
    ctx->pc = 0x2e9d28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 38), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9d2c: 0xa2000027  sb          $zero, 0x27($s0)
    ctx->pc = 0x2e9d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 39), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9d30: 0xa2000028  sb          $zero, 0x28($s0)
    ctx->pc = 0x2e9d30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9d34: 0xa2000029  sb          $zero, 0x29($s0)
    ctx->pc = 0x2e9d34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9d38: 0xa200002a  sb          $zero, 0x2A($s0)
    ctx->pc = 0x2e9d38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9d3c: 0xa200002b  sb          $zero, 0x2B($s0)
    ctx->pc = 0x2e9d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9d40: 0xa200002c  sb          $zero, 0x2C($s0)
    ctx->pc = 0x2e9d40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9d44: 0xa200002d  sb          $zero, 0x2D($s0)
    ctx->pc = 0x2e9d44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 45), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9d48: 0xa200002e  sb          $zero, 0x2E($s0)
    ctx->pc = 0x2e9d48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 46), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9d4c: 0xa200002f  sb          $zero, 0x2F($s0)
    ctx->pc = 0x2e9d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 47), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9d50: 0xa2000030  sb          $zero, 0x30($s0)
    ctx->pc = 0x2e9d50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9d54: 0xa2000031  sb          $zero, 0x31($s0)
    ctx->pc = 0x2e9d54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 49), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9d58: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2e9d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e9d5c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2E9D5Cu;
    SET_GPR_U32(ctx, 31, 0x2E9D64u);
    ctx->pc = 0x2E9D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9D5Cu;
    // 0x2e9d60: 0x24840364  addiu       $a0, $a0, 0x364 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 868));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2E9D5Cu, 0x2E9D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9D64u;
label_2e9d64:
    // 0x2e9d64: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x2E9D64u;
    SET_GPR_U32(ctx, 31, 0x2E9D6Cu);
    ctx->pc = 0x2E9D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9D64u;
    // 0x2e9d68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2E9D64u, 0x2E9D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9D6Cu;
label_2e9d6c:
    // 0x2e9d6c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2e9d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2e9d70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e9d70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9d74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e9d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9d78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e9d78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e9d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9D7Cu;
        // 0x2e9d80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9D84u;
    // 0x2e9d84: 0x0  nop
    ctx->pc = 0x2e9d84u;
    // NOP
    ctx->pc = 0x2e9d88u;
}
