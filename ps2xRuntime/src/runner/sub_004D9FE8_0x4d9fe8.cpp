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

// Function: sub_004D9FE8
// Address: 0x4d9fe8 - 0x4da0ec
void sub_004D9FE8_0x4d9fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D9FE8_0x4d9fe8");
#endif

    switch (ctx->pc) {
        case 0x4d9fe8u: goto label_4d9fe8;
        case 0x4d9fecu: goto label_4d9fec;
        case 0x4d9ff0u: goto label_4d9ff0;
        case 0x4d9ff4u: goto label_4d9ff4;
        case 0x4d9ff8u: goto label_4d9ff8;
        case 0x4d9ffcu: goto label_4d9ffc;
        case 0x4da000u: goto label_4da000;
        case 0x4da004u: goto label_4da004;
        case 0x4da008u: goto label_4da008;
        case 0x4da00cu: goto label_4da00c;
        case 0x4da010u: goto label_4da010;
        case 0x4da014u: goto label_4da014;
        case 0x4da018u: goto label_4da018;
        case 0x4da01cu: goto label_4da01c;
        case 0x4da020u: goto label_4da020;
        case 0x4da024u: goto label_4da024;
        case 0x4da028u: goto label_4da028;
        case 0x4da02cu: goto label_4da02c;
        case 0x4da030u: goto label_4da030;
        case 0x4da034u: goto label_4da034;
        case 0x4da038u: goto label_4da038;
        case 0x4da03cu: goto label_4da03c;
        case 0x4da040u: goto label_4da040;
        case 0x4da044u: goto label_4da044;
        case 0x4da048u: goto label_4da048;
        case 0x4da04cu: goto label_4da04c;
        case 0x4da050u: goto label_4da050;
        case 0x4da054u: goto label_4da054;
        case 0x4da058u: goto label_4da058;
        case 0x4da05cu: goto label_4da05c;
        case 0x4da060u: goto label_4da060;
        case 0x4da064u: goto label_4da064;
        case 0x4da068u: goto label_4da068;
        case 0x4da06cu: goto label_4da06c;
        case 0x4da070u: goto label_4da070;
        case 0x4da074u: goto label_4da074;
        case 0x4da078u: goto label_4da078;
        case 0x4da07cu: goto label_4da07c;
        case 0x4da080u: goto label_4da080;
        case 0x4da084u: goto label_4da084;
        case 0x4da088u: goto label_4da088;
        case 0x4da08cu: goto label_4da08c;
        case 0x4da090u: goto label_4da090;
        case 0x4da094u: goto label_4da094;
        case 0x4da098u: goto label_4da098;
        case 0x4da09cu: goto label_4da09c;
        case 0x4da0a0u: goto label_4da0a0;
        case 0x4da0a4u: goto label_4da0a4;
        case 0x4da0a8u: goto label_4da0a8;
        case 0x4da0acu: goto label_4da0ac;
        case 0x4da0b0u: goto label_4da0b0;
        case 0x4da0b4u: goto label_4da0b4;
        case 0x4da0b8u: goto label_4da0b8;
        case 0x4da0bcu: goto label_4da0bc;
        case 0x4da0c0u: goto label_4da0c0;
        case 0x4da0c4u: goto label_4da0c4;
        case 0x4da0c8u: goto label_4da0c8;
        case 0x4da0ccu: goto label_4da0cc;
        case 0x4da0d0u: goto label_4da0d0;
        case 0x4da0d4u: goto label_4da0d4;
        case 0x4da0d8u: goto label_4da0d8;
        case 0x4da0dcu: goto label_4da0dc;
        case 0x4da0e0u: goto label_4da0e0;
        case 0x4da0e4u: goto label_4da0e4;
        case 0x4da0e8u: goto label_4da0e8;
        default: break;
    }

    ctx->pc = 0x4d9fe8u;

label_4d9fe8:
    // 0x4d9fe8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4d9fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4d9fec:
    // 0x4d9fec: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x4d9fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_4d9ff0:
    // 0x4d9ff0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x4d9ff0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d9ff4:
    // 0x4d9ff4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4d9ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4d9ff8:
    // 0x4d9ff8: 0x84880b  movn        $s1, $a0, $a0
    ctx->pc = 0x4d9ff8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
label_4d9ffc:
    // 0x4d9ffc: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x4d9ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_4da000:
    // 0x4da000: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x4da000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_4da004:
    // 0x4da004: 0xc10ced8  jal         func_433B60
label_4da008:
    if (ctx->pc == 0x4DA008u) {
        ctx->pc = 0x4DA008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA004u;
        // 0x4da008: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA00Cu;
        goto label_4da00c;
    }
    ctx->pc = 0x4DA004u;
    SET_GPR_U32(ctx, 31, 0x4DA00Cu);
    ctx->pc = 0x4DA008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DA004u;
    // 0x4da008: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433B60u, 0x4DA004u, 0x4DA00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DA00Cu;
label_4da00c:
    // 0x4da00c: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_4da010:
    if (ctx->pc == 0x4DA010u) {
        ctx->pc = 0x4DA010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA00Cu;
        // 0x4da010: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA014u;
        goto label_4da014;
    }
    ctx->pc = 0x4DA00Cu;
    {
        const bool branch_taken_0x4da00c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DA010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA00Cu;
        // 0x4da010: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4da00c) {
            ctx->pc = 0x4DA0FCu;
            return;
        }
    }
    ctx->pc = 0x4DA014u;
label_4da014:
    // 0x4da014: 0x3c100053  lui         $s0, 0x53
    ctx->pc = 0x4da014u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)83 << 16));
label_4da018:
    // 0x4da018: 0x8e023f68  lw          $v0, 0x3F68($s0)
    ctx->pc = 0x4da018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16232)));
label_4da01c:
    // 0x4da01c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_4da020:
    if (ctx->pc == 0x4DA020u) {
        ctx->pc = 0x4DA020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA01Cu;
        // 0x4da020: 0x3c120059  lui         $s2, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA024u;
        goto label_4da024;
    }
    ctx->pc = 0x4DA01Cu;
    {
        const bool branch_taken_0x4da01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DA020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA01Cu;
        // 0x4da020: 0x3c120059  lui         $s2, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4da01c) {
            ctx->pc = 0x4DA080u;
            goto label_4da080;
        }
    }
    ctx->pc = 0x4DA024u;
label_4da024:
    // 0x4da024: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4da024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_4da028:
    // 0x4da028: 0x24516458  addiu       $s1, $v0, 0x6458
    ctx->pc = 0x4da028u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 25688));
label_4da02c:
    // 0x4da02c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4da02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4da030:
    // 0x4da030: 0xc10b652  jal         func_42D948
label_4da034:
    if (ctx->pc == 0x4DA034u) {
        ctx->pc = 0x4DA034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA030u;
        // 0x4da034: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA038u;
        goto label_4da038;
    }
    ctx->pc = 0x4DA030u;
    SET_GPR_U32(ctx, 31, 0x4DA038u);
    ctx->pc = 0x4DA034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DA030u;
    // 0x4da034: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42D948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D948u, 0x4DA030u, 0x4DA038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DA038u;
label_4da038:
    // 0x4da038: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4da038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4da03c:
    // 0x4da03c: 0x10000003  b           . + 4 + (0x3 << 2)
label_4da040:
    if (ctx->pc == 0x4DA040u) {
        ctx->pc = 0x4DA040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA03Cu;
        // 0x4da040: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA044u;
        goto label_4da044;
    }
    ctx->pc = 0x4DA03Cu;
    {
        const bool branch_taken_0x4da03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DA040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA03Cu;
        // 0x4da040: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4da03c) {
            ctx->pc = 0x4DA04Cu;
            goto label_4da04c;
        }
    }
    ctx->pc = 0x4DA044u;
label_4da044:
    // 0x4da044: 0xc10b510  jal         func_42D440
label_4da048:
    if (ctx->pc == 0x4DA048u) {
        ctx->pc = 0x4DA04Cu;
        goto label_4da04c;
    }
    ctx->pc = 0x4DA044u;
    SET_GPR_U32(ctx, 31, 0x4DA04Cu);
    ctx->pc = 0x42D440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D440u, 0x4DA044u, 0x4DA04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DA04Cu;
label_4da04c:
    // 0x4da04c: 0x2642c168  addiu       $v0, $s2, -0x3E98
    ctx->pc = 0x4da04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294951272));
label_4da050:
    // 0x4da050: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4da050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4da054:
    // 0x4da054: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4da054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4da058:
    // 0x4da058: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4da058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4da05c:
    // 0x4da05c: 0x40f809  jalr        $v0
label_4da060:
    if (ctx->pc == 0x4DA060u) {
        ctx->pc = 0x4DA064u;
        goto label_4da064;
    }
    ctx->pc = 0x4DA05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4DA064u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DA05Cu, 0x4DA064u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DA064u;
label_4da064:
    // 0x4da064: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x4da064u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_4da068:
    // 0x4da068: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4da068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4da06c:
    // 0x4da06c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4da06cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4da070:
    // 0x4da070: 0xc10b680  jal         func_42DA00
label_4da074:
    if (ctx->pc == 0x4DA074u) {
        ctx->pc = 0x4DA074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA070u;
        // 0x4da074: 0x24c69fb8  addiu       $a2, $a2, -0x6048 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA078u;
        goto label_4da078;
    }
    ctx->pc = 0x4DA070u;
    SET_GPR_U32(ctx, 31, 0x4DA078u);
    ctx->pc = 0x4DA074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DA070u;
    // 0x4da074: 0x24c69fb8  addiu       $a2, $a2, -0x6048 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42DA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42DA00u, 0x4DA070u, 0x4DA078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DA078u;
label_4da078:
    // 0x4da078: 0xc10b510  jal         func_42D440
label_4da07c:
    if (ctx->pc == 0x4DA07Cu) {
        ctx->pc = 0x4DA080u;
        goto label_4da080;
    }
    ctx->pc = 0x4DA078u;
    SET_GPR_U32(ctx, 31, 0x4DA080u);
    ctx->pc = 0x42D440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D440u, 0x4DA078u, 0x4DA080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DA080u;
label_4da080:
    // 0x4da080: 0x40f809  jalr        $v0
label_4da084:
    if (ctx->pc == 0x4DA084u) {
        ctx->pc = 0x4DA088u;
        goto label_4da088;
    }
    ctx->pc = 0x4DA080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4DA088u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DA080u, 0x4DA088u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DA088u;
label_4da088:
    // 0x4da088: 0xc10ced8  jal         func_433B60
label_4da08c:
    if (ctx->pc == 0x4DA08Cu) {
        ctx->pc = 0x4DA08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA088u;
        // 0x4da08c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA090u;
        goto label_4da090;
    }
    ctx->pc = 0x4DA088u;
    SET_GPR_U32(ctx, 31, 0x4DA090u);
    ctx->pc = 0x4DA08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DA088u;
    // 0x4da08c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433B60u, 0x4DA088u, 0x4DA090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DA090u;
label_4da090:
    // 0x4da090: 0x1040ffe1  beqz        $v0, . + 4 + (-0x1F << 2)
label_4da094:
    if (ctx->pc == 0x4DA094u) {
        ctx->pc = 0x4DA094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA090u;
        // 0x4da094: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA098u;
        goto label_4da098;
    }
    ctx->pc = 0x4DA090u;
    {
        const bool branch_taken_0x4da090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DA094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA090u;
        // 0x4da094: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4da090) {
            ctx->pc = 0x4DA018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4da018;
        }
    }
    ctx->pc = 0x4DA098u;
label_4da098:
    // 0x4da098: 0x10000019  b           . + 4 + (0x19 << 2)
label_4da09c:
    if (ctx->pc == 0x4DA09Cu) {
        ctx->pc = 0x4DA09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA098u;
        // 0x4da09c: 0xdfb20040  ld          $s2, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA0A0u;
        goto label_4da0a0;
    }
    ctx->pc = 0x4DA098u;
    {
        const bool branch_taken_0x4da098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DA09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA098u;
        // 0x4da09c: 0xdfb20040  ld          $s2, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4da098) {
            ctx->pc = 0x4DA100u;
            return;
        }
    }
    ctx->pc = 0x4DA0A0u;
label_4da0a0:
    // 0x4da0a0: 0xc10b510  jal         func_42D440
label_4da0a4:
    if (ctx->pc == 0x4DA0A4u) {
        ctx->pc = 0x4DA0A8u;
        goto label_4da0a8;
    }
    ctx->pc = 0x4DA0A0u;
    SET_GPR_U32(ctx, 31, 0x4DA0A8u);
    ctx->pc = 0x42D440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D440u, 0x4DA0A0u, 0x4DA0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DA0A8u;
label_4da0a8:
    // 0x4da0a8: 0x2642c168  addiu       $v0, $s2, -0x3E98
    ctx->pc = 0x4da0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294951272));
label_4da0ac:
    // 0x4da0ac: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
label_4da0b0:
    if (ctx->pc == 0x4DA0B0u) {
        ctx->pc = 0x4DA0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA0ACu;
        // 0x4da0b0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA0B4u;
        goto label_4da0b4;
    }
    ctx->pc = 0x4DA0ACu;
    {
        const bool branch_taken_0x4da0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DA0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA0ACu;
        // 0x4da0b0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4da0ac) {
            ctx->pc = 0x4DA044u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4da044;
        }
    }
    ctx->pc = 0x4DA0B4u;
label_4da0b4:
    // 0x4da0b4: 0xc10b644  jal         func_42D910
label_4da0b8:
    if (ctx->pc == 0x4DA0B8u) {
        ctx->pc = 0x4DA0BCu;
        goto label_4da0bc;
    }
    ctx->pc = 0x4DA0B4u;
    SET_GPR_U32(ctx, 31, 0x4DA0BCu);
    ctx->pc = 0x42D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D910u, 0x4DA0B4u, 0x4DA0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DA0BCu;
label_4da0bc:
    // 0x4da0bc: 0xc1367da  jal         func_4D9F68
label_4da0c0:
    if (ctx->pc == 0x4DA0C0u) {
        ctx->pc = 0x4DA0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA0BCu;
        // 0x4da0c0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA0C4u;
        goto label_4da0c4;
    }
    ctx->pc = 0x4DA0BCu;
    SET_GPR_U32(ctx, 31, 0x4DA0C4u);
    ctx->pc = 0x4DA0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DA0BCu;
    // 0x4da0c0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D9F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D9F68u, 0x4DA0BCu, 0x4DA0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DA0C4u;
label_4da0c4:
    // 0x4da0c4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x4da0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_4da0c8:
    // 0x4da0c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4da0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4da0cc:
    // 0x4da0cc: 0xc10b6e2  jal         func_42DB88
label_4da0d0:
    if (ctx->pc == 0x4DA0D0u) {
        ctx->pc = 0x4DA0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA0CCu;
        // 0x4da0d0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA0D4u;
        goto label_4da0d4;
    }
    ctx->pc = 0x4DA0CCu;
    SET_GPR_U32(ctx, 31, 0x4DA0D4u);
    ctx->pc = 0x4DA0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DA0CCu;
    // 0x4da0d0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42DB88u, 0x4DA0CCu, 0x4DA0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DA0D4u;
label_4da0d4:
    // 0x4da0d4: 0xc10b510  jal         func_42D440
label_4da0d8:
    if (ctx->pc == 0x4DA0D8u) {
        ctx->pc = 0x4DA0DCu;
        goto label_4da0dc;
    }
    ctx->pc = 0x4DA0D4u;
    SET_GPR_U32(ctx, 31, 0x4DA0DCu);
    ctx->pc = 0x42D440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D440u, 0x4DA0D4u, 0x4DA0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DA0DCu;
label_4da0dc:
    // 0x4da0dc: 0xc10b6a4  jal         func_42DA90
label_4da0e0:
    if (ctx->pc == 0x4DA0E0u) {
        ctx->pc = 0x4DA0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA0DCu;
        // 0x4da0e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA0E4u;
        goto label_4da0e4;
    }
    ctx->pc = 0x4DA0DCu;
    SET_GPR_U32(ctx, 31, 0x4DA0E4u);
    ctx->pc = 0x4DA0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DA0DCu;
    // 0x4da0e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42DA90u, 0x4DA0DCu, 0x4DA0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DA0E4u;
label_4da0e4:
    // 0x4da0e4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
label_4da0e8:
    if (ctx->pc == 0x4DA0E8u) {
        ctx->pc = 0x4DA0ECu;
        goto label_fallthrough_0x4da0e4;
    }
    ctx->pc = 0x4DA0E4u;
    {
        const bool branch_taken_0x4da0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4da0e4) {
            ctx->pc = 0x4DA0D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4da0d4;
        }
    }
label_fallthrough_0x4da0e4:
    ctx->pc = 0x4DA0ECu;
}
