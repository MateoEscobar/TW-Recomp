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

// Function: sub_0044EC38
// Address: 0x44ec38 - 0x44ecf8
void sub_0044EC38_0x44ec38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044EC38_0x44ec38");
#endif

    switch (ctx->pc) {
        case 0x44ec38u: goto label_44ec38;
        case 0x44ec3cu: goto label_44ec3c;
        case 0x44ec40u: goto label_44ec40;
        case 0x44ec44u: goto label_44ec44;
        case 0x44ec48u: goto label_44ec48;
        case 0x44ec4cu: goto label_44ec4c;
        case 0x44ec50u: goto label_44ec50;
        case 0x44ec54u: goto label_44ec54;
        case 0x44ec58u: goto label_44ec58;
        case 0x44ec5cu: goto label_44ec5c;
        case 0x44ec60u: goto label_44ec60;
        case 0x44ec64u: goto label_44ec64;
        case 0x44ec68u: goto label_44ec68;
        case 0x44ec6cu: goto label_44ec6c;
        case 0x44ec70u: goto label_44ec70;
        case 0x44ec74u: goto label_44ec74;
        case 0x44ec78u: goto label_44ec78;
        case 0x44ec7cu: goto label_44ec7c;
        case 0x44ec80u: goto label_44ec80;
        case 0x44ec84u: goto label_44ec84;
        case 0x44ec88u: goto label_44ec88;
        case 0x44ec8cu: goto label_44ec8c;
        case 0x44ec90u: goto label_44ec90;
        case 0x44ec94u: goto label_44ec94;
        case 0x44ec98u: goto label_44ec98;
        case 0x44ec9cu: goto label_44ec9c;
        case 0x44eca0u: goto label_44eca0;
        case 0x44eca4u: goto label_44eca4;
        case 0x44eca8u: goto label_44eca8;
        case 0x44ecacu: goto label_44ecac;
        case 0x44ecb0u: goto label_44ecb0;
        case 0x44ecb4u: goto label_44ecb4;
        case 0x44ecb8u: goto label_44ecb8;
        case 0x44ecbcu: goto label_44ecbc;
        case 0x44ecc0u: goto label_44ecc0;
        case 0x44ecc4u: goto label_44ecc4;
        case 0x44ecc8u: goto label_44ecc8;
        case 0x44ecccu: goto label_44eccc;
        case 0x44ecd0u: goto label_44ecd0;
        case 0x44ecd4u: goto label_44ecd4;
        case 0x44ecd8u: goto label_44ecd8;
        case 0x44ecdcu: goto label_44ecdc;
        case 0x44ece0u: goto label_44ece0;
        case 0x44ece4u: goto label_44ece4;
        case 0x44ece8u: goto label_44ece8;
        case 0x44ececu: goto label_44ecec;
        case 0x44ecf0u: goto label_44ecf0;
        case 0x44ecf4u: goto label_44ecf4;
        default: break;
    }

    ctx->pc = 0x44ec38u;

label_44ec38:
    // 0x44ec38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44ec38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_44ec3c:
    // 0x44ec3c: 0x8f828418  lw          $v0, -0x7BE8($gp)
    ctx->pc = 0x44ec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
label_44ec40:
    // 0x44ec40: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x44ec40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_44ec44:
    // 0x44ec44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44ec44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44ec48:
    // 0x44ec48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x44ec48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44ec4c:
    // 0x44ec4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44ec4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_44ec50:
    // 0x44ec50: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x44ec50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_44ec54:
    // 0x44ec54: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x44ec54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_44ec58:
    // 0x44ec58: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_44ec5c:
    if (ctx->pc == 0x44EC5Cu) {
        ctx->pc = 0x44EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44EC58u;
        // 0x44ec5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44EC60u;
        goto label_44ec60;
    }
    ctx->pc = 0x44EC58u;
    {
        const bool branch_taken_0x44ec58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44EC58u;
        // 0x44ec5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ec58) {
            ctx->pc = 0x44ECDCu;
            goto label_44ecdc;
        }
    }
    ctx->pc = 0x44EC60u;
label_44ec60:
    // 0x44ec60: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x44ec60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_44ec64:
    // 0x44ec64: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x44ec64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_44ec68:
    // 0x44ec68: 0xc11b404  jal         func_46D010
label_44ec6c:
    if (ctx->pc == 0x44EC6Cu) {
        ctx->pc = 0x44EC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44EC68u;
        // 0x44ec6c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44EC70u;
        goto label_44ec70;
    }
    ctx->pc = 0x44EC68u;
    SET_GPR_U32(ctx, 31, 0x44EC70u);
    ctx->pc = 0x44EC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44EC68u;
    // 0x44ec6c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D010u, 0x44EC68u, 0x44EC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44EC70u;
label_44ec70:
    // 0x44ec70: 0x8f838418  lw          $v1, -0x7BE8($gp)
    ctx->pc = 0x44ec70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
label_44ec74:
    // 0x44ec74: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x44ec74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_44ec78:
    // 0x44ec78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x44ec78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_44ec7c:
    // 0x44ec7c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x44ec7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_44ec80:
    // 0x44ec80: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_44ec84:
    if (ctx->pc == 0x44EC84u) {
        ctx->pc = 0x44EC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44EC80u;
        // 0x44ec84: 0x3c110071  lui         $s1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44EC88u;
        goto label_44ec88;
    }
    ctx->pc = 0x44EC80u;
    {
        const bool branch_taken_0x44ec80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x44EC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44EC80u;
        // 0x44ec84: 0x3c110071  lui         $s1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ec80) {
            ctx->pc = 0x44ECB8u;
            goto label_44ecb8;
        }
    }
    ctx->pc = 0x44EC88u;
label_44ec88:
    // 0x44ec88: 0xc114498  jal         func_451260
label_44ec8c:
    if (ctx->pc == 0x44EC8Cu) {
        ctx->pc = 0x44EC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44EC88u;
        // 0x44ec8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44EC90u;
        goto label_44ec90;
    }
    ctx->pc = 0x44EC88u;
    SET_GPR_U32(ctx, 31, 0x44EC90u);
    ctx->pc = 0x44EC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44EC88u;
    // 0x44ec8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x451260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x451260u, 0x44EC88u, 0x44EC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44EC90u;
label_44ec90:
    // 0x44ec90: 0xc1144e8  jal         func_4513A0
label_44ec94:
    if (ctx->pc == 0x44EC94u) {
        ctx->pc = 0x44EC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44EC90u;
        // 0x44ec94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44EC98u;
        goto label_44ec98;
    }
    ctx->pc = 0x44EC90u;
    SET_GPR_U32(ctx, 31, 0x44EC98u);
    ctx->pc = 0x44EC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44EC90u;
    // 0x44ec94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4513A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4513A0u, 0x44EC90u, 0x44EC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44EC98u;
label_44ec98:
    // 0x44ec98: 0x8f838418  lw          $v1, -0x7BE8($gp)
    ctx->pc = 0x44ec98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
label_44ec9c:
    // 0x44ec9c: 0x2622ad18  addiu       $v0, $s1, -0x52E8
    ctx->pc = 0x44ec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946072));
label_44eca0:
    // 0x44eca0: 0x8c45010c  lw          $a1, 0x10C($v0)
    ctx->pc = 0x44eca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_44eca4:
    // 0x44eca4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x44eca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_44eca8:
    // 0x44eca8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x44eca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_44ecac:
    // 0x44ecac: 0xa0f809  jalr        $a1
label_44ecb0:
    if (ctx->pc == 0x44ECB0u) {
        ctx->pc = 0x44ECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44ECACu;
        // 0x44ecb0: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44ECB4u;
        goto label_44ecb4;
    }
    ctx->pc = 0x44ECACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x44ECB4u);
        ctx->pc = 0x44ECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44ECACu;
        // 0x44ecb0: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44ECACu, 0x44ECB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44ECB4u;
label_44ecb4:
    // 0x44ecb4: 0x0  nop
    ctx->pc = 0x44ecb4u;
    // NOP
label_44ecb8:
    // 0x44ecb8: 0x8f828418  lw          $v0, -0x7BE8($gp)
    ctx->pc = 0x44ecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
label_44ecbc:
    // 0x44ecbc: 0x2623ad18  addiu       $v1, $s1, -0x52E8
    ctx->pc = 0x44ecbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946072));
label_44ecc0:
    // 0x44ecc0: 0x8c65010c  lw          $a1, 0x10C($v1)
    ctx->pc = 0x44ecc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_44ecc4:
    // 0x44ecc4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x44ecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_44ecc8:
    // 0x44ecc8: 0xa0f809  jalr        $a1
label_44eccc:
    if (ctx->pc == 0x44ECCCu) {
        ctx->pc = 0x44ECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44ECC8u;
        // 0x44eccc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44ECD0u;
        goto label_44ecd0;
    }
    ctx->pc = 0x44ECC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x44ECD0u);
        ctx->pc = 0x44ECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44ECC8u;
        // 0x44eccc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44ECC8u, 0x44ECD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44ECD0u;
label_44ecd0:
    // 0x44ecd0: 0x8f828418  lw          $v0, -0x7BE8($gp)
    ctx->pc = 0x44ecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
label_44ecd4:
    // 0x44ecd4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x44ecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_44ecd8:
    // 0x44ecd8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x44ecd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_44ecdc:
    // 0x44ecdc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x44ecdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44ece0:
    // 0x44ece0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44ece0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44ece4:
    // 0x44ece4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x44ece4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_44ece8:
    // 0x44ece8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44ece8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_44ecec:
    // 0x44ecec: 0x3e00008  jr          $ra
label_44ecf0:
    if (ctx->pc == 0x44ECF0u) {
        ctx->pc = 0x44ECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44ECECu;
        // 0x44ecf0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44ECF4u;
        goto label_44ecf4;
    }
    ctx->pc = 0x44ECECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44ECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44ECECu;
        // 0x44ecf0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44ECECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44ECF4u;
label_44ecf4:
    // 0x44ecf4: 0x0  nop
    ctx->pc = 0x44ecf4u;
    // NOP
    ctx->pc = 0x44ecf8u;
}
