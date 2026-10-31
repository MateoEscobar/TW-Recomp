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

// Function: sub_00368FD8
// Address: 0x368fd8 - 0x369120
void sub_00368FD8_0x368fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368FD8_0x368fd8");
#endif

    switch (ctx->pc) {
        case 0x36900cu: goto label_36900c;
        case 0x369014u: goto label_369014;
        case 0x369028u: goto label_369028;
        case 0x369030u: goto label_369030;
        case 0x369044u: goto label_369044;
        case 0x36904cu: goto label_36904c;
        case 0x369058u: goto label_369058;
        case 0x369070u: goto label_369070;
        case 0x369078u: goto label_369078;
        case 0x36909cu: goto label_36909c;
        case 0x3690a8u: goto label_3690a8;
        case 0x3690bcu: goto label_3690bc;
        case 0x3690d4u: goto label_3690d4;
        case 0x3690e8u: goto label_3690e8;
        default: break;
    }

    ctx->pc = 0x368fd8u;

    // 0x368fd8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x368fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x368fdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x368fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x368fe0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x368fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x368fe4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x368fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x368fe8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x368fe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368fec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x368fecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368ff0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x368ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x368ff4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x368ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x368ff8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x368ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x368ffc: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x368ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x369000: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x369000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x369004: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369004u;
    SET_GPR_U32(ctx, 31, 0x36900Cu);
    ctx->pc = 0x369008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369004u;
    // 0x369008: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369004u, 0x36900Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36900Cu;
label_36900c:
    // 0x36900c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36900Cu;
    SET_GPR_U32(ctx, 31, 0x369014u);
    ctx->pc = 0x369010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36900Cu;
    // 0x369010: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36900Cu, 0x369014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369014u;
label_369014:
    // 0x369014: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369018: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x369018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36901c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36901cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369020: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369020u;
    SET_GPR_U32(ctx, 31, 0x369028u);
    ctx->pc = 0x369024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369020u;
    // 0x369024: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369020u, 0x369028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369028u;
label_369028:
    // 0x369028: 0xc10b108  jal         func_42C420
    ctx->pc = 0x369028u;
    SET_GPR_U32(ctx, 31, 0x369030u);
    ctx->pc = 0x36902Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369028u;
    // 0x36902c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x369028u, 0x369030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369030u;
label_369030:
    // 0x369030: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369034: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x369034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369038: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x369038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36903c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36903Cu;
    SET_GPR_U32(ctx, 31, 0x369044u);
    ctx->pc = 0x369040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36903Cu;
    // 0x369040: 0x305400ff  andi        $s4, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36903Cu, 0x369044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369044u;
label_369044:
    // 0x369044: 0xc10b108  jal         func_42C420
    ctx->pc = 0x369044u;
    SET_GPR_U32(ctx, 31, 0x36904Cu);
    ctx->pc = 0x369048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369044u;
    // 0x369048: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x369044u, 0x36904Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36904Cu;
label_36904c:
    // 0x36904c: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x36904cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x369050: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x369050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369054: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x369054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_369058:
    // 0x369058: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x369058u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36905c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36905cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369060: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x369060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x369064: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369068: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x369068u;
    SET_GPR_U32(ctx, 31, 0x369070u);
    ctx->pc = 0x36906Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369068u;
    // 0x36906c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x369068u, 0x369070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369070u;
label_369070:
    // 0x369070: 0xc10b108  jal         func_42C420
    ctx->pc = 0x369070u;
    SET_GPR_U32(ctx, 31, 0x369078u);
    ctx->pc = 0x369074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369070u;
    // 0x369074: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x369070u, 0x369078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369078u;
label_369078:
    // 0x369078: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x369078u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x36907c: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x36907cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x369080: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x369080u;
    {
        const bool branch_taken_0x369080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x369084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369080u;
        // 0x369084: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369080) {
            ctx->pc = 0x369058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369058;
        }
    }
    ctx->pc = 0x369088u;
    // 0x369088: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x369088u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36908c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x36908cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369090: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x369090u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369094: 0xc0637fe  jal         func_18DFF8
    ctx->pc = 0x369094u;
    SET_GPR_U32(ctx, 31, 0x36909Cu);
    ctx->pc = 0x369098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369094u;
    // 0x369098: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DFF8u, 0x369094u, 0x36909Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36909Cu;
label_36909c:
    // 0x36909c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36909cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3690a0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3690a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3690a4: 0x0  nop
    ctx->pc = 0x3690a4u;
    // NOP
label_3690a8:
    // 0x3690a8: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x3690a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3690ac: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3690acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3690b0: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x3690b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3690b4: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x3690B4u;
    SET_GPR_U32(ctx, 31, 0x3690BCu);
    ctx->pc = 0x3690B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3690B4u;
    // 0x3690b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x3690B4u, 0x3690BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3690BCu;
label_3690bc:
    // 0x3690bc: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3690BCu;
    {
        const bool branch_taken_0x3690bc = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3690C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3690BCu;
        // 0x3690c0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3690bc) {
            ctx->pc = 0x3690D8u;
            goto label_3690d8;
        }
    }
    ctx->pc = 0x3690C4u;
    // 0x3690c4: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x3690c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x3690c8: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3690c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3690cc: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x3690CCu;
    SET_GPR_U32(ctx, 31, 0x3690D4u);
    ctx->pc = 0x3690D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3690CCu;
    // 0x3690d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x3690CCu, 0x3690D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3690D4u;
label_3690d4:
    // 0x3690d4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3690d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3690d8:
    // 0x3690d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3690d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3690dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3690dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3690e0: 0xc102576  jal         func_4095D8
    ctx->pc = 0x3690E0u;
    SET_GPR_U32(ctx, 31, 0x3690E8u);
    ctx->pc = 0x3690E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3690E0u;
    // 0x3690e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x3690E0u, 0x3690E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3690E8u;
label_3690e8:
    // 0x3690e8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3690e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3690ec: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x3690ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3690f0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3690F0u;
    {
        const bool branch_taken_0x3690f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3690F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3690F0u;
        // 0x3690f4: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3690f0) {
            ctx->pc = 0x3690A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3690a8;
        }
    }
    ctx->pc = 0x3690F8u;
    // 0x3690f8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3690f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3690fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3690fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369100: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x369100u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x369104: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x369104u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x369108: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x369108u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36910c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x36910cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x369110: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x369110u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x369114: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x369114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x369118: 0x3e00008  jr          $ra
    ctx->pc = 0x369118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369118u;
        // 0x36911c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369120u;
}
