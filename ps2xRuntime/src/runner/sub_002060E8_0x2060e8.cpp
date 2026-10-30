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

// Function: sub_002060E8
// Address: 0x2060e8 - 0x2061c0
void sub_002060E8_0x2060e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002060E8_0x2060e8");
#endif

    switch (ctx->pc) {
        case 0x2060e8u: goto label_2060e8;
        case 0x2060ecu: goto label_2060ec;
        case 0x2060f0u: goto label_2060f0;
        case 0x2060f4u: goto label_2060f4;
        case 0x2060f8u: goto label_2060f8;
        case 0x2060fcu: goto label_2060fc;
        case 0x206100u: goto label_206100;
        case 0x206104u: goto label_206104;
        case 0x206108u: goto label_206108;
        case 0x20610cu: goto label_20610c;
        case 0x206110u: goto label_206110;
        case 0x206114u: goto label_206114;
        case 0x206118u: goto label_206118;
        case 0x20611cu: goto label_20611c;
        case 0x206120u: goto label_206120;
        case 0x206124u: goto label_206124;
        case 0x206128u: goto label_206128;
        case 0x20612cu: goto label_20612c;
        case 0x206130u: goto label_206130;
        case 0x206134u: goto label_206134;
        case 0x206138u: goto label_206138;
        case 0x20613cu: goto label_20613c;
        case 0x206140u: goto label_206140;
        case 0x206144u: goto label_206144;
        case 0x206148u: goto label_206148;
        case 0x20614cu: goto label_20614c;
        case 0x206150u: goto label_206150;
        case 0x206154u: goto label_206154;
        case 0x206158u: goto label_206158;
        case 0x20615cu: goto label_20615c;
        case 0x206160u: goto label_206160;
        case 0x206164u: goto label_206164;
        case 0x206168u: goto label_206168;
        case 0x20616cu: goto label_20616c;
        case 0x206170u: goto label_206170;
        case 0x206174u: goto label_206174;
        case 0x206178u: goto label_206178;
        case 0x20617cu: goto label_20617c;
        case 0x206180u: goto label_206180;
        case 0x206184u: goto label_206184;
        case 0x206188u: goto label_206188;
        case 0x20618cu: goto label_20618c;
        case 0x206190u: goto label_206190;
        case 0x206194u: goto label_206194;
        case 0x206198u: goto label_206198;
        case 0x20619cu: goto label_20619c;
        case 0x2061a0u: goto label_2061a0;
        case 0x2061a4u: goto label_2061a4;
        case 0x2061a8u: goto label_2061a8;
        case 0x2061acu: goto label_2061ac;
        case 0x2061b0u: goto label_2061b0;
        case 0x2061b4u: goto label_2061b4;
        case 0x2061b8u: goto label_2061b8;
        case 0x2061bcu: goto label_2061bc;
        default: break;
    }

    ctx->pc = 0x2060e8u;

label_2060e8:
    // 0x2060e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2060e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2060ec:
    // 0x2060ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2060ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2060f0:
    // 0x2060f0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2060f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2060f4:
    // 0x2060f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2060f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2060f8:
    // 0x2060f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2060f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2060fc:
    // 0x2060fc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2060fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_206100:
    // 0x206100: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_206104:
    if (ctx->pc == 0x206104u) {
        ctx->pc = 0x206104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206100u;
        // 0x206104: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206108u;
        goto label_206108;
    }
    ctx->pc = 0x206100u;
    {
        const bool branch_taken_0x206100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206100u;
        // 0x206104: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206100) {
            ctx->pc = 0x2061ACu;
            goto label_2061ac;
        }
    }
    ctx->pc = 0x206108u;
label_206108:
    // 0x206108: 0xc073462  jal         func_1CD188
label_20610c:
    if (ctx->pc == 0x20610Cu) {
        ctx->pc = 0x20610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206108u;
        // 0x20610c: 0x8e24008c  lw          $a0, 0x8C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206110u;
        goto label_206110;
    }
    ctx->pc = 0x206108u;
    SET_GPR_U32(ctx, 31, 0x206110u);
    ctx->pc = 0x20610Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206108u;
    // 0x20610c: 0x8e24008c  lw          $a0, 0x8C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x206108u, 0x206110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206110u;
label_206110:
    // 0x206110: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x206110u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_206114:
    // 0x206114: 0x8e24008c  lw          $a0, 0x8C($s1)
    ctx->pc = 0x206114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_206118:
    // 0x206118: 0x26108840  addiu       $s0, $s0, -0x77C0
    ctx->pc = 0x206118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936640));
label_20611c:
    // 0x20611c: 0x2406008c  addiu       $a2, $zero, 0x8C
    ctx->pc = 0x20611cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_206120:
    // 0x206120: 0xc139138  jal         func_4E44E0
label_206124:
    if (ctx->pc == 0x206124u) {
        ctx->pc = 0x206124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206120u;
        // 0x206124: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206128u;
        goto label_206128;
    }
    ctx->pc = 0x206120u;
    SET_GPR_U32(ctx, 31, 0x206128u);
    ctx->pc = 0x206124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206120u;
    // 0x206124: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E44E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E44E0u, 0x206120u, 0x206128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206128u;
label_206128:
    // 0x206128: 0x8e250098  lw          $a1, 0x98($s1)
    ctx->pc = 0x206128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_20612c:
    // 0x20612c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20612cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_206130:
    // 0x206130: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x206130u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_206134:
    // 0x206134: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x206134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_206138:
    // 0x206138: 0x60f809  jalr        $v1
label_20613c:
    if (ctx->pc == 0x20613Cu) {
        ctx->pc = 0x20613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206138u;
        // 0x20613c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206140u;
        goto label_206140;
    }
    ctx->pc = 0x206138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x206140u);
        ctx->pc = 0x20613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206138u;
        // 0x20613c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206138u, 0x206140u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206140u;
label_206140:
    // 0x206140: 0x8e240098  lw          $a0, 0x98($s1)
    ctx->pc = 0x206140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_206144:
    // 0x206144: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x206144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_206148:
    // 0x206148: 0xc13a560  jal         func_4E9580
label_20614c:
    if (ctx->pc == 0x20614Cu) {
        ctx->pc = 0x20614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206148u;
        // 0x20614c: 0x2406008f  addiu       $a2, $zero, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206150u;
        goto label_206150;
    }
    ctx->pc = 0x206148u;
    SET_GPR_U32(ctx, 31, 0x206150u);
    ctx->pc = 0x20614Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206148u;
    // 0x20614c: 0x2406008f  addiu       $a2, $zero, 0x8F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9580u, 0x206148u, 0x206150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206150u;
label_206150:
    // 0x206150: 0x8e250094  lw          $a1, 0x94($s1)
    ctx->pc = 0x206150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_206154:
    // 0x206154: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x206154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_206158:
    // 0x206158: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x206158u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_20615c:
    // 0x20615c: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x20615cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_206160:
    // 0x206160: 0x60f809  jalr        $v1
label_206164:
    if (ctx->pc == 0x206164u) {
        ctx->pc = 0x206164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206160u;
        // 0x206164: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206168u;
        goto label_206168;
    }
    ctx->pc = 0x206160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x206168u);
        ctx->pc = 0x206164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206160u;
        // 0x206164: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206160u, 0x206168u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206168u;
label_206168:
    // 0x206168: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x206168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_20616c:
    // 0x20616c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20616cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_206170:
    // 0x206170: 0xc139fe8  jal         func_4E7FA0
label_206174:
    if (ctx->pc == 0x206174u) {
        ctx->pc = 0x206174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206170u;
        // 0x206174: 0x24060092  addiu       $a2, $zero, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206178u;
        goto label_206178;
    }
    ctx->pc = 0x206170u;
    SET_GPR_U32(ctx, 31, 0x206178u);
    ctx->pc = 0x206174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206170u;
    // 0x206174: 0x24060092  addiu       $a2, $zero, 0x92 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7FA0u, 0x206170u, 0x206178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206178u;
label_206178:
    // 0x206178: 0x8e250090  lw          $a1, 0x90($s1)
    ctx->pc = 0x206178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_20617c:
    // 0x20617c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20617cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_206180:
    // 0x206180: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x206180u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_206184:
    // 0x206184: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x206184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_206188:
    // 0x206188: 0x60f809  jalr        $v1
label_20618c:
    if (ctx->pc == 0x20618Cu) {
        ctx->pc = 0x20618Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206188u;
        // 0x20618c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206190u;
        goto label_206190;
    }
    ctx->pc = 0x206188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x206190u);
        ctx->pc = 0x20618Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206188u;
        // 0x20618c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206188u, 0x206190u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206190u;
label_206190:
    // 0x206190: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x206190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_206194:
    // 0x206194: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x206194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_206198:
    // 0x206198: 0xc139fc8  jal         func_4E7F20
label_20619c:
    if (ctx->pc == 0x20619Cu) {
        ctx->pc = 0x20619Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206198u;
        // 0x20619c: 0x24060095  addiu       $a2, $zero, 0x95 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2061A0u;
        goto label_2061a0;
    }
    ctx->pc = 0x206198u;
    SET_GPR_U32(ctx, 31, 0x2061A0u);
    ctx->pc = 0x20619Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206198u;
    // 0x20619c: 0x24060095  addiu       $a2, $zero, 0x95 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7F20u, 0x206198u, 0x2061A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2061A0u;
label_2061a0:
    // 0x2061a0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2061a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_2061a4:
    // 0x2061a4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x2061a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_2061a8:
    // 0x2061a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2061a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2061ac:
    // 0x2061ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2061acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2061b0:
    // 0x2061b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2061b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2061b4:
    // 0x2061b4: 0x3e00008  jr          $ra
label_2061b8:
    if (ctx->pc == 0x2061B8u) {
        ctx->pc = 0x2061B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2061B4u;
        // 0x2061b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2061BCu;
        goto label_2061bc;
    }
    ctx->pc = 0x2061B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2061B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2061B4u;
        // 0x2061b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2061B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2061BCu;
label_2061bc:
    // 0x2061bc: 0x0  nop
    ctx->pc = 0x2061bcu;
    // NOP
    ctx->pc = 0x2061c0u;
}
