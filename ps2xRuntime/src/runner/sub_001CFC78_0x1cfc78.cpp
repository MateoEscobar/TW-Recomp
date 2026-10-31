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

// Function: sub_001CFC78
// Address: 0x1cfc78 - 0x1cfe50
void sub_001CFC78_0x1cfc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CFC78_0x1cfc78");
#endif

    switch (ctx->pc) {
        case 0x1cfc78u: goto label_1cfc78;
        case 0x1cfc7cu: goto label_1cfc7c;
        case 0x1cfc80u: goto label_1cfc80;
        case 0x1cfc84u: goto label_1cfc84;
        case 0x1cfc88u: goto label_1cfc88;
        case 0x1cfc8cu: goto label_1cfc8c;
        case 0x1cfc90u: goto label_1cfc90;
        case 0x1cfc94u: goto label_1cfc94;
        case 0x1cfc98u: goto label_1cfc98;
        case 0x1cfc9cu: goto label_1cfc9c;
        case 0x1cfca0u: goto label_1cfca0;
        case 0x1cfca4u: goto label_1cfca4;
        case 0x1cfca8u: goto label_1cfca8;
        case 0x1cfcacu: goto label_1cfcac;
        case 0x1cfcb0u: goto label_1cfcb0;
        case 0x1cfcb4u: goto label_1cfcb4;
        case 0x1cfcb8u: goto label_1cfcb8;
        case 0x1cfcbcu: goto label_1cfcbc;
        case 0x1cfcc0u: goto label_1cfcc0;
        case 0x1cfcc4u: goto label_1cfcc4;
        case 0x1cfcc8u: goto label_1cfcc8;
        case 0x1cfcccu: goto label_1cfccc;
        case 0x1cfcd0u: goto label_1cfcd0;
        case 0x1cfcd4u: goto label_1cfcd4;
        case 0x1cfcd8u: goto label_1cfcd8;
        case 0x1cfcdcu: goto label_1cfcdc;
        case 0x1cfce0u: goto label_1cfce0;
        case 0x1cfce4u: goto label_1cfce4;
        case 0x1cfce8u: goto label_1cfce8;
        case 0x1cfcecu: goto label_1cfcec;
        case 0x1cfcf0u: goto label_1cfcf0;
        case 0x1cfcf4u: goto label_1cfcf4;
        case 0x1cfcf8u: goto label_1cfcf8;
        case 0x1cfcfcu: goto label_1cfcfc;
        case 0x1cfd00u: goto label_1cfd00;
        case 0x1cfd04u: goto label_1cfd04;
        case 0x1cfd08u: goto label_1cfd08;
        case 0x1cfd0cu: goto label_1cfd0c;
        case 0x1cfd10u: goto label_1cfd10;
        case 0x1cfd14u: goto label_1cfd14;
        case 0x1cfd18u: goto label_1cfd18;
        case 0x1cfd1cu: goto label_1cfd1c;
        case 0x1cfd20u: goto label_1cfd20;
        case 0x1cfd24u: goto label_1cfd24;
        case 0x1cfd28u: goto label_1cfd28;
        case 0x1cfd2cu: goto label_1cfd2c;
        case 0x1cfd30u: goto label_1cfd30;
        case 0x1cfd34u: goto label_1cfd34;
        case 0x1cfd38u: goto label_1cfd38;
        case 0x1cfd3cu: goto label_1cfd3c;
        case 0x1cfd40u: goto label_1cfd40;
        case 0x1cfd44u: goto label_1cfd44;
        case 0x1cfd48u: goto label_1cfd48;
        case 0x1cfd4cu: goto label_1cfd4c;
        case 0x1cfd50u: goto label_1cfd50;
        case 0x1cfd54u: goto label_1cfd54;
        case 0x1cfd58u: goto label_1cfd58;
        case 0x1cfd5cu: goto label_1cfd5c;
        case 0x1cfd60u: goto label_1cfd60;
        case 0x1cfd64u: goto label_1cfd64;
        case 0x1cfd68u: goto label_1cfd68;
        case 0x1cfd6cu: goto label_1cfd6c;
        case 0x1cfd70u: goto label_1cfd70;
        case 0x1cfd74u: goto label_1cfd74;
        case 0x1cfd78u: goto label_1cfd78;
        case 0x1cfd7cu: goto label_1cfd7c;
        case 0x1cfd80u: goto label_1cfd80;
        case 0x1cfd84u: goto label_1cfd84;
        case 0x1cfd88u: goto label_1cfd88;
        case 0x1cfd8cu: goto label_1cfd8c;
        case 0x1cfd90u: goto label_1cfd90;
        case 0x1cfd94u: goto label_1cfd94;
        case 0x1cfd98u: goto label_1cfd98;
        case 0x1cfd9cu: goto label_1cfd9c;
        case 0x1cfda0u: goto label_1cfda0;
        case 0x1cfda4u: goto label_1cfda4;
        case 0x1cfda8u: goto label_1cfda8;
        case 0x1cfdacu: goto label_1cfdac;
        case 0x1cfdb0u: goto label_1cfdb0;
        case 0x1cfdb4u: goto label_1cfdb4;
        case 0x1cfdb8u: goto label_1cfdb8;
        case 0x1cfdbcu: goto label_1cfdbc;
        case 0x1cfdc0u: goto label_1cfdc0;
        case 0x1cfdc4u: goto label_1cfdc4;
        case 0x1cfdc8u: goto label_1cfdc8;
        case 0x1cfdccu: goto label_1cfdcc;
        case 0x1cfdd0u: goto label_1cfdd0;
        case 0x1cfdd4u: goto label_1cfdd4;
        case 0x1cfdd8u: goto label_1cfdd8;
        case 0x1cfddcu: goto label_1cfddc;
        case 0x1cfde0u: goto label_1cfde0;
        case 0x1cfde4u: goto label_1cfde4;
        case 0x1cfde8u: goto label_1cfde8;
        case 0x1cfdecu: goto label_1cfdec;
        case 0x1cfdf0u: goto label_1cfdf0;
        case 0x1cfdf4u: goto label_1cfdf4;
        case 0x1cfdf8u: goto label_1cfdf8;
        case 0x1cfdfcu: goto label_1cfdfc;
        case 0x1cfe00u: goto label_1cfe00;
        case 0x1cfe04u: goto label_1cfe04;
        case 0x1cfe08u: goto label_1cfe08;
        case 0x1cfe0cu: goto label_1cfe0c;
        case 0x1cfe10u: goto label_1cfe10;
        case 0x1cfe14u: goto label_1cfe14;
        case 0x1cfe18u: goto label_1cfe18;
        case 0x1cfe1cu: goto label_1cfe1c;
        case 0x1cfe20u: goto label_1cfe20;
        case 0x1cfe24u: goto label_1cfe24;
        case 0x1cfe28u: goto label_1cfe28;
        case 0x1cfe2cu: goto label_1cfe2c;
        case 0x1cfe30u: goto label_1cfe30;
        case 0x1cfe34u: goto label_1cfe34;
        case 0x1cfe38u: goto label_1cfe38;
        case 0x1cfe3cu: goto label_1cfe3c;
        case 0x1cfe40u: goto label_1cfe40;
        case 0x1cfe44u: goto label_1cfe44;
        case 0x1cfe48u: goto label_1cfe48;
        case 0x1cfe4cu: goto label_1cfe4c;
        default: break;
    }

    ctx->pc = 0x1cfc78u;

label_1cfc78:
    // 0x1cfc78: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1cfc78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1cfc7c:
    // 0x1cfc7c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1cfc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1cfc80:
    // 0x1cfc80: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1cfc80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1cfc84:
    // 0x1cfc84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1cfc84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cfc88:
    // 0x1cfc88: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1cfc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1cfc8c:
    // 0x1cfc8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1cfc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1cfc90:
    // 0x1cfc90: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1cfc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_1cfc94:
    // 0x1cfc94: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1cfc94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_1cfc98:
    // 0x1cfc98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cfc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1cfc9c:
    // 0x1cfc9c: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x1cfc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_1cfca0:
    // 0x1cfca0: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
label_1cfca4:
    if (ctx->pc == 0x1CFCA4u) {
        ctx->pc = 0x1CFCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFCA0u;
        // 0x1cfca4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFCA8u;
        goto label_1cfca8;
    }
    ctx->pc = 0x1CFCA0u;
    {
        const bool branch_taken_0x1cfca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFCA0u;
        // 0x1cfca4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfca0) {
            ctx->pc = 0x1CFE2Cu;
            goto label_1cfe2c;
        }
    }
    ctx->pc = 0x1CFCA8u;
label_1cfca8:
    // 0x1cfca8: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1cfca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1cfcac:
    // 0x1cfcac: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
label_1cfcb0:
    if (ctx->pc == 0x1CFCB0u) {
        ctx->pc = 0x1CFCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFCACu;
        // 0x1cfcb0: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFCB4u;
        goto label_1cfcb4;
    }
    ctx->pc = 0x1CFCACu;
    {
        const bool branch_taken_0x1cfcac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFCACu;
        // 0x1cfcb0: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfcac) {
            ctx->pc = 0x1CFE30u;
            goto label_1cfe30;
        }
    }
    ctx->pc = 0x1CFCB4u;
label_1cfcb4:
    // 0x1cfcb4: 0x8e420960  lw          $v0, 0x960($s2)
    ctx->pc = 0x1cfcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2400)));
label_1cfcb8:
    // 0x1cfcb8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1cfcbc:
    if (ctx->pc == 0x1CFCBCu) {
        ctx->pc = 0x1CFCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFCB8u;
        // 0x1cfcbc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFCC0u;
        goto label_1cfcc0;
    }
    ctx->pc = 0x1CFCB8u;
    {
        const bool branch_taken_0x1cfcb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFCB8u;
        // 0x1cfcbc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfcb8) {
            ctx->pc = 0x1CFCE0u;
            goto label_1cfce0;
        }
    }
    ctx->pc = 0x1CFCC0u;
label_1cfcc0:
    // 0x1cfcc0: 0xc0734a2  jal         func_1CD288
label_1cfcc4:
    if (ctx->pc == 0x1CFCC4u) {
        ctx->pc = 0x1CFCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFCC0u;
        // 0x1cfcc4: 0x26440890  addiu       $a0, $s2, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFCC8u;
        goto label_1cfcc8;
    }
    ctx->pc = 0x1CFCC0u;
    SET_GPR_U32(ctx, 31, 0x1CFCC8u);
    ctx->pc = 0x1CFCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFCC0u;
    // 0x1cfcc4: 0x26440890  addiu       $a0, $s2, 0x890 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD288u, 0x1CFCC0u, 0x1CFCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFCC8u;
label_1cfcc8:
    // 0x1cfcc8: 0xc0734a2  jal         func_1CD288
label_1cfccc:
    if (ctx->pc == 0x1CFCCCu) {
        ctx->pc = 0x1CFCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFCC8u;
        // 0x1cfccc: 0x264407c0  addiu       $a0, $s2, 0x7C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFCD0u;
        goto label_1cfcd0;
    }
    ctx->pc = 0x1CFCC8u;
    SET_GPR_U32(ctx, 31, 0x1CFCD0u);
    ctx->pc = 0x1CFCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFCC8u;
    // 0x1cfccc: 0x264407c0  addiu       $a0, $s2, 0x7C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD288u, 0x1CFCC8u, 0x1CFCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFCD0u;
label_1cfcd0:
    // 0x1cfcd0: 0xc073b62  jal         func_1CED88
label_1cfcd4:
    if (ctx->pc == 0x1CFCD4u) {
        ctx->pc = 0x1CFCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFCD0u;
        // 0x1cfcd4: 0x26440430  addiu       $a0, $s2, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFCD8u;
        goto label_1cfcd8;
    }
    ctx->pc = 0x1CFCD0u;
    SET_GPR_U32(ctx, 31, 0x1CFCD8u);
    ctx->pc = 0x1CFCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFCD0u;
    // 0x1cfcd4: 0x26440430  addiu       $a0, $s2, 0x430 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CED88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CED88u, 0x1CFCD0u, 0x1CFCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFCD8u;
label_1cfcd8:
    // 0x1cfcd8: 0x10000054  b           . + 4 + (0x54 << 2)
label_1cfcdc:
    if (ctx->pc == 0x1CFCDCu) {
        ctx->pc = 0x1CFCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFCD8u;
        // 0x1cfcdc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFCE0u;
        goto label_1cfce0;
    }
    ctx->pc = 0x1CFCD8u;
    {
        const bool branch_taken_0x1cfcd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFCD8u;
        // 0x1cfcdc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfcd8) {
            ctx->pc = 0x1CFE2Cu;
            goto label_1cfe2c;
        }
    }
    ctx->pc = 0x1CFCE0u;
label_1cfce0:
    // 0x1cfce0: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1cfce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1cfce4:
    // 0x1cfce4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1cfce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1cfce8:
    // 0x1cfce8: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1cfce8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1cfcec:
    // 0x1cfcec: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1cfcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1cfcf0:
    // 0x1cfcf0: 0x40f809  jalr        $v0
label_1cfcf4:
    if (ctx->pc == 0x1CFCF4u) {
        ctx->pc = 0x1CFCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFCF0u;
        // 0x1cfcf4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFCF8u;
        goto label_1cfcf8;
    }
    ctx->pc = 0x1CFCF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CFCF8u);
        ctx->pc = 0x1CFCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFCF0u;
        // 0x1cfcf4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFCF0u, 0x1CFCF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CFCF8u;
label_1cfcf8:
    // 0x1cfcf8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1cfcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1cfcfc:
    // 0x1cfcfc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cfcfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cfd00:
    // 0x1cfd00: 0x8c62ec28  lw          $v0, -0x13D8($v1)
    ctx->pc = 0x1cfd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962216)));
label_1cfd04:
    // 0x1cfd04: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1cfd04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1cfd08:
    // 0x1cfd08: 0x8e440700  lw          $a0, 0x700($s2)
    ctx->pc = 0x1cfd08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1792)));
label_1cfd0c:
    // 0x1cfd0c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1cfd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1cfd10:
    // 0x1cfd10: 0x45182b  sltu        $v1, $v0, $a1
    ctx->pc = 0x1cfd10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1cfd14:
    // 0x1cfd14: 0x5460003a  bnel        $v1, $zero, . + 4 + (0x3A << 2)
label_1cfd18:
    if (ctx->pc == 0x1CFD18u) {
        ctx->pc = 0x1CFD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD14u;
        // 0x1cfd18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFD1Cu;
        goto label_1cfd1c;
    }
    ctx->pc = 0x1CFD14u;
    {
        const bool branch_taken_0x1cfd14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cfd14) {
            ctx->pc = 0x1CFD18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFD14u;
            // 0x1cfd18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFE00u;
            goto label_1cfe00;
        }
    }
    ctx->pc = 0x1CFD1Cu;
label_1cfd1c:
    // 0x1cfd1c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1cfd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1cfd20:
    // 0x1cfd20: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1cfd24:
    if (ctx->pc == 0x1CFD24u) {
        ctx->pc = 0x1CFD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD20u;
        // 0x1cfd24: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFD28u;
        goto label_1cfd28;
    }
    ctx->pc = 0x1CFD20u;
    {
        const bool branch_taken_0x1cfd20 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1CFD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD20u;
        // 0x1cfd24: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfd20) {
            ctx->pc = 0x1CFD3Cu;
            goto label_1cfd3c;
        }
    }
    ctx->pc = 0x1CFD28u;
label_1cfd28:
    // 0x1cfd28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cfd28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cfd2c:
    // 0x1cfd2c: 0x0  nop
    ctx->pc = 0x1cfd2cu;
    // NOP
label_1cfd30:
    // 0x1cfd30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cfd30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cfd34:
    // 0x1cfd34: 0x10000008  b           . + 4 + (0x8 << 2)
label_1cfd38:
    if (ctx->pc == 0x1CFD38u) {
        ctx->pc = 0x1CFD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD34u;
        // 0x1cfd38: 0x8cc2ec28  lw          $v0, -0x13D8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294962216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFD3Cu;
        goto label_1cfd3c;
    }
    ctx->pc = 0x1CFD34u;
    {
        const bool branch_taken_0x1cfd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD34u;
        // 0x1cfd38: 0x8cc2ec28  lw          $v0, -0x13D8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294962216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfd34) {
            ctx->pc = 0x1CFD58u;
            goto label_1cfd58;
        }
    }
    ctx->pc = 0x1CFD3Cu;
label_1cfd3c:
    // 0x1cfd3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1cfd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1cfd40:
    // 0x1cfd40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1cfd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1cfd44:
    // 0x1cfd44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cfd44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cfd48:
    // 0x1cfd48: 0x0  nop
    ctx->pc = 0x1cfd48u;
    // NOP
label_1cfd4c:
    // 0x1cfd4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cfd4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cfd50:
    // 0x1cfd50: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1cfd50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1cfd54:
    // 0x1cfd54: 0x8cc2ec28  lw          $v0, -0x13D8($a2)
    ctx->pc = 0x1cfd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294962216)));
label_1cfd58:
    // 0x1cfd58: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1cfd5c:
    if (ctx->pc == 0x1CFD5Cu) {
        ctx->pc = 0x1CFD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD58u;
        // 0x1cfd5c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFD60u;
        goto label_1cfd60;
    }
    ctx->pc = 0x1CFD58u;
    {
        const bool branch_taken_0x1cfd58 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1CFD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD58u;
        // 0x1cfd5c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfd58) {
            ctx->pc = 0x1CFD74u;
            goto label_1cfd74;
        }
    }
    ctx->pc = 0x1CFD60u;
label_1cfd60:
    // 0x1cfd60: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1cfd60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cfd64:
    // 0x1cfd64: 0x0  nop
    ctx->pc = 0x1cfd64u;
    // NOP
label_1cfd68:
    // 0x1cfd68: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1cfd68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1cfd6c:
    // 0x1cfd6c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1cfd70:
    if (ctx->pc == 0x1CFD70u) {
        ctx->pc = 0x1CFD74u;
        goto label_1cfd74;
    }
    ctx->pc = 0x1CFD6Cu;
    {
        const bool branch_taken_0x1cfd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfd6c) {
            ctx->pc = 0x1CFD8Cu;
            goto label_1cfd8c;
        }
    }
    ctx->pc = 0x1CFD74u;
label_1cfd74:
    // 0x1cfd74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1cfd74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1cfd78:
    // 0x1cfd78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1cfd78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1cfd7c:
    // 0x1cfd7c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1cfd7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cfd80:
    // 0x1cfd80: 0x0  nop
    ctx->pc = 0x1cfd80u;
    // NOP
label_1cfd84:
    // 0x1cfd84: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1cfd84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1cfd88:
    // 0x1cfd88: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1cfd88u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1cfd8c:
    // 0x1cfd8c: 0x0  nop
    ctx->pc = 0x1cfd8cu;
    // NOP
label_1cfd90:
    // 0x1cfd90: 0x0  nop
    ctx->pc = 0x1cfd90u;
    // NOP
label_1cfd94:
    // 0x1cfd94: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x1cfd94u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_1cfd98:
    // 0x1cfd98: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x1cfd98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_1cfd9c:
    // 0x1cfd9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cfd9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cfda0:
    // 0x1cfda0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cfda0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1cfda4:
    // 0x1cfda4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cfda4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cfda8:
    // 0x1cfda8: 0x26530890  addiu       $s3, $s2, 0x890
    ctx->pc = 0x1cfda8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 2192));
label_1cfdac:
    // 0x1cfdac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cfdacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1cfdb0:
    // 0x1cfdb0: 0x26510360  addiu       $s1, $s2, 0x360
    ctx->pc = 0x1cfdb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 864));
label_1cfdb4:
    // 0x1cfdb4: 0x26520430  addiu       $s2, $s2, 0x430
    ctx->pc = 0x1cfdb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1072));
label_1cfdb8:
    // 0x1cfdb8: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x1cfdb8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cfdbc:
    // 0x1cfdbc: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x1cfdbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cfdc0:
    // 0x1cfdc0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1cfdc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1cfdc4:
    // 0x1cfdc4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cfdc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1cfdc8:
    // 0x1cfdc8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cfdc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1cfdcc:
    // 0x1cfdcc: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x1cfdccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_1cfdd0:
    // 0x1cfdd0: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x1cfdd0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1cfdd4:
    // 0x1cfdd4: 0xc073476  jal         func_1CD1D8
label_1cfdd8:
    if (ctx->pc == 0x1CFDD8u) {
        ctx->pc = 0x1CFDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDD4u;
        // 0x1cfdd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFDDCu;
        goto label_1cfddc;
    }
    ctx->pc = 0x1CFDD4u;
    SET_GPR_U32(ctx, 31, 0x1CFDDCu);
    ctx->pc = 0x1CFDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFDD4u;
    // 0x1cfdd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1D8u, 0x1CFDD4u, 0x1CFDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFDDCu;
label_1cfddc:
    // 0x1cfddc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cfddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1cfde0:
    // 0x1cfde0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cfde0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cfde4:
    // 0x1cfde4: 0xc075392  jal         func_1D4E48
label_1cfde8:
    if (ctx->pc == 0x1CFDE8u) {
        ctx->pc = 0x1CFDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDE4u;
        // 0x1cfde8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFDECu;
        goto label_1cfdec;
    }
    ctx->pc = 0x1CFDE4u;
    SET_GPR_U32(ctx, 31, 0x1CFDECu);
    ctx->pc = 0x1CFDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFDE4u;
    // 0x1cfde8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4E48u, 0x1CFDE4u, 0x1CFDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFDECu;
label_1cfdec:
    // 0x1cfdec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cfdecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cfdf0:
    // 0x1cfdf0: 0xc073b26  jal         func_1CEC98
label_1cfdf4:
    if (ctx->pc == 0x1CFDF4u) {
        ctx->pc = 0x1CFDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDF0u;
        // 0x1cfdf4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFDF8u;
        goto label_1cfdf8;
    }
    ctx->pc = 0x1CFDF0u;
    SET_GPR_U32(ctx, 31, 0x1CFDF8u);
    ctx->pc = 0x1CFDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFDF0u;
    // 0x1cfdf4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC98u, 0x1CFDF0u, 0x1CFDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFDF8u;
label_1cfdf8:
    // 0x1cfdf8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1cfdfc:
    if (ctx->pc == 0x1CFDFCu) {
        ctx->pc = 0x1CFDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDF8u;
        // 0x1cfdfc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFE00u;
        goto label_1cfe00;
    }
    ctx->pc = 0x1CFDF8u;
    {
        const bool branch_taken_0x1cfdf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDF8u;
        // 0x1cfdfc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfdf8) {
            ctx->pc = 0x1CFE10u;
            goto label_1cfe10;
        }
    }
    ctx->pc = 0x1CFE00u;
label_1cfe00:
    // 0x1cfe00: 0x26550360  addiu       $s5, $s2, 0x360
    ctx->pc = 0x1cfe00u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 864));
label_1cfe04:
    // 0x1cfe04: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x1cfe04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
label_1cfe08:
    // 0x1cfe08: 0x26440890  addiu       $a0, $s2, 0x890
    ctx->pc = 0x1cfe08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2192));
label_1cfe0c:
    // 0x1cfe0c: 0x26540430  addiu       $s4, $s2, 0x430
    ctx->pc = 0x1cfe0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1072));
label_1cfe10:
    // 0x1cfe10: 0xc0734a2  jal         func_1CD288
label_1cfe14:
    if (ctx->pc == 0x1CFE14u) {
        ctx->pc = 0x1CFE18u;
        goto label_1cfe18;
    }
    ctx->pc = 0x1CFE10u;
    SET_GPR_U32(ctx, 31, 0x1CFE18u);
    ctx->pc = 0x1CD288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD288u, 0x1CFE10u, 0x1CFE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE18u;
label_1cfe18:
    // 0x1cfe18: 0xc0754b2  jal         func_1D52C8
label_1cfe1c:
    if (ctx->pc == 0x1CFE1Cu) {
        ctx->pc = 0x1CFE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE18u;
        // 0x1cfe1c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFE20u;
        goto label_1cfe20;
    }
    ctx->pc = 0x1CFE18u;
    SET_GPR_U32(ctx, 31, 0x1CFE20u);
    ctx->pc = 0x1CFE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE18u;
    // 0x1cfe1c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D52C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D52C8u, 0x1CFE18u, 0x1CFE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE20u;
label_1cfe20:
    // 0x1cfe20: 0xc073b62  jal         func_1CED88
label_1cfe24:
    if (ctx->pc == 0x1CFE24u) {
        ctx->pc = 0x1CFE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE20u;
        // 0x1cfe24: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFE28u;
        goto label_1cfe28;
    }
    ctx->pc = 0x1CFE20u;
    SET_GPR_U32(ctx, 31, 0x1CFE28u);
    ctx->pc = 0x1CFE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE20u;
    // 0x1cfe24: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CED88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CED88u, 0x1CFE20u, 0x1CFE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE28u;
label_1cfe28:
    // 0x1cfe28: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1cfe28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1cfe2c:
    // 0x1cfe2c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1cfe2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1cfe30:
    // 0x1cfe30: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1cfe30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1cfe34:
    // 0x1cfe34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1cfe34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1cfe38:
    // 0x1cfe38: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1cfe38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cfe3c:
    // 0x1cfe3c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1cfe3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cfe40:
    // 0x1cfe40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cfe40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cfe44:
    // 0x1cfe44: 0x3e00008  jr          $ra
label_1cfe48:
    if (ctx->pc == 0x1CFE48u) {
        ctx->pc = 0x1CFE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE44u;
        // 0x1cfe48: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFE4Cu;
        goto label_1cfe4c;
    }
    ctx->pc = 0x1CFE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE44u;
        // 0x1cfe48: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFE4Cu;
label_1cfe4c:
    // 0x1cfe4c: 0x0  nop
    ctx->pc = 0x1cfe4cu;
    // NOP
    ctx->pc = 0x1cfe50u;
}
