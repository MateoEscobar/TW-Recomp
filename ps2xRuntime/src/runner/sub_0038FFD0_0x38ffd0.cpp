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

// Function: sub_0038FFD0
// Address: 0x38ffd0 - 0x390038
void sub_0038FFD0_0x38ffd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038FFD0_0x38ffd0");
#endif

    ctx->pc = 0x38ffd0u;

    // 0x38ffd0: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x38ffd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x38ffd4: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x38ffd4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x38ffd8: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x38ffd8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x38ffdc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x38ffdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x38ffe0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38ffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x38ffe4: 0x95071538  lhu         $a3, 0x1538($t0)
    ctx->pc = 0x38ffe4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 5432)));
    // 0x38ffe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38ffe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38ffec: 0x2442bd38  addiu       $v0, $v0, -0x42C8
    ctx->pc = 0x38ffecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950200));
    // 0x38fff0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x38fff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x38fff4: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x38fff4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x38fff8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x38fff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x38fffc: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x38fffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x390000: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x390000u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x390004: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x390004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x390008: 0xa4c70004  sh          $a3, 0x4($a2)
    ctx->pc = 0x390008u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x39000c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x39000cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x390010: 0xa7a70000  sh          $a3, 0x0($sp)
    ctx->pc = 0x390010u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x390014: 0xa7a50002  sh          $a1, 0x2($sp)
    ctx->pc = 0x390014u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x390018: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x390018u;
    {
        const bool branch_taken_0x390018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390018u;
        // 0x39001c: 0xa5021538  sh          $v0, 0x1538($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 5432), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390018) {
            ctx->pc = 0x390028u;
            goto label_390028;
        }
    }
    ctx->pc = 0x390020u;
    // 0x390020: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x390020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x390024: 0xa5021538  sh          $v0, 0x1538($t0)
    ctx->pc = 0x390024u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 5432), (uint16_t)GPR_U32(ctx, 2));
label_390028:
    // 0x390028: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x390028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39002c: 0x3e00008  jr          $ra
    ctx->pc = 0x39002Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39002Cu;
        // 0x390030: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39002Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x390034u;
    // 0x390034: 0x0  nop
    ctx->pc = 0x390034u;
    // NOP
    ctx->pc = 0x390038u;
}
