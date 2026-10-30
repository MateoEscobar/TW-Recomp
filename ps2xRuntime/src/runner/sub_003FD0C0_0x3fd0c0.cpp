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

// Function: sub_003FD0C0
// Address: 0x3fd0c0 - 0x3fd1c0
void sub_003FD0C0_0x3fd0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FD0C0_0x3fd0c0");
#endif

    switch (ctx->pc) {
        case 0x3fd0c0u: goto label_3fd0c0;
        case 0x3fd0c4u: goto label_3fd0c4;
        case 0x3fd0c8u: goto label_3fd0c8;
        case 0x3fd0ccu: goto label_3fd0cc;
        case 0x3fd0d0u: goto label_3fd0d0;
        case 0x3fd0d4u: goto label_3fd0d4;
        case 0x3fd0d8u: goto label_3fd0d8;
        case 0x3fd0dcu: goto label_3fd0dc;
        case 0x3fd0e0u: goto label_3fd0e0;
        case 0x3fd0e4u: goto label_3fd0e4;
        case 0x3fd0e8u: goto label_3fd0e8;
        case 0x3fd0ecu: goto label_3fd0ec;
        case 0x3fd0f0u: goto label_3fd0f0;
        case 0x3fd0f4u: goto label_3fd0f4;
        case 0x3fd0f8u: goto label_3fd0f8;
        case 0x3fd0fcu: goto label_3fd0fc;
        case 0x3fd100u: goto label_3fd100;
        case 0x3fd104u: goto label_3fd104;
        case 0x3fd108u: goto label_3fd108;
        case 0x3fd10cu: goto label_3fd10c;
        case 0x3fd110u: goto label_3fd110;
        case 0x3fd114u: goto label_3fd114;
        case 0x3fd118u: goto label_3fd118;
        case 0x3fd11cu: goto label_3fd11c;
        case 0x3fd120u: goto label_3fd120;
        case 0x3fd124u: goto label_3fd124;
        case 0x3fd128u: goto label_3fd128;
        case 0x3fd12cu: goto label_3fd12c;
        case 0x3fd130u: goto label_3fd130;
        case 0x3fd134u: goto label_3fd134;
        case 0x3fd138u: goto label_3fd138;
        case 0x3fd13cu: goto label_3fd13c;
        case 0x3fd140u: goto label_3fd140;
        case 0x3fd144u: goto label_3fd144;
        case 0x3fd148u: goto label_3fd148;
        case 0x3fd14cu: goto label_3fd14c;
        case 0x3fd150u: goto label_3fd150;
        case 0x3fd154u: goto label_3fd154;
        case 0x3fd158u: goto label_3fd158;
        case 0x3fd15cu: goto label_3fd15c;
        case 0x3fd160u: goto label_3fd160;
        case 0x3fd164u: goto label_3fd164;
        case 0x3fd168u: goto label_3fd168;
        case 0x3fd16cu: goto label_3fd16c;
        case 0x3fd170u: goto label_3fd170;
        case 0x3fd174u: goto label_3fd174;
        case 0x3fd178u: goto label_3fd178;
        case 0x3fd17cu: goto label_3fd17c;
        case 0x3fd180u: goto label_3fd180;
        case 0x3fd184u: goto label_3fd184;
        case 0x3fd188u: goto label_3fd188;
        case 0x3fd18cu: goto label_3fd18c;
        case 0x3fd190u: goto label_3fd190;
        case 0x3fd194u: goto label_3fd194;
        case 0x3fd198u: goto label_3fd198;
        case 0x3fd19cu: goto label_3fd19c;
        case 0x3fd1a0u: goto label_3fd1a0;
        case 0x3fd1a4u: goto label_3fd1a4;
        case 0x3fd1a8u: goto label_3fd1a8;
        case 0x3fd1acu: goto label_3fd1ac;
        case 0x3fd1b0u: goto label_3fd1b0;
        case 0x3fd1b4u: goto label_3fd1b4;
        case 0x3fd1b8u: goto label_3fd1b8;
        case 0x3fd1bcu: goto label_3fd1bc;
        default: break;
    }

    ctx->pc = 0x3fd0c0u;

label_3fd0c0:
    // 0x3fd0c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3fd0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3fd0c4:
    // 0x3fd0c4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3fd0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3fd0c8:
    // 0x3fd0c8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3fd0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3fd0cc:
    // 0x3fd0cc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3fd0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3fd0d0:
    // 0x3fd0d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3fd0d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fd0d4:
    // 0x3fd0d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3fd0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3fd0d8:
    // 0x3fd0d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3fd0d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3fd0dc:
    // 0x3fd0dc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3fd0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3fd0e0:
    // 0x3fd0e0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3fd0e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3fd0e4:
    // 0x3fd0e4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3fd0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3fd0e8:
    // 0x3fd0e8: 0x40f809  jalr        $v0
label_3fd0ec:
    if (ctx->pc == 0x3FD0ECu) {
        ctx->pc = 0x3FD0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD0E8u;
        // 0x3fd0ec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD0F0u;
        goto label_3fd0f0;
    }
    ctx->pc = 0x3FD0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FD0F0u);
        ctx->pc = 0x3FD0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD0E8u;
        // 0x3fd0ec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FD0E8u, 0x3FD0F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FD0F0u;
label_3fd0f0:
    // 0x3fd0f0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3fd0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3fd0f4:
    // 0x3fd0f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3fd0f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fd0f8:
    // 0x3fd0f8: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3fd0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3fd0fc:
    // 0x3fd0fc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3fd0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3fd100:
    // 0x3fd100: 0xc0e858c  jal         func_3A1630
label_3fd104:
    if (ctx->pc == 0x3FD104u) {
        ctx->pc = 0x3FD104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD100u;
        // 0x3fd104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD108u;
        goto label_3fd108;
    }
    ctx->pc = 0x3FD100u;
    SET_GPR_U32(ctx, 31, 0x3FD108u);
    ctx->pc = 0x3FD104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD100u;
    // 0x3fd104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3FD100u, 0x3FD108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD108u;
label_3fd108:
    // 0x3fd108: 0xc0ea14c  jal         func_3A8530
label_3fd10c:
    if (ctx->pc == 0x3FD10Cu) {
        ctx->pc = 0x3FD10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD108u;
        // 0x3fd10c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD110u;
        goto label_3fd110;
    }
    ctx->pc = 0x3FD108u;
    SET_GPR_U32(ctx, 31, 0x3FD110u);
    ctx->pc = 0x3FD10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD108u;
    // 0x3fd10c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3FD108u, 0x3FD110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD110u;
label_3fd110:
    // 0x3fd110: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3fd110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3fd114:
    // 0x3fd114: 0xc0ea12a  jal         func_3A84A8
label_3fd118:
    if (ctx->pc == 0x3FD118u) {
        ctx->pc = 0x3FD118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD114u;
        // 0x3fd118: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD11Cu;
        goto label_3fd11c;
    }
    ctx->pc = 0x3FD114u;
    SET_GPR_U32(ctx, 31, 0x3FD11Cu);
    ctx->pc = 0x3FD118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD114u;
    // 0x3fd118: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3FD114u, 0x3FD11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD11Cu;
label_3fd11c:
    // 0x3fd11c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3fd11cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fd120:
    // 0x3fd120: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3fd120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fd124:
    // 0x3fd124: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3fd124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3fd128:
    // 0x3fd128: 0xc0ea12a  jal         func_3A84A8
label_3fd12c:
    if (ctx->pc == 0x3FD12Cu) {
        ctx->pc = 0x3FD12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD128u;
        // 0x3fd12c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD130u;
        goto label_3fd130;
    }
    ctx->pc = 0x3FD128u;
    SET_GPR_U32(ctx, 31, 0x3FD130u);
    ctx->pc = 0x3FD12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD128u;
    // 0x3fd12c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3FD128u, 0x3FD130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD130u;
label_3fd130:
    // 0x3fd130: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3fd130u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fd134:
    // 0x3fd134: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x3fd134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_3fd138:
    // 0x3fd138: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3fd138u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3fd13c:
    // 0x3fd13c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3fd13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3fd140:
    // 0x3fd140: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3fd140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3fd144:
    // 0x3fd144: 0xc08a200  jal         func_228800
label_3fd148:
    if (ctx->pc == 0x3FD148u) {
        ctx->pc = 0x3FD148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD144u;
        // 0x3fd148: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD14Cu;
        goto label_3fd14c;
    }
    ctx->pc = 0x3FD144u;
    SET_GPR_U32(ctx, 31, 0x3FD14Cu);
    ctx->pc = 0x3FD148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD144u;
    // 0x3fd148: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x3FD144u, 0x3FD14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD14Cu;
label_3fd14c:
    // 0x3fd14c: 0x84430118  lh          $v1, 0x118($v0)
    ctx->pc = 0x3fd14cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
label_3fd150:
    // 0x3fd150: 0x24040065  addiu       $a0, $zero, 0x65
    ctx->pc = 0x3fd150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_3fd154:
    // 0x3fd154: 0xc08a200  jal         func_228800
label_3fd158:
    if (ctx->pc == 0x3FD158u) {
        ctx->pc = 0x3FD158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD154u;
        // 0x3fd158: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD15Cu;
        goto label_3fd15c;
    }
    ctx->pc = 0x3FD154u;
    SET_GPR_U32(ctx, 31, 0x3FD15Cu);
    ctx->pc = 0x3FD158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD154u;
    // 0x3fd158: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x3FD154u, 0x3FD15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD15Cu;
label_3fd15c:
    // 0x3fd15c: 0x84430118  lh          $v1, 0x118($v0)
    ctx->pc = 0x3fd15cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
label_3fd160:
    // 0x3fd160: 0x24040066  addiu       $a0, $zero, 0x66
    ctx->pc = 0x3fd160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_3fd164:
    // 0x3fd164: 0xc08a200  jal         func_228800
label_3fd168:
    if (ctx->pc == 0x3FD168u) {
        ctx->pc = 0x3FD168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD164u;
        // 0x3fd168: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD16Cu;
        goto label_3fd16c;
    }
    ctx->pc = 0x3FD164u;
    SET_GPR_U32(ctx, 31, 0x3FD16Cu);
    ctx->pc = 0x3FD168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD164u;
    // 0x3fd168: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x3FD164u, 0x3FD16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD16Cu;
label_3fd16c:
    // 0x3fd16c: 0x84430118  lh          $v1, 0x118($v0)
    ctx->pc = 0x3fd16cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
label_3fd170:
    // 0x3fd170: 0x24040067  addiu       $a0, $zero, 0x67
    ctx->pc = 0x3fd170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
label_3fd174:
    // 0x3fd174: 0xc08a200  jal         func_228800
label_3fd178:
    if (ctx->pc == 0x3FD178u) {
        ctx->pc = 0x3FD178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD174u;
        // 0x3fd178: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD17Cu;
        goto label_3fd17c;
    }
    ctx->pc = 0x3FD174u;
    SET_GPR_U32(ctx, 31, 0x3FD17Cu);
    ctx->pc = 0x3FD178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD174u;
    // 0x3fd178: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x3FD174u, 0x3FD17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD17Cu;
label_3fd17c:
    // 0x3fd17c: 0x84430118  lh          $v1, 0x118($v0)
    ctx->pc = 0x3fd17cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
label_3fd180:
    // 0x3fd180: 0x24040068  addiu       $a0, $zero, 0x68
    ctx->pc = 0x3fd180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_3fd184:
    // 0x3fd184: 0xc08a200  jal         func_228800
label_3fd188:
    if (ctx->pc == 0x3FD188u) {
        ctx->pc = 0x3FD188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD184u;
        // 0x3fd188: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD18Cu;
        goto label_3fd18c;
    }
    ctx->pc = 0x3FD184u;
    SET_GPR_U32(ctx, 31, 0x3FD18Cu);
    ctx->pc = 0x3FD188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD184u;
    // 0x3fd188: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x3FD184u, 0x3FD18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD18Cu;
label_3fd18c:
    // 0x3fd18c: 0x84430118  lh          $v1, 0x118($v0)
    ctx->pc = 0x3fd18cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
label_3fd190:
    // 0x3fd190: 0x24040069  addiu       $a0, $zero, 0x69
    ctx->pc = 0x3fd190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_3fd194:
    // 0x3fd194: 0xc08a200  jal         func_228800
label_3fd198:
    if (ctx->pc == 0x3FD198u) {
        ctx->pc = 0x3FD198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD194u;
        // 0x3fd198: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD19Cu;
        goto label_3fd19c;
    }
    ctx->pc = 0x3FD194u;
    SET_GPR_U32(ctx, 31, 0x3FD19Cu);
    ctx->pc = 0x3FD198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD194u;
    // 0x3fd198: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x3FD194u, 0x3FD19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD19Cu;
label_3fd19c:
    // 0x3fd19c: 0x84430118  lh          $v1, 0x118($v0)
    ctx->pc = 0x3fd19cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
label_3fd1a0:
    // 0x3fd1a0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3fd1a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3fd1a4:
    // 0x3fd1a4: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x3fd1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_3fd1a8:
    // 0x3fd1a8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3fd1a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3fd1ac:
    // 0x3fd1ac: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3fd1acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3fd1b0:
    // 0x3fd1b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3fd1b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3fd1b4:
    // 0x3fd1b4: 0x3e00008  jr          $ra
label_3fd1b8:
    if (ctx->pc == 0x3FD1B8u) {
        ctx->pc = 0x3FD1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD1B4u;
        // 0x3fd1b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD1BCu;
        goto label_3fd1bc;
    }
    ctx->pc = 0x3FD1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FD1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD1B4u;
        // 0x3fd1b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FD1B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FD1BCu;
label_3fd1bc:
    // 0x3fd1bc: 0x0  nop
    ctx->pc = 0x3fd1bcu;
    // NOP
    ctx->pc = 0x3fd1c0u;
}
