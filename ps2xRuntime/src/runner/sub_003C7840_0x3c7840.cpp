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

// Function: sub_003C7840
// Address: 0x3c7840 - 0x3c7930
void sub_003C7840_0x3c7840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C7840_0x3c7840");
#endif

    switch (ctx->pc) {
        case 0x3c7840u: goto label_3c7840;
        case 0x3c7844u: goto label_3c7844;
        case 0x3c7848u: goto label_3c7848;
        case 0x3c784cu: goto label_3c784c;
        case 0x3c7850u: goto label_3c7850;
        case 0x3c7854u: goto label_3c7854;
        case 0x3c7858u: goto label_3c7858;
        case 0x3c785cu: goto label_3c785c;
        case 0x3c7860u: goto label_3c7860;
        case 0x3c7864u: goto label_3c7864;
        case 0x3c7868u: goto label_3c7868;
        case 0x3c786cu: goto label_3c786c;
        case 0x3c7870u: goto label_3c7870;
        case 0x3c7874u: goto label_3c7874;
        case 0x3c7878u: goto label_3c7878;
        case 0x3c787cu: goto label_3c787c;
        case 0x3c7880u: goto label_3c7880;
        case 0x3c7884u: goto label_3c7884;
        case 0x3c7888u: goto label_3c7888;
        case 0x3c788cu: goto label_3c788c;
        case 0x3c7890u: goto label_3c7890;
        case 0x3c7894u: goto label_3c7894;
        case 0x3c7898u: goto label_3c7898;
        case 0x3c789cu: goto label_3c789c;
        case 0x3c78a0u: goto label_3c78a0;
        case 0x3c78a4u: goto label_3c78a4;
        case 0x3c78a8u: goto label_3c78a8;
        case 0x3c78acu: goto label_3c78ac;
        case 0x3c78b0u: goto label_3c78b0;
        case 0x3c78b4u: goto label_3c78b4;
        case 0x3c78b8u: goto label_3c78b8;
        case 0x3c78bcu: goto label_3c78bc;
        case 0x3c78c0u: goto label_3c78c0;
        case 0x3c78c4u: goto label_3c78c4;
        case 0x3c78c8u: goto label_3c78c8;
        case 0x3c78ccu: goto label_3c78cc;
        case 0x3c78d0u: goto label_3c78d0;
        case 0x3c78d4u: goto label_3c78d4;
        case 0x3c78d8u: goto label_3c78d8;
        case 0x3c78dcu: goto label_3c78dc;
        case 0x3c78e0u: goto label_3c78e0;
        case 0x3c78e4u: goto label_3c78e4;
        case 0x3c78e8u: goto label_3c78e8;
        case 0x3c78ecu: goto label_3c78ec;
        case 0x3c78f0u: goto label_3c78f0;
        case 0x3c78f4u: goto label_3c78f4;
        case 0x3c78f8u: goto label_3c78f8;
        case 0x3c78fcu: goto label_3c78fc;
        case 0x3c7900u: goto label_3c7900;
        case 0x3c7904u: goto label_3c7904;
        case 0x3c7908u: goto label_3c7908;
        case 0x3c790cu: goto label_3c790c;
        case 0x3c7910u: goto label_3c7910;
        case 0x3c7914u: goto label_3c7914;
        case 0x3c7918u: goto label_3c7918;
        case 0x3c791cu: goto label_3c791c;
        case 0x3c7920u: goto label_3c7920;
        case 0x3c7924u: goto label_3c7924;
        case 0x3c7928u: goto label_3c7928;
        case 0x3c792cu: goto label_3c792c;
        default: break;
    }

    ctx->pc = 0x3c7840u;

label_3c7840:
    // 0x3c7840: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3c7840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3c7844:
    // 0x3c7844: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3c7844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3c7848:
    // 0x3c7848: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3c7848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3c784c:
    // 0x3c784c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c784cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3c7850:
    // 0x3c7850: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c7850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c7854:
    // 0x3c7854: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c7854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3c7858:
    // 0x3c7858: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3c7858u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c785c:
    // 0x3c785c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c785cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c7860:
    // 0x3c7860: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c7860u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c7864:
    // 0x3c7864: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c7864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c7868:
    // 0x3c7868: 0x40f809  jalr        $v0
label_3c786c:
    if (ctx->pc == 0x3C786Cu) {
        ctx->pc = 0x3C786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7868u;
        // 0x3c786c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7870u;
        goto label_3c7870;
    }
    ctx->pc = 0x3C7868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C7870u);
        ctx->pc = 0x3C786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7868u;
        // 0x3c786c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7868u, 0x3C7870u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C7870u;
label_3c7870:
    // 0x3c7870: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c7870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c7874:
    // 0x3c7874: 0xc0ea146  jal         func_3A8518
label_3c7878:
    if (ctx->pc == 0x3C7878u) {
        ctx->pc = 0x3C7878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7874u;
        // 0x3c7878: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C787Cu;
        goto label_3c787c;
    }
    ctx->pc = 0x3C7874u;
    SET_GPR_U32(ctx, 31, 0x3C787Cu);
    ctx->pc = 0x3C7878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7874u;
    // 0x3c7878: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3C7874u, 0x3C787Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C787Cu;
label_3c787c:
    // 0x3c787c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3c787cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3c7880:
    // 0x3c7880: 0xc0ea13a  jal         func_3A84E8
label_3c7884:
    if (ctx->pc == 0x3C7884u) {
        ctx->pc = 0x3C7884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7880u;
        // 0x3c7884: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7888u;
        goto label_3c7888;
    }
    ctx->pc = 0x3C7880u;
    SET_GPR_U32(ctx, 31, 0x3C7888u);
    ctx->pc = 0x3C7884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7880u;
    // 0x3c7884: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3C7880u, 0x3C7888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7888u;
label_3c7888:
    // 0x3c7888: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3c7888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c788c:
    // 0x3c788c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x3c788cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_3c7890:
    // 0x3c7890: 0xc0ea12a  jal         func_3A84A8
label_3c7894:
    if (ctx->pc == 0x3C7894u) {
        ctx->pc = 0x3C7894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7890u;
        // 0x3c7894: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7898u;
        goto label_3c7898;
    }
    ctx->pc = 0x3C7890u;
    SET_GPR_U32(ctx, 31, 0x3C7898u);
    ctx->pc = 0x3C7894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7890u;
    // 0x3c7894: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C7890u, 0x3C7898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7898u;
label_3c7898:
    // 0x3c7898: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3c7898u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c789c:
    // 0x3c789c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3c789cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3c78a0:
    // 0x3c78a0: 0x3c0140b0  lui         $at, 0x40B0
    ctx->pc = 0x3c78a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16560 << 16));
label_3c78a4:
    // 0x3c78a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3c78a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c78a8:
    // 0x3c78a8: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3c78a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3c78ac:
    // 0x3c78ac: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3c78acu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3c78b0:
    // 0x3c78b0: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x3c78b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_3c78b4:
    // 0x3c78b4: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x3c78b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c78b8:
    // 0x3c78b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3c78b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3c78bc:
    // 0x3c78bc: 0xc0cd4ee  jal         func_3353B8
label_3c78c0:
    if (ctx->pc == 0x3C78C0u) {
        ctx->pc = 0x3C78C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C78BCu;
        // 0x3c78c0: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C78C4u;
        goto label_3c78c4;
    }
    ctx->pc = 0x3C78BCu;
    SET_GPR_U32(ctx, 31, 0x3C78C4u);
    ctx->pc = 0x3C78C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C78BCu;
    // 0x3c78c0: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3C78BCu, 0x3C78C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C78C4u;
label_3c78c4:
    // 0x3c78c4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3c78c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_3c78c8:
    // 0x3c78c8: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x3c78c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_3c78cc:
    // 0x3c78cc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3c78ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3c78d0:
    // 0x3c78d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c78d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c78d4:
    // 0x3c78d4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3c78d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3c78d8:
    // 0x3c78d8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3c78d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c78dc:
    // 0x3c78dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3c78dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c78e0:
    // 0x3c78e0: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x3c78e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_3c78e4:
    // 0x3c78e4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x3c78e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_3c78e8:
    // 0x3c78e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3c78e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3c78ec:
    // 0x3c78ec: 0xc0e858c  jal         func_3A1630
label_3c78f0:
    if (ctx->pc == 0x3C78F0u) {
        ctx->pc = 0x3C78F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C78ECu;
        // 0x3c78f0: 0xae2200c4  sw          $v0, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C78F4u;
        goto label_3c78f4;
    }
    ctx->pc = 0x3C78ECu;
    SET_GPR_U32(ctx, 31, 0x3C78F4u);
    ctx->pc = 0x3C78F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C78ECu;
    // 0x3c78f0: 0xae2200c4  sw          $v0, 0xC4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3C78ECu, 0x3C78F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C78F4u;
label_3c78f4:
    // 0x3c78f4: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x3c78f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c78f8:
    // 0x3c78f8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3c78f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3c78fc:
    // 0x3c78fc: 0x3442ff80  ori         $v0, $v0, 0xFF80
    ctx->pc = 0x3c78fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
label_3c7900:
    // 0x3c7900: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c7900u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c7904:
    // 0x3c7904: 0xe62100bc  swc1        $f1, 0xBC($s1)
    ctx->pc = 0x3c7904u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 188), bits); }
label_3c7908:
    // 0x3c7908: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c7908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3c790c:
    // 0x3c790c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x3c790cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c7910:
    // 0x3c7910: 0xe62000c0  swc1        $f0, 0xC0($s1)
    ctx->pc = 0x3c7910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
label_3c7914:
    // 0x3c7914: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3c7914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3c7918:
    // 0x3c7918: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x3c7918u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
label_3c791c:
    // 0x3c791c: 0xae2000b0  sw          $zero, 0xB0($s1)
    ctx->pc = 0x3c791cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
label_3c7920:
    // 0x3c7920: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3c7920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c7924:
    // 0x3c7924: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3c7924u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c7928:
    // 0x3c7928: 0x3e00008  jr          $ra
label_3c792c:
    if (ctx->pc == 0x3C792Cu) {
        ctx->pc = 0x3C792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7928u;
        // 0x3c792c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7930u;
        goto label_fallthrough_0x3c7928;
    }
    ctx->pc = 0x3C7928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7928u;
        // 0x3c792c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c7928:
    ctx->pc = 0x3C7930u;
}
