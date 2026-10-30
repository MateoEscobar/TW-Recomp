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

// Function: sub_002BFE98
// Address: 0x2bfe98 - 0x2bff08
void sub_002BFE98_0x2bfe98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BFE98_0x2bfe98");
#endif

    ctx->pc = 0x2bfe98u;

    // 0x2bfe98: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x2bfe98u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x2bfe9c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2bfe9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2bfea0: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2bfea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x2bfea4: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2bfea4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfea8: 0x84403  sra         $t0, $t0, 16
    ctx->pc = 0x2bfea8u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
    // 0x2bfeac: 0x24420ab0  addiu       $v0, $v0, 0xAB0
    ctx->pc = 0x2bfeacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2736));
    // 0x2bfeb0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2bfeb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2bfeb4: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x2bfeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x2bfeb8: 0xad230008  sw          $v1, 0x8($t1)
    ctx->pc = 0x2bfeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 3));
    // 0x2bfebc: 0xad22000c  sw          $v0, 0xC($t1)
    ctx->pc = 0x2bfebcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 2));
    // 0x2bfec0: 0xad260020  sw          $a2, 0x20($t1)
    ctx->pc = 0x2bfec0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 32), GPR_U32(ctx, 6));
    // 0x2bfec4: 0xa527001c  sh          $a3, 0x1C($t1)
    ctx->pc = 0x2bfec4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 28), (uint16_t)GPR_U32(ctx, 7));
    // 0x2bfec8: 0xa1200004  sb          $zero, 0x4($t1)
    ctx->pc = 0x2bfec8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bfecc: 0xa1200005  sb          $zero, 0x5($t1)
    ctx->pc = 0x2bfeccu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bfed0: 0xad200024  sw          $zero, 0x24($t1)
    ctx->pc = 0x2bfed0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 36), GPR_U32(ctx, 0));
    // 0x2bfed4: 0xa5200010  sh          $zero, 0x10($t1)
    ctx->pc = 0x2bfed4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x2bfed8: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BFED8u;
    {
        const bool branch_taken_0x2bfed8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFED8u;
        // 0x2bfedc: 0xad280014  sw          $t0, 0x14($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfed8) {
            ctx->pc = 0x2BFEFCu;
            goto label_2bfefc;
        }
    }
    ctx->pc = 0x2BFEE0u;
    // 0x2bfee0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2bfee0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x2bfee4: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x2bfee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2bfee8: 0x8ca3b734  lw          $v1, -0x48CC($a1)
    ctx->pc = 0x2bfee8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x2bfeec: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x2bfeecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2bfef0: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x2bfef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2bfef4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2bfef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2bfef8: 0xad220014  sw          $v0, 0x14($t1)
    ctx->pc = 0x2bfef8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 2));
label_2bfefc:
    // 0x2bfefc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFEFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFEFCu;
        // 0x2bff00: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFEFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFF04u;
    // 0x2bff04: 0x0  nop
    ctx->pc = 0x2bff04u;
    // NOP
    ctx->pc = 0x2bff08u;
}
