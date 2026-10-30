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

// Function: sub_003EA0B0
// Address: 0x3ea0b0 - 0x3ea198
void sub_003EA0B0_0x3ea0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EA0B0_0x3ea0b0");
#endif

    switch (ctx->pc) {
        case 0x3ea0b0u: goto label_3ea0b0;
        case 0x3ea0b4u: goto label_3ea0b4;
        case 0x3ea0b8u: goto label_3ea0b8;
        case 0x3ea0bcu: goto label_3ea0bc;
        case 0x3ea0c0u: goto label_3ea0c0;
        case 0x3ea0c4u: goto label_3ea0c4;
        case 0x3ea0c8u: goto label_3ea0c8;
        case 0x3ea0ccu: goto label_3ea0cc;
        case 0x3ea0d0u: goto label_3ea0d0;
        case 0x3ea0d4u: goto label_3ea0d4;
        case 0x3ea0d8u: goto label_3ea0d8;
        case 0x3ea0dcu: goto label_3ea0dc;
        case 0x3ea0e0u: goto label_3ea0e0;
        case 0x3ea0e4u: goto label_3ea0e4;
        case 0x3ea0e8u: goto label_3ea0e8;
        case 0x3ea0ecu: goto label_3ea0ec;
        case 0x3ea0f0u: goto label_3ea0f0;
        case 0x3ea0f4u: goto label_3ea0f4;
        case 0x3ea0f8u: goto label_3ea0f8;
        case 0x3ea0fcu: goto label_3ea0fc;
        case 0x3ea100u: goto label_3ea100;
        case 0x3ea104u: goto label_3ea104;
        case 0x3ea108u: goto label_3ea108;
        case 0x3ea10cu: goto label_3ea10c;
        case 0x3ea110u: goto label_3ea110;
        case 0x3ea114u: goto label_3ea114;
        case 0x3ea118u: goto label_3ea118;
        case 0x3ea11cu: goto label_3ea11c;
        case 0x3ea120u: goto label_3ea120;
        case 0x3ea124u: goto label_3ea124;
        case 0x3ea128u: goto label_3ea128;
        case 0x3ea12cu: goto label_3ea12c;
        case 0x3ea130u: goto label_3ea130;
        case 0x3ea134u: goto label_3ea134;
        case 0x3ea138u: goto label_3ea138;
        case 0x3ea13cu: goto label_3ea13c;
        case 0x3ea140u: goto label_3ea140;
        case 0x3ea144u: goto label_3ea144;
        case 0x3ea148u: goto label_3ea148;
        case 0x3ea14cu: goto label_3ea14c;
        case 0x3ea150u: goto label_3ea150;
        case 0x3ea154u: goto label_3ea154;
        case 0x3ea158u: goto label_3ea158;
        case 0x3ea15cu: goto label_3ea15c;
        case 0x3ea160u: goto label_3ea160;
        case 0x3ea164u: goto label_3ea164;
        case 0x3ea168u: goto label_3ea168;
        case 0x3ea16cu: goto label_3ea16c;
        case 0x3ea170u: goto label_3ea170;
        case 0x3ea174u: goto label_3ea174;
        case 0x3ea178u: goto label_3ea178;
        case 0x3ea17cu: goto label_3ea17c;
        case 0x3ea180u: goto label_3ea180;
        case 0x3ea184u: goto label_3ea184;
        case 0x3ea188u: goto label_3ea188;
        case 0x3ea18cu: goto label_3ea18c;
        case 0x3ea190u: goto label_3ea190;
        case 0x3ea194u: goto label_3ea194;
        default: break;
    }

    ctx->pc = 0x3ea0b0u;

label_3ea0b0:
    // 0x3ea0b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3ea0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3ea0b4:
    // 0x3ea0b4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3ea0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3ea0b8:
    // 0x3ea0b8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3ea0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3ea0bc:
    // 0x3ea0bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ea0bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ea0c0:
    // 0x3ea0c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3ea0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3ea0c4:
    // 0x3ea0c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3ea0c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ea0c8:
    // 0x3ea0c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ea0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3ea0cc:
    // 0x3ea0cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ea0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ea0d0:
    // 0x3ea0d0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ea0d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ea0d4:
    // 0x3ea0d4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ea0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ea0d8:
    // 0x3ea0d8: 0x40f809  jalr        $v0
label_3ea0dc:
    if (ctx->pc == 0x3EA0DCu) {
        ctx->pc = 0x3EA0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA0D8u;
        // 0x3ea0dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA0E0u;
        goto label_3ea0e0;
    }
    ctx->pc = 0x3EA0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EA0E0u);
        ctx->pc = 0x3EA0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA0D8u;
        // 0x3ea0dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA0D8u, 0x3EA0E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EA0E0u;
label_3ea0e0:
    // 0x3ea0e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3ea0e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ea0e4:
    // 0x3ea0e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ea0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ea0e8:
    // 0x3ea0e8: 0xc0ea12a  jal         func_3A84A8
label_3ea0ec:
    if (ctx->pc == 0x3EA0ECu) {
        ctx->pc = 0x3EA0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA0E8u;
        // 0x3ea0ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA0F0u;
        goto label_3ea0f0;
    }
    ctx->pc = 0x3EA0E8u;
    SET_GPR_U32(ctx, 31, 0x3EA0F0u);
    ctx->pc = 0x3EA0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA0E8u;
    // 0x3ea0ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EA0E8u, 0x3EA0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA0F0u;
label_3ea0f0:
    // 0x3ea0f0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3ea0f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ea0f4:
    // 0x3ea0f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ea0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ea0f8:
    // 0x3ea0f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3ea0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3ea0fc:
    // 0x3ea0fc: 0xc0e858c  jal         func_3A1630
label_3ea100:
    if (ctx->pc == 0x3EA100u) {
        ctx->pc = 0x3EA100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA0FCu;
        // 0x3ea100: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA104u;
        goto label_3ea104;
    }
    ctx->pc = 0x3EA0FCu;
    SET_GPR_U32(ctx, 31, 0x3EA104u);
    ctx->pc = 0x3EA100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA0FCu;
    // 0x3ea100: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3EA0FCu, 0x3EA104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA104u;
label_3ea104:
    // 0x3ea104: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ea104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ea108:
    // 0x3ea108: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3ea108u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3ea10c:
    // 0x3ea10c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3ea10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3ea110:
    // 0x3ea110: 0x40f809  jalr        $v0
label_3ea114:
    if (ctx->pc == 0x3EA114u) {
        ctx->pc = 0x3EA114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA110u;
        // 0x3ea114: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA118u;
        goto label_3ea118;
    }
    ctx->pc = 0x3EA110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EA118u);
        ctx->pc = 0x3EA114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA110u;
        // 0x3ea114: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA110u, 0x3EA118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EA118u;
label_3ea118:
    // 0x3ea118: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3ea118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3ea11c:
    // 0x3ea11c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ea11cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ea120:
    // 0x3ea120: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x3ea120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
label_3ea124:
    // 0x3ea124: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3ea124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ea128:
    // 0x3ea128: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3ea128u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ea12c:
    // 0x3ea12c: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x3ea12cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
label_3ea130:
    // 0x3ea130: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3ea130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ea134:
    // 0x3ea134: 0xc0e93a2  jal         func_3A4E88
label_3ea138:
    if (ctx->pc == 0x3EA138u) {
        ctx->pc = 0x3EA138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA134u;
        // 0x3ea138: 0x240800ff  addiu       $t0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA13Cu;
        goto label_3ea13c;
    }
    ctx->pc = 0x3EA134u;
    SET_GPR_U32(ctx, 31, 0x3EA13Cu);
    ctx->pc = 0x3EA138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA134u;
    // 0x3ea138: 0x240800ff  addiu       $t0, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4E88u, 0x3EA134u, 0x3EA13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA13Cu;
label_3ea13c:
    // 0x3ea13c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3ea13cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3ea140:
    // 0x3ea140: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3ea140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3ea144:
    // 0x3ea144: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3ea144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3ea148:
    // 0x3ea148: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x3ea148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_3ea14c:
    // 0x3ea14c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ea14cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ea150:
    // 0x3ea150: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x3ea150u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ea154:
    // 0x3ea154: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x3ea154u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_3ea158:
    // 0x3ea158: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x3ea158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_3ea15c:
    // 0x3ea15c: 0x34a5ff00  ori         $a1, $a1, 0xFF00
    ctx->pc = 0x3ea15cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65280);
label_3ea160:
    // 0x3ea160: 0x7e440010  sq          $a0, 0x10($s2)
    ctx->pc = 0x3ea160u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 4));
label_3ea164:
    // 0x3ea164: 0x3463ff80  ori         $v1, $v1, 0xFF80
    ctx->pc = 0x3ea164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65408);
label_3ea168:
    // 0x3ea168: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x3ea168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
label_3ea16c:
    // 0x3ea16c: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x3ea16cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_3ea170:
    // 0x3ea170: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x3ea170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_3ea174:
    // 0x3ea174: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x3ea174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_3ea178:
    // 0x3ea178: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x3ea178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_3ea17c:
    // 0x3ea17c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3ea17cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ea180:
    // 0x3ea180: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3ea180u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ea184:
    // 0x3ea184: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3ea184u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ea188:
    // 0x3ea188: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ea188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3ea18c:
    // 0x3ea18c: 0x3e00008  jr          $ra
label_3ea190:
    if (ctx->pc == 0x3EA190u) {
        ctx->pc = 0x3EA190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA18Cu;
        // 0x3ea190: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA194u;
        goto label_3ea194;
    }
    ctx->pc = 0x3EA18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EA190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA18Cu;
        // 0x3ea190: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EA194u;
label_3ea194:
    // 0x3ea194: 0x0  nop
    ctx->pc = 0x3ea194u;
    // NOP
    ctx->pc = 0x3ea198u;
}
