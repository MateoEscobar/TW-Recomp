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

// Function: sub_0022FF88
// Address: 0x22ff88 - 0x2300c0
void sub_0022FF88_0x22ff88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FF88_0x22ff88");
#endif

    switch (ctx->pc) {
        case 0x22ffa0u: goto label_22ffa0;
        case 0x22ffb4u: goto label_22ffb4;
        case 0x230014u: goto label_230014;
        case 0x230024u: goto label_230024;
        case 0x230030u: goto label_230030;
        case 0x230038u: goto label_230038;
        case 0x230044u: goto label_230044;
        case 0x23004cu: goto label_23004c;
        case 0x23005cu: goto label_23005c;
        case 0x230078u: goto label_230078;
        case 0x230088u: goto label_230088;
        case 0x23009cu: goto label_23009c;
        case 0x2300acu: goto label_2300ac;
        default: break;
    }

    ctx->pc = 0x22ff88u;

    // 0x22ff88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22ff88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22ff8c: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x22ff8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x22ff90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22ff90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x22ff94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22ff94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22ff98: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x22FF98u;
    SET_GPR_U32(ctx, 31, 0x22FFA0u);
    ctx->pc = 0x22FF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FF98u;
    // 0x22ff9c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x22FF98u, 0x22FFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FFA0u;
label_22ffa0:
    // 0x22ffa0: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x22FFA0u;
    {
        const bool branch_taken_0x22ffa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ffa0) {
            ctx->pc = 0x22FFA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FFA0u;
            // 0x22ffa4: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2300A0u;
            goto label_2300a0;
        }
    }
    ctx->pc = 0x22FFA8u;
    // 0x22ffa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ffa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ffac: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x22FFACu;
    SET_GPR_U32(ctx, 31, 0x22FFB4u);
    ctx->pc = 0x22FFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FFACu;
    // 0x22ffb0: 0x3c050100  lui         $a1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x22FFACu, 0x22FFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FFB4u;
label_22ffb4:
    // 0x22ffb4: 0x5440003a  bnel        $v0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x22FFB4u;
    {
        const bool branch_taken_0x22ffb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ffb4) {
            ctx->pc = 0x22FFB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FFB4u;
            // 0x22ffb8: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2300A0u;
            goto label_2300a0;
        }
    }
    ctx->pc = 0x22FFBCu;
    // 0x22ffbc: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x22ffbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x22ffc0: 0x860301be  lh          $v1, 0x1BE($s0)
    ctx->pc = 0x22ffc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x22ffc4: 0x2444bf48  addiu       $a0, $v0, -0x40B8
    ctx->pc = 0x22ffc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950728));
    // 0x22ffc8: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x22ffc8u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x55BF4Au));
    // 0x22ffcc: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x22FFCCu;
    {
        const bool branch_taken_0x22ffcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22FFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FFCCu;
        // 0x22ffd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ffcc) {
            ctx->pc = 0x230004u;
            goto label_230004;
        }
    }
    ctx->pc = 0x22FFD4u;
    // 0x22ffd4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22ffd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22ffd8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22FFD8u;
    {
        const bool branch_taken_0x22ffd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22FFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FFD8u;
        // 0x22ffdc: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ffd8) {
            ctx->pc = 0x22FFF0u;
            goto label_22fff0;
        }
    }
    ctx->pc = 0x22FFE0u;
    // 0x22ffe0: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x22ffe0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22ffe4: 0x860201c0  lh          $v0, 0x1C0($s0)
    ctx->pc = 0x22ffe4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x22ffe8: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22FFE8u;
    {
        const bool branch_taken_0x22ffe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x22FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FFE8u;
        // 0x22ffec: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ffe8) {
            ctx->pc = 0x230000u;
            goto label_230000;
        }
    }
    ctx->pc = 0x22FFF0u;
label_22fff0:
    // 0x22fff0: 0x8e0301c0  lw          $v1, 0x1C0($s0)
    ctx->pc = 0x22fff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x22fff4: 0x24424770  addiu       $v0, $v0, 0x4770
    ctx->pc = 0x22fff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18288));
    // 0x22fff8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22FFF8u;
    {
        const bool branch_taken_0x22fff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22fff8) {
            ctx->pc = 0x230004u;
            goto label_230004;
        }
    }
    ctx->pc = 0x230000u;
label_230000:
    // 0x230000: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x230000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_230004:
    // 0x230004: 0x54a00026  bnel        $a1, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x230004u;
    {
        const bool branch_taken_0x230004 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x230004) {
            ctx->pc = 0x230008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230004u;
            // 0x230008: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2300A0u;
            goto label_2300a0;
        }
    }
    ctx->pc = 0x23000Cu;
    // 0x23000c: 0xc089000  jal         func_224000
    ctx->pc = 0x23000Cu;
    SET_GPR_U32(ctx, 31, 0x230014u);
    ctx->pc = 0x230010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23000Cu;
    // 0x230010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x23000Cu, 0x230014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230014u;
label_230014:
    // 0x230014: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x230014u;
    {
        const bool branch_taken_0x230014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x230014) {
            ctx->pc = 0x230018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230014u;
            // 0x230018: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2300A0u;
            goto label_2300a0;
        }
    }
    ctx->pc = 0x23001Cu;
    // 0x23001c: 0xc08cade  jal         func_232B78
    ctx->pc = 0x23001Cu;
    SET_GPR_U32(ctx, 31, 0x230024u);
    ctx->pc = 0x230020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23001Cu;
    // 0x230020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232B78u, 0x23001Cu, 0x230024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230024u;
label_230024:
    // 0x230024: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x230024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x230028: 0xc089988  jal         func_226620
    ctx->pc = 0x230028u;
    SET_GPR_U32(ctx, 31, 0x230030u);
    ctx->pc = 0x23002Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230028u;
    // 0x23002c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x230028u, 0x230030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230030u;
label_230030:
    // 0x230030: 0xc0a007a  jal         func_2801E8
    ctx->pc = 0x230030u;
    SET_GPR_U32(ctx, 31, 0x230038u);
    ctx->pc = 0x230034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230030u;
    // 0x230034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2801E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2801E8u, 0x230030u, 0x230038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230038u;
label_230038:
    // 0x230038: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23003c: 0xc089974  jal         func_2265D0
    ctx->pc = 0x23003Cu;
    SET_GPR_U32(ctx, 31, 0x230044u);
    ctx->pc = 0x230040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23003Cu;
    // 0x230040: 0x3c050020  lui         $a1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x23003Cu, 0x230044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230044u;
label_230044:
    // 0x230044: 0xc08a08a  jal         func_228228
    ctx->pc = 0x230044u;
    SET_GPR_U32(ctx, 31, 0x23004Cu);
    ctx->pc = 0x230048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230044u;
    // 0x230048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x230044u, 0x23004Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23004Cu;
label_23004c:
    // 0x23004c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23004Cu;
    {
        const bool branch_taken_0x23004c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23004Cu;
        // 0x230050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23004c) {
            ctx->pc = 0x23005Cu;
            goto label_23005c;
        }
    }
    ctx->pc = 0x230054u;
    // 0x230054: 0xc089974  jal         func_2265D0
    ctx->pc = 0x230054u;
    SET_GPR_U32(ctx, 31, 0x23005Cu);
    ctx->pc = 0x230058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230054u;
    // 0x230058: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x230054u, 0x23005Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23005Cu;
label_23005c:
    // 0x23005c: 0x3405f073  ori         $a1, $zero, 0xF073
    ctx->pc = 0x23005cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61555);
    // 0x230060: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x230060u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x230064: 0x34a5c3ef  ori         $a1, $a1, 0xC3EF
    ctx->pc = 0x230064u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)50159);
    // 0x230068: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x230068u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x23006c: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x23006cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
    // 0x230070: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x230070u;
    SET_GPR_U32(ctx, 31, 0x230078u);
    ctx->pc = 0x230074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230070u;
    // 0x230074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x230070u, 0x230078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230078u;
label_230078:
    // 0x230078: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x230078u;
    {
        const bool branch_taken_0x230078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x230078) {
            ctx->pc = 0x23007Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230078u;
            // 0x23007c: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2300A0u;
            goto label_2300a0;
        }
    }
    ctx->pc = 0x230080u;
    // 0x230080: 0xc095018  jal         func_254060
    ctx->pc = 0x230080u;
    SET_GPR_U32(ctx, 31, 0x230088u);
    ctx->pc = 0x230084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230080u;
    // 0x230084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x230080u, 0x230088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230088u;
label_230088:
    // 0x230088: 0x38420014  xori        $v0, $v0, 0x14
    ctx->pc = 0x230088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)20);
    // 0x23008c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23008Cu;
    {
        const bool branch_taken_0x23008c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23008Cu;
        // 0x230090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23008c) {
            ctx->pc = 0x23009Cu;
            goto label_23009c;
        }
    }
    ctx->pc = 0x230094u;
    // 0x230094: 0xc094fb4  jal         func_253ED0
    ctx->pc = 0x230094u;
    SET_GPR_U32(ctx, 31, 0x23009Cu);
    ctx->pc = 0x230098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230094u;
    // 0x230098: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253ED0u, 0x230094u, 0x23009Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23009Cu;
label_23009c:
    // 0x23009c: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x23009cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_2300a0:
    // 0x2300a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2300a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2300a4: 0xc08c07c  jal         func_2301F0
    ctx->pc = 0x2300A4u;
    SET_GPR_U32(ctx, 31, 0x2300ACu);
    ctx->pc = 0x2300A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2300A4u;
    // 0x2300a8: 0xac400114  sw          $zero, 0x114($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2301F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2301F0u, 0x2300A4u, 0x2300ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2300ACu;
label_2300ac:
    // 0x2300ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2300acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2300b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2300b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2300b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2300B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2300B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2300B4u;
        // 0x2300b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2300B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2300BCu;
    // 0x2300bc: 0x0  nop
    ctx->pc = 0x2300bcu;
    // NOP
    ctx->pc = 0x2300c0u;
}
