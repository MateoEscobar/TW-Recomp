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

// Function: sub_004EAC98
// Address: 0x4eac98 - 0x4ead18
void sub_004EAC98_0x4eac98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EAC98_0x4eac98");
#endif

    switch (ctx->pc) {
        case 0x4eac98u: goto label_4eac98;
        case 0x4eac9cu: goto label_4eac9c;
        case 0x4eaca0u: goto label_4eaca0;
        case 0x4eaca4u: goto label_4eaca4;
        case 0x4eaca8u: goto label_4eaca8;
        case 0x4eacacu: goto label_4eacac;
        case 0x4eacb0u: goto label_4eacb0;
        case 0x4eacb4u: goto label_4eacb4;
        case 0x4eacb8u: goto label_4eacb8;
        case 0x4eacbcu: goto label_4eacbc;
        case 0x4eacc0u: goto label_4eacc0;
        case 0x4eacc4u: goto label_4eacc4;
        case 0x4eacc8u: goto label_4eacc8;
        case 0x4eacccu: goto label_4eaccc;
        case 0x4eacd0u: goto label_4eacd0;
        case 0x4eacd4u: goto label_4eacd4;
        case 0x4eacd8u: goto label_4eacd8;
        case 0x4eacdcu: goto label_4eacdc;
        case 0x4eace0u: goto label_4eace0;
        case 0x4eace4u: goto label_4eace4;
        case 0x4eace8u: goto label_4eace8;
        case 0x4eacecu: goto label_4eacec;
        case 0x4eacf0u: goto label_4eacf0;
        case 0x4eacf4u: goto label_4eacf4;
        case 0x4eacf8u: goto label_4eacf8;
        case 0x4eacfcu: goto label_4eacfc;
        case 0x4ead00u: goto label_4ead00;
        case 0x4ead04u: goto label_4ead04;
        case 0x4ead08u: goto label_4ead08;
        case 0x4ead0cu: goto label_4ead0c;
        case 0x4ead10u: goto label_4ead10;
        case 0x4ead14u: goto label_4ead14;
        default: break;
    }

    ctx->pc = 0x4eac98u;

label_4eac98:
    // 0x4eac98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4eac98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4eac9c:
    // 0x4eac9c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4eac9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4eaca0:
    // 0x4eaca0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4eaca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4eaca4:
    // 0x4eaca4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4eaca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4eaca8:
    // 0x4eaca8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4eaca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4eacac:
    // 0x4eacac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4eacacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4eacb0:
    // 0x4eacb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4eacb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4eacb4:
    // 0x4eacb4: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4eacb8:
    if (ctx->pc == 0x4EACB8u) {
        ctx->pc = 0x4EACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EACB4u;
        // 0x4eacb8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EACBCu;
        goto label_4eacbc;
    }
    ctx->pc = 0x4EACB4u;
    {
        const bool branch_taken_0x4eacb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EACB4u;
        // 0x4eacb8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eacb4) {
            ctx->pc = 0x4EACFCu;
            goto label_4eacfc;
        }
    }
    ctx->pc = 0x4EACBCu;
label_4eacbc:
    // 0x4eacbc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4eacbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4eacc0:
    // 0x4eacc0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4eacc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4eacc4:
    // 0x4eacc4: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4eacc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4eacc8:
    // 0x4eacc8: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4eacc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4eaccc:
    // 0x4eaccc: 0x60f809  jalr        $v1
label_4eacd0:
    if (ctx->pc == 0x4EACD0u) {
        ctx->pc = 0x4EACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EACCCu;
        // 0x4eacd0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EACD4u;
        goto label_4eacd4;
    }
    ctx->pc = 0x4EACCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EACD4u);
        ctx->pc = 0x4EACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EACCCu;
        // 0x4eacd0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EACCCu, 0x4EACD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EACD4u;
label_4eacd4:
    // 0x4eacd4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4eacd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4eacd8:
    // 0x4eacd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4eacd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4eacdc:
    // 0x4eacdc: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4eacdcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4eace0:
    // 0x4eace0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4eace0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4eace4:
    // 0x4eace4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4eace4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4eace8:
    // 0x4eace8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4eace8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4eacec:
    // 0x4eacec: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4eacecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4eacf0:
    // 0x4eacf0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4eacf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4eacf4:
    // 0x4eacf4: 0x60f809  jalr        $v1
label_4eacf8:
    if (ctx->pc == 0x4EACF8u) {
        ctx->pc = 0x4EACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EACF4u;
        // 0x4eacf8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EACFCu;
        goto label_4eacfc;
    }
    ctx->pc = 0x4EACF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EACFCu);
        ctx->pc = 0x4EACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EACF4u;
        // 0x4eacf8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EACF4u, 0x4EACFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EACFCu;
label_4eacfc:
    // 0x4eacfc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4eacfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ead00:
    // 0x4ead00: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ead00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ead04:
    // 0x4ead04: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4ead04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ead08:
    // 0x4ead08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ead08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ead0c:
    // 0x4ead0c: 0x3e00008  jr          $ra
label_4ead10:
    if (ctx->pc == 0x4EAD10u) {
        ctx->pc = 0x4EAD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAD0Cu;
        // 0x4ead10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EAD14u;
        goto label_4ead14;
    }
    ctx->pc = 0x4EAD0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EAD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAD0Cu;
        // 0x4ead10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EAD0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EAD14u;
label_4ead14:
    // 0x4ead14: 0x0  nop
    ctx->pc = 0x4ead14u;
    // NOP
    ctx->pc = 0x4ead18u;
}
