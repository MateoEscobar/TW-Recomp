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

// Function: sub_00195060
// Address: 0x195060 - 0x195168
void sub_00195060_0x195060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195060_0x195060");
#endif

    switch (ctx->pc) {
        case 0x195060u: goto label_195060;
        case 0x195064u: goto label_195064;
        case 0x195068u: goto label_195068;
        case 0x19506cu: goto label_19506c;
        case 0x195070u: goto label_195070;
        case 0x195074u: goto label_195074;
        case 0x195078u: goto label_195078;
        case 0x19507cu: goto label_19507c;
        case 0x195080u: goto label_195080;
        case 0x195084u: goto label_195084;
        case 0x195088u: goto label_195088;
        case 0x19508cu: goto label_19508c;
        case 0x195090u: goto label_195090;
        case 0x195094u: goto label_195094;
        case 0x195098u: goto label_195098;
        case 0x19509cu: goto label_19509c;
        case 0x1950a0u: goto label_1950a0;
        case 0x1950a4u: goto label_1950a4;
        case 0x1950a8u: goto label_1950a8;
        case 0x1950acu: goto label_1950ac;
        case 0x1950b0u: goto label_1950b0;
        case 0x1950b4u: goto label_1950b4;
        case 0x1950b8u: goto label_1950b8;
        case 0x1950bcu: goto label_1950bc;
        case 0x1950c0u: goto label_1950c0;
        case 0x1950c4u: goto label_1950c4;
        case 0x1950c8u: goto label_1950c8;
        case 0x1950ccu: goto label_1950cc;
        case 0x1950d0u: goto label_1950d0;
        case 0x1950d4u: goto label_1950d4;
        case 0x1950d8u: goto label_1950d8;
        case 0x1950dcu: goto label_1950dc;
        case 0x1950e0u: goto label_1950e0;
        case 0x1950e4u: goto label_1950e4;
        case 0x1950e8u: goto label_1950e8;
        case 0x1950ecu: goto label_1950ec;
        case 0x1950f0u: goto label_1950f0;
        case 0x1950f4u: goto label_1950f4;
        case 0x1950f8u: goto label_1950f8;
        case 0x1950fcu: goto label_1950fc;
        case 0x195100u: goto label_195100;
        case 0x195104u: goto label_195104;
        case 0x195108u: goto label_195108;
        case 0x19510cu: goto label_19510c;
        case 0x195110u: goto label_195110;
        case 0x195114u: goto label_195114;
        case 0x195118u: goto label_195118;
        case 0x19511cu: goto label_19511c;
        case 0x195120u: goto label_195120;
        case 0x195124u: goto label_195124;
        case 0x195128u: goto label_195128;
        case 0x19512cu: goto label_19512c;
        case 0x195130u: goto label_195130;
        case 0x195134u: goto label_195134;
        case 0x195138u: goto label_195138;
        case 0x19513cu: goto label_19513c;
        case 0x195140u: goto label_195140;
        case 0x195144u: goto label_195144;
        case 0x195148u: goto label_195148;
        case 0x19514cu: goto label_19514c;
        case 0x195150u: goto label_195150;
        case 0x195154u: goto label_195154;
        case 0x195158u: goto label_195158;
        case 0x19515cu: goto label_19515c;
        case 0x195160u: goto label_195160;
        case 0x195164u: goto label_195164;
        default: break;
    }

    ctx->pc = 0x195060u;

label_195060:
    // 0x195060: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x195060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_195064:
    // 0x195064: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x195064u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_195068:
    // 0x195068: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x195068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_19506c:
    // 0x19506c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x19506cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_195070:
    // 0x195070: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x195070u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_195074:
    // 0x195074: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x195074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_195078:
    // 0x195078: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x195078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_19507c:
    // 0x19507c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19507cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_195080:
    // 0x195080: 0xae250440  sw          $a1, 0x440($s1)
    ctx->pc = 0x195080u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1088), GPR_U32(ctx, 5));
label_195084:
    // 0x195084: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x195084u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_195088:
    // 0x195088: 0x93a30003  lbu         $v1, 0x3($sp)
    ctx->pc = 0x195088u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
label_19508c:
    // 0x19508c: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x19508cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_195090:
    // 0x195090: 0x93a50001  lbu         $a1, 0x1($sp)
    ctx->pc = 0x195090u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_195094:
    // 0x195094: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x195094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_195098:
    // 0x195098: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x195098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_19509c:
    // 0x19509c: 0x84e40060  lh          $a0, 0x60($a3)
    ctx->pc = 0x19509cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 96)));
label_1950a0:
    // 0x1950a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1950a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1950a4:
    // 0x1950a4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1950a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1950a8:
    // 0x1950a8: 0x93a60002  lbu         $a2, 0x2($sp)
    ctx->pc = 0x1950a8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_1950ac:
    // 0x1950ac: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1950acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_1950b0:
    // 0x1950b0: 0x8ce20064  lw          $v0, 0x64($a3)
    ctx->pc = 0x1950b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 100)));
label_1950b4:
    // 0x1950b4: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x1950b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_1950b8:
    // 0x1950b8: 0x669025  or          $s2, $v1, $a2
    ctx->pc = 0x1950b8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_1950bc:
    // 0x1950bc: 0x40f809  jalr        $v0
label_1950c0:
    if (ctx->pc == 0x1950C0u) {
        ctx->pc = 0x1950C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1950BCu;
        // 0x1950c0: 0xafa80004  sw          $t0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1950C4u;
        goto label_1950c4;
    }
    ctx->pc = 0x1950BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1950C4u);
        ctx->pc = 0x1950C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1950BCu;
        // 0x1950c0: 0xafa80004  sw          $t0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1950BCu, 0x1950C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1950C4u;
label_1950c4:
    // 0x1950c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1950c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1950c8:
    // 0x1950c8: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x1950c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_1950cc:
    // 0x1950cc: 0x8c650064  lw          $a1, 0x64($v1)
    ctx->pc = 0x1950ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_1950d0:
    // 0x1950d0: 0xa0f809  jalr        $a1
label_1950d4:
    if (ctx->pc == 0x1950D4u) {
        ctx->pc = 0x1950D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1950D0u;
        // 0x1950d4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1950D8u;
        goto label_1950d8;
    }
    ctx->pc = 0x1950D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1950D8u);
        ctx->pc = 0x1950D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1950D0u;
        // 0x1950d4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1950D0u, 0x1950D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1950D8u;
label_1950d8:
    // 0x1950d8: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_1950dc:
    if (ctx->pc == 0x1950DCu) {
        ctx->pc = 0x1950DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1950D8u;
        // 0x1950dc: 0x3c100071  lui         $s0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1950E0u;
        goto label_1950e0;
    }
    ctx->pc = 0x1950D8u;
    {
        const bool branch_taken_0x1950d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1950DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1950D8u;
        // 0x1950dc: 0x3c100071  lui         $s0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1950d8) {
            ctx->pc = 0x19514Cu;
            goto label_19514c;
        }
    }
    ctx->pc = 0x1950E0u;
label_1950e0:
    // 0x1950e0: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x1950e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_1950e4:
    // 0x1950e4: 0x2610ad28  addiu       $s0, $s0, -0x52D8
    ctx->pc = 0x1950e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946088));
label_1950e8:
    // 0x1950e8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1950e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1950ec:
    // 0x1950ec: 0x40f809  jalr        $v0
label_1950f0:
    if (ctx->pc == 0x1950F0u) {
        ctx->pc = 0x1950F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1950ECu;
        // 0x1950f0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1950F4u;
        goto label_1950f4;
    }
    ctx->pc = 0x1950ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1950F4u);
        ctx->pc = 0x1950F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1950ECu;
        // 0x1950f0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1950ECu, 0x1950F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1950F4u;
label_1950f4:
    // 0x1950f4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1950f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1950f8:
    // 0x1950f8: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x1950f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
label_1950fc:
    // 0x1950fc: 0x40f809  jalr        $v0
label_195100:
    if (ctx->pc == 0x195100u) {
        ctx->pc = 0x195100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1950FCu;
        // 0x195100: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195104u;
        goto label_195104;
    }
    ctx->pc = 0x1950FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195104u);
        ctx->pc = 0x195100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1950FCu;
        // 0x195100: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1950FCu, 0x195104u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195104u;
label_195104:
    // 0x195104: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x195104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_195108:
    // 0x195108: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x195108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19510c:
    // 0x19510c: 0x40f809  jalr        $v0
label_195110:
    if (ctx->pc == 0x195110u) {
        ctx->pc = 0x195110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19510Cu;
        // 0x195110: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195114u;
        goto label_195114;
    }
    ctx->pc = 0x19510Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195114u);
        ctx->pc = 0x195110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19510Cu;
        // 0x195110: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19510Cu, 0x195114u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195114u;
label_195114:
    // 0x195114: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x195114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_195118:
    // 0x195118: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x195118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_19511c:
    // 0x19511c: 0x40f809  jalr        $v0
label_195120:
    if (ctx->pc == 0x195120u) {
        ctx->pc = 0x195120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19511Cu;
        // 0x195120: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195124u;
        goto label_195124;
    }
    ctx->pc = 0x19511Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195124u);
        ctx->pc = 0x195120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19511Cu;
        // 0x195120: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19511Cu, 0x195124u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195124u;
label_195124:
    // 0x195124: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x195124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_195128:
    // 0x195128: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x195128u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_19512c:
    // 0x19512c: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x19512cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_195130:
    // 0x195130: 0x40f809  jalr        $v0
label_195134:
    if (ctx->pc == 0x195134u) {
        ctx->pc = 0x195134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195130u;
        // 0x195134: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195138u;
        goto label_195138;
    }
    ctx->pc = 0x195130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195138u);
        ctx->pc = 0x195134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195130u;
        // 0x195134: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195130u, 0x195138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195138u;
label_195138:
    // 0x195138: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x195138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19513c:
    // 0x19513c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x19513cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_195140:
    // 0x195140: 0x8c65006c  lw          $a1, 0x6C($v1)
    ctx->pc = 0x195140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_195144:
    // 0x195144: 0xa0f809  jalr        $a1
label_195148:
    if (ctx->pc == 0x195148u) {
        ctx->pc = 0x195148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195144u;
        // 0x195148: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19514Cu;
        goto label_19514c;
    }
    ctx->pc = 0x195144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x19514Cu);
        ctx->pc = 0x195148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195144u;
        // 0x195148: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195144u, 0x19514Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19514Cu;
label_19514c:
    // 0x19514c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x19514cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_195150:
    // 0x195150: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x195150u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_195154:
    // 0x195154: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x195154u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_195158:
    // 0x195158: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x195158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19515c:
    // 0x19515c: 0x3e00008  jr          $ra
label_195160:
    if (ctx->pc == 0x195160u) {
        ctx->pc = 0x195160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19515Cu;
        // 0x195160: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195164u;
        goto label_195164;
    }
    ctx->pc = 0x19515Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19515Cu;
        // 0x195160: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19515Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195164u;
label_195164:
    // 0x195164: 0x0  nop
    ctx->pc = 0x195164u;
    // NOP
    ctx->pc = 0x195168u;
}
