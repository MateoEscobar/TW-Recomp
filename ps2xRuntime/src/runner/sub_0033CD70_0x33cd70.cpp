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

// Function: sub_0033CD70
// Address: 0x33cd70 - 0x33ce00
void sub_0033CD70_0x33cd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033CD70_0x33cd70");
#endif

    switch (ctx->pc) {
        case 0x33cd70u: goto label_33cd70;
        case 0x33cd74u: goto label_33cd74;
        case 0x33cd78u: goto label_33cd78;
        case 0x33cd7cu: goto label_33cd7c;
        case 0x33cd80u: goto label_33cd80;
        case 0x33cd84u: goto label_33cd84;
        case 0x33cd88u: goto label_33cd88;
        case 0x33cd8cu: goto label_33cd8c;
        case 0x33cd90u: goto label_33cd90;
        case 0x33cd94u: goto label_33cd94;
        case 0x33cd98u: goto label_33cd98;
        case 0x33cd9cu: goto label_33cd9c;
        case 0x33cda0u: goto label_33cda0;
        case 0x33cda4u: goto label_33cda4;
        case 0x33cda8u: goto label_33cda8;
        case 0x33cdacu: goto label_33cdac;
        case 0x33cdb0u: goto label_33cdb0;
        case 0x33cdb4u: goto label_33cdb4;
        case 0x33cdb8u: goto label_33cdb8;
        case 0x33cdbcu: goto label_33cdbc;
        case 0x33cdc0u: goto label_33cdc0;
        case 0x33cdc4u: goto label_33cdc4;
        case 0x33cdc8u: goto label_33cdc8;
        case 0x33cdccu: goto label_33cdcc;
        case 0x33cdd0u: goto label_33cdd0;
        case 0x33cdd4u: goto label_33cdd4;
        case 0x33cdd8u: goto label_33cdd8;
        case 0x33cddcu: goto label_33cddc;
        case 0x33cde0u: goto label_33cde0;
        case 0x33cde4u: goto label_33cde4;
        case 0x33cde8u: goto label_33cde8;
        case 0x33cdecu: goto label_33cdec;
        case 0x33cdf0u: goto label_33cdf0;
        case 0x33cdf4u: goto label_33cdf4;
        case 0x33cdf8u: goto label_33cdf8;
        case 0x33cdfcu: goto label_33cdfc;
        default: break;
    }

    ctx->pc = 0x33cd70u;

label_33cd70:
    // 0x33cd70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x33cd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_33cd74:
    // 0x33cd74: 0x3402f4e0  ori         $v0, $zero, 0xF4E0
    ctx->pc = 0x33cd74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62688);
label_33cd78:
    // 0x33cd78: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x33cd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_33cd7c:
    // 0x33cd7c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x33cd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_33cd80:
    // 0x33cd80: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x33cd80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_33cd84:
    // 0x33cd84: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33cd84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_33cd88:
    // 0x33cd88: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x33cd88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33cd8c:
    // 0x33cd8c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x33cd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_33cd90:
    // 0x33cd90: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x33cd90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33cd94:
    // 0x33cd94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33cd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_33cd98:
    // 0x33cd98: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x33cd98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33cd9c:
    // 0x33cd9c: 0x0  nop
    ctx->pc = 0x33cd9cu;
    // NOP
label_33cda0:
    // 0x33cda0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x33cda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33cda4:
    // 0x33cda4: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x33cda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_33cda8:
    // 0x33cda8: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_33cdac:
    if (ctx->pc == 0x33CDACu) {
        ctx->pc = 0x33CDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CDA8u;
        // 0x33cdac: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CDB0u;
        goto label_33cdb0;
    }
    ctx->pc = 0x33CDA8u;
    {
        const bool branch_taken_0x33cda8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33cda8) {
            ctx->pc = 0x33CDACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33CDA8u;
            // 0x33cdac: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33CDD0u;
            goto label_33cdd0;
        }
    }
    ctx->pc = 0x33CDB0u;
label_33cdb0:
    // 0x33cdb0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x33cdb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33cdb4:
    // 0x33cdb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33cdb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33cdb8:
    // 0x33cdb8: 0x8cc20074  lw          $v0, 0x74($a2)
    ctx->pc = 0x33cdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_33cdbc:
    // 0x33cdbc: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x33cdbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_33cdc0:
    // 0x33cdc0: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x33cdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_33cdc4:
    // 0x33cdc4: 0x60f809  jalr        $v1
label_33cdc8:
    if (ctx->pc == 0x33CDC8u) {
        ctx->pc = 0x33CDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CDC4u;
        // 0x33cdc8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CDCCu;
        goto label_33cdcc;
    }
    ctx->pc = 0x33CDC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33CDCCu);
        ctx->pc = 0x33CDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CDC4u;
        // 0x33cdc8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CDC4u, 0x33CDCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33CDCCu;
label_33cdcc:
    // 0x33cdcc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x33cdccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_33cdd0:
    // 0x33cdd0: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x33cdd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_33cdd4:
    // 0x33cdd4: 0x2e42003c  sltiu       $v0, $s2, 0x3C
    ctx->pc = 0x33cdd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
label_33cdd8:
    // 0x33cdd8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_33cddc:
    if (ctx->pc == 0x33CDDCu) {
        ctx->pc = 0x33CDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CDD8u;
        // 0x33cddc: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CDE0u;
        goto label_33cde0;
    }
    ctx->pc = 0x33CDD8u;
    {
        const bool branch_taken_0x33cdd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33CDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CDD8u;
        // 0x33cddc: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cdd8) {
            ctx->pc = 0x33CDA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33cda0;
        }
    }
    ctx->pc = 0x33CDE0u;
label_33cde0:
    // 0x33cde0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x33cde0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_33cde4:
    // 0x33cde4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x33cde4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_33cde8:
    // 0x33cde8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33cde8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_33cdec:
    // 0x33cdec: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x33cdecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33cdf0:
    // 0x33cdf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33cdf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33cdf4:
    // 0x33cdf4: 0x3e00008  jr          $ra
label_33cdf8:
    if (ctx->pc == 0x33CDF8u) {
        ctx->pc = 0x33CDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CDF4u;
        // 0x33cdf8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CDFCu;
        goto label_33cdfc;
    }
    ctx->pc = 0x33CDF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CDF4u;
        // 0x33cdf8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CDF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CDFCu;
label_33cdfc:
    // 0x33cdfc: 0x0  nop
    ctx->pc = 0x33cdfcu;
    // NOP
    ctx->pc = 0x33ce00u;
}
