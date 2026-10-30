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

// Function: sub_001D80E0
// Address: 0x1d80e0 - 0x1d8208
void sub_001D80E0_0x1d80e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D80E0_0x1d80e0");
#endif

    switch (ctx->pc) {
        case 0x1d8118u: goto label_1d8118;
        case 0x1d8134u: goto label_1d8134;
        case 0x1d8140u: goto label_1d8140;
        case 0x1d8150u: goto label_1d8150;
        case 0x1d8160u: goto label_1d8160;
        case 0x1d8170u: goto label_1d8170;
        case 0x1d8180u: goto label_1d8180;
        case 0x1d818cu: goto label_1d818c;
        case 0x1d819cu: goto label_1d819c;
        case 0x1d81acu: goto label_1d81ac;
        default: break;
    }

    ctx->pc = 0x1d80e0u;

    // 0x1d80e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d80e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d80e4: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x1d80e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x1d80e8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1d80e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1d80ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d80ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d80f0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1d80f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d80f4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d80f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1d80f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d80f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d80fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d80fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d8100: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1d8100u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1d8104: 0x14a20034  bne         $a1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1D8104u;
    {
        const bool branch_taken_0x1d8104 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D8108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8104u;
        // 0x1d8108: 0xac720840  sw          $s2, 0x840($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 2112), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8104) {
            ctx->pc = 0x1D81D8u;
            goto label_1d81d8;
        }
    }
    ctx->pc = 0x1D810Cu;
    // 0x1d810c: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1d810cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1d8110: 0xc06d20e  jal         func_1B4838
    ctx->pc = 0x1D8110u;
    SET_GPR_U32(ctx, 31, 0x1D8118u);
    ctx->pc = 0x1D8114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8110u;
    // 0x1d8114: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4838u, 0x1D8110u, 0x1D8118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8118u;
label_1d8118:
    // 0x1d8118: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1d8118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x1d811c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1d811cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1d8120: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1d8120u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d8124: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x1d8124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
    // 0x1d8128: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1d8128u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x1d812c: 0xc04418e  jal         func_110638
    ctx->pc = 0x1D812Cu;
    SET_GPR_U32(ctx, 31, 0x1D8134u);
    ctx->pc = 0x1D8130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D812Cu;
    // 0x1d8130: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x110638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110638u, 0x1D812Cu, 0x1D8134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8134u;
label_1d8134:
    // 0x1d8134: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x1d8134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
    // 0x1d8138: 0xc04416c  jal         func_1105B0
    ctx->pc = 0x1D8138u;
    SET_GPR_U32(ctx, 31, 0x1D8140u);
    ctx->pc = 0x1D813Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8138u;
    // 0x1d813c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1105B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1105B0u, 0x1D8138u, 0x1D8140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8140u;
label_1d8140:
    // 0x1d8140: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x1d8140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
    // 0x1d8144: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d8144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8148: 0xc1062a2  jal         func_418A88
    ctx->pc = 0x1D8148u;
    SET_GPR_U32(ctx, 31, 0x1D8150u);
    ctx->pc = 0x1D814Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8148u;
    // 0x1d814c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418A88u, 0x1D8148u, 0x1D8150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8150u;
label_1d8150:
    // 0x1d8150: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x1d8150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
    // 0x1d8154: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d8154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8158: 0xc1062a2  jal         func_418A88
    ctx->pc = 0x1D8158u;
    SET_GPR_U32(ctx, 31, 0x1D8160u);
    ctx->pc = 0x1D815Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8158u;
    // 0x1d815c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418A88u, 0x1D8158u, 0x1D8160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8160u;
label_1d8160:
    // 0x1d8160: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x1d8160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
    // 0x1d8164: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d8164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8168: 0xc1062aa  jal         func_418AA8
    ctx->pc = 0x1D8168u;
    SET_GPR_U32(ctx, 31, 0x1D8170u);
    ctx->pc = 0x1D816Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8168u;
    // 0x1d816c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418AA8u, 0x1D8168u, 0x1D8170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8170u;
label_1d8170:
    // 0x1d8170: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x1d8170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
    // 0x1d8174: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d8174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8178: 0xc1062aa  jal         func_418AA8
    ctx->pc = 0x1D8178u;
    SET_GPR_U32(ctx, 31, 0x1D8180u);
    ctx->pc = 0x1D817Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8178u;
    // 0x1d817c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418AA8u, 0x1D8178u, 0x1D8180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8180u;
label_1d8180:
    // 0x1d8180: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x1d8180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
    // 0x1d8184: 0xc1062b2  jal         func_418AC8
    ctx->pc = 0x1D8184u;
    SET_GPR_U32(ctx, 31, 0x1D818Cu);
    ctx->pc = 0x1D8188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8184u;
    // 0x1d8188: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418AC8u, 0x1D8184u, 0x1D818Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D818Cu;
label_1d818c:
    // 0x1d818c: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x1d818cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
    // 0x1d8190: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d8190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8194: 0xc106904  jal         func_41A410
    ctx->pc = 0x1D8194u;
    SET_GPR_U32(ctx, 31, 0x1D819Cu);
    ctx->pc = 0x1D8198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8194u;
    // 0x1d8198: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A410u, 0x1D8194u, 0x1D819Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D819Cu;
label_1d819c:
    // 0x1d819c: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x1d819cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
    // 0x1d81a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d81a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d81a4: 0xc106904  jal         func_41A410
    ctx->pc = 0x1D81A4u;
    SET_GPR_U32(ctx, 31, 0x1D81ACu);
    ctx->pc = 0x1D81A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D81A4u;
    // 0x1d81a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A410u, 0x1D81A4u, 0x1D81ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D81ACu;
label_1d81ac:
    // 0x1d81ac: 0x8e23aa84  lw          $v1, -0x557C($s1)
    ctx->pc = 0x1d81acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
    // 0x1d81b0: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1d81b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x1d81b4: 0x8e05489c  lw          $a1, 0x489C($s0)
    ctx->pc = 0x1d81b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
    // 0x1d81b8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1d81b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1d81bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d81bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d81c0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1d81c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1d81c4: 0xa4a00454  sh          $zero, 0x454($a1)
    ctx->pc = 0x1d81c4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1108), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d81c8: 0xaca00438  sw          $zero, 0x438($a1)
    ctx->pc = 0x1d81c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1080), GPR_U32(ctx, 0));
    // 0x1d81cc: 0xac607aa8  sw          $zero, 0x7AA8($v1)
    ctx->pc = 0x1d81ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 31400), GPR_U32(ctx, 0));
    // 0x1d81d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D81D0u;
    {
        const bool branch_taken_0x1d81d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D81D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D81D0u;
        // 0x1d81d4: 0xac92ed14  sw          $s2, -0x12EC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294962452), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d81d0) {
            ctx->pc = 0x1D81ECu;
            goto label_1d81ec;
        }
    }
    ctx->pc = 0x1D81D8u;
label_1d81d8:
    // 0x1d81d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d81d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d81dc: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D81DCu;
    {
        const bool branch_taken_0x1d81dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D81E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D81DCu;
        // 0x1d81e0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d81dc) {
            ctx->pc = 0x1D81F0u;
            goto label_1d81f0;
        }
    }
    ctx->pc = 0x1D81E4u;
    // 0x1d81e4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d81e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d81e8: 0xac40ed14  sw          $zero, -0x12EC($v0)
    ctx->pc = 0x1d81e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50ED14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50ED14u, _value); } while (0);
label_1d81ec:
    // 0x1d81ec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d81ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d81f0:
    // 0x1d81f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d81f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d81f4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1d81f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d81f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d81f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d81fc: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1d81fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d8200: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8200u;
        // 0x1d8204: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8208u;
}
