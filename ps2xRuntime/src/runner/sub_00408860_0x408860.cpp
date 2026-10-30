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

// Function: sub_00408860
// Address: 0x408860 - 0x408a00
void sub_00408860_0x408860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00408860_0x408860");
#endif

    switch (ctx->pc) {
        case 0x408860u: goto label_408860;
        case 0x408864u: goto label_408864;
        case 0x408868u: goto label_408868;
        case 0x40886cu: goto label_40886c;
        case 0x408870u: goto label_408870;
        case 0x408874u: goto label_408874;
        case 0x408878u: goto label_408878;
        case 0x40887cu: goto label_40887c;
        case 0x408880u: goto label_408880;
        case 0x408884u: goto label_408884;
        case 0x408888u: goto label_408888;
        case 0x40888cu: goto label_40888c;
        case 0x408890u: goto label_408890;
        case 0x408894u: goto label_408894;
        case 0x408898u: goto label_408898;
        case 0x40889cu: goto label_40889c;
        case 0x4088a0u: goto label_4088a0;
        case 0x4088a4u: goto label_4088a4;
        case 0x4088a8u: goto label_4088a8;
        case 0x4088acu: goto label_4088ac;
        case 0x4088b0u: goto label_4088b0;
        case 0x4088b4u: goto label_4088b4;
        case 0x4088b8u: goto label_4088b8;
        case 0x4088bcu: goto label_4088bc;
        case 0x4088c0u: goto label_4088c0;
        case 0x4088c4u: goto label_4088c4;
        case 0x4088c8u: goto label_4088c8;
        case 0x4088ccu: goto label_4088cc;
        case 0x4088d0u: goto label_4088d0;
        case 0x4088d4u: goto label_4088d4;
        case 0x4088d8u: goto label_4088d8;
        case 0x4088dcu: goto label_4088dc;
        case 0x4088e0u: goto label_4088e0;
        case 0x4088e4u: goto label_4088e4;
        case 0x4088e8u: goto label_4088e8;
        case 0x4088ecu: goto label_4088ec;
        case 0x4088f0u: goto label_4088f0;
        case 0x4088f4u: goto label_4088f4;
        case 0x4088f8u: goto label_4088f8;
        case 0x4088fcu: goto label_4088fc;
        case 0x408900u: goto label_408900;
        case 0x408904u: goto label_408904;
        case 0x408908u: goto label_408908;
        case 0x40890cu: goto label_40890c;
        case 0x408910u: goto label_408910;
        case 0x408914u: goto label_408914;
        case 0x408918u: goto label_408918;
        case 0x40891cu: goto label_40891c;
        case 0x408920u: goto label_408920;
        case 0x408924u: goto label_408924;
        case 0x408928u: goto label_408928;
        case 0x40892cu: goto label_40892c;
        case 0x408930u: goto label_408930;
        case 0x408934u: goto label_408934;
        case 0x408938u: goto label_408938;
        case 0x40893cu: goto label_40893c;
        case 0x408940u: goto label_408940;
        case 0x408944u: goto label_408944;
        case 0x408948u: goto label_408948;
        case 0x40894cu: goto label_40894c;
        case 0x408950u: goto label_408950;
        case 0x408954u: goto label_408954;
        case 0x408958u: goto label_408958;
        case 0x40895cu: goto label_40895c;
        case 0x408960u: goto label_408960;
        case 0x408964u: goto label_408964;
        case 0x408968u: goto label_408968;
        case 0x40896cu: goto label_40896c;
        case 0x408970u: goto label_408970;
        case 0x408974u: goto label_408974;
        case 0x408978u: goto label_408978;
        case 0x40897cu: goto label_40897c;
        case 0x408980u: goto label_408980;
        case 0x408984u: goto label_408984;
        case 0x408988u: goto label_408988;
        case 0x40898cu: goto label_40898c;
        case 0x408990u: goto label_408990;
        case 0x408994u: goto label_408994;
        case 0x408998u: goto label_408998;
        case 0x40899cu: goto label_40899c;
        case 0x4089a0u: goto label_4089a0;
        case 0x4089a4u: goto label_4089a4;
        case 0x4089a8u: goto label_4089a8;
        case 0x4089acu: goto label_4089ac;
        case 0x4089b0u: goto label_4089b0;
        case 0x4089b4u: goto label_4089b4;
        case 0x4089b8u: goto label_4089b8;
        case 0x4089bcu: goto label_4089bc;
        case 0x4089c0u: goto label_4089c0;
        case 0x4089c4u: goto label_4089c4;
        case 0x4089c8u: goto label_4089c8;
        case 0x4089ccu: goto label_4089cc;
        case 0x4089d0u: goto label_4089d0;
        case 0x4089d4u: goto label_4089d4;
        case 0x4089d8u: goto label_4089d8;
        case 0x4089dcu: goto label_4089dc;
        case 0x4089e0u: goto label_4089e0;
        case 0x4089e4u: goto label_4089e4;
        case 0x4089e8u: goto label_4089e8;
        case 0x4089ecu: goto label_4089ec;
        case 0x4089f0u: goto label_4089f0;
        case 0x4089f4u: goto label_4089f4;
        case 0x4089f8u: goto label_4089f8;
        case 0x4089fcu: goto label_4089fc;
        default: break;
    }

    ctx->pc = 0x408860u;

label_408860:
    // 0x408860: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x408860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_408864:
    // 0x408864: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x408864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_408868:
    // 0x408868: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x408868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_40886c:
    // 0x40886c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40886cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_408870:
    // 0x408870: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x408870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_408874:
    // 0x408874: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x408874u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_408878:
    // 0x408878: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x408878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_40887c:
    // 0x40887c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x40887cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_408880:
    // 0x408880: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x408880u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_408884:
    // 0x408884: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x408884u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_408888:
    // 0x408888: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x408888u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_40888c:
    // 0x40888c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x40888cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_408890:
    // 0x408890: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x408890u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_408894:
    // 0x408894: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x408894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_408898:
    // 0x408898: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x408898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_40889c:
    // 0x40889c: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x40889cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
label_4088a0:
    // 0x4088a0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x4088a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_4088a4:
    // 0x4088a4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x4088a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_4088a8:
    // 0x4088a8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x4088a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_4088ac:
    // 0x4088ac: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x4088acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_4088b0:
    // 0x4088b0: 0x40f809  jalr        $v0
label_4088b4:
    if (ctx->pc == 0x4088B4u) {
        ctx->pc = 0x4088B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4088B0u;
        // 0x4088b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4088B8u;
        goto label_4088b8;
    }
    ctx->pc = 0x4088B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4088B8u);
        ctx->pc = 0x4088B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4088B0u;
        // 0x4088b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4088B0u, 0x4088B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4088B8u;
label_4088b8:
    // 0x4088b8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4088b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4088bc:
    // 0x4088bc: 0xc0ea146  jal         func_3A8518
label_4088c0:
    if (ctx->pc == 0x4088C0u) {
        ctx->pc = 0x4088C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4088BCu;
        // 0x4088c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4088C4u;
        goto label_4088c4;
    }
    ctx->pc = 0x4088BCu;
    SET_GPR_U32(ctx, 31, 0x4088C4u);
    ctx->pc = 0x4088C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4088BCu;
    // 0x4088c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x4088BCu, 0x4088C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4088C4u;
label_4088c4:
    // 0x4088c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4088c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4088c8:
    // 0x4088c8: 0xc0ea13a  jal         func_3A84E8
label_4088cc:
    if (ctx->pc == 0x4088CCu) {
        ctx->pc = 0x4088CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4088C8u;
        // 0x4088cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4088D0u;
        goto label_4088d0;
    }
    ctx->pc = 0x4088C8u;
    SET_GPR_U32(ctx, 31, 0x4088D0u);
    ctx->pc = 0x4088CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4088C8u;
    // 0x4088cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x4088C8u, 0x4088D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4088D0u;
label_4088d0:
    // 0x4088d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4088d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4088d4:
    // 0x4088d4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x4088d4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_4088d8:
    // 0x4088d8: 0xc0ea12a  jal         func_3A84A8
label_4088dc:
    if (ctx->pc == 0x4088DCu) {
        ctx->pc = 0x4088DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4088D8u;
        // 0x4088dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4088E0u;
        goto label_4088e0;
    }
    ctx->pc = 0x4088D8u;
    SET_GPR_U32(ctx, 31, 0x4088E0u);
    ctx->pc = 0x4088DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4088D8u;
    // 0x4088dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x4088D8u, 0x4088E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4088E0u;
label_4088e0:
    // 0x4088e0: 0x3c028b7d  lui         $v0, 0x8B7D
    ctx->pc = 0x4088e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35709 << 16));
label_4088e4:
    // 0x4088e4: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x4088e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_4088e8:
    // 0x4088e8: 0x34426994  ori         $v0, $v0, 0x6994
    ctx->pc = 0x4088e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27028);
label_4088ec:
    // 0x4088ec: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x4088ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_4088f0:
    // 0x4088f0: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x4088f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
label_4088f4:
    // 0x4088f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4088f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4088f8:
    // 0x4088f8: 0xc0e858c  jal         func_3A1630
label_4088fc:
    if (ctx->pc == 0x4088FCu) {
        ctx->pc = 0x4088FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4088F8u;
        // 0x4088fc: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408900u;
        goto label_408900;
    }
    ctx->pc = 0x4088F8u;
    SET_GPR_U32(ctx, 31, 0x408900u);
    ctx->pc = 0x4088FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4088F8u;
    // 0x4088fc: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x4088F8u, 0x408900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408900u;
label_408900:
    // 0x408900: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x408900u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_408904:
    // 0x408904: 0x4614a802  mul.s       $f0, $f21, $f20
    ctx->pc = 0x408904u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
label_408908:
    // 0x408908: 0xe61400bc  swc1        $f20, 0xBC($s0)
    ctx->pc = 0x408908u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
label_40890c:
    // 0x40890c: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x40890cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_408910:
    // 0x408910: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x408910u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_408914:
    // 0x408914: 0x2631b8b8  addiu       $s1, $s1, -0x4748
    ctx->pc = 0x408914u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294949048));
label_408918:
    // 0x408918: 0xe6750004  swc1        $f21, 0x4($s3)
    ctx->pc = 0x408918u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_40891c:
    // 0x40891c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x40891cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_408920:
    // 0x408920: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x408920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_408924:
    // 0x408924: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x408924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_408928:
    // 0x408928: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x408928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
label_40892c:
    // 0x40892c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x40892cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_408930:
    // 0x408930: 0xae1200b4  sw          $s2, 0xB4($s0)
    ctx->pc = 0x408930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 18));
label_408934:
    // 0x408934: 0xae1200b0  sw          $s2, 0xB0($s0)
    ctx->pc = 0x408934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 18));
label_408938:
    // 0x408938: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x408938u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_40893c:
    // 0x40893c: 0xc0cd4ee  jal         func_3353B8
label_408940:
    if (ctx->pc == 0x408940u) {
        ctx->pc = 0x408940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40893Cu;
        // 0x408940: 0xae0200c4  sw          $v0, 0xC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408944u;
        goto label_408944;
    }
    ctx->pc = 0x40893Cu;
    SET_GPR_U32(ctx, 31, 0x408944u);
    ctx->pc = 0x408940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40893Cu;
    // 0x408940: 0xae0200c4  sw          $v0, 0xC4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x40893Cu, 0x408944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408944u;
label_408944:
    // 0x408944: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x408944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_408948:
    // 0x408948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x408948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40894c:
    // 0x40894c: 0x34a5002a  ori         $a1, $a1, 0x2A
    ctx->pc = 0x40894cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)42);
label_408950:
    // 0x408950: 0xc0e9404  jal         func_3A5010
label_408954:
    if (ctx->pc == 0x408954u) {
        ctx->pc = 0x408954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408950u;
        // 0x408954: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408958u;
        goto label_408958;
    }
    ctx->pc = 0x408950u;
    SET_GPR_U32(ctx, 31, 0x408958u);
    ctx->pc = 0x408954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408950u;
    // 0x408954: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5010u, 0x408950u, 0x408958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408958u;
label_408958:
    // 0x408958: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x408958u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_40895c:
    // 0x40895c: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x40895cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_408960:
    // 0x408960: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x408960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_408964:
    // 0x408964: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x408964u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_408968:
    // 0x408968: 0x86420070  lh          $v0, 0x70($s2)
    ctx->pc = 0x408968u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 112)));
label_40896c:
    // 0x40896c: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x40896cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_408970:
    // 0x408970: 0x26520070  addiu       $s2, $s2, 0x70
    ctx->pc = 0x408970u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_408974:
    // 0x408974: 0xc0cd518  jal         func_335460
label_408978:
    if (ctx->pc == 0x408978u) {
        ctx->pc = 0x408978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408974u;
        // 0x408978: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40897Cu;
        goto label_40897c;
    }
    ctx->pc = 0x408974u;
    SET_GPR_U32(ctx, 31, 0x40897Cu);
    ctx->pc = 0x408978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408974u;
    // 0x408978: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x408974u, 0x40897Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40897Cu;
label_40897c:
    // 0x40897c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x40897cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_408980:
    // 0x408980: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x408980u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_408984:
    // 0x408984: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x408984u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_408988:
    // 0x408988: 0xc0cd518  jal         func_335460
label_40898c:
    if (ctx->pc == 0x40898Cu) {
        ctx->pc = 0x40898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408988u;
        // 0x40898c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408990u;
        goto label_408990;
    }
    ctx->pc = 0x408988u;
    SET_GPR_U32(ctx, 31, 0x408990u);
    ctx->pc = 0x40898Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408988u;
    // 0x40898c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x408988u, 0x408990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408990u;
label_408990:
    // 0x408990: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x408990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_408994:
    // 0x408994: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x408994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_408998:
    // 0x408998: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x408998u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_40899c:
    // 0x40899c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x40899cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_4089a0:
    // 0x4089a0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x4089a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4089a4:
    // 0x4089a4: 0xc0cd518  jal         func_335460
label_4089a8:
    if (ctx->pc == 0x4089A8u) {
        ctx->pc = 0x4089A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4089A4u;
        // 0x4089a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4089ACu;
        goto label_4089ac;
    }
    ctx->pc = 0x4089A4u;
    SET_GPR_U32(ctx, 31, 0x4089ACu);
    ctx->pc = 0x4089A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4089A4u;
    // 0x4089a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4089A4u, 0x4089ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4089ACu;
label_4089ac:
    // 0x4089ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4089acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4089b0:
    // 0x4089b0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x4089b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_4089b4:
    // 0x4089b4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x4089b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_4089b8:
    // 0x4089b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4089b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4089bc:
    // 0x4089bc: 0xc0cd55c  jal         func_335570
label_4089c0:
    if (ctx->pc == 0x4089C0u) {
        ctx->pc = 0x4089C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4089BCu;
        // 0x4089c0: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4089C4u;
        goto label_4089c4;
    }
    ctx->pc = 0x4089BCu;
    SET_GPR_U32(ctx, 31, 0x4089C4u);
    ctx->pc = 0x4089C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4089BCu;
    // 0x4089c0: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x4089BCu, 0x4089C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4089C4u;
label_4089c4:
    // 0x4089c4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4089c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4089c8:
    // 0x4089c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4089c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4089cc:
    // 0x4089cc: 0x40f809  jalr        $v0
label_4089d0:
    if (ctx->pc == 0x4089D0u) {
        ctx->pc = 0x4089D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4089CCu;
        // 0x4089d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4089D4u;
        goto label_4089d4;
    }
    ctx->pc = 0x4089CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4089D4u);
        ctx->pc = 0x4089D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4089CCu;
        // 0x4089d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4089CCu, 0x4089D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4089D4u;
label_4089d4:
    // 0x4089d4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4089d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4089d8:
    // 0x4089d8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4089d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4089dc:
    // 0x4089dc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4089dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4089e0:
    // 0x4089e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4089e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4089e4:
    // 0x4089e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4089e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4089e8:
    // 0x4089e8: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x4089e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_4089ec:
    // 0x4089ec: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x4089ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4089f0:
    // 0x4089f0: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x4089f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4089f4:
    // 0x4089f4: 0x3e00008  jr          $ra
label_4089f8:
    if (ctx->pc == 0x4089F8u) {
        ctx->pc = 0x4089F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4089F4u;
        // 0x4089f8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4089FCu;
        goto label_4089fc;
    }
    ctx->pc = 0x4089F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4089F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4089F4u;
        // 0x4089f8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4089F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4089FCu;
label_4089fc:
    // 0x4089fc: 0x0  nop
    ctx->pc = 0x4089fcu;
    // NOP
    ctx->pc = 0x408a00u;
}
