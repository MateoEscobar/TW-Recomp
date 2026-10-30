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

// Function: sub_003F60F8
// Address: 0x3f60f8 - 0x3f61a8
void sub_003F60F8_0x3f60f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F60F8_0x3f60f8");
#endif

    switch (ctx->pc) {
        case 0x3f60f8u: goto label_3f60f8;
        case 0x3f60fcu: goto label_3f60fc;
        case 0x3f6100u: goto label_3f6100;
        case 0x3f6104u: goto label_3f6104;
        case 0x3f6108u: goto label_3f6108;
        case 0x3f610cu: goto label_3f610c;
        case 0x3f6110u: goto label_3f6110;
        case 0x3f6114u: goto label_3f6114;
        case 0x3f6118u: goto label_3f6118;
        case 0x3f611cu: goto label_3f611c;
        case 0x3f6120u: goto label_3f6120;
        case 0x3f6124u: goto label_3f6124;
        case 0x3f6128u: goto label_3f6128;
        case 0x3f612cu: goto label_3f612c;
        case 0x3f6130u: goto label_3f6130;
        case 0x3f6134u: goto label_3f6134;
        case 0x3f6138u: goto label_3f6138;
        case 0x3f613cu: goto label_3f613c;
        case 0x3f6140u: goto label_3f6140;
        case 0x3f6144u: goto label_3f6144;
        case 0x3f6148u: goto label_3f6148;
        case 0x3f614cu: goto label_3f614c;
        case 0x3f6150u: goto label_3f6150;
        case 0x3f6154u: goto label_3f6154;
        case 0x3f6158u: goto label_3f6158;
        case 0x3f615cu: goto label_3f615c;
        case 0x3f6160u: goto label_3f6160;
        case 0x3f6164u: goto label_3f6164;
        case 0x3f6168u: goto label_3f6168;
        case 0x3f616cu: goto label_3f616c;
        case 0x3f6170u: goto label_3f6170;
        case 0x3f6174u: goto label_3f6174;
        case 0x3f6178u: goto label_3f6178;
        case 0x3f617cu: goto label_3f617c;
        case 0x3f6180u: goto label_3f6180;
        case 0x3f6184u: goto label_3f6184;
        case 0x3f6188u: goto label_3f6188;
        case 0x3f618cu: goto label_3f618c;
        case 0x3f6190u: goto label_3f6190;
        case 0x3f6194u: goto label_3f6194;
        case 0x3f6198u: goto label_3f6198;
        case 0x3f619cu: goto label_3f619c;
        case 0x3f61a0u: goto label_3f61a0;
        case 0x3f61a4u: goto label_3f61a4;
        default: break;
    }

    ctx->pc = 0x3f60f8u;

label_3f60f8:
    // 0x3f60f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3f60f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3f60fc:
    // 0x3f60fc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3f60fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3f6100:
    // 0x3f6100: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3f6100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3f6104:
    // 0x3f6104: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3f6104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f6108:
    // 0x3f6108: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3f6108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3f610c:
    // 0x3f610c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f610cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f6110:
    // 0x3f6110: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f6110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3f6114:
    // 0x3f6114: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3f6114u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3f6118:
    // 0x3f6118: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f6118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f611c:
    // 0x3f611c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f611cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f6120:
    // 0x3f6120: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f6120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f6124:
    // 0x3f6124: 0x40f809  jalr        $v0
label_3f6128:
    if (ctx->pc == 0x3F6128u) {
        ctx->pc = 0x3F6128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6124u;
        // 0x3f6128: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F612Cu;
        goto label_3f612c;
    }
    ctx->pc = 0x3F6124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F612Cu);
        ctx->pc = 0x3F6128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6124u;
        // 0x3f6128: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F6124u, 0x3F612Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F612Cu;
label_3f612c:
    // 0x3f612c: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x3f612cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_3f6130:
    // 0x3f6130: 0x16030018  bne         $s0, $v1, . + 4 + (0x18 << 2)
label_3f6134:
    if (ctx->pc == 0x3F6134u) {
        ctx->pc = 0x3F6134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6130u;
        // 0x3f6134: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6138u;
        goto label_3f6138;
    }
    ctx->pc = 0x3F6130u;
    {
        const bool branch_taken_0x3f6130 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x3F6134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6130u;
        // 0x3f6134: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6130) {
            ctx->pc = 0x3F6194u;
            goto label_3f6194;
        }
    }
    ctx->pc = 0x3F6138u;
label_3f6138:
    // 0x3f6138: 0xc0ea146  jal         func_3A8518
label_3f613c:
    if (ctx->pc == 0x3F613Cu) {
        ctx->pc = 0x3F613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6138u;
        // 0x3f613c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6140u;
        goto label_3f6140;
    }
    ctx->pc = 0x3F6138u;
    SET_GPR_U32(ctx, 31, 0x3F6140u);
    ctx->pc = 0x3F613Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6138u;
    // 0x3f613c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3F6138u, 0x3F6140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6140u;
label_3f6140:
    // 0x3f6140: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3f6140u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f6144:
    // 0x3f6144: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f6144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f6148:
    // 0x3f6148: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_3f614c:
    if (ctx->pc == 0x3F614Cu) {
        ctx->pc = 0x3F614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6148u;
        // 0x3f614c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6150u;
        goto label_3f6150;
    }
    ctx->pc = 0x3F6148u;
    {
        const bool branch_taken_0x3f6148 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6148u;
        // 0x3f614c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6148) {
            ctx->pc = 0x3F6170u;
            goto label_3f6170;
        }
    }
    ctx->pc = 0x3F6150u;
label_3f6150:
    // 0x3f6150: 0xc0e91b2  jal         func_3A46C8
label_3f6154:
    if (ctx->pc == 0x3F6154u) {
        ctx->pc = 0x3F6154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6150u;
        // 0x3f6154: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6158u;
        goto label_3f6158;
    }
    ctx->pc = 0x3F6150u;
    SET_GPR_U32(ctx, 31, 0x3F6158u);
    ctx->pc = 0x3F6154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6150u;
    // 0x3f6154: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A46C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A46C8u, 0x3F6150u, 0x3F6158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6158u;
label_3f6158:
    // 0x3f6158: 0xc0e91b2  jal         func_3A46C8
label_3f615c:
    if (ctx->pc == 0x3F615Cu) {
        ctx->pc = 0x3F615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6158u;
        // 0x3f615c: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6160u;
        goto label_3f6160;
    }
    ctx->pc = 0x3F6158u;
    SET_GPR_U32(ctx, 31, 0x3F6160u);
    ctx->pc = 0x3F615Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6158u;
    // 0x3f615c: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A46C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A46C8u, 0x3F6158u, 0x3F6160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6160u;
label_3f6160:
    // 0x3f6160: 0xc0e92c0  jal         func_3A4B00
label_3f6164:
    if (ctx->pc == 0x3F6164u) {
        ctx->pc = 0x3F6164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6160u;
        // 0x3f6164: 0x8e2400e0  lw          $a0, 0xE0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6168u;
        goto label_3f6168;
    }
    ctx->pc = 0x3F6160u;
    SET_GPR_U32(ctx, 31, 0x3F6168u);
    ctx->pc = 0x3F6164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6160u;
    // 0x3f6164: 0x8e2400e0  lw          $a0, 0xE0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4B00u, 0x3F6160u, 0x3F6168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6168u;
label_3f6168:
    // 0x3f6168: 0x1000000a  b           . + 4 + (0xA << 2)
label_3f616c:
    if (ctx->pc == 0x3F616Cu) {
        ctx->pc = 0x3F616Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6168u;
        // 0x3f616c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6170u;
        goto label_3f6170;
    }
    ctx->pc = 0x3F6168u;
    {
        const bool branch_taken_0x3f6168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F616Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6168u;
        // 0x3f616c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6168) {
            ctx->pc = 0x3F6194u;
            goto label_3f6194;
        }
    }
    ctx->pc = 0x3F6170u;
label_3f6170:
    // 0x3f6170: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_3f6174:
    if (ctx->pc == 0x3F6174u) {
        ctx->pc = 0x3F6174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6170u;
        // 0x3f6174: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6178u;
        goto label_3f6178;
    }
    ctx->pc = 0x3F6170u;
    {
        const bool branch_taken_0x3f6170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F6174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6170u;
        // 0x3f6174: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6170) {
            ctx->pc = 0x3F6194u;
            goto label_3f6194;
        }
    }
    ctx->pc = 0x3F6178u;
label_3f6178:
    // 0x3f6178: 0xc0e91c4  jal         func_3A4710
label_3f617c:
    if (ctx->pc == 0x3F617Cu) {
        ctx->pc = 0x3F617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6178u;
        // 0x3f617c: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6180u;
        goto label_3f6180;
    }
    ctx->pc = 0x3F6178u;
    SET_GPR_U32(ctx, 31, 0x3F6180u);
    ctx->pc = 0x3F617Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6178u;
    // 0x3f617c: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4710u, 0x3F6178u, 0x3F6180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6180u;
label_3f6180:
    // 0x3f6180: 0xc0e91c4  jal         func_3A4710
label_3f6184:
    if (ctx->pc == 0x3F6184u) {
        ctx->pc = 0x3F6184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6180u;
        // 0x3f6184: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6188u;
        goto label_3f6188;
    }
    ctx->pc = 0x3F6180u;
    SET_GPR_U32(ctx, 31, 0x3F6188u);
    ctx->pc = 0x3F6184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6180u;
    // 0x3f6184: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4710u, 0x3F6180u, 0x3F6188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6188u;
label_3f6188:
    // 0x3f6188: 0xc0e92b8  jal         func_3A4AE0
label_3f618c:
    if (ctx->pc == 0x3F618Cu) {
        ctx->pc = 0x3F618Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6188u;
        // 0x3f618c: 0x8e2400e0  lw          $a0, 0xE0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6190u;
        goto label_3f6190;
    }
    ctx->pc = 0x3F6188u;
    SET_GPR_U32(ctx, 31, 0x3F6190u);
    ctx->pc = 0x3F618Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6188u;
    // 0x3f618c: 0x8e2400e0  lw          $a0, 0xE0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4AE0u, 0x3F6188u, 0x3F6190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6190u;
label_3f6190:
    // 0x3f6190: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3f6190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f6194:
    // 0x3f6194: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3f6194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f6198:
    // 0x3f6198: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3f6198u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f619c:
    // 0x3f619c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f619cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3f61a0:
    // 0x3f61a0: 0x3e00008  jr          $ra
label_3f61a4:
    if (ctx->pc == 0x3F61A4u) {
        ctx->pc = 0x3F61A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F61A0u;
        // 0x3f61a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F61A8u;
        goto label_fallthrough_0x3f61a0;
    }
    ctx->pc = 0x3F61A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F61A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F61A0u;
        // 0x3f61a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F61A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f61a0:
    ctx->pc = 0x3F61A8u;
}
