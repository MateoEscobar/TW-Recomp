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

// Function: sub_003C60D8
// Address: 0x3c60d8 - 0x3c61d8
void sub_003C60D8_0x3c60d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C60D8_0x3c60d8");
#endif

    switch (ctx->pc) {
        case 0x3c60d8u: goto label_3c60d8;
        case 0x3c60dcu: goto label_3c60dc;
        case 0x3c60e0u: goto label_3c60e0;
        case 0x3c60e4u: goto label_3c60e4;
        case 0x3c60e8u: goto label_3c60e8;
        case 0x3c60ecu: goto label_3c60ec;
        case 0x3c60f0u: goto label_3c60f0;
        case 0x3c60f4u: goto label_3c60f4;
        case 0x3c60f8u: goto label_3c60f8;
        case 0x3c60fcu: goto label_3c60fc;
        case 0x3c6100u: goto label_3c6100;
        case 0x3c6104u: goto label_3c6104;
        case 0x3c6108u: goto label_3c6108;
        case 0x3c610cu: goto label_3c610c;
        case 0x3c6110u: goto label_3c6110;
        case 0x3c6114u: goto label_3c6114;
        case 0x3c6118u: goto label_3c6118;
        case 0x3c611cu: goto label_3c611c;
        case 0x3c6120u: goto label_3c6120;
        case 0x3c6124u: goto label_3c6124;
        case 0x3c6128u: goto label_3c6128;
        case 0x3c612cu: goto label_3c612c;
        case 0x3c6130u: goto label_3c6130;
        case 0x3c6134u: goto label_3c6134;
        case 0x3c6138u: goto label_3c6138;
        case 0x3c613cu: goto label_3c613c;
        case 0x3c6140u: goto label_3c6140;
        case 0x3c6144u: goto label_3c6144;
        case 0x3c6148u: goto label_3c6148;
        case 0x3c614cu: goto label_3c614c;
        case 0x3c6150u: goto label_3c6150;
        case 0x3c6154u: goto label_3c6154;
        case 0x3c6158u: goto label_3c6158;
        case 0x3c615cu: goto label_3c615c;
        case 0x3c6160u: goto label_3c6160;
        case 0x3c6164u: goto label_3c6164;
        case 0x3c6168u: goto label_3c6168;
        case 0x3c616cu: goto label_3c616c;
        case 0x3c6170u: goto label_3c6170;
        case 0x3c6174u: goto label_3c6174;
        case 0x3c6178u: goto label_3c6178;
        case 0x3c617cu: goto label_3c617c;
        case 0x3c6180u: goto label_3c6180;
        case 0x3c6184u: goto label_3c6184;
        case 0x3c6188u: goto label_3c6188;
        case 0x3c618cu: goto label_3c618c;
        case 0x3c6190u: goto label_3c6190;
        case 0x3c6194u: goto label_3c6194;
        case 0x3c6198u: goto label_3c6198;
        case 0x3c619cu: goto label_3c619c;
        case 0x3c61a0u: goto label_3c61a0;
        case 0x3c61a4u: goto label_3c61a4;
        case 0x3c61a8u: goto label_3c61a8;
        case 0x3c61acu: goto label_3c61ac;
        case 0x3c61b0u: goto label_3c61b0;
        case 0x3c61b4u: goto label_3c61b4;
        case 0x3c61b8u: goto label_3c61b8;
        case 0x3c61bcu: goto label_3c61bc;
        case 0x3c61c0u: goto label_3c61c0;
        case 0x3c61c4u: goto label_3c61c4;
        case 0x3c61c8u: goto label_3c61c8;
        case 0x3c61ccu: goto label_3c61cc;
        case 0x3c61d0u: goto label_3c61d0;
        case 0x3c61d4u: goto label_3c61d4;
        default: break;
    }

    ctx->pc = 0x3c60d8u;

label_3c60d8:
    // 0x3c60d8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3c60d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3c60dc:
    // 0x3c60dc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3c60dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3c60e0:
    // 0x3c60e0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3c60e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3c60e4:
    // 0x3c60e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c60e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c60e8:
    // 0x3c60e8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3c60e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3c60ec:
    // 0x3c60ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3c60ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c60f0:
    // 0x3c60f0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3c60f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3c60f4:
    // 0x3c60f4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3c60f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3c60f8:
    // 0x3c60f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3c60f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3c60fc:
    // 0x3c60fc: 0x26140010  addiu       $s4, $s0, 0x10
    ctx->pc = 0x3c60fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3c6100:
    // 0x3c6100: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3c6100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c6104:
    // 0x3c6104: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c6104u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c6108:
    // 0x3c6108: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c6108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c610c:
    // 0x3c610c: 0x40f809  jalr        $v0
label_3c6110:
    if (ctx->pc == 0x3C6110u) {
        ctx->pc = 0x3C6110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C610Cu;
        // 0x3c6110: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6114u;
        goto label_3c6114;
    }
    ctx->pc = 0x3C610Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C6114u);
        ctx->pc = 0x3C6110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C610Cu;
        // 0x3c6110: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C610Cu, 0x3C6114u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C6114u;
label_3c6114:
    // 0x3c6114: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3c6114u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c6118:
    // 0x3c6118: 0xc0ea14c  jal         func_3A8530
label_3c611c:
    if (ctx->pc == 0x3C611Cu) {
        ctx->pc = 0x3C611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6118u;
        // 0x3c611c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6120u;
        goto label_3c6120;
    }
    ctx->pc = 0x3C6118u;
    SET_GPR_U32(ctx, 31, 0x3C6120u);
    ctx->pc = 0x3C611Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6118u;
    // 0x3c611c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3C6118u, 0x3C6120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6120u;
label_3c6120:
    // 0x3c6120: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3c6120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c6124:
    // 0x3c6124: 0xc0ea12a  jal         func_3A84A8
label_3c6128:
    if (ctx->pc == 0x3C6128u) {
        ctx->pc = 0x3C6128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6124u;
        // 0x3c6128: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C612Cu;
        goto label_3c612c;
    }
    ctx->pc = 0x3C6124u;
    SET_GPR_U32(ctx, 31, 0x3C612Cu);
    ctx->pc = 0x3C6128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6124u;
    // 0x3c6128: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C6124u, 0x3C612Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C612Cu;
label_3c612c:
    // 0x3c612c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x3c612cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c6130:
    // 0x3c6130: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c6130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c6134:
    // 0x3c6134: 0xc0ea12a  jal         func_3A84A8
label_3c6138:
    if (ctx->pc == 0x3C6138u) {
        ctx->pc = 0x3C6138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6134u;
        // 0x3c6138: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C613Cu;
        goto label_3c613c;
    }
    ctx->pc = 0x3C6134u;
    SET_GPR_U32(ctx, 31, 0x3C613Cu);
    ctx->pc = 0x3C6138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6134u;
    // 0x3c6138: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C6134u, 0x3C613Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C613Cu;
label_3c613c:
    // 0x3c613c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3c613cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c6140:
    // 0x3c6140: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c6140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c6144:
    // 0x3c6144: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3c6144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3c6148:
    // 0x3c6148: 0xc0e858c  jal         func_3A1630
label_3c614c:
    if (ctx->pc == 0x3C614Cu) {
        ctx->pc = 0x3C614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6148u;
        // 0x3c614c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6150u;
        goto label_3c6150;
    }
    ctx->pc = 0x3C6148u;
    SET_GPR_U32(ctx, 31, 0x3C6150u);
    ctx->pc = 0x3C614Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6148u;
    // 0x3c614c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3C6148u, 0x3C6150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6150u;
label_3c6150:
    // 0x3c6150: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3c6150u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c6154:
    // 0x3c6154: 0x3c0200a0  lui         $v0, 0xA0
    ctx->pc = 0x3c6154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)160 << 16));
label_3c6158:
    // 0x3c6158: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3c6158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_3c615c:
    // 0x3c615c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x3c615cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c6160:
    // 0x3c6160: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3c6160u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_3c6164:
    // 0x3c6164: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3c6164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c6168:
    // 0x3c6168: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3c6168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3c616c:
    // 0x3c616c: 0x84c40088  lh          $a0, 0x88($a2)
    ctx->pc = 0x3c616cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 136)));
label_3c6170:
    // 0x3c6170: 0x8cc2008c  lw          $v0, 0x8C($a2)
    ctx->pc = 0x3c6170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 140)));
label_3c6174:
    // 0x3c6174: 0x40f809  jalr        $v0
label_3c6178:
    if (ctx->pc == 0x3C6178u) {
        ctx->pc = 0x3C6178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6174u;
        // 0x3c6178: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C617Cu;
        goto label_3c617c;
    }
    ctx->pc = 0x3C6174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C617Cu);
        ctx->pc = 0x3C6178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6174u;
        // 0x3c6178: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C6174u, 0x3C617Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C617Cu;
label_3c617c:
    // 0x3c617c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x3c617cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c6180:
    // 0x3c6180: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3c6180u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3c6184:
    // 0x3c6184: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x3c6184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_3c6188:
    // 0x3c6188: 0x84c40070  lh          $a0, 0x70($a2)
    ctx->pc = 0x3c6188u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 112)));
label_3c618c:
    // 0x3c618c: 0x8cc30074  lw          $v1, 0x74($a2)
    ctx->pc = 0x3c618cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_3c6190:
    // 0x3c6190: 0x60f809  jalr        $v1
label_3c6194:
    if (ctx->pc == 0x3C6194u) {
        ctx->pc = 0x3C6194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6190u;
        // 0x3c6194: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6198u;
        goto label_3c6198;
    }
    ctx->pc = 0x3C6190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C6198u);
        ctx->pc = 0x3C6194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6190u;
        // 0x3c6194: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C6190u, 0x3C6198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C6198u;
label_3c6198:
    // 0x3c6198: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c6198u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c619c:
    // 0x3c619c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c619cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c61a0:
    // 0x3c61a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c61a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c61a4:
    // 0x3c61a4: 0xc0e9132  jal         func_3A44C8
label_3c61a8:
    if (ctx->pc == 0x3C61A8u) {
        ctx->pc = 0x3C61A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C61A4u;
        // 0x3c61a8: 0x7e820010  sq          $v0, 0x10($s4) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C61ACu;
        goto label_3c61ac;
    }
    ctx->pc = 0x3C61A4u;
    SET_GPR_U32(ctx, 31, 0x3C61ACu);
    ctx->pc = 0x3C61A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C61A4u;
    // 0x3c61a8: 0x7e820010  sq          $v0, 0x10($s4) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3C61A4u, 0x3C61ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C61ACu;
label_3c61ac:
    // 0x3c61ac: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x3c61acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_3c61b0:
    // 0x3c61b0: 0xae600034  sw          $zero, 0x34($s3)
    ctx->pc = 0x3c61b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 0));
label_3c61b4:
    // 0x3c61b4: 0xae600030  sw          $zero, 0x30($s3)
    ctx->pc = 0x3c61b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
label_3c61b8:
    // 0x3c61b8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3c61b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3c61bc:
    // 0x3c61bc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3c61bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c61c0:
    // 0x3c61c0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3c61c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c61c4:
    // 0x3c61c4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3c61c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c61c8:
    // 0x3c61c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3c61c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c61cc:
    // 0x3c61cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3c61ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3c61d0:
    // 0x3c61d0: 0x3e00008  jr          $ra
label_3c61d4:
    if (ctx->pc == 0x3C61D4u) {
        ctx->pc = 0x3C61D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C61D0u;
        // 0x3c61d4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C61D8u;
        goto label_fallthrough_0x3c61d0;
    }
    ctx->pc = 0x3C61D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C61D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C61D0u;
        // 0x3c61d4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C61D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c61d0:
    ctx->pc = 0x3C61D8u;
}
