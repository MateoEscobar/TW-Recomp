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

// Function: sub_002BECB8
// Address: 0x2becb8 - 0x2bed30
void sub_002BECB8_0x2becb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BECB8_0x2becb8");
#endif

    switch (ctx->pc) {
        case 0x2becb8u: goto label_2becb8;
        case 0x2becbcu: goto label_2becbc;
        case 0x2becc0u: goto label_2becc0;
        case 0x2becc4u: goto label_2becc4;
        case 0x2becc8u: goto label_2becc8;
        case 0x2becccu: goto label_2beccc;
        case 0x2becd0u: goto label_2becd0;
        case 0x2becd4u: goto label_2becd4;
        case 0x2becd8u: goto label_2becd8;
        case 0x2becdcu: goto label_2becdc;
        case 0x2bece0u: goto label_2bece0;
        case 0x2bece4u: goto label_2bece4;
        case 0x2bece8u: goto label_2bece8;
        case 0x2bececu: goto label_2becec;
        case 0x2becf0u: goto label_2becf0;
        case 0x2becf4u: goto label_2becf4;
        case 0x2becf8u: goto label_2becf8;
        case 0x2becfcu: goto label_2becfc;
        case 0x2bed00u: goto label_2bed00;
        case 0x2bed04u: goto label_2bed04;
        case 0x2bed08u: goto label_2bed08;
        case 0x2bed0cu: goto label_2bed0c;
        case 0x2bed10u: goto label_2bed10;
        case 0x2bed14u: goto label_2bed14;
        case 0x2bed18u: goto label_2bed18;
        case 0x2bed1cu: goto label_2bed1c;
        case 0x2bed20u: goto label_2bed20;
        case 0x2bed24u: goto label_2bed24;
        case 0x2bed28u: goto label_2bed28;
        case 0x2bed2cu: goto label_2bed2c;
        default: break;
    }

    ctx->pc = 0x2becb8u;

label_2becb8:
    // 0x2becb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2becb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2becbc:
    // 0x2becbc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2becbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2becc0:
    // 0x2becc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2becc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2becc4:
    // 0x2becc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2becc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2becc8:
    // 0x2becc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2becc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2beccc:
    // 0x2beccc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2becccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2becd0:
    // 0x2becd0: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x2becd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2becd4:
    // 0x2becd4: 0xc05959e  jal         func_165678
label_2becd8:
    if (ctx->pc == 0x2BECD8u) {
        ctx->pc = 0x2BECD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BECD4u;
        // 0x2becd8: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BECDCu;
        goto label_2becdc;
    }
    ctx->pc = 0x2BECD4u;
    SET_GPR_U32(ctx, 31, 0x2BECDCu);
    ctx->pc = 0x2BECD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BECD4u;
    // 0x2becd8: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x2BECD4u, 0x2BECDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BECDCu;
label_2becdc:
    // 0x2becdc: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_2bece0:
    if (ctx->pc == 0x2BECE0u) {
        ctx->pc = 0x2BECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BECDCu;
        // 0x2bece0: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BECE4u;
        goto label_2bece4;
    }
    ctx->pc = 0x2BECDCu;
    {
        const bool branch_taken_0x2becdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2becdc) {
            ctx->pc = 0x2BECE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BECDCu;
            // 0x2bece0: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BED08u;
            goto label_2bed08;
        }
    }
    ctx->pc = 0x2BECE4u;
label_2bece4:
    // 0x2bece4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bece4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bece8:
    // 0x2bece8: 0xc08750a  jal         func_21D428
label_2becec:
    if (ctx->pc == 0x2BECECu) {
        ctx->pc = 0x2BECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BECE8u;
        // 0x2becec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BECF0u;
        goto label_2becf0;
    }
    ctx->pc = 0x2BECE8u;
    SET_GPR_U32(ctx, 31, 0x2BECF0u);
    ctx->pc = 0x2BECECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BECE8u;
    // 0x2becec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x2BECE8u, 0x2BECF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BECF0u;
label_2becf0:
    // 0x2becf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2becf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2becf4:
    // 0x2becf4: 0xc0a57ca  jal         func_295F28
label_2becf8:
    if (ctx->pc == 0x2BECF8u) {
        ctx->pc = 0x2BECF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BECF4u;
        // 0x2becf8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BECFCu;
        goto label_2becfc;
    }
    ctx->pc = 0x2BECF4u;
    SET_GPR_U32(ctx, 31, 0x2BECFCu);
    ctx->pc = 0x2BECF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BECF4u;
    // 0x2becf8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x2BECF4u, 0x2BECFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BECFCu;
label_2becfc:
    // 0x2becfc: 0xc08bfbc  jal         func_22FEF0
label_2bed00:
    if (ctx->pc == 0x2BED00u) {
        ctx->pc = 0x2BED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BECFCu;
        // 0x2bed00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BED04u;
        goto label_2bed04;
    }
    ctx->pc = 0x2BECFCu;
    SET_GPR_U32(ctx, 31, 0x2BED04u);
    ctx->pc = 0x2BED00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BECFCu;
    // 0x2bed00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2BECFCu, 0x2BED04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BED04u;
label_2bed04:
    // 0x2bed04: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2bed04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2bed08:
    // 0x2bed08: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x2bed08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2bed0c:
    // 0x2bed0c: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2bed0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2bed10:
    // 0x2bed10: 0x60f809  jalr        $v1
label_2bed14:
    if (ctx->pc == 0x2BED14u) {
        ctx->pc = 0x2BED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED10u;
        // 0x2bed14: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BED18u;
        goto label_2bed18;
    }
    ctx->pc = 0x2BED10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2BED18u);
        ctx->pc = 0x2BED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED10u;
        // 0x2bed14: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BED10u, 0x2BED18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BED18u;
label_2bed18:
    // 0x2bed18: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2bed18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2bed1c:
    // 0x2bed1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bed1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bed20:
    // 0x2bed20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bed20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bed24:
    // 0x2bed24: 0x3e00008  jr          $ra
label_2bed28:
    if (ctx->pc == 0x2BED28u) {
        ctx->pc = 0x2BED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED24u;
        // 0x2bed28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BED2Cu;
        goto label_2bed2c;
    }
    ctx->pc = 0x2BED24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED24u;
        // 0x2bed28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BED24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BED2Cu;
label_2bed2c:
    // 0x2bed2c: 0x0  nop
    ctx->pc = 0x2bed2cu;
    // NOP
    ctx->pc = 0x2bed30u;
}
