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

// Function: sub_0016EA20
// Address: 0x16ea20 - 0x16eb10
void sub_0016EA20_0x16ea20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016EA20_0x16ea20");
#endif

    switch (ctx->pc) {
        case 0x16ea20u: goto label_16ea20;
        case 0x16ea24u: goto label_16ea24;
        case 0x16ea28u: goto label_16ea28;
        case 0x16ea2cu: goto label_16ea2c;
        case 0x16ea30u: goto label_16ea30;
        case 0x16ea34u: goto label_16ea34;
        case 0x16ea38u: goto label_16ea38;
        case 0x16ea3cu: goto label_16ea3c;
        case 0x16ea40u: goto label_16ea40;
        case 0x16ea44u: goto label_16ea44;
        case 0x16ea48u: goto label_16ea48;
        case 0x16ea4cu: goto label_16ea4c;
        case 0x16ea50u: goto label_16ea50;
        case 0x16ea54u: goto label_16ea54;
        case 0x16ea58u: goto label_16ea58;
        case 0x16ea5cu: goto label_16ea5c;
        case 0x16ea60u: goto label_16ea60;
        case 0x16ea64u: goto label_16ea64;
        case 0x16ea68u: goto label_16ea68;
        case 0x16ea6cu: goto label_16ea6c;
        case 0x16ea70u: goto label_16ea70;
        case 0x16ea74u: goto label_16ea74;
        case 0x16ea78u: goto label_16ea78;
        case 0x16ea7cu: goto label_16ea7c;
        case 0x16ea80u: goto label_16ea80;
        case 0x16ea84u: goto label_16ea84;
        case 0x16ea88u: goto label_16ea88;
        case 0x16ea8cu: goto label_16ea8c;
        case 0x16ea90u: goto label_16ea90;
        case 0x16ea94u: goto label_16ea94;
        case 0x16ea98u: goto label_16ea98;
        case 0x16ea9cu: goto label_16ea9c;
        case 0x16eaa0u: goto label_16eaa0;
        case 0x16eaa4u: goto label_16eaa4;
        case 0x16eaa8u: goto label_16eaa8;
        case 0x16eaacu: goto label_16eaac;
        case 0x16eab0u: goto label_16eab0;
        case 0x16eab4u: goto label_16eab4;
        case 0x16eab8u: goto label_16eab8;
        case 0x16eabcu: goto label_16eabc;
        case 0x16eac0u: goto label_16eac0;
        case 0x16eac4u: goto label_16eac4;
        case 0x16eac8u: goto label_16eac8;
        case 0x16eaccu: goto label_16eacc;
        case 0x16ead0u: goto label_16ead0;
        case 0x16ead4u: goto label_16ead4;
        case 0x16ead8u: goto label_16ead8;
        case 0x16eadcu: goto label_16eadc;
        case 0x16eae0u: goto label_16eae0;
        case 0x16eae4u: goto label_16eae4;
        case 0x16eae8u: goto label_16eae8;
        case 0x16eaecu: goto label_16eaec;
        case 0x16eaf0u: goto label_16eaf0;
        case 0x16eaf4u: goto label_16eaf4;
        case 0x16eaf8u: goto label_16eaf8;
        case 0x16eafcu: goto label_16eafc;
        case 0x16eb00u: goto label_16eb00;
        case 0x16eb04u: goto label_16eb04;
        case 0x16eb08u: goto label_16eb08;
        case 0x16eb0cu: goto label_16eb0c;
        default: break;
    }

    ctx->pc = 0x16ea20u;

label_16ea20:
    // 0x16ea20: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x16ea20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_16ea24:
    // 0x16ea24: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x16ea24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_16ea28:
    // 0x16ea28: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x16ea28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_16ea2c:
    // 0x16ea2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16ea2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16ea30:
    // 0x16ea30: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x16ea30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_16ea34:
    // 0x16ea34: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x16ea34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_16ea38:
    // 0x16ea38: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x16ea38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_16ea3c:
    // 0x16ea3c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x16ea3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16ea40:
    // 0x16ea40: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x16ea40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
label_16ea44:
    // 0x16ea44: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x16ea44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_16ea48:
    // 0x16ea48: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x16ea48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_16ea4c:
    // 0x16ea4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16ea4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16ea50:
    // 0x16ea50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16ea50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16ea54:
    // 0x16ea54: 0xc137916  jal         func_4DE458
label_16ea58:
    if (ctx->pc == 0x16EA58u) {
        ctx->pc = 0x16EA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EA54u;
        // 0x16ea58: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EA5Cu;
        goto label_16ea5c;
    }
    ctx->pc = 0x16EA54u;
    SET_GPR_U32(ctx, 31, 0x16EA5Cu);
    ctx->pc = 0x16EA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EA54u;
    // 0x16ea58: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE458u, 0x16EA54u, 0x16EA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EA5Cu;
label_16ea5c:
    // 0x16ea5c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x16ea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_16ea60:
    // 0x16ea60: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16ea60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16ea64:
    // 0x16ea64: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_16ea68:
    if (ctx->pc == 0x16EA68u) {
        ctx->pc = 0x16EA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EA64u;
        // 0x16ea68: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EA6Cu;
        goto label_16ea6c;
    }
    ctx->pc = 0x16EA64u;
    {
        const bool branch_taken_0x16ea64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16EA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EA64u;
        // 0x16ea68: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ea64) {
            ctx->pc = 0x16EA94u;
            goto label_16ea94;
        }
    }
    ctx->pc = 0x16EA6Cu;
label_16ea6c:
    // 0x16ea6c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x16ea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_16ea70:
    // 0x16ea70: 0x8c700014  lw          $s0, 0x14($v1)
    ctx->pc = 0x16ea70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_16ea74:
    // 0x16ea74: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x16ea74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_16ea78:
    // 0x16ea78: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x16ea78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_16ea7c:
    // 0x16ea7c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x16ea7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_16ea80:
    // 0x16ea80: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x16ea80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_16ea84:
    // 0x16ea84: 0x40f809  jalr        $v0
label_16ea88:
    if (ctx->pc == 0x16EA88u) {
        ctx->pc = 0x16EA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EA84u;
        // 0x16ea88: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EA8Cu;
        goto label_16ea8c;
    }
    ctx->pc = 0x16EA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16EA8Cu);
        ctx->pc = 0x16EA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EA84u;
        // 0x16ea88: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EA84u, 0x16EA8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16EA8Cu;
label_16ea8c:
    // 0x16ea8c: 0x10000017  b           . + 4 + (0x17 << 2)
label_16ea90:
    if (ctx->pc == 0x16EA90u) {
        ctx->pc = 0x16EA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EA8Cu;
        // 0x16ea90: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EA94u;
        goto label_16ea94;
    }
    ctx->pc = 0x16EA8Cu;
    {
        const bool branch_taken_0x16ea8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EA8Cu;
        // 0x16ea90: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ea8c) {
            ctx->pc = 0x16EAECu;
            goto label_16eaec;
        }
    }
    ctx->pc = 0x16EA94u;
label_16ea94:
    // 0x16ea94: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x16ea94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_16ea98:
    // 0x16ea98: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x16ea98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_16ea9c:
    // 0x16ea9c: 0x8fa70050  lw          $a3, 0x50($sp)
    ctx->pc = 0x16ea9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_16eaa0:
    // 0x16eaa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16eaa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16eaa4:
    // 0x16eaa4: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x16eaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_16eaa8:
    // 0x16eaa8: 0xc10ca04  jal         func_432810
label_16eaac:
    if (ctx->pc == 0x16EAACu) {
        ctx->pc = 0x16EAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EAA8u;
        // 0x16eaac: 0x24c61930  addiu       $a2, $a2, 0x1930 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EAB0u;
        goto label_16eab0;
    }
    ctx->pc = 0x16EAA8u;
    SET_GPR_U32(ctx, 31, 0x16EAB0u);
    ctx->pc = 0x16EAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EAA8u;
    // 0x16eaac: 0x24c61930  addiu       $a2, $a2, 0x1930 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x16EAA8u, 0x16EAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EAB0u;
label_16eab0:
    // 0x16eab0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16eab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16eab4:
    // 0x16eab4: 0xc061668  jal         func_1859A0
label_16eab8:
    if (ctx->pc == 0x16EAB8u) {
        ctx->pc = 0x16EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EAB4u;
        // 0x16eab8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EABCu;
        goto label_16eabc;
    }
    ctx->pc = 0x16EAB4u;
    SET_GPR_U32(ctx, 31, 0x16EABCu);
    ctx->pc = 0x16EAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EAB4u;
    // 0x16eab8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1859A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1859A0u, 0x16EAB4u, 0x16EABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EABCu;
label_16eabc:
    // 0x16eabc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_16eac0:
    if (ctx->pc == 0x16EAC0u) {
        ctx->pc = 0x16EAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EABCu;
        // 0x16eac0: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EAC4u;
        goto label_16eac4;
    }
    ctx->pc = 0x16EABCu;
    {
        const bool branch_taken_0x16eabc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16EAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EABCu;
        // 0x16eac0: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eabc) {
            ctx->pc = 0x16EAE0u;
            goto label_16eae0;
        }
    }
    ctx->pc = 0x16EAC4u;
label_16eac4:
    // 0x16eac4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16eac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16eac8:
    // 0x16eac8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x16eac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16eacc:
    // 0x16eacc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x16eaccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16ead0:
    // 0x16ead0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x16ead0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16ead4:
    // 0x16ead4: 0xc061eaa  jal         func_187AA8
label_16ead8:
    if (ctx->pc == 0x16EAD8u) {
        ctx->pc = 0x16EAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EAD4u;
        // 0x16ead8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EADCu;
        goto label_16eadc;
    }
    ctx->pc = 0x16EAD4u;
    SET_GPR_U32(ctx, 31, 0x16EADCu);
    ctx->pc = 0x16EAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EAD4u;
    // 0x16ead8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187AA8u, 0x16EAD4u, 0x16EADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EADCu;
label_16eadc:
    // 0x16eadc: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16eadcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_16eae0:
    // 0x16eae0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16eae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16eae4:
    // 0x16eae4: 0xc0552b8  jal         func_154AE0
label_16eae8:
    if (ctx->pc == 0x16EAE8u) {
        ctx->pc = 0x16EAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EAE4u;
        // 0x16eae8: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EAECu;
        goto label_16eaec;
    }
    ctx->pc = 0x16EAE4u;
    SET_GPR_U32(ctx, 31, 0x16EAECu);
    ctx->pc = 0x16EAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EAE4u;
    // 0x16eae8: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x16EAE4u, 0x16EAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EAECu;
label_16eaec:
    // 0x16eaec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16eaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16eaf0:
    // 0x16eaf0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x16eaf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_16eaf4:
    // 0x16eaf4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x16eaf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_16eaf8:
    // 0x16eaf8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x16eaf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_16eafc:
    // 0x16eafc: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x16eafcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_16eb00:
    // 0x16eb00: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x16eb00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_16eb04:
    // 0x16eb04: 0x3e00008  jr          $ra
label_16eb08:
    if (ctx->pc == 0x16EB08u) {
        ctx->pc = 0x16EB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB04u;
        // 0x16eb08: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EB0Cu;
        goto label_16eb0c;
    }
    ctx->pc = 0x16EB04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB04u;
        // 0x16eb08: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EB04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16EB0Cu;
label_16eb0c:
    // 0x16eb0c: 0x0  nop
    ctx->pc = 0x16eb0cu;
    // NOP
    ctx->pc = 0x16eb10u;
}
