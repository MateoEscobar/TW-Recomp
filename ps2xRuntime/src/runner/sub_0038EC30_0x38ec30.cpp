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

// Function: sub_0038EC30
// Address: 0x38ec30 - 0x38ed08
void sub_0038EC30_0x38ec30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038EC30_0x38ec30");
#endif

    switch (ctx->pc) {
        case 0x38ec30u: goto label_38ec30;
        case 0x38ec34u: goto label_38ec34;
        case 0x38ec38u: goto label_38ec38;
        case 0x38ec3cu: goto label_38ec3c;
        case 0x38ec40u: goto label_38ec40;
        case 0x38ec44u: goto label_38ec44;
        case 0x38ec48u: goto label_38ec48;
        case 0x38ec4cu: goto label_38ec4c;
        case 0x38ec50u: goto label_38ec50;
        case 0x38ec54u: goto label_38ec54;
        case 0x38ec58u: goto label_38ec58;
        case 0x38ec5cu: goto label_38ec5c;
        case 0x38ec60u: goto label_38ec60;
        case 0x38ec64u: goto label_38ec64;
        case 0x38ec68u: goto label_38ec68;
        case 0x38ec6cu: goto label_38ec6c;
        case 0x38ec70u: goto label_38ec70;
        case 0x38ec74u: goto label_38ec74;
        case 0x38ec78u: goto label_38ec78;
        case 0x38ec7cu: goto label_38ec7c;
        case 0x38ec80u: goto label_38ec80;
        case 0x38ec84u: goto label_38ec84;
        case 0x38ec88u: goto label_38ec88;
        case 0x38ec8cu: goto label_38ec8c;
        case 0x38ec90u: goto label_38ec90;
        case 0x38ec94u: goto label_38ec94;
        case 0x38ec98u: goto label_38ec98;
        case 0x38ec9cu: goto label_38ec9c;
        case 0x38eca0u: goto label_38eca0;
        case 0x38eca4u: goto label_38eca4;
        case 0x38eca8u: goto label_38eca8;
        case 0x38ecacu: goto label_38ecac;
        case 0x38ecb0u: goto label_38ecb0;
        case 0x38ecb4u: goto label_38ecb4;
        case 0x38ecb8u: goto label_38ecb8;
        case 0x38ecbcu: goto label_38ecbc;
        case 0x38ecc0u: goto label_38ecc0;
        case 0x38ecc4u: goto label_38ecc4;
        case 0x38ecc8u: goto label_38ecc8;
        case 0x38ecccu: goto label_38eccc;
        case 0x38ecd0u: goto label_38ecd0;
        case 0x38ecd4u: goto label_38ecd4;
        case 0x38ecd8u: goto label_38ecd8;
        case 0x38ecdcu: goto label_38ecdc;
        case 0x38ece0u: goto label_38ece0;
        case 0x38ece4u: goto label_38ece4;
        case 0x38ece8u: goto label_38ece8;
        case 0x38ececu: goto label_38ecec;
        case 0x38ecf0u: goto label_38ecf0;
        case 0x38ecf4u: goto label_38ecf4;
        case 0x38ecf8u: goto label_38ecf8;
        case 0x38ecfcu: goto label_38ecfc;
        case 0x38ed00u: goto label_38ed00;
        case 0x38ed04u: goto label_38ed04;
        default: break;
    }

    ctx->pc = 0x38ec30u;

label_38ec30:
    // 0x38ec30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x38ec30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_38ec34:
    // 0x38ec34: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x38ec34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_38ec38:
    // 0x38ec38: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x38ec38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38ec3c:
    // 0x38ec3c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x38ec3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_38ec40:
    // 0x38ec40: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x38ec40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_38ec44:
    // 0x38ec44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38ec44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_38ec48:
    // 0x38ec48: 0xc10ce90  jal         func_433A40
label_38ec4c:
    if (ctx->pc == 0x38EC4Cu) {
        ctx->pc = 0x38EC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EC48u;
        // 0x38ec4c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EC50u;
        goto label_38ec50;
    }
    ctx->pc = 0x38EC48u;
    SET_GPR_U32(ctx, 31, 0x38EC50u);
    ctx->pc = 0x38EC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EC48u;
    // 0x38ec4c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433A40u, 0x38EC48u, 0x38EC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EC50u;
label_38ec50:
    // 0x38ec50: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x38ec50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_38ec54:
    // 0x38ec54: 0xa64000f8  sh          $zero, 0xF8($s2)
    ctx->pc = 0x38ec54u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 248), (uint16_t)GPR_U32(ctx, 0));
label_38ec58:
    // 0x38ec58: 0x8c662c7c  lw          $a2, 0x2C7C($v1)
    ctx->pc = 0x38ec58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11388)));
label_38ec5c:
    // 0x38ec5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x38ec5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38ec60:
    // 0x38ec60: 0xc0e3ec0  jal         func_38FB00
label_38ec64:
    if (ctx->pc == 0x38EC64u) {
        ctx->pc = 0x38EC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EC60u;
        // 0x38ec64: 0x8cc4084c  lw          $a0, 0x84C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EC68u;
        goto label_38ec68;
    }
    ctx->pc = 0x38EC60u;
    SET_GPR_U32(ctx, 31, 0x38EC68u);
    ctx->pc = 0x38EC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EC60u;
    // 0x38ec64: 0x8cc4084c  lw          $a0, 0x84C($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FB00u, 0x38EC60u, 0x38EC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EC68u;
label_38ec68:
    // 0x38ec68: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_38ec6c:
    if (ctx->pc == 0x38EC6Cu) {
        ctx->pc = 0x38EC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EC68u;
        // 0x38ec6c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EC70u;
        goto label_38ec70;
    }
    ctx->pc = 0x38EC68u;
    {
        const bool branch_taken_0x38ec68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EC68u;
        // 0x38ec6c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ec68) {
            ctx->pc = 0x38EC74u;
            goto label_38ec74;
        }
    }
    ctx->pc = 0x38EC70u;
label_38ec70:
    // 0x38ec70: 0xa64200f8  sh          $v0, 0xF8($s2)
    ctx->pc = 0x38ec70u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 248), (uint16_t)GPR_U32(ctx, 2));
label_38ec74:
    // 0x38ec74: 0xc0e8570  jal         func_3A15C0
label_38ec78:
    if (ctx->pc == 0x38EC78u) {
        ctx->pc = 0x38EC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EC74u;
        // 0x38ec78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EC7Cu;
        goto label_38ec7c;
    }
    ctx->pc = 0x38EC74u;
    SET_GPR_U32(ctx, 31, 0x38EC7Cu);
    ctx->pc = 0x38EC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EC74u;
    // 0x38ec78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A15C0u, 0x38EC74u, 0x38EC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EC7Cu;
label_38ec7c:
    // 0x38ec7c: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x38ec7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38ec80:
    // 0x38ec80: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x38ec80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_38ec84:
    // 0x38ec84: 0x24840a80  addiu       $a0, $a0, 0xA80
    ctx->pc = 0x38ec84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2688));
label_38ec88:
    // 0x38ec88: 0x86110190  lh          $s1, 0x190($s0)
    ctx->pc = 0x38ec88u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 400)));
label_38ec8c:
    // 0x38ec8c: 0x26100190  addiu       $s0, $s0, 0x190
    ctx->pc = 0x38ec8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_38ec90:
    // 0x38ec90: 0xc0f15a8  jal         func_3C56A0
label_38ec94:
    if (ctx->pc == 0x38EC94u) {
        ctx->pc = 0x38EC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EC90u;
        // 0x38ec94: 0x2518821  addu        $s1, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EC98u;
        goto label_38ec98;
    }
    ctx->pc = 0x38EC90u;
    SET_GPR_U32(ctx, 31, 0x38EC98u);
    ctx->pc = 0x38EC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EC90u;
    // 0x38ec94: 0x2518821  addu        $s1, $s2, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56A0u, 0x38EC90u, 0x38EC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EC98u;
label_38ec98:
    // 0x38ec98: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x38ec98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_38ec9c:
    // 0x38ec9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x38ec9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38eca0:
    // 0x38eca0: 0x60f809  jalr        $v1
label_38eca4:
    if (ctx->pc == 0x38ECA4u) {
        ctx->pc = 0x38ECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ECA0u;
        // 0x38eca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ECA8u;
        goto label_38eca8;
    }
    ctx->pc = 0x38ECA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38ECA8u);
        ctx->pc = 0x38ECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ECA0u;
        // 0x38eca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38ECA0u, 0x38ECA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38ECA8u;
label_38eca8:
    // 0x38eca8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x38eca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38ecac:
    // 0x38ecac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38ecacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38ecb0:
    // 0x38ecb0: 0xae4000e8  sw          $zero, 0xE8($s2)
    ctx->pc = 0x38ecb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 0));
label_38ecb4:
    // 0x38ecb4: 0xae4000d0  sw          $zero, 0xD0($s2)
    ctx->pc = 0x38ecb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 0));
label_38ecb8:
    // 0x38ecb8: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x38ecb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_38ecbc:
    // 0x38ecbc: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x38ecbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_38ecc0:
    // 0x38ecc0: 0x60f809  jalr        $v1
label_38ecc4:
    if (ctx->pc == 0x38ECC4u) {
        ctx->pc = 0x38ECC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ECC0u;
        // 0x38ecc4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ECC8u;
        goto label_38ecc8;
    }
    ctx->pc = 0x38ECC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38ECC8u);
        ctx->pc = 0x38ECC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ECC0u;
        // 0x38ecc4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38ECC0u, 0x38ECC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38ECC8u;
label_38ecc8:
    // 0x38ecc8: 0xae4000ec  sw          $zero, 0xEC($s2)
    ctx->pc = 0x38ecc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 236), GPR_U32(ctx, 0));
label_38eccc:
    // 0x38eccc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38ecccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38ecd0:
    // 0x38ecd0: 0xc0e3d76  jal         func_38F5D8
label_38ecd4:
    if (ctx->pc == 0x38ECD4u) {
        ctx->pc = 0x38ECD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ECD0u;
        // 0x38ecd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ECD8u;
        goto label_38ecd8;
    }
    ctx->pc = 0x38ECD0u;
    SET_GPR_U32(ctx, 31, 0x38ECD8u);
    ctx->pc = 0x38ECD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ECD0u;
    // 0x38ecd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F5D8u, 0x38ECD0u, 0x38ECD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ECD8u;
label_38ecd8:
    // 0x38ecd8: 0xc0e3fce  jal         func_38FF38
label_38ecdc:
    if (ctx->pc == 0x38ECDCu) {
        ctx->pc = 0x38ECE0u;
        goto label_38ece0;
    }
    ctx->pc = 0x38ECD8u;
    SET_GPR_U32(ctx, 31, 0x38ECE0u);
    ctx->pc = 0x38FF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FF38u, 0x38ECD8u, 0x38ECE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ECE0u;
label_38ece0:
    // 0x38ece0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38ece0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38ece4:
    // 0x38ece4: 0xc0e3ff4  jal         func_38FFD0
label_38ece8:
    if (ctx->pc == 0x38ECE8u) {
        ctx->pc = 0x38ECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ECE4u;
        // 0x38ece8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ECECu;
        goto label_38ecec;
    }
    ctx->pc = 0x38ECE4u;
    SET_GPR_U32(ctx, 31, 0x38ECECu);
    ctx->pc = 0x38ECE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ECE4u;
    // 0x38ece8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FFD0u, 0x38ECE4u, 0x38ECECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ECECu;
label_38ecec:
    // 0x38ecec: 0xae4200e0  sw          $v0, 0xE0($s2)
    ctx->pc = 0x38ececu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 2));
label_38ecf0:
    // 0x38ecf0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x38ecf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38ecf4:
    // 0x38ecf4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x38ecf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38ecf8:
    // 0x38ecf8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x38ecf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38ecfc:
    // 0x38ecfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38ecfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38ed00:
    // 0x38ed00: 0x3e00008  jr          $ra
label_38ed04:
    if (ctx->pc == 0x38ED04u) {
        ctx->pc = 0x38ED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED00u;
        // 0x38ed04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ED08u;
        goto label_fallthrough_0x38ed00;
    }
    ctx->pc = 0x38ED00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38ED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED00u;
        // 0x38ed04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38ED00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38ed00:
    ctx->pc = 0x38ED08u;
}
