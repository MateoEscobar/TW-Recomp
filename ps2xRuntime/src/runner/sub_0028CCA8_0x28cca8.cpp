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

// Function: sub_0028CCA8
// Address: 0x28cca8 - 0x28cd10
void sub_0028CCA8_0x28cca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028CCA8_0x28cca8");
#endif

    switch (ctx->pc) {
        case 0x28cca8u: goto label_28cca8;
        case 0x28ccacu: goto label_28ccac;
        case 0x28ccb0u: goto label_28ccb0;
        case 0x28ccb4u: goto label_28ccb4;
        case 0x28ccb8u: goto label_28ccb8;
        case 0x28ccbcu: goto label_28ccbc;
        case 0x28ccc0u: goto label_28ccc0;
        case 0x28ccc4u: goto label_28ccc4;
        case 0x28ccc8u: goto label_28ccc8;
        case 0x28ccccu: goto label_28cccc;
        case 0x28ccd0u: goto label_28ccd0;
        case 0x28ccd4u: goto label_28ccd4;
        case 0x28ccd8u: goto label_28ccd8;
        case 0x28ccdcu: goto label_28ccdc;
        case 0x28cce0u: goto label_28cce0;
        case 0x28cce4u: goto label_28cce4;
        case 0x28cce8u: goto label_28cce8;
        case 0x28ccecu: goto label_28ccec;
        case 0x28ccf0u: goto label_28ccf0;
        case 0x28ccf4u: goto label_28ccf4;
        case 0x28ccf8u: goto label_28ccf8;
        case 0x28ccfcu: goto label_28ccfc;
        case 0x28cd00u: goto label_28cd00;
        case 0x28cd04u: goto label_28cd04;
        case 0x28cd08u: goto label_28cd08;
        case 0x28cd0cu: goto label_28cd0c;
        default: break;
    }

    ctx->pc = 0x28cca8u;

label_28cca8:
    // 0x28cca8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28cca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_28ccac:
    // 0x28ccac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28ccacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_28ccb0:
    // 0x28ccb0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x28ccb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_28ccb4:
    // 0x28ccb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28ccb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28ccb8:
    // 0x28ccb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28ccb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_28ccbc:
    // 0x28ccbc: 0x8e22020c  lw          $v0, 0x20C($s1)
    ctx->pc = 0x28ccbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
label_28ccc0:
    // 0x28ccc0: 0x8c500040  lw          $s0, 0x40($v0)
    ctx->pc = 0x28ccc0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_28ccc4:
    // 0x28ccc4: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
label_28ccc8:
    if (ctx->pc == 0x28CCC8u) {
        ctx->pc = 0x28CCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CCC4u;
        // 0x28ccc8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CCCCu;
        goto label_28cccc;
    }
    ctx->pc = 0x28CCC4u;
    {
        const bool branch_taken_0x28ccc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ccc4) {
            ctx->pc = 0x28CCC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28CCC4u;
            // 0x28ccc8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CCFCu;
            goto label_28ccfc;
        }
    }
    ctx->pc = 0x28CCCCu;
label_28cccc:
    // 0x28cccc: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x28ccccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_28ccd0:
    // 0x28ccd0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x28ccd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_28ccd4:
    // 0x28ccd4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x28ccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_28ccd8:
    // 0x28ccd8: 0x40f809  jalr        $v0
label_28ccdc:
    if (ctx->pc == 0x28CCDCu) {
        ctx->pc = 0x28CCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CCD8u;
        // 0x28ccdc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CCE0u;
        goto label_28cce0;
    }
    ctx->pc = 0x28CCD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28CCE0u);
        ctx->pc = 0x28CCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CCD8u;
        // 0x28ccdc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CCD8u, 0x28CCE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28CCE0u;
label_28cce0:
    // 0x28cce0: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x28cce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28cce4:
    // 0x28cce4: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_28cce8:
    if (ctx->pc == 0x28CCE8u) {
        ctx->pc = 0x28CCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CCE4u;
        // 0x28cce8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CCECu;
        goto label_28ccec;
    }
    ctx->pc = 0x28CCE4u;
    {
        const bool branch_taken_0x28cce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x28cce4) {
            ctx->pc = 0x28CCE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28CCE4u;
            // 0x28cce8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CCFCu;
            goto label_28ccfc;
        }
    }
    ctx->pc = 0x28CCECu;
label_28ccec:
    // 0x28ccec: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x28ccecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_28ccf0:
    // 0x28ccf0: 0xc0c3222  jal         func_30C888
label_28ccf4:
    if (ctx->pc == 0x28CCF4u) {
        ctx->pc = 0x28CCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CCF0u;
        // 0x28ccf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CCF8u;
        goto label_28ccf8;
    }
    ctx->pc = 0x28CCF0u;
    SET_GPR_U32(ctx, 31, 0x28CCF8u);
    ctx->pc = 0x28CCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CCF0u;
    // 0x28ccf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C888u, 0x28CCF0u, 0x28CCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CCF8u;
label_28ccf8:
    // 0x28ccf8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x28ccf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28ccfc:
    // 0x28ccfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28ccfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28cd00:
    // 0x28cd00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28cd00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28cd04:
    // 0x28cd04: 0x3e00008  jr          $ra
label_28cd08:
    if (ctx->pc == 0x28CD08u) {
        ctx->pc = 0x28CD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD04u;
        // 0x28cd08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CD0Cu;
        goto label_28cd0c;
    }
    ctx->pc = 0x28CD04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD04u;
        // 0x28cd08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CD04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28CD0Cu;
label_28cd0c:
    // 0x28cd0c: 0x0  nop
    ctx->pc = 0x28cd0cu;
    // NOP
    ctx->pc = 0x28cd10u;
}
