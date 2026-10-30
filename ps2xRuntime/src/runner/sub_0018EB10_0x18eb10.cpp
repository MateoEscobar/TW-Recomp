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

// Function: sub_0018EB10
// Address: 0x18eb10 - 0x18ec00
void sub_0018EB10_0x18eb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018EB10_0x18eb10");
#endif

    switch (ctx->pc) {
        case 0x18eb10u: goto label_18eb10;
        case 0x18eb14u: goto label_18eb14;
        case 0x18eb18u: goto label_18eb18;
        case 0x18eb1cu: goto label_18eb1c;
        case 0x18eb20u: goto label_18eb20;
        case 0x18eb24u: goto label_18eb24;
        case 0x18eb28u: goto label_18eb28;
        case 0x18eb2cu: goto label_18eb2c;
        case 0x18eb30u: goto label_18eb30;
        case 0x18eb34u: goto label_18eb34;
        case 0x18eb38u: goto label_18eb38;
        case 0x18eb3cu: goto label_18eb3c;
        case 0x18eb40u: goto label_18eb40;
        case 0x18eb44u: goto label_18eb44;
        case 0x18eb48u: goto label_18eb48;
        case 0x18eb4cu: goto label_18eb4c;
        case 0x18eb50u: goto label_18eb50;
        case 0x18eb54u: goto label_18eb54;
        case 0x18eb58u: goto label_18eb58;
        case 0x18eb5cu: goto label_18eb5c;
        case 0x18eb60u: goto label_18eb60;
        case 0x18eb64u: goto label_18eb64;
        case 0x18eb68u: goto label_18eb68;
        case 0x18eb6cu: goto label_18eb6c;
        case 0x18eb70u: goto label_18eb70;
        case 0x18eb74u: goto label_18eb74;
        case 0x18eb78u: goto label_18eb78;
        case 0x18eb7cu: goto label_18eb7c;
        case 0x18eb80u: goto label_18eb80;
        case 0x18eb84u: goto label_18eb84;
        case 0x18eb88u: goto label_18eb88;
        case 0x18eb8cu: goto label_18eb8c;
        case 0x18eb90u: goto label_18eb90;
        case 0x18eb94u: goto label_18eb94;
        case 0x18eb98u: goto label_18eb98;
        case 0x18eb9cu: goto label_18eb9c;
        case 0x18eba0u: goto label_18eba0;
        case 0x18eba4u: goto label_18eba4;
        case 0x18eba8u: goto label_18eba8;
        case 0x18ebacu: goto label_18ebac;
        case 0x18ebb0u: goto label_18ebb0;
        case 0x18ebb4u: goto label_18ebb4;
        case 0x18ebb8u: goto label_18ebb8;
        case 0x18ebbcu: goto label_18ebbc;
        case 0x18ebc0u: goto label_18ebc0;
        case 0x18ebc4u: goto label_18ebc4;
        case 0x18ebc8u: goto label_18ebc8;
        case 0x18ebccu: goto label_18ebcc;
        case 0x18ebd0u: goto label_18ebd0;
        case 0x18ebd4u: goto label_18ebd4;
        case 0x18ebd8u: goto label_18ebd8;
        case 0x18ebdcu: goto label_18ebdc;
        case 0x18ebe0u: goto label_18ebe0;
        case 0x18ebe4u: goto label_18ebe4;
        case 0x18ebe8u: goto label_18ebe8;
        case 0x18ebecu: goto label_18ebec;
        case 0x18ebf0u: goto label_18ebf0;
        case 0x18ebf4u: goto label_18ebf4;
        case 0x18ebf8u: goto label_18ebf8;
        case 0x18ebfcu: goto label_18ebfc;
        default: break;
    }

    ctx->pc = 0x18eb10u;

label_18eb10:
    // 0x18eb10: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x18eb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_18eb14:
    // 0x18eb14: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x18eb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_18eb18:
    // 0x18eb18: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x18eb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_18eb1c:
    // 0x18eb1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18eb1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18eb20:
    // 0x18eb20: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x18eb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_18eb24:
    // 0x18eb24: 0x26300030  addiu       $s0, $s1, 0x30
    ctx->pc = 0x18eb24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_18eb28:
    // 0x18eb28: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x18eb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_18eb2c:
    // 0x18eb2c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x18eb2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_18eb30:
    // 0x18eb30: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x18eb30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
label_18eb34:
    // 0x18eb34: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x18eb34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_18eb38:
    // 0x18eb38: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x18eb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_18eb3c:
    // 0x18eb3c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18eb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18eb40:
    // 0x18eb40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18eb40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18eb44:
    // 0x18eb44: 0xc137a34  jal         func_4DE8D0
label_18eb48:
    if (ctx->pc == 0x18EB48u) {
        ctx->pc = 0x18EB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB44u;
        // 0x18eb48: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EB4Cu;
        goto label_18eb4c;
    }
    ctx->pc = 0x18EB44u;
    SET_GPR_U32(ctx, 31, 0x18EB4Cu);
    ctx->pc = 0x18EB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EB44u;
    // 0x18eb48: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE8D0u, 0x18EB44u, 0x18EB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EB4Cu;
label_18eb4c:
    // 0x18eb4c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x18eb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18eb50:
    // 0x18eb50: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x18eb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18eb54:
    // 0x18eb54: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_18eb58:
    if (ctx->pc == 0x18EB58u) {
        ctx->pc = 0x18EB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB54u;
        // 0x18eb58: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EB5Cu;
        goto label_18eb5c;
    }
    ctx->pc = 0x18EB54u;
    {
        const bool branch_taken_0x18eb54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18EB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB54u;
        // 0x18eb58: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eb54) {
            ctx->pc = 0x18EB84u;
            goto label_18eb84;
        }
    }
    ctx->pc = 0x18EB5Cu;
label_18eb5c:
    // 0x18eb5c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x18eb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_18eb60:
    // 0x18eb60: 0x8c700014  lw          $s0, 0x14($v1)
    ctx->pc = 0x18eb60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_18eb64:
    // 0x18eb64: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x18eb64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_18eb68:
    // 0x18eb68: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x18eb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18eb6c:
    // 0x18eb6c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x18eb6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_18eb70:
    // 0x18eb70: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x18eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_18eb74:
    // 0x18eb74: 0x40f809  jalr        $v0
label_18eb78:
    if (ctx->pc == 0x18EB78u) {
        ctx->pc = 0x18EB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB74u;
        // 0x18eb78: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EB7Cu;
        goto label_18eb7c;
    }
    ctx->pc = 0x18EB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18EB7Cu);
        ctx->pc = 0x18EB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB74u;
        // 0x18eb78: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EB74u, 0x18EB7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18EB7Cu;
label_18eb7c:
    // 0x18eb7c: 0x10000017  b           . + 4 + (0x17 << 2)
label_18eb80:
    if (ctx->pc == 0x18EB80u) {
        ctx->pc = 0x18EB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB7Cu;
        // 0x18eb80: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EB84u;
        goto label_18eb84;
    }
    ctx->pc = 0x18EB7Cu;
    {
        const bool branch_taken_0x18eb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB7Cu;
        // 0x18eb80: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eb7c) {
            ctx->pc = 0x18EBDCu;
            goto label_18ebdc;
        }
    }
    ctx->pc = 0x18EB84u;
label_18eb84:
    // 0x18eb84: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x18eb84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_18eb88:
    // 0x18eb88: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x18eb88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_18eb8c:
    // 0x18eb8c: 0x8fa70050  lw          $a3, 0x50($sp)
    ctx->pc = 0x18eb8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_18eb90:
    // 0x18eb90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18eb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18eb94:
    // 0x18eb94: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x18eb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_18eb98:
    // 0x18eb98: 0xc10ca04  jal         func_432810
label_18eb9c:
    if (ctx->pc == 0x18EB9Cu) {
        ctx->pc = 0x18EB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB98u;
        // 0x18eb9c: 0x24c63028  addiu       $a2, $a2, 0x3028 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EBA0u;
        goto label_18eba0;
    }
    ctx->pc = 0x18EB98u;
    SET_GPR_U32(ctx, 31, 0x18EBA0u);
    ctx->pc = 0x18EB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EB98u;
    // 0x18eb9c: 0x24c63028  addiu       $a2, $a2, 0x3028 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x18EB98u, 0x18EBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EBA0u;
label_18eba0:
    // 0x18eba0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18eba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18eba4:
    // 0x18eba4: 0xc061668  jal         func_1859A0
label_18eba8:
    if (ctx->pc == 0x18EBA8u) {
        ctx->pc = 0x18EBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EBA4u;
        // 0x18eba8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EBACu;
        goto label_18ebac;
    }
    ctx->pc = 0x18EBA4u;
    SET_GPR_U32(ctx, 31, 0x18EBACu);
    ctx->pc = 0x18EBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EBA4u;
    // 0x18eba8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1859A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1859A0u, 0x18EBA4u, 0x18EBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EBACu;
label_18ebac:
    // 0x18ebac: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_18ebb0:
    if (ctx->pc == 0x18EBB0u) {
        ctx->pc = 0x18EBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EBACu;
        // 0x18ebb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EBB4u;
        goto label_18ebb4;
    }
    ctx->pc = 0x18EBACu;
    {
        const bool branch_taken_0x18ebac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18EBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EBACu;
        // 0x18ebb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ebac) {
            ctx->pc = 0x18EBE0u;
            goto label_18ebe0;
        }
    }
    ctx->pc = 0x18EBB4u;
label_18ebb4:
    // 0x18ebb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18ebb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18ebb8:
    // 0x18ebb8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x18ebb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_18ebbc:
    // 0x18ebbc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18ebbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18ebc0:
    // 0x18ebc0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x18ebc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18ebc4:
    // 0x18ebc4: 0xc061eaa  jal         func_187AA8
label_18ebc8:
    if (ctx->pc == 0x18EBC8u) {
        ctx->pc = 0x18EBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EBC4u;
        // 0x18ebc8: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EBCCu;
        goto label_18ebcc;
    }
    ctx->pc = 0x18EBC4u;
    SET_GPR_U32(ctx, 31, 0x18EBCCu);
    ctx->pc = 0x18EBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EBC4u;
    // 0x18ebc8: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187AA8u, 0x18EBC4u, 0x18EBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EBCCu;
label_18ebcc:
    // 0x18ebcc: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x18ebccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_18ebd0:
    // 0x18ebd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18ebd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ebd4:
    // 0x18ebd4: 0xc0552b8  jal         func_154AE0
label_18ebd8:
    if (ctx->pc == 0x18EBD8u) {
        ctx->pc = 0x18EBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EBD4u;
        // 0x18ebd8: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EBDCu;
        goto label_18ebdc;
    }
    ctx->pc = 0x18EBD4u;
    SET_GPR_U32(ctx, 31, 0x18EBDCu);
    ctx->pc = 0x18EBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EBD4u;
    // 0x18ebd8: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x18EBD4u, 0x18EBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EBDCu;
label_18ebdc:
    // 0x18ebdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18ebdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18ebe0:
    // 0x18ebe0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x18ebe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_18ebe4:
    // 0x18ebe4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x18ebe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_18ebe8:
    // 0x18ebe8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x18ebe8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_18ebec:
    // 0x18ebec: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x18ebecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_18ebf0:
    // 0x18ebf0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x18ebf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_18ebf4:
    // 0x18ebf4: 0x3e00008  jr          $ra
label_18ebf8:
    if (ctx->pc == 0x18EBF8u) {
        ctx->pc = 0x18EBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EBF4u;
        // 0x18ebf8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EBFCu;
        goto label_18ebfc;
    }
    ctx->pc = 0x18EBF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EBF4u;
        // 0x18ebf8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EBF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18EBFCu;
label_18ebfc:
    // 0x18ebfc: 0x0  nop
    ctx->pc = 0x18ebfcu;
    // NOP
    ctx->pc = 0x18ec00u;
}
