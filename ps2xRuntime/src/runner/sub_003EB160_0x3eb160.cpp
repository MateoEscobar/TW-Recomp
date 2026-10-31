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

// Function: sub_003EB160
// Address: 0x3eb160 - 0x3eb240
void sub_003EB160_0x3eb160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EB160_0x3eb160");
#endif

    switch (ctx->pc) {
        case 0x3eb160u: goto label_3eb160;
        case 0x3eb164u: goto label_3eb164;
        case 0x3eb168u: goto label_3eb168;
        case 0x3eb16cu: goto label_3eb16c;
        case 0x3eb170u: goto label_3eb170;
        case 0x3eb174u: goto label_3eb174;
        case 0x3eb178u: goto label_3eb178;
        case 0x3eb17cu: goto label_3eb17c;
        case 0x3eb180u: goto label_3eb180;
        case 0x3eb184u: goto label_3eb184;
        case 0x3eb188u: goto label_3eb188;
        case 0x3eb18cu: goto label_3eb18c;
        case 0x3eb190u: goto label_3eb190;
        case 0x3eb194u: goto label_3eb194;
        case 0x3eb198u: goto label_3eb198;
        case 0x3eb19cu: goto label_3eb19c;
        case 0x3eb1a0u: goto label_3eb1a0;
        case 0x3eb1a4u: goto label_3eb1a4;
        case 0x3eb1a8u: goto label_3eb1a8;
        case 0x3eb1acu: goto label_3eb1ac;
        case 0x3eb1b0u: goto label_3eb1b0;
        case 0x3eb1b4u: goto label_3eb1b4;
        case 0x3eb1b8u: goto label_3eb1b8;
        case 0x3eb1bcu: goto label_3eb1bc;
        case 0x3eb1c0u: goto label_3eb1c0;
        case 0x3eb1c4u: goto label_3eb1c4;
        case 0x3eb1c8u: goto label_3eb1c8;
        case 0x3eb1ccu: goto label_3eb1cc;
        case 0x3eb1d0u: goto label_3eb1d0;
        case 0x3eb1d4u: goto label_3eb1d4;
        case 0x3eb1d8u: goto label_3eb1d8;
        case 0x3eb1dcu: goto label_3eb1dc;
        case 0x3eb1e0u: goto label_3eb1e0;
        case 0x3eb1e4u: goto label_3eb1e4;
        case 0x3eb1e8u: goto label_3eb1e8;
        case 0x3eb1ecu: goto label_3eb1ec;
        case 0x3eb1f0u: goto label_3eb1f0;
        case 0x3eb1f4u: goto label_3eb1f4;
        case 0x3eb1f8u: goto label_3eb1f8;
        case 0x3eb1fcu: goto label_3eb1fc;
        case 0x3eb200u: goto label_3eb200;
        case 0x3eb204u: goto label_3eb204;
        case 0x3eb208u: goto label_3eb208;
        case 0x3eb20cu: goto label_3eb20c;
        case 0x3eb210u: goto label_3eb210;
        case 0x3eb214u: goto label_3eb214;
        case 0x3eb218u: goto label_3eb218;
        case 0x3eb21cu: goto label_3eb21c;
        case 0x3eb220u: goto label_3eb220;
        case 0x3eb224u: goto label_3eb224;
        case 0x3eb228u: goto label_3eb228;
        case 0x3eb22cu: goto label_3eb22c;
        case 0x3eb230u: goto label_3eb230;
        case 0x3eb234u: goto label_3eb234;
        case 0x3eb238u: goto label_3eb238;
        case 0x3eb23cu: goto label_3eb23c;
        default: break;
    }

    ctx->pc = 0x3eb160u;

label_3eb160:
    // 0x3eb160: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3eb160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3eb164:
    // 0x3eb164: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3eb164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3eb168:
    // 0x3eb168: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3eb168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3eb16c:
    // 0x3eb16c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3eb16cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3eb170:
    // 0x3eb170: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3eb170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3eb174:
    // 0x3eb174: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3eb174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3eb178:
    // 0x3eb178: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3eb178u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3eb17c:
    // 0x3eb17c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3eb17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3eb180:
    // 0x3eb180: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3eb180u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3eb184:
    // 0x3eb184: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3eb184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3eb188:
    // 0x3eb188: 0x40f809  jalr        $v0
label_3eb18c:
    if (ctx->pc == 0x3EB18Cu) {
        ctx->pc = 0x3EB18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB188u;
        // 0x3eb18c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB190u;
        goto label_3eb190;
    }
    ctx->pc = 0x3EB188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EB190u);
        ctx->pc = 0x3EB18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB188u;
        // 0x3eb18c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB188u, 0x3EB190u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EB190u;
label_3eb190:
    // 0x3eb190: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3eb190u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3eb194:
    // 0x3eb194: 0xc0ea14c  jal         func_3A8530
label_3eb198:
    if (ctx->pc == 0x3EB198u) {
        ctx->pc = 0x3EB198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB194u;
        // 0x3eb198: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB19Cu;
        goto label_3eb19c;
    }
    ctx->pc = 0x3EB194u;
    SET_GPR_U32(ctx, 31, 0x3EB19Cu);
    ctx->pc = 0x3EB198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB194u;
    // 0x3eb198: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3EB194u, 0x3EB19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB19Cu;
label_3eb19c:
    // 0x3eb19c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3eb19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3eb1a0:
    // 0x3eb1a0: 0xc0ea12a  jal         func_3A84A8
label_3eb1a4:
    if (ctx->pc == 0x3EB1A4u) {
        ctx->pc = 0x3EB1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB1A0u;
        // 0x3eb1a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB1A8u;
        goto label_3eb1a8;
    }
    ctx->pc = 0x3EB1A0u;
    SET_GPR_U32(ctx, 31, 0x3EB1A8u);
    ctx->pc = 0x3EB1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB1A0u;
    // 0x3eb1a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EB1A0u, 0x3EB1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB1A8u;
label_3eb1a8:
    // 0x3eb1a8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3eb1a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3eb1ac:
    // 0x3eb1ac: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3eb1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3eb1b0:
    // 0x3eb1b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3eb1b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3eb1b4:
    // 0x3eb1b4: 0xc0ea12a  jal         func_3A84A8
label_3eb1b8:
    if (ctx->pc == 0x3EB1B8u) {
        ctx->pc = 0x3EB1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB1B4u;
        // 0x3eb1b8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB1BCu;
        goto label_3eb1bc;
    }
    ctx->pc = 0x3EB1B4u;
    SET_GPR_U32(ctx, 31, 0x3EB1BCu);
    ctx->pc = 0x3EB1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB1B4u;
    // 0x3eb1b8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EB1B4u, 0x3EB1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB1BCu;
label_3eb1bc:
    // 0x3eb1bc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3eb1bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3eb1c0:
    // 0x3eb1c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3eb1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3eb1c4:
    // 0x3eb1c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3eb1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3eb1c8:
    // 0x3eb1c8: 0xc0e858c  jal         func_3A1630
label_3eb1cc:
    if (ctx->pc == 0x3EB1CCu) {
        ctx->pc = 0x3EB1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB1C8u;
        // 0x3eb1cc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB1D0u;
        goto label_3eb1d0;
    }
    ctx->pc = 0x3EB1C8u;
    SET_GPR_U32(ctx, 31, 0x3EB1D0u);
    ctx->pc = 0x3EB1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB1C8u;
    // 0x3eb1cc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3EB1C8u, 0x3EB1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB1D0u;
label_3eb1d0:
    // 0x3eb1d0: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3eb1d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3eb1d4:
    // 0x3eb1d4: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x3eb1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_3eb1d8:
    // 0x3eb1d8: 0x7ba60010  lq          $a2, 0x10($sp)
    ctx->pc = 0x3eb1d8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3eb1dc:
    // 0x3eb1dc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3eb1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_3eb1e0:
    // 0x3eb1e0: 0x3c0580da  lui         $a1, 0x80DA
    ctx->pc = 0x3eb1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32986 << 16));
label_3eb1e4:
    // 0x3eb1e4: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3eb1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_3eb1e8:
    // 0x3eb1e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3eb1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3eb1ec:
    // 0x3eb1ec: 0x7e060020  sq          $a2, 0x20($s0)
    ctx->pc = 0x3eb1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 6));
label_3eb1f0:
    // 0x3eb1f0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3eb1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3eb1f4:
    // 0x3eb1f4: 0xc0e9132  jal         func_3A44C8
label_3eb1f8:
    if (ctx->pc == 0x3EB1F8u) {
        ctx->pc = 0x3EB1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB1F4u;
        // 0x3eb1f8: 0x34a526fd  ori         $a1, $a1, 0x26FD (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)9981);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB1FCu;
        goto label_3eb1fc;
    }
    ctx->pc = 0x3EB1F4u;
    SET_GPR_U32(ctx, 31, 0x3EB1FCu);
    ctx->pc = 0x3EB1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB1F4u;
    // 0x3eb1f8: 0x34a526fd  ori         $a1, $a1, 0x26FD (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)9981);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3EB1F4u, 0x3EB1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB1FCu;
label_3eb1fc:
    // 0x3eb1fc: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x3eb1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_3eb200:
    // 0x3eb200: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x3eb200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3eb204:
    // 0x3eb204: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3eb204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3eb208:
    // 0x3eb208: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3eb208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3eb20c:
    // 0x3eb20c: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x3eb20cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_3eb210:
    // 0x3eb210: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x3eb210u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_3eb214:
    // 0x3eb214: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x3eb214u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_3eb218:
    // 0x3eb218: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x3eb218u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_3eb21c:
    // 0x3eb21c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3eb21cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_3eb220:
    // 0x3eb220: 0xa222000c  sb          $v0, 0xC($s1)
    ctx->pc = 0x3eb220u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 2));
label_3eb224:
    // 0x3eb224: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x3eb224u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
label_3eb228:
    // 0x3eb228: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3eb228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3eb22c:
    // 0x3eb22c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3eb22cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3eb230:
    // 0x3eb230: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3eb230u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3eb234:
    // 0x3eb234: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3eb234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3eb238:
    // 0x3eb238: 0x3e00008  jr          $ra
label_3eb23c:
    if (ctx->pc == 0x3EB23Cu) {
        ctx->pc = 0x3EB23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB238u;
        // 0x3eb23c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB240u;
        goto label_fallthrough_0x3eb238;
    }
    ctx->pc = 0x3EB238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EB23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB238u;
        // 0x3eb23c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3eb238:
    ctx->pc = 0x3EB240u;
}
