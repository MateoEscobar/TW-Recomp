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

// Function: sub_004EBEA0
// Address: 0x4ebea0 - 0x4ebf20
void sub_004EBEA0_0x4ebea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EBEA0_0x4ebea0");
#endif

    switch (ctx->pc) {
        case 0x4ebea0u: goto label_4ebea0;
        case 0x4ebea4u: goto label_4ebea4;
        case 0x4ebea8u: goto label_4ebea8;
        case 0x4ebeacu: goto label_4ebeac;
        case 0x4ebeb0u: goto label_4ebeb0;
        case 0x4ebeb4u: goto label_4ebeb4;
        case 0x4ebeb8u: goto label_4ebeb8;
        case 0x4ebebcu: goto label_4ebebc;
        case 0x4ebec0u: goto label_4ebec0;
        case 0x4ebec4u: goto label_4ebec4;
        case 0x4ebec8u: goto label_4ebec8;
        case 0x4ebeccu: goto label_4ebecc;
        case 0x4ebed0u: goto label_4ebed0;
        case 0x4ebed4u: goto label_4ebed4;
        case 0x4ebed8u: goto label_4ebed8;
        case 0x4ebedcu: goto label_4ebedc;
        case 0x4ebee0u: goto label_4ebee0;
        case 0x4ebee4u: goto label_4ebee4;
        case 0x4ebee8u: goto label_4ebee8;
        case 0x4ebeecu: goto label_4ebeec;
        case 0x4ebef0u: goto label_4ebef0;
        case 0x4ebef4u: goto label_4ebef4;
        case 0x4ebef8u: goto label_4ebef8;
        case 0x4ebefcu: goto label_4ebefc;
        case 0x4ebf00u: goto label_4ebf00;
        case 0x4ebf04u: goto label_4ebf04;
        case 0x4ebf08u: goto label_4ebf08;
        case 0x4ebf0cu: goto label_4ebf0c;
        case 0x4ebf10u: goto label_4ebf10;
        case 0x4ebf14u: goto label_4ebf14;
        case 0x4ebf18u: goto label_4ebf18;
        case 0x4ebf1cu: goto label_4ebf1c;
        default: break;
    }

    ctx->pc = 0x4ebea0u;

label_4ebea0:
    // 0x4ebea0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ebea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4ebea4:
    // 0x4ebea4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4ebea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4ebea8:
    // 0x4ebea8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4ebea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4ebeac:
    // 0x4ebeac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ebeacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ebeb0:
    // 0x4ebeb0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4ebeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4ebeb4:
    // 0x4ebeb4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ebeb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ebeb8:
    // 0x4ebeb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ebeb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ebebc:
    // 0x4ebebc: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4ebec0:
    if (ctx->pc == 0x4EBEC0u) {
        ctx->pc = 0x4EBEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBEBCu;
        // 0x4ebec0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBEC4u;
        goto label_4ebec4;
    }
    ctx->pc = 0x4EBEBCu;
    {
        const bool branch_taken_0x4ebebc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EBEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBEBCu;
        // 0x4ebec0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ebebc) {
            ctx->pc = 0x4EBF04u;
            goto label_4ebf04;
        }
    }
    ctx->pc = 0x4EBEC4u;
label_4ebec4:
    // 0x4ebec4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ebec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ebec8:
    // 0x4ebec8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4ebec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ebecc:
    // 0x4ebecc: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4ebeccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4ebed0:
    // 0x4ebed0: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4ebed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4ebed4:
    // 0x4ebed4: 0x60f809  jalr        $v1
label_4ebed8:
    if (ctx->pc == 0x4EBED8u) {
        ctx->pc = 0x4EBED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBED4u;
        // 0x4ebed8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBEDCu;
        goto label_4ebedc;
    }
    ctx->pc = 0x4EBED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EBEDCu);
        ctx->pc = 0x4EBED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBED4u;
        // 0x4ebed8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EBED4u, 0x4EBEDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EBEDCu;
label_4ebedc:
    // 0x4ebedc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4ebedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4ebee0:
    // 0x4ebee0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4ebee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ebee4:
    // 0x4ebee4: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4ebee4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4ebee8:
    // 0x4ebee8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4ebee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ebeec:
    // 0x4ebeec: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4ebeecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ebef0:
    // 0x4ebef0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4ebef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4ebef4:
    // 0x4ebef4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4ebef4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4ebef8:
    // 0x4ebef8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4ebef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4ebefc:
    // 0x4ebefc: 0x60f809  jalr        $v1
label_4ebf00:
    if (ctx->pc == 0x4EBF00u) {
        ctx->pc = 0x4EBF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBEFCu;
        // 0x4ebf00: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBF04u;
        goto label_4ebf04;
    }
    ctx->pc = 0x4EBEFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EBF04u);
        ctx->pc = 0x4EBF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBEFCu;
        // 0x4ebf00: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EBEFCu, 0x4EBF04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EBF04u;
label_4ebf04:
    // 0x4ebf04: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4ebf04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ebf08:
    // 0x4ebf08: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ebf08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ebf0c:
    // 0x4ebf0c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4ebf0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ebf10:
    // 0x4ebf10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ebf10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ebf14:
    // 0x4ebf14: 0x3e00008  jr          $ra
label_4ebf18:
    if (ctx->pc == 0x4EBF18u) {
        ctx->pc = 0x4EBF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBF14u;
        // 0x4ebf18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBF1Cu;
        goto label_4ebf1c;
    }
    ctx->pc = 0x4EBF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EBF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBF14u;
        // 0x4ebf18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EBF14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EBF1Cu;
label_4ebf1c:
    // 0x4ebf1c: 0x0  nop
    ctx->pc = 0x4ebf1cu;
    // NOP
    ctx->pc = 0x4ebf20u;
}
