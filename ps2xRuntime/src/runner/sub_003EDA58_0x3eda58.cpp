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

// Function: sub_003EDA58
// Address: 0x3eda58 - 0x3edb28
void sub_003EDA58_0x3eda58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EDA58_0x3eda58");
#endif

    switch (ctx->pc) {
        case 0x3eda58u: goto label_3eda58;
        case 0x3eda5cu: goto label_3eda5c;
        case 0x3eda60u: goto label_3eda60;
        case 0x3eda64u: goto label_3eda64;
        case 0x3eda68u: goto label_3eda68;
        case 0x3eda6cu: goto label_3eda6c;
        case 0x3eda70u: goto label_3eda70;
        case 0x3eda74u: goto label_3eda74;
        case 0x3eda78u: goto label_3eda78;
        case 0x3eda7cu: goto label_3eda7c;
        case 0x3eda80u: goto label_3eda80;
        case 0x3eda84u: goto label_3eda84;
        case 0x3eda88u: goto label_3eda88;
        case 0x3eda8cu: goto label_3eda8c;
        case 0x3eda90u: goto label_3eda90;
        case 0x3eda94u: goto label_3eda94;
        case 0x3eda98u: goto label_3eda98;
        case 0x3eda9cu: goto label_3eda9c;
        case 0x3edaa0u: goto label_3edaa0;
        case 0x3edaa4u: goto label_3edaa4;
        case 0x3edaa8u: goto label_3edaa8;
        case 0x3edaacu: goto label_3edaac;
        case 0x3edab0u: goto label_3edab0;
        case 0x3edab4u: goto label_3edab4;
        case 0x3edab8u: goto label_3edab8;
        case 0x3edabcu: goto label_3edabc;
        case 0x3edac0u: goto label_3edac0;
        case 0x3edac4u: goto label_3edac4;
        case 0x3edac8u: goto label_3edac8;
        case 0x3edaccu: goto label_3edacc;
        case 0x3edad0u: goto label_3edad0;
        case 0x3edad4u: goto label_3edad4;
        case 0x3edad8u: goto label_3edad8;
        case 0x3edadcu: goto label_3edadc;
        case 0x3edae0u: goto label_3edae0;
        case 0x3edae4u: goto label_3edae4;
        case 0x3edae8u: goto label_3edae8;
        case 0x3edaecu: goto label_3edaec;
        case 0x3edaf0u: goto label_3edaf0;
        case 0x3edaf4u: goto label_3edaf4;
        case 0x3edaf8u: goto label_3edaf8;
        case 0x3edafcu: goto label_3edafc;
        case 0x3edb00u: goto label_3edb00;
        case 0x3edb04u: goto label_3edb04;
        case 0x3edb08u: goto label_3edb08;
        case 0x3edb0cu: goto label_3edb0c;
        case 0x3edb10u: goto label_3edb10;
        case 0x3edb14u: goto label_3edb14;
        case 0x3edb18u: goto label_3edb18;
        case 0x3edb1cu: goto label_3edb1c;
        case 0x3edb20u: goto label_3edb20;
        case 0x3edb24u: goto label_3edb24;
        default: break;
    }

    ctx->pc = 0x3eda58u;

label_3eda58:
    // 0x3eda58: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3eda58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3eda5c:
    // 0x3eda5c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3eda5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3eda60:
    // 0x3eda60: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3eda60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3eda64:
    // 0x3eda64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3eda64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3eda68:
    // 0x3eda68: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3eda68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3eda6c:
    // 0x3eda6c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3eda6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3eda70:
    // 0x3eda70: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3eda70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3eda74:
    // 0x3eda74: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3eda74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3eda78:
    // 0x3eda78: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3eda78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3eda7c:
    // 0x3eda7c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3eda7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3eda80:
    // 0x3eda80: 0x40f809  jalr        $v0
label_3eda84:
    if (ctx->pc == 0x3EDA84u) {
        ctx->pc = 0x3EDA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDA80u;
        // 0x3eda84: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDA88u;
        goto label_3eda88;
    }
    ctx->pc = 0x3EDA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EDA88u);
        ctx->pc = 0x3EDA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDA80u;
        // 0x3eda84: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EDA80u, 0x3EDA88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EDA88u;
label_3eda88:
    // 0x3eda88: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3eda88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3eda8c:
    // 0x3eda8c: 0xc0ea14c  jal         func_3A8530
label_3eda90:
    if (ctx->pc == 0x3EDA90u) {
        ctx->pc = 0x3EDA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDA8Cu;
        // 0x3eda90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDA94u;
        goto label_3eda94;
    }
    ctx->pc = 0x3EDA8Cu;
    SET_GPR_U32(ctx, 31, 0x3EDA94u);
    ctx->pc = 0x3EDA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDA8Cu;
    // 0x3eda90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3EDA8Cu, 0x3EDA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDA94u;
label_3eda94:
    // 0x3eda94: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3eda94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3eda98:
    // 0x3eda98: 0xc0ea12a  jal         func_3A84A8
label_3eda9c:
    if (ctx->pc == 0x3EDA9Cu) {
        ctx->pc = 0x3EDA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDA98u;
        // 0x3eda9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDAA0u;
        goto label_3edaa0;
    }
    ctx->pc = 0x3EDA98u;
    SET_GPR_U32(ctx, 31, 0x3EDAA0u);
    ctx->pc = 0x3EDA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDA98u;
    // 0x3eda9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EDA98u, 0x3EDAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDAA0u;
label_3edaa0:
    // 0x3edaa0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3edaa0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3edaa4:
    // 0x3edaa4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3edaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3edaa8:
    // 0x3edaa8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3edaa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3edaac:
    // 0x3edaac: 0xc0ea12a  jal         func_3A84A8
label_3edab0:
    if (ctx->pc == 0x3EDAB0u) {
        ctx->pc = 0x3EDAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDAACu;
        // 0x3edab0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDAB4u;
        goto label_3edab4;
    }
    ctx->pc = 0x3EDAACu;
    SET_GPR_U32(ctx, 31, 0x3EDAB4u);
    ctx->pc = 0x3EDAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDAACu;
    // 0x3edab0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EDAACu, 0x3EDAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDAB4u;
label_3edab4:
    // 0x3edab4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3edab4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3edab8:
    // 0x3edab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3edab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3edabc:
    // 0x3edabc: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x3edabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3edac0:
    // 0x3edac0: 0xc0e858c  jal         func_3A1630
label_3edac4:
    if (ctx->pc == 0x3EDAC4u) {
        ctx->pc = 0x3EDAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDAC0u;
        // 0x3edac4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDAC8u;
        goto label_3edac8;
    }
    ctx->pc = 0x3EDAC0u;
    SET_GPR_U32(ctx, 31, 0x3EDAC8u);
    ctx->pc = 0x3EDAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDAC0u;
    // 0x3edac4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3EDAC0u, 0x3EDAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDAC8u;
label_3edac8:
    // 0x3edac8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x3edac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_3edacc:
    // 0x3edacc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3edaccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3edad0:
    // 0x3edad0: 0x34420081  ori         $v0, $v0, 0x81
    ctx->pc = 0x3edad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)129);
label_3edad4:
    // 0x3edad4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3edad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3edad8:
    // 0x3edad8: 0xc0e9132  jal         func_3A44C8
label_3edadc:
    if (ctx->pc == 0x3EDADCu) {
        ctx->pc = 0x3EDADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDAD8u;
        // 0x3edadc: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDAE0u;
        goto label_3edae0;
    }
    ctx->pc = 0x3EDAD8u;
    SET_GPR_U32(ctx, 31, 0x3EDAE0u);
    ctx->pc = 0x3EDADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDAD8u;
    // 0x3edadc: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3EDAD8u, 0x3EDAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDAE0u;
label_3edae0:
    // 0x3edae0: 0x7ba60000  lq          $a2, 0x0($sp)
    ctx->pc = 0x3edae0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3edae4:
    // 0x3edae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3edae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3edae8:
    // 0x3edae8: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3edae8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3edaec:
    // 0x3edaec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3edaecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3edaf0:
    // 0x3edaf0: 0x7e060010  sq          $a2, 0x10($s0)
    ctx->pc = 0x3edaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 6));
label_3edaf4:
    // 0x3edaf4: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x3edaf4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
label_3edaf8:
    // 0x3edaf8: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x3edaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_3edafc:
    // 0x3edafc: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3edafcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3edb00:
    // 0x3edb00: 0xc0e8dee  jal         func_3A37B8
label_3edb04:
    if (ctx->pc == 0x3EDB04u) {
        ctx->pc = 0x3EDB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDB00u;
        // 0x3edb04: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDB08u;
        goto label_3edb08;
    }
    ctx->pc = 0x3EDB00u;
    SET_GPR_U32(ctx, 31, 0x3EDB08u);
    ctx->pc = 0x3EDB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDB00u;
    // 0x3edb04: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3EDB00u, 0x3EDB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDB08u;
label_3edb08:
    // 0x3edb08: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x3edb08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_3edb0c:
    // 0x3edb0c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3edb0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3edb10:
    // 0x3edb10: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3edb10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3edb14:
    // 0x3edb14: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3edb14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3edb18:
    // 0x3edb18: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3edb18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3edb1c:
    // 0x3edb1c: 0x3e00008  jr          $ra
label_3edb20:
    if (ctx->pc == 0x3EDB20u) {
        ctx->pc = 0x3EDB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDB1Cu;
        // 0x3edb20: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDB24u;
        goto label_3edb24;
    }
    ctx->pc = 0x3EDB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EDB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDB1Cu;
        // 0x3edb20: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EDB1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EDB24u;
label_3edb24:
    // 0x3edb24: 0x0  nop
    ctx->pc = 0x3edb24u;
    // NOP
    ctx->pc = 0x3edb28u;
}
