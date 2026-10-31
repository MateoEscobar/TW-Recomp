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

// Function: sub_001CCD90
// Address: 0x1ccd90 - 0x1cce30
void sub_001CCD90_0x1ccd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CCD90_0x1ccd90");
#endif

    switch (ctx->pc) {
        case 0x1ccd90u: goto label_1ccd90;
        case 0x1ccd94u: goto label_1ccd94;
        case 0x1ccd98u: goto label_1ccd98;
        case 0x1ccd9cu: goto label_1ccd9c;
        case 0x1ccda0u: goto label_1ccda0;
        case 0x1ccda4u: goto label_1ccda4;
        case 0x1ccda8u: goto label_1ccda8;
        case 0x1ccdacu: goto label_1ccdac;
        case 0x1ccdb0u: goto label_1ccdb0;
        case 0x1ccdb4u: goto label_1ccdb4;
        case 0x1ccdb8u: goto label_1ccdb8;
        case 0x1ccdbcu: goto label_1ccdbc;
        case 0x1ccdc0u: goto label_1ccdc0;
        case 0x1ccdc4u: goto label_1ccdc4;
        case 0x1ccdc8u: goto label_1ccdc8;
        case 0x1ccdccu: goto label_1ccdcc;
        case 0x1ccdd0u: goto label_1ccdd0;
        case 0x1ccdd4u: goto label_1ccdd4;
        case 0x1ccdd8u: goto label_1ccdd8;
        case 0x1ccddcu: goto label_1ccddc;
        case 0x1ccde0u: goto label_1ccde0;
        case 0x1ccde4u: goto label_1ccde4;
        case 0x1ccde8u: goto label_1ccde8;
        case 0x1ccdecu: goto label_1ccdec;
        case 0x1ccdf0u: goto label_1ccdf0;
        case 0x1ccdf4u: goto label_1ccdf4;
        case 0x1ccdf8u: goto label_1ccdf8;
        case 0x1ccdfcu: goto label_1ccdfc;
        case 0x1cce00u: goto label_1cce00;
        case 0x1cce04u: goto label_1cce04;
        case 0x1cce08u: goto label_1cce08;
        case 0x1cce0cu: goto label_1cce0c;
        case 0x1cce10u: goto label_1cce10;
        case 0x1cce14u: goto label_1cce14;
        case 0x1cce18u: goto label_1cce18;
        case 0x1cce1cu: goto label_1cce1c;
        case 0x1cce20u: goto label_1cce20;
        case 0x1cce24u: goto label_1cce24;
        case 0x1cce28u: goto label_1cce28;
        case 0x1cce2cu: goto label_1cce2c;
        default: break;
    }

    ctx->pc = 0x1ccd90u;

label_1ccd90:
    // 0x1ccd90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ccd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ccd94:
    // 0x1ccd94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ccd94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1ccd98:
    // 0x1ccd98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ccd98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ccd9c:
    // 0x1ccd9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ccd9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ccda0:
    // 0x1ccda0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ccda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ccda4:
    // 0x1ccda4: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1ccda4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1ccda8:
    // 0x1ccda8: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1ccda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1ccdac:
    // 0x1ccdac: 0x40f809  jalr        $v0
label_1ccdb0:
    if (ctx->pc == 0x1CCDB0u) {
        ctx->pc = 0x1CCDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCDACu;
        // 0x1ccdb0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCDB4u;
        goto label_1ccdb4;
    }
    ctx->pc = 0x1CCDACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CCDB4u);
        ctx->pc = 0x1CCDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCDACu;
        // 0x1ccdb0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCDACu, 0x1CCDB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CCDB4u;
label_1ccdb4:
    // 0x1ccdb4: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_1ccdb8:
    if (ctx->pc == 0x1CCDB8u) {
        ctx->pc = 0x1CCDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCDB4u;
        // 0x1ccdb8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCDBCu;
        goto label_1ccdbc;
    }
    ctx->pc = 0x1CCDB4u;
    {
        const bool branch_taken_0x1ccdb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccdb4) {
            ctx->pc = 0x1CCDB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCDB4u;
            // 0x1ccdb8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCE24u;
            goto label_1cce24;
        }
    }
    ctx->pc = 0x1CCDBCu;
label_1ccdbc:
    // 0x1ccdbc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ccdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ccdc0:
    // 0x1ccdc0: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1ccdc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1ccdc4:
    // 0x1ccdc4: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1ccdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1ccdc8:
    // 0x1ccdc8: 0x40f809  jalr        $v0
label_1ccdcc:
    if (ctx->pc == 0x1CCDCCu) {
        ctx->pc = 0x1CCDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCDC8u;
        // 0x1ccdcc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCDD0u;
        goto label_1ccdd0;
    }
    ctx->pc = 0x1CCDC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CCDD0u);
        ctx->pc = 0x1CCDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCDC8u;
        // 0x1ccdcc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCDC8u, 0x1CCDD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CCDD0u;
label_1ccdd0:
    // 0x1ccdd0: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_1ccdd4:
    if (ctx->pc == 0x1CCDD4u) {
        ctx->pc = 0x1CCDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCDD0u;
        // 0x1ccdd4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCDD8u;
        goto label_1ccdd8;
    }
    ctx->pc = 0x1CCDD0u;
    {
        const bool branch_taken_0x1ccdd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccdd0) {
            ctx->pc = 0x1CCDD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCDD0u;
            // 0x1ccdd4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCE24u;
            goto label_1cce24;
        }
    }
    ctx->pc = 0x1CCDD8u;
label_1ccdd8:
    // 0x1ccdd8: 0x8e050070  lw          $a1, 0x70($s0)
    ctx->pc = 0x1ccdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_1ccddc:
    // 0x1ccddc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ccddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ccde0:
    // 0x1ccde0: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1ccde0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1ccde4:
    // 0x1ccde4: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1ccde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1ccde8:
    // 0x1ccde8: 0x60f809  jalr        $v1
label_1ccdec:
    if (ctx->pc == 0x1CCDECu) {
        ctx->pc = 0x1CCDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCDE8u;
        // 0x1ccdec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCDF0u;
        goto label_1ccdf0;
    }
    ctx->pc = 0x1CCDE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CCDF0u);
        ctx->pc = 0x1CCDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCDE8u;
        // 0x1ccdec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCDE8u, 0x1CCDF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CCDF0u;
label_1ccdf0:
    // 0x1ccdf0: 0x8e050098  lw          $a1, 0x98($s0)
    ctx->pc = 0x1ccdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_1ccdf4:
    // 0x1ccdf4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ccdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ccdf8:
    // 0x1ccdf8: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1ccdf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1ccdfc:
    // 0x1ccdfc: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1ccdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1cce00:
    // 0x1cce00: 0x60f809  jalr        $v1
label_1cce04:
    if (ctx->pc == 0x1CCE04u) {
        ctx->pc = 0x1CCE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE00u;
        // 0x1cce04: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCE08u;
        goto label_1cce08;
    }
    ctx->pc = 0x1CCE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CCE08u);
        ctx->pc = 0x1CCE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE00u;
        // 0x1cce04: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCE00u, 0x1CCE08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CCE08u;
label_1cce08:
    // 0x1cce08: 0x8e050074  lw          $a1, 0x74($s0)
    ctx->pc = 0x1cce08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_1cce0c:
    // 0x1cce0c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1cce0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1cce10:
    // 0x1cce10: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1cce10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1cce14:
    // 0x1cce14: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1cce14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1cce18:
    // 0x1cce18: 0x60f809  jalr        $v1
label_1cce1c:
    if (ctx->pc == 0x1CCE1Cu) {
        ctx->pc = 0x1CCE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE18u;
        // 0x1cce1c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCE20u;
        goto label_1cce20;
    }
    ctx->pc = 0x1CCE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CCE20u);
        ctx->pc = 0x1CCE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE18u;
        // 0x1cce1c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCE18u, 0x1CCE20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CCE20u;
label_1cce20:
    // 0x1cce20: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cce20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cce24:
    // 0x1cce24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cce24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cce28:
    // 0x1cce28: 0x3e00008  jr          $ra
label_1cce2c:
    if (ctx->pc == 0x1CCE2Cu) {
        ctx->pc = 0x1CCE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE28u;
        // 0x1cce2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCE30u;
        goto label_fallthrough_0x1cce28;
    }
    ctx->pc = 0x1CCE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE28u;
        // 0x1cce2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCE28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1cce28:
    ctx->pc = 0x1CCE30u;
}
