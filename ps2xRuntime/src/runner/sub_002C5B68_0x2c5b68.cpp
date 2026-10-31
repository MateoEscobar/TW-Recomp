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

// Function: sub_002C5B68
// Address: 0x2c5b68 - 0x2c5be0
void sub_002C5B68_0x2c5b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5B68_0x2c5b68");
#endif

    ctx->pc = 0x2c5b68u;

    // 0x2c5b68: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2c5b68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5b6c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2c5b6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5b70: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c5b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c5b74: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2c5b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2c5b78: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c5b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c5b7c: 0x24630690  addiu       $v1, $v1, 0x690
    ctx->pc = 0x2c5b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1680));
    // 0x2c5b80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c5b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5b84: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2c5b84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c5b88: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x2c5b88u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x2c5b8c: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x2c5b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
    // 0x2c5b90: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x2c5b90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x2c5b94: 0xad03000c  sw          $v1, 0xC($t0)
    ctx->pc = 0x2c5b94u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
    // 0x2c5b98: 0xa104001c  sb          $a0, 0x1C($t0)
    ctx->pc = 0x2c5b98u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 28), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c5b9c: 0xa107001f  sb          $a3, 0x1F($t0)
    ctx->pc = 0x2c5b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 31), (uint8_t)GPR_U32(ctx, 7));
    // 0x2c5ba0: 0xa1000004  sb          $zero, 0x4($t0)
    ctx->pc = 0x2c5ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c5ba4: 0xa1000005  sb          $zero, 0x5($t0)
    ctx->pc = 0x2c5ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c5ba8: 0xad060010  sw          $a2, 0x10($t0)
    ctx->pc = 0x2c5ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 6));
    // 0x2c5bac: 0xad090014  sw          $t1, 0x14($t0)
    ctx->pc = 0x2c5bacu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 9));
    // 0x2c5bb0: 0xad000018  sw          $zero, 0x18($t0)
    ctx->pc = 0x2c5bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 0));
    // 0x2c5bb4: 0xa100001d  sb          $zero, 0x1D($t0)
    ctx->pc = 0x2c5bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 29), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c5bb8: 0x8ca2bd30  lw          $v0, -0x42D0($a1)
    ctx->pc = 0x2c5bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2c5bbc: 0x10c20005  beq         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C5BBCu;
    {
        const bool branch_taken_0x2c5bbc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c5bbc) {
            ctx->pc = 0x2C5BD4u;
            goto label_2c5bd4;
        }
    }
    ctx->pc = 0x2C5BC4u;
    // 0x2c5bc4: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5BC4u;
    {
        const bool branch_taken_0x2c5bc4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5BC4u;
        // 0x2c5bc8: 0xa100001c  sb          $zero, 0x1C($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 28), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5bc4) {
            ctx->pc = 0x2C5BD4u;
            goto label_2c5bd4;
        }
    }
    ctx->pc = 0x2C5BCCu;
    // 0x2c5bcc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c5bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c5bd0: 0xad020014  sw          $v0, 0x14($t0)
    ctx->pc = 0x2c5bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 2));
label_2c5bd4:
    // 0x2c5bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5BD4u;
        // 0x2c5bd8: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5BDCu;
    // 0x2c5bdc: 0x0  nop
    ctx->pc = 0x2c5bdcu;
    // NOP
    ctx->pc = 0x2c5be0u;
}
