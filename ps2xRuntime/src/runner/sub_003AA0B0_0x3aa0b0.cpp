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

// Function: sub_003AA0B0
// Address: 0x3aa0b0 - 0x3aa1f8
void sub_003AA0B0_0x3aa0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA0B0_0x3aa0b0");
#endif

    switch (ctx->pc) {
        case 0x3aa0b0u: goto label_3aa0b0;
        case 0x3aa0b4u: goto label_3aa0b4;
        case 0x3aa0b8u: goto label_3aa0b8;
        case 0x3aa0bcu: goto label_3aa0bc;
        case 0x3aa0c0u: goto label_3aa0c0;
        case 0x3aa0c4u: goto label_3aa0c4;
        case 0x3aa0c8u: goto label_3aa0c8;
        case 0x3aa0ccu: goto label_3aa0cc;
        case 0x3aa0d0u: goto label_3aa0d0;
        case 0x3aa0d4u: goto label_3aa0d4;
        case 0x3aa0d8u: goto label_3aa0d8;
        case 0x3aa0dcu: goto label_3aa0dc;
        case 0x3aa0e0u: goto label_3aa0e0;
        case 0x3aa0e4u: goto label_3aa0e4;
        case 0x3aa0e8u: goto label_3aa0e8;
        case 0x3aa0ecu: goto label_3aa0ec;
        case 0x3aa0f0u: goto label_3aa0f0;
        case 0x3aa0f4u: goto label_3aa0f4;
        case 0x3aa0f8u: goto label_3aa0f8;
        case 0x3aa0fcu: goto label_3aa0fc;
        case 0x3aa100u: goto label_3aa100;
        case 0x3aa104u: goto label_3aa104;
        case 0x3aa108u: goto label_3aa108;
        case 0x3aa10cu: goto label_3aa10c;
        case 0x3aa110u: goto label_3aa110;
        case 0x3aa114u: goto label_3aa114;
        case 0x3aa118u: goto label_3aa118;
        case 0x3aa11cu: goto label_3aa11c;
        case 0x3aa120u: goto label_3aa120;
        case 0x3aa124u: goto label_3aa124;
        case 0x3aa128u: goto label_3aa128;
        case 0x3aa12cu: goto label_3aa12c;
        case 0x3aa130u: goto label_3aa130;
        case 0x3aa134u: goto label_3aa134;
        case 0x3aa138u: goto label_3aa138;
        case 0x3aa13cu: goto label_3aa13c;
        case 0x3aa140u: goto label_3aa140;
        case 0x3aa144u: goto label_3aa144;
        case 0x3aa148u: goto label_3aa148;
        case 0x3aa14cu: goto label_3aa14c;
        case 0x3aa150u: goto label_3aa150;
        case 0x3aa154u: goto label_3aa154;
        case 0x3aa158u: goto label_3aa158;
        case 0x3aa15cu: goto label_3aa15c;
        case 0x3aa160u: goto label_3aa160;
        case 0x3aa164u: goto label_3aa164;
        case 0x3aa168u: goto label_3aa168;
        case 0x3aa16cu: goto label_3aa16c;
        case 0x3aa170u: goto label_3aa170;
        case 0x3aa174u: goto label_3aa174;
        case 0x3aa178u: goto label_3aa178;
        case 0x3aa17cu: goto label_3aa17c;
        case 0x3aa180u: goto label_3aa180;
        case 0x3aa184u: goto label_3aa184;
        case 0x3aa188u: goto label_3aa188;
        case 0x3aa18cu: goto label_3aa18c;
        case 0x3aa190u: goto label_3aa190;
        case 0x3aa194u: goto label_3aa194;
        case 0x3aa198u: goto label_3aa198;
        case 0x3aa19cu: goto label_3aa19c;
        case 0x3aa1a0u: goto label_3aa1a0;
        case 0x3aa1a4u: goto label_3aa1a4;
        case 0x3aa1a8u: goto label_3aa1a8;
        case 0x3aa1acu: goto label_3aa1ac;
        case 0x3aa1b0u: goto label_3aa1b0;
        case 0x3aa1b4u: goto label_3aa1b4;
        case 0x3aa1b8u: goto label_3aa1b8;
        case 0x3aa1bcu: goto label_3aa1bc;
        case 0x3aa1c0u: goto label_3aa1c0;
        case 0x3aa1c4u: goto label_3aa1c4;
        case 0x3aa1c8u: goto label_3aa1c8;
        case 0x3aa1ccu: goto label_3aa1cc;
        case 0x3aa1d0u: goto label_3aa1d0;
        case 0x3aa1d4u: goto label_3aa1d4;
        case 0x3aa1d8u: goto label_3aa1d8;
        case 0x3aa1dcu: goto label_3aa1dc;
        case 0x3aa1e0u: goto label_3aa1e0;
        case 0x3aa1e4u: goto label_3aa1e4;
        case 0x3aa1e8u: goto label_3aa1e8;
        case 0x3aa1ecu: goto label_3aa1ec;
        case 0x3aa1f0u: goto label_3aa1f0;
        case 0x3aa1f4u: goto label_3aa1f4;
        default: break;
    }

    ctx->pc = 0x3aa0b0u;

label_3aa0b0:
    // 0x3aa0b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3aa0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3aa0b4:
    // 0x3aa0b4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3aa0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3aa0b8:
    // 0x3aa0b8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3aa0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_3aa0bc:
    // 0x3aa0bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3aa0bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3aa0c0:
    // 0x3aa0c0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3aa0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_3aa0c4:
    // 0x3aa0c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3aa0c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3aa0c8:
    // 0x3aa0c8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3aa0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_3aa0cc:
    // 0x3aa0cc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3aa0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3aa0d0:
    // 0x3aa0d0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3aa0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3aa0d4:
    // 0x3aa0d4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3aa0d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3aa0d8:
    // 0x3aa0d8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3aa0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3aa0dc:
    // 0x3aa0dc: 0x40f809  jalr        $v0
label_3aa0e0:
    if (ctx->pc == 0x3AA0E0u) {
        ctx->pc = 0x3AA0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA0DCu;
        // 0x3aa0e0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA0E4u;
        goto label_3aa0e4;
    }
    ctx->pc = 0x3AA0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AA0E4u);
        ctx->pc = 0x3AA0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA0DCu;
        // 0x3aa0e0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA0DCu, 0x3AA0E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AA0E4u;
label_3aa0e4:
    // 0x3aa0e4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3aa0e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3aa0e8:
    // 0x3aa0e8: 0xc0ea146  jal         func_3A8518
label_3aa0ec:
    if (ctx->pc == 0x3AA0ECu) {
        ctx->pc = 0x3AA0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA0E8u;
        // 0x3aa0ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA0F0u;
        goto label_3aa0f0;
    }
    ctx->pc = 0x3AA0E8u;
    SET_GPR_U32(ctx, 31, 0x3AA0F0u);
    ctx->pc = 0x3AA0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA0E8u;
    // 0x3aa0ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3AA0E8u, 0x3AA0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA0F0u;
label_3aa0f0:
    // 0x3aa0f0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3aa0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3aa0f4:
    // 0x3aa0f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3aa0f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3aa0f8:
    // 0x3aa0f8: 0xc0ea12a  jal         func_3A84A8
label_3aa0fc:
    if (ctx->pc == 0x3AA0FCu) {
        ctx->pc = 0x3AA0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA0F8u;
        // 0x3aa0fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA100u;
        goto label_3aa100;
    }
    ctx->pc = 0x3AA0F8u;
    SET_GPR_U32(ctx, 31, 0x3AA100u);
    ctx->pc = 0x3AA0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA0F8u;
    // 0x3aa0fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3AA0F8u, 0x3AA100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA100u;
label_3aa100:
    // 0x3aa100: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3aa100u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3aa104:
    // 0x3aa104: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3aa104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3aa108:
    // 0x3aa108: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3aa108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3aa10c:
    // 0x3aa10c: 0xc0ea12a  jal         func_3A84A8
label_3aa110:
    if (ctx->pc == 0x3AA110u) {
        ctx->pc = 0x3AA110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA10Cu;
        // 0x3aa110: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA114u;
        goto label_3aa114;
    }
    ctx->pc = 0x3AA10Cu;
    SET_GPR_U32(ctx, 31, 0x3AA114u);
    ctx->pc = 0x3AA110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA10Cu;
    // 0x3aa110: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3AA10Cu, 0x3AA114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA114u;
label_3aa114:
    // 0x3aa114: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3aa114u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3aa118:
    // 0x3aa118: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3aa118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3aa11c:
    // 0x3aa11c: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3aa11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3aa120:
    // 0x3aa120: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3aa120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3aa124:
    // 0x3aa124: 0xc0cd4ee  jal         func_3353B8
label_3aa128:
    if (ctx->pc == 0x3AA128u) {
        ctx->pc = 0x3AA128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA124u;
        // 0x3aa128: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA12Cu;
        goto label_3aa12c;
    }
    ctx->pc = 0x3AA124u;
    SET_GPR_U32(ctx, 31, 0x3AA12Cu);
    ctx->pc = 0x3AA128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA124u;
    // 0x3aa128: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3AA124u, 0x3AA12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA12Cu;
label_3aa12c:
    // 0x3aa12c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3aa12cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_3aa130:
    // 0x3aa130: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3aa130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3aa134:
    // 0x3aa134: 0x34630036  ori         $v1, $v1, 0x36
    ctx->pc = 0x3aa134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54);
label_3aa138:
    // 0x3aa138: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3aa138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3aa13c:
    // 0x3aa13c: 0xc0e858c  jal         func_3A1630
label_3aa140:
    if (ctx->pc == 0x3AA140u) {
        ctx->pc = 0x3AA140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA13Cu;
        // 0x3aa140: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA144u;
        goto label_3aa144;
    }
    ctx->pc = 0x3AA13Cu;
    SET_GPR_U32(ctx, 31, 0x3AA144u);
    ctx->pc = 0x3AA140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA13Cu;
    // 0x3aa140: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3AA13Cu, 0x3AA144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA144u;
label_3aa144:
    // 0x3aa144: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3aa144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3aa148:
    // 0x3aa148: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x3aa148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_3aa14c:
    // 0x3aa14c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3aa14cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3aa150:
    // 0x3aa150: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3aa150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3aa154:
    // 0x3aa154: 0x7ba60000  lq          $a2, 0x0($sp)
    ctx->pc = 0x3aa154u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3aa158:
    // 0x3aa158: 0x2429024  and         $s2, $s2, $v0
    ctx->pc = 0x3aa158u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_3aa15c:
    // 0x3aa15c: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x3aa15cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_3aa160:
    // 0x3aa160: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x3aa160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
label_3aa164:
    // 0x3aa164: 0xe62000c0  swc1        $f0, 0xC0($s1)
    ctx->pc = 0x3aa164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
label_3aa168:
    // 0x3aa168: 0x2509025  or          $s2, $s2, $s0
    ctx->pc = 0x3aa168u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 16));
label_3aa16c:
    // 0x3aa16c: 0x34630048  ori         $v1, $v1, 0x48
    ctx->pc = 0x3aa16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)72);
label_3aa170:
    // 0x3aa170: 0x3c046666  lui         $a0, 0x6666
    ctx->pc = 0x3aa170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26214 << 16));
label_3aa174:
    // 0x3aa174: 0xae2300b4  sw          $v1, 0xB4($s1)
    ctx->pc = 0x3aa174u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
label_3aa178:
    // 0x3aa178: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3aa178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_3aa17c:
    // 0x3aa17c: 0xae3200c4  sw          $s2, 0xC4($s1)
    ctx->pc = 0x3aa17cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 18));
label_3aa180:
    // 0x3aa180: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3aa180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3aa184:
    // 0x3aa184: 0x7e260010  sq          $a2, 0x10($s1)
    ctx->pc = 0x3aa184u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 6));
label_3aa188:
    // 0x3aa188: 0xae2400b0  sw          $a0, 0xB0($s1)
    ctx->pc = 0x3aa188u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 4));
label_3aa18c:
    // 0x3aa18c: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x3aa18cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
label_3aa190:
    // 0x3aa190: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3aa190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3aa194:
    // 0x3aa194: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3aa194u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3aa198:
    // 0x3aa198: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3aa198u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3aa19c:
    // 0x3aa19c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x3aa19cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3aa1a0:
    // 0x3aa1a0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3aa1a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3aa1a4:
    // 0x3aa1a4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3aa1a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3aa1a8:
    // 0x3aa1a8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3aa1a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3aa1ac:
    // 0x3aa1ac: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3aa1acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3aa1b0:
    // 0x3aa1b0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3aa1b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3aa1b4:
    // 0x3aa1b4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3aa1b4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3aa1b8:
    // 0x3aa1b8: 0x84c40070  lh          $a0, 0x70($a2)
    ctx->pc = 0x3aa1b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 112)));
label_3aa1bc:
    // 0x3aa1bc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3aa1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3aa1c0:
    // 0x3aa1c0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3aa1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3aa1c4:
    // 0x3aa1c4: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3aa1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3aa1c8:
    // 0x3aa1c8: 0x8cc30074  lw          $v1, 0x74($a2)
    ctx->pc = 0x3aa1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_3aa1cc:
    // 0x3aa1cc: 0x60f809  jalr        $v1
label_3aa1d0:
    if (ctx->pc == 0x3AA1D0u) {
        ctx->pc = 0x3AA1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA1CCu;
        // 0x3aa1d0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA1D4u;
        goto label_3aa1d4;
    }
    ctx->pc = 0x3AA1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3AA1D4u);
        ctx->pc = 0x3AA1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA1CCu;
        // 0x3aa1d0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA1CCu, 0x3AA1D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AA1D4u;
label_3aa1d4:
    // 0x3aa1d4: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x3aa1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_3aa1d8:
    // 0x3aa1d8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3aa1d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3aa1dc:
    // 0x3aa1dc: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3aa1dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3aa1e0:
    // 0x3aa1e0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3aa1e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3aa1e4:
    // 0x3aa1e4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3aa1e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3aa1e8:
    // 0x3aa1e8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3aa1e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3aa1ec:
    // 0x3aa1ec: 0x3e00008  jr          $ra
label_3aa1f0:
    if (ctx->pc == 0x3AA1F0u) {
        ctx->pc = 0x3AA1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA1ECu;
        // 0x3aa1f0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA1F4u;
        goto label_3aa1f4;
    }
    ctx->pc = 0x3AA1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AA1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA1ECu;
        // 0x3aa1f0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA1ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AA1F4u;
label_3aa1f4:
    // 0x3aa1f4: 0x0  nop
    ctx->pc = 0x3aa1f4u;
    // NOP
    ctx->pc = 0x3aa1f8u;
}
