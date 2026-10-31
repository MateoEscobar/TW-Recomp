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

// Function: sub_003B00C8
// Address: 0x3b00c8 - 0x3b01e0
void sub_003B00C8_0x3b00c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B00C8_0x3b00c8");
#endif

    switch (ctx->pc) {
        case 0x3b00c8u: goto label_3b00c8;
        case 0x3b00ccu: goto label_3b00cc;
        case 0x3b00d0u: goto label_3b00d0;
        case 0x3b00d4u: goto label_3b00d4;
        case 0x3b00d8u: goto label_3b00d8;
        case 0x3b00dcu: goto label_3b00dc;
        case 0x3b00e0u: goto label_3b00e0;
        case 0x3b00e4u: goto label_3b00e4;
        case 0x3b00e8u: goto label_3b00e8;
        case 0x3b00ecu: goto label_3b00ec;
        case 0x3b00f0u: goto label_3b00f0;
        case 0x3b00f4u: goto label_3b00f4;
        case 0x3b00f8u: goto label_3b00f8;
        case 0x3b00fcu: goto label_3b00fc;
        case 0x3b0100u: goto label_3b0100;
        case 0x3b0104u: goto label_3b0104;
        case 0x3b0108u: goto label_3b0108;
        case 0x3b010cu: goto label_3b010c;
        case 0x3b0110u: goto label_3b0110;
        case 0x3b0114u: goto label_3b0114;
        case 0x3b0118u: goto label_3b0118;
        case 0x3b011cu: goto label_3b011c;
        case 0x3b0120u: goto label_3b0120;
        case 0x3b0124u: goto label_3b0124;
        case 0x3b0128u: goto label_3b0128;
        case 0x3b012cu: goto label_3b012c;
        case 0x3b0130u: goto label_3b0130;
        case 0x3b0134u: goto label_3b0134;
        case 0x3b0138u: goto label_3b0138;
        case 0x3b013cu: goto label_3b013c;
        case 0x3b0140u: goto label_3b0140;
        case 0x3b0144u: goto label_3b0144;
        case 0x3b0148u: goto label_3b0148;
        case 0x3b014cu: goto label_3b014c;
        case 0x3b0150u: goto label_3b0150;
        case 0x3b0154u: goto label_3b0154;
        case 0x3b0158u: goto label_3b0158;
        case 0x3b015cu: goto label_3b015c;
        case 0x3b0160u: goto label_3b0160;
        case 0x3b0164u: goto label_3b0164;
        case 0x3b0168u: goto label_3b0168;
        case 0x3b016cu: goto label_3b016c;
        case 0x3b0170u: goto label_3b0170;
        case 0x3b0174u: goto label_3b0174;
        case 0x3b0178u: goto label_3b0178;
        case 0x3b017cu: goto label_3b017c;
        case 0x3b0180u: goto label_3b0180;
        case 0x3b0184u: goto label_3b0184;
        case 0x3b0188u: goto label_3b0188;
        case 0x3b018cu: goto label_3b018c;
        case 0x3b0190u: goto label_3b0190;
        case 0x3b0194u: goto label_3b0194;
        case 0x3b0198u: goto label_3b0198;
        case 0x3b019cu: goto label_3b019c;
        case 0x3b01a0u: goto label_3b01a0;
        case 0x3b01a4u: goto label_3b01a4;
        case 0x3b01a8u: goto label_3b01a8;
        case 0x3b01acu: goto label_3b01ac;
        case 0x3b01b0u: goto label_3b01b0;
        case 0x3b01b4u: goto label_3b01b4;
        case 0x3b01b8u: goto label_3b01b8;
        case 0x3b01bcu: goto label_3b01bc;
        case 0x3b01c0u: goto label_3b01c0;
        case 0x3b01c4u: goto label_3b01c4;
        case 0x3b01c8u: goto label_3b01c8;
        case 0x3b01ccu: goto label_3b01cc;
        case 0x3b01d0u: goto label_3b01d0;
        case 0x3b01d4u: goto label_3b01d4;
        case 0x3b01d8u: goto label_3b01d8;
        case 0x3b01dcu: goto label_3b01dc;
        default: break;
    }

    ctx->pc = 0x3b00c8u;

label_3b00c8:
    // 0x3b00c8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3b00c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3b00cc:
    // 0x3b00cc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3b00ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3b00d0:
    // 0x3b00d0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3b00d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3b00d4:
    // 0x3b00d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b00d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b00d8:
    // 0x3b00d8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3b00d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3b00dc:
    // 0x3b00dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b00dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b00e0:
    // 0x3b00e0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3b00e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3b00e4:
    // 0x3b00e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b00e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3b00e8:
    // 0x3b00e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b00e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b00ec:
    // 0x3b00ec: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3b00ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3b00f0:
    // 0x3b00f0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3b00f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3b00f4:
    // 0x3b00f4: 0x40f809  jalr        $v0
label_3b00f8:
    if (ctx->pc == 0x3B00F8u) {
        ctx->pc = 0x3B00F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B00F4u;
        // 0x3b00f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B00FCu;
        goto label_3b00fc;
    }
    ctx->pc = 0x3B00F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B00FCu);
        ctx->pc = 0x3B00F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B00F4u;
        // 0x3b00f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B00F4u, 0x3B00FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B00FCu;
label_3b00fc:
    // 0x3b00fc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3b00fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b0100:
    // 0x3b0100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b0100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b0104:
    // 0x3b0104: 0xc0e858c  jal         func_3A1630
label_3b0108:
    if (ctx->pc == 0x3B0108u) {
        ctx->pc = 0x3B0108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0104u;
        // 0x3b0108: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B010Cu;
        goto label_3b010c;
    }
    ctx->pc = 0x3B0104u;
    SET_GPR_U32(ctx, 31, 0x3B010Cu);
    ctx->pc = 0x3B0108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0104u;
    // 0x3b0108: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3B0104u, 0x3B010Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B010Cu;
label_3b010c:
    // 0x3b010c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3b010cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3b0110:
    // 0x3b0110: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b0110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b0114:
    // 0x3b0114: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x3b0114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3b0118:
    // 0x3b0118: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b0118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b011c:
    // 0x3b011c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3b011cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3b0120:
    // 0x3b0120: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x3b0120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
label_3b0124:
    // 0x3b0124: 0xc0ea12a  jal         func_3A84A8
label_3b0128:
    if (ctx->pc == 0x3B0128u) {
        ctx->pc = 0x3B0128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0124u;
        // 0x3b0128: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B012Cu;
        goto label_3b012c;
    }
    ctx->pc = 0x3B0124u;
    SET_GPR_U32(ctx, 31, 0x3B012Cu);
    ctx->pc = 0x3B0128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0124u;
    // 0x3b0128: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3B0124u, 0x3B012Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B012Cu;
label_3b012c:
    // 0x3b012c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3b012cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b0130:
    // 0x3b0130: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b0130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b0134:
    // 0x3b0134: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b0134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b0138:
    // 0x3b0138: 0xc0ea12a  jal         func_3A84A8
label_3b013c:
    if (ctx->pc == 0x3B013Cu) {
        ctx->pc = 0x3B013Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0138u;
        // 0x3b013c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0140u;
        goto label_3b0140;
    }
    ctx->pc = 0x3B0138u;
    SET_GPR_U32(ctx, 31, 0x3B0140u);
    ctx->pc = 0x3B013Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0138u;
    // 0x3b013c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3B0138u, 0x3B0140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0140u;
label_3b0140:
    // 0x3b0140: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3b0140u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b0144:
    // 0x3b0144: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b0144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b0148:
    // 0x3b0148: 0xc0ea146  jal         func_3A8518
label_3b014c:
    if (ctx->pc == 0x3B014Cu) {
        ctx->pc = 0x3B014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0148u;
        // 0x3b014c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0150u;
        goto label_3b0150;
    }
    ctx->pc = 0x3B0148u;
    SET_GPR_U32(ctx, 31, 0x3B0150u);
    ctx->pc = 0x3B014Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0148u;
    // 0x3b014c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B0148u, 0x3B0150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0150u;
label_3b0150:
    // 0x3b0150: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3b0150u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b0154:
    // 0x3b0154: 0xc0ea14c  jal         func_3A8530
label_3b0158:
    if (ctx->pc == 0x3B0158u) {
        ctx->pc = 0x3B0158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0154u;
        // 0x3b0158: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B015Cu;
        goto label_3b015c;
    }
    ctx->pc = 0x3B0154u;
    SET_GPR_U32(ctx, 31, 0x3B015Cu);
    ctx->pc = 0x3B0158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0154u;
    // 0x3b0158: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3B0154u, 0x3B015Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B015Cu;
label_3b015c:
    // 0x3b015c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3b015cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b0160:
    // 0x3b0160: 0xc0e862e  jal         func_3A18B8
label_3b0164:
    if (ctx->pc == 0x3B0164u) {
        ctx->pc = 0x3B0164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0160u;
        // 0x3b0164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0168u;
        goto label_3b0168;
    }
    ctx->pc = 0x3B0160u;
    SET_GPR_U32(ctx, 31, 0x3B0168u);
    ctx->pc = 0x3B0164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0160u;
    // 0x3b0164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18B8u, 0x3B0160u, 0x3B0168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0168u;
label_3b0168:
    // 0x3b0168: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3b0168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b016c:
    // 0x3b016c: 0xc0e896c  jal         func_3A25B0
label_3b0170:
    if (ctx->pc == 0x3B0170u) {
        ctx->pc = 0x3B0170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B016Cu;
        // 0x3b0170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0174u;
        goto label_3b0174;
    }
    ctx->pc = 0x3B016Cu;
    SET_GPR_U32(ctx, 31, 0x3B0174u);
    ctx->pc = 0x3B0170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B016Cu;
    // 0x3b0170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B0u, 0x3B016Cu, 0x3B0174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0174u;
label_3b0174:
    // 0x3b0174: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3b0174u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3b0178:
    // 0x3b0178: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3b0178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3b017c:
    // 0x3b017c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x3b017cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b0180:
    // 0x3b0180: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x3b0180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_3b0184:
    // 0x3b0184: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3b0184u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_3b0188:
    // 0x3b0188: 0x84c40070  lh          $a0, 0x70($a2)
    ctx->pc = 0x3b0188u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 112)));
label_3b018c:
    // 0x3b018c: 0x8cc30074  lw          $v1, 0x74($a2)
    ctx->pc = 0x3b018cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_3b0190:
    // 0x3b0190: 0x60f809  jalr        $v1
label_3b0194:
    if (ctx->pc == 0x3B0194u) {
        ctx->pc = 0x3B0194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0190u;
        // 0x3b0194: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0198u;
        goto label_3b0198;
    }
    ctx->pc = 0x3B0190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B0198u);
        ctx->pc = 0x3B0194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0190u;
        // 0x3b0194: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0190u, 0x3B0198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B0198u;
label_3b0198:
    // 0x3b0198: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3b0198u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b019c:
    // 0x3b019c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b019cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b01a0:
    // 0x3b01a0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b01a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b01a4:
    // 0x3b01a4: 0xc0e90ca  jal         func_3A4328
label_3b01a8:
    if (ctx->pc == 0x3B01A8u) {
        ctx->pc = 0x3B01A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B01A4u;
        // 0x3b01a8: 0x7e620010  sq          $v0, 0x10($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B01ACu;
        goto label_3b01ac;
    }
    ctx->pc = 0x3B01A4u;
    SET_GPR_U32(ctx, 31, 0x3B01ACu);
    ctx->pc = 0x3B01A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B01A4u;
    // 0x3b01a8: 0x7e620010  sq          $v0, 0x10($s3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3B01A4u, 0x3B01ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B01ACu;
label_3b01ac:
    // 0x3b01ac: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3b01acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b01b0:
    // 0x3b01b0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3b01b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3b01b4:
    // 0x3b01b4: 0xae620024  sw          $v0, 0x24($s3)
    ctx->pc = 0x3b01b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
label_3b01b8:
    // 0x3b01b8: 0x7e630000  sq          $v1, 0x0($s3)
    ctx->pc = 0x3b01b8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 3));
label_3b01bc:
    // 0x3b01bc: 0xae600020  sw          $zero, 0x20($s3)
    ctx->pc = 0x3b01bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
label_3b01c0:
    // 0x3b01c0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3b01c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b01c4:
    // 0x3b01c4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3b01c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b01c8:
    // 0x3b01c8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3b01c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b01cc:
    // 0x3b01cc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3b01ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b01d0:
    // 0x3b01d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b01d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3b01d4:
    // 0x3b01d4: 0x3e00008  jr          $ra
label_3b01d8:
    if (ctx->pc == 0x3B01D8u) {
        ctx->pc = 0x3B01D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B01D4u;
        // 0x3b01d8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B01DCu;
        goto label_3b01dc;
    }
    ctx->pc = 0x3B01D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B01D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B01D4u;
        // 0x3b01d8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B01D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B01DCu;
label_3b01dc:
    // 0x3b01dc: 0x0  nop
    ctx->pc = 0x3b01dcu;
    // NOP
    ctx->pc = 0x3b01e0u;
}
