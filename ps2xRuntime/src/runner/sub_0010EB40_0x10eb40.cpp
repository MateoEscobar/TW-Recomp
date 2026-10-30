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

// Function: sub_0010EB40
// Address: 0x10eb40 - 0x10ed20
void sub_0010EB40_0x10eb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010EB40_0x10eb40");
#endif

    switch (ctx->pc) {
        case 0x10ebbcu: goto label_10ebbc;
        case 0x10ebd8u: goto label_10ebd8;
        case 0x10ebecu: goto label_10ebec;
        case 0x10ebfcu: goto label_10ebfc;
        case 0x10ec08u: goto label_10ec08;
        case 0x10ec14u: goto label_10ec14;
        case 0x10ec24u: goto label_10ec24;
        case 0x10ec30u: goto label_10ec30;
        case 0x10ec3cu: goto label_10ec3c;
        case 0x10ec88u: goto label_10ec88;
        case 0x10ec9cu: goto label_10ec9c;
        case 0x10ecb0u: goto label_10ecb0;
        case 0x10ecc4u: goto label_10ecc4;
        case 0x10ecd8u: goto label_10ecd8;
        case 0x10ececu: goto label_10ecec;
        default: break;
    }

    ctx->pc = 0x10eb40u;

    // 0x10eb40: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x10eb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x10eb44: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x10eb44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x10eb48: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x10eb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x10eb4c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x10eb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x10eb50: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x10eb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x10eb54: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10eb54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eb58: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x10eb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x10eb5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10eb5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eb60: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x10eb60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x10eb64: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x10eb64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eb68: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x10eb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x10eb6c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x10eb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x10eb70: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x10eb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x10eb74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10eb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10eb78: 0x8ca2a8e0  lw          $v0, -0x5720($a1)
    ctx->pc = 0x10eb78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50A8E0u));
    // 0x10eb7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10EB7Cu;
    {
        const bool branch_taken_0x10eb7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB7Cu;
        // 0x10eb80: 0x8c630038  lw          $v1, 0x38($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eb7c) {
            ctx->pc = 0x10EB90u;
            goto label_10eb90;
        }
    }
    ctx->pc = 0x10EB84u;
    // 0x10eb84: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x10eb84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x10eb88: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10EB88u;
    {
        const bool branch_taken_0x10eb88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10eb88) {
            ctx->pc = 0x10EB8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10EB88u;
            // 0x10eb8c: 0xaea0a8e0  sw          $zero, -0x5720($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 4294944992), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10EB90u;
            goto label_10eb90;
        }
    }
    ctx->pc = 0x10EB90u;
label_10eb90:
    // 0x10eb90: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x10eb90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x10eb94: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x10eb94u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x10eb98: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10eb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x10eb9c: 0x8e05aa84  lw          $a1, -0x557C($s0)
    ctx->pc = 0x10eb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50AA84u));
    // 0x10eba0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x10eba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x10eba4: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x10eba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x10eba8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x10eba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x10ebac: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x10ebacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10ebb0: 0x8ca24268  lw          $v0, 0x4268($a1)
    ctx->pc = 0x10ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 17000)));
    // 0x10ebb4: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x10EBB4u;
    SET_GPR_U32(ctx, 31, 0x10EBBCu);
    ctx->pc = 0x10EBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EBB4u;
    // 0x10ebb8: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x10EBB4u, 0x10EBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EBBCu;
label_10ebbc:
    // 0x10ebbc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x10EBBCu;
    {
        const bool branch_taken_0x10ebbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ebbc) {
            ctx->pc = 0x10EBC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10EBBCu;
            // 0x10ebc0: 0x8e220154  lw          $v0, 0x154($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10EBDCu;
            goto label_10ebdc;
        }
    }
    ctx->pc = 0x10EBC4u;
    // 0x10ebc4: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x10ebc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x10ebc8: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10EBC8u;
    {
        const bool branch_taken_0x10ebc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ebc8) {
            ctx->pc = 0x10EBCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10EBC8u;
            // 0x10ebcc: 0x8e220154  lw          $v0, 0x154($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10EBDCu;
            goto label_10ebdc;
        }
    }
    ctx->pc = 0x10EBD0u;
    // 0x10ebd0: 0xc04436c  jal         func_110DB0
    ctx->pc = 0x10EBD0u;
    SET_GPR_U32(ctx, 31, 0x10EBD8u);
    ctx->pc = 0x10EBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EBD0u;
    // 0x10ebd4: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110DB0u, 0x10EBD0u, 0x10EBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EBD8u;
label_10ebd8:
    // 0x10ebd8: 0x8e220154  lw          $v0, 0x154($s1)
    ctx->pc = 0x10ebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
label_10ebdc:
    // 0x10ebdc: 0x3c100054  lui         $s0, 0x54
    ctx->pc = 0x10ebdcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)84 << 16));
    // 0x10ebe0: 0x26106e50  addiu       $s0, $s0, 0x6E50
    ctx->pc = 0x10ebe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28240));
    // 0x10ebe4: 0xc043aac  jal         func_10EAB0
    ctx->pc = 0x10EBE4u;
    SET_GPR_U32(ctx, 31, 0x10EBECu);
    ctx->pc = 0x10EBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EBE4u;
    // 0x10ebe8: 0x90440011  lbu         $a0, 0x11($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EAB0u, 0x10EBE4u, 0x10EBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EBECu;
label_10ebec:
    // 0x10ebec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10ebecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ebf0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10ebf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ebf4: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x10EBF4u;
    SET_GPR_U32(ctx, 31, 0x10EBFCu);
    ctx->pc = 0x10EBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EBF4u;
    // 0x10ebf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x10EBF4u, 0x10EBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EBFCu;
label_10ebfc:
    // 0x10ebfc: 0x8e250154  lw          $a1, 0x154($s1)
    ctx->pc = 0x10ebfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x10ec00: 0xc0439e6  jal         func_10E798
    ctx->pc = 0x10EC00u;
    SET_GPR_U32(ctx, 31, 0x10EC08u);
    ctx->pc = 0x10EC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EC00u;
    // 0x10ec04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E798u, 0x10EC00u, 0x10EC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EC08u;
label_10ec08:
    // 0x10ec08: 0x8e230158  lw          $v1, 0x158($s1)
    ctx->pc = 0x10ec08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x10ec0c: 0xc043aac  jal         func_10EAB0
    ctx->pc = 0x10EC0Cu;
    SET_GPR_U32(ctx, 31, 0x10EC14u);
    ctx->pc = 0x10EC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EC0Cu;
    // 0x10ec10: 0x90640011  lbu         $a0, 0x11($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EAB0u, 0x10EC0Cu, 0x10EC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EC14u;
label_10ec14:
    // 0x10ec14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10ec14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ec18: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10ec18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ec1c: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x10EC1Cu;
    SET_GPR_U32(ctx, 31, 0x10EC24u);
    ctx->pc = 0x10EC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EC1Cu;
    // 0x10ec20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x10EC1Cu, 0x10EC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EC24u;
label_10ec24:
    // 0x10ec24: 0x8e250158  lw          $a1, 0x158($s1)
    ctx->pc = 0x10ec24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x10ec28: 0xc0439e6  jal         func_10E798
    ctx->pc = 0x10EC28u;
    SET_GPR_U32(ctx, 31, 0x10EC30u);
    ctx->pc = 0x10EC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EC28u;
    // 0x10ec2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E798u, 0x10EC28u, 0x10EC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EC30u;
label_10ec30:
    // 0x10ec30: 0x8e25015c  lw          $a1, 0x15C($s1)
    ctx->pc = 0x10ec30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 348)));
    // 0x10ec34: 0xc0439e6  jal         func_10E798
    ctx->pc = 0x10EC34u;
    SET_GPR_U32(ctx, 31, 0x10EC3Cu);
    ctx->pc = 0x10EC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EC34u;
    // 0x10ec38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E798u, 0x10EC34u, 0x10EC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EC3Cu;
label_10ec3c:
    // 0x10ec3c: 0x8e230154  lw          $v1, 0x154($s1)
    ctx->pc = 0x10ec3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x10ec40: 0x90630011  lbu         $v1, 0x11($v1)
    ctx->pc = 0x10ec40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 17)));
    // 0x10ec44: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10EC44u;
    {
        const bool branch_taken_0x10ec44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC44u;
        // 0x10ec48: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec44) {
            ctx->pc = 0x10EC54u;
            goto label_10ec54;
        }
    }
    ctx->pc = 0x10EC4Cu;
    // 0x10ec4c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10EC4Cu;
    {
        const bool branch_taken_0x10ec4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10EC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC4Cu;
        // 0x10ec50: 0x8e43b734  lw          $v1, -0x48CC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec4c) {
            ctx->pc = 0x10EC6Cu;
            goto label_10ec6c;
        }
    }
    ctx->pc = 0x10EC54u;
label_10ec54:
    // 0x10ec54: 0x8e220158  lw          $v0, 0x158($s1)
    ctx->pc = 0x10ec54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x10ec58: 0x90430011  lbu         $v1, 0x11($v0)
    ctx->pc = 0x10ec58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
    // 0x10ec5c: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x10EC5Cu;
    {
        const bool branch_taken_0x10ec5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC5Cu;
        // 0x10ec60: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec5c) {
            ctx->pc = 0x10ECF8u;
            goto label_10ecf8;
        }
    }
    ctx->pc = 0x10EC64u;
    // 0x10ec64: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x10EC64u;
    {
        const bool branch_taken_0x10ec64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10EC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC64u;
        // 0x10ec68: 0x8e43b734  lw          $v1, -0x48CC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec64) {
            ctx->pc = 0x10ECF8u;
            goto label_10ecf8;
        }
    }
    ctx->pc = 0x10EC6Cu;
label_10ec6c:
    // 0x10ec6c: 0x26330038  addiu       $s3, $s1, 0x38
    ctx->pc = 0x10ec6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x10ec70: 0x26340044  addiu       $s4, $s1, 0x44
    ctx->pc = 0x10ec70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x10ec74: 0x2630002c  addiu       $s0, $s1, 0x2C
    ctx->pc = 0x10ec74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x10ec78: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x10ec78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x10ec7c: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x10ec7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10ec80: 0x244203e8  addiu       $v0, $v0, 0x3E8
    ctx->pc = 0x10ec80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
    // 0x10ec84: 0xaea2a8e0  sw          $v0, -0x5720($s5)
    ctx->pc = 0x10ec84u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294944992), GPR_U32(ctx, 2));
label_10ec88:
    // 0x10ec88: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x10ec88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10ec8c: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10EC8Cu;
    {
        const bool branch_taken_0x10ec8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ec8c) {
            ctx->pc = 0x10EC90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10EC8Cu;
            // 0x10ec90: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10ECA0u;
            goto label_10eca0;
        }
    }
    ctx->pc = 0x10EC94u;
    // 0x10ec94: 0xc043b64  jal         func_10ED90
    ctx->pc = 0x10EC94u;
    SET_GPR_U32(ctx, 31, 0x10EC9Cu);
    ctx->pc = 0x10EC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EC94u;
    // 0x10ec98: 0x2624000c  addiu       $a0, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ED90u, 0x10EC94u, 0x10EC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EC9Cu;
label_10ec9c:
    // 0x10ec9c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x10ec9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_10eca0:
    // 0x10eca0: 0x641fff9  bgez        $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x10ECA0u;
    {
        const bool branch_taken_0x10eca0 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x10ECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ECA0u;
        // 0x10eca4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eca0) {
            ctx->pc = 0x10EC88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ec88;
        }
    }
    ctx->pc = 0x10ECA8u;
    // 0x10eca8: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x10eca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ecac: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x10ecacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10ecb0:
    // 0x10ecb0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x10ecb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10ecb4: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10ECB4u;
    {
        const bool branch_taken_0x10ecb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ecb4) {
            ctx->pc = 0x10ECB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10ECB4u;
            // 0x10ecb8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10ECC8u;
            goto label_10ecc8;
        }
    }
    ctx->pc = 0x10ECBCu;
    // 0x10ecbc: 0xc043b64  jal         func_10ED90
    ctx->pc = 0x10ECBCu;
    SET_GPR_U32(ctx, 31, 0x10ECC4u);
    ctx->pc = 0x10ECC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ECBCu;
    // 0x10ecc0: 0x2624000c  addiu       $a0, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ED90u, 0x10ECBCu, 0x10ECC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ECC4u;
label_10ecc4:
    // 0x10ecc4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x10ecc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_10ecc8:
    // 0x10ecc8: 0x641fff9  bgez        $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x10ECC8u;
    {
        const bool branch_taken_0x10ecc8 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x10ECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ECC8u;
        // 0x10eccc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ecc8) {
            ctx->pc = 0x10ECB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ecb0;
        }
    }
    ctx->pc = 0x10ECD0u;
    // 0x10ecd0: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x10ecd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ecd4: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x10ecd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10ecd8:
    // 0x10ecd8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x10ecd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10ecdc: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10ECDCu;
    {
        const bool branch_taken_0x10ecdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ecdc) {
            ctx->pc = 0x10ECE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10ECDCu;
            // 0x10ece0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10ECF0u;
            goto label_10ecf0;
        }
    }
    ctx->pc = 0x10ECE4u;
    // 0x10ece4: 0xc043b64  jal         func_10ED90
    ctx->pc = 0x10ECE4u;
    SET_GPR_U32(ctx, 31, 0x10ECECu);
    ctx->pc = 0x10ECE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ECE4u;
    // 0x10ece8: 0x2624000c  addiu       $a0, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ED90u, 0x10ECE4u, 0x10ECECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ECECu;
label_10ecec:
    // 0x10ecec: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x10ececu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_10ecf0:
    // 0x10ecf0: 0x641fff9  bgez        $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x10ECF0u;
    {
        const bool branch_taken_0x10ecf0 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x10ECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ECF0u;
        // 0x10ecf4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ecf0) {
            ctx->pc = 0x10ECD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ecd8;
        }
    }
    ctx->pc = 0x10ECF8u;
label_10ecf8:
    // 0x10ecf8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x10ecf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10ecfc: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x10ecfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10ed00: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x10ed00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10ed04: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x10ed04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10ed08: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x10ed08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10ed0c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x10ed0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10ed10: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10ed10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10ed14: 0x3e00008  jr          $ra
    ctx->pc = 0x10ED14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10ED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED14u;
        // 0x10ed18: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10ED14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10ED1Cu;
    // 0x10ed1c: 0x0  nop
    ctx->pc = 0x10ed1cu;
    // NOP
    ctx->pc = 0x10ed20u;
}
