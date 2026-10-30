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

// Function: sub_001B32E0
// Address: 0x1b32e0 - 0x1b3610
void sub_001B32E0_0x1b32e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B32E0_0x1b32e0");
#endif

    switch (ctx->pc) {
        case 0x1b3348u: goto label_1b3348;
        case 0x1b3360u: goto label_1b3360;
        case 0x1b337cu: goto label_1b337c;
        case 0x1b3394u: goto label_1b3394;
        case 0x1b33a8u: goto label_1b33a8;
        case 0x1b33c4u: goto label_1b33c4;
        case 0x1b33dcu: goto label_1b33dc;
        case 0x1b343cu: goto label_1b343c;
        case 0x1b3454u: goto label_1b3454;
        case 0x1b3470u: goto label_1b3470;
        case 0x1b3488u: goto label_1b3488;
        case 0x1b349cu: goto label_1b349c;
        case 0x1b34b8u: goto label_1b34b8;
        case 0x1b34d0u: goto label_1b34d0;
        case 0x1b3518u: goto label_1b3518;
        case 0x1b3530u: goto label_1b3530;
        case 0x1b3544u: goto label_1b3544;
        case 0x1b355cu: goto label_1b355c;
        case 0x1b3574u: goto label_1b3574;
        case 0x1b3588u: goto label_1b3588;
        case 0x1b35a8u: goto label_1b35a8;
        case 0x1b35c0u: goto label_1b35c0;
        case 0x1b35d4u: goto label_1b35d4;
        case 0x1b35ecu: goto label_1b35ec;
        default: break;
    }

    ctx->pc = 0x1b32e0u;

    // 0x1b32e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b32e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b32e4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b32e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b32e8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b32e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1b32ec: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1b32ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1b32f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b32f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b32f4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b32f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1b32f8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b32f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b32fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b32fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b3300: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b3304: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x1b3304u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1b3308: 0x14c2003a  bne         $a2, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1B3308u;
    {
        const bool branch_taken_0x1b3308 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3308u;
        // 0x1b330c: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3308) {
            ctx->pc = 0x1B33F4u;
            goto label_1b33f4;
        }
    }
    ctx->pc = 0x1B3310u;
    // 0x1b3310: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1b3310u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x1b3314: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1b3314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1b3318: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b3318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b331c: 0xc64cd424  lwc1        $f12, -0x2BDC($s2)
    ctx->pc = 0x1b331cu;
    { uint32_t bits = FAST_READ32(0x50D424u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b3320: 0x263015d0  addiu       $s0, $s1, 0x15D0
    ctx->pc = 0x1b3320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 5584));
    // 0x1b3324: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3328: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x1b3328u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x1b332c: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x1b332cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1b3330: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b3330u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3334: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1b3334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1b3338: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b3338u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b333c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1b333cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1b3340: 0xc0711da  jal         func_1C4768
    ctx->pc = 0x1B3340u;
    SET_GPR_U32(ctx, 31, 0x1B3348u);
    ctx->pc = 0x1B3344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3340u;
    // 0x1b3344: 0x26313f10  addiu       $s1, $s1, 0x3F10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4768u, 0x1B3340u, 0x1B3348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3348u;
label_1b3348:
    // 0x1b3348: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1b3348u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x1b334c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b334cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3350: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b3350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3354: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1b3354u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1b3358: 0xc071230  jal         func_1C48C0
    ctx->pc = 0x1B3358u;
    SET_GPR_U32(ctx, 31, 0x1B3360u);
    ctx->pc = 0x1B335Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3358u;
    // 0x1b335c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C48C0u, 0x1B3358u, 0x1B3360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3360u;
label_1b3360:
    // 0x1b3360: 0xc64cd424  lwc1        $f12, -0x2BDC($s2)
    ctx->pc = 0x1b3360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294956068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b3364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3368: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b3368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b336c: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x1b336cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x1b3370: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x1b3370u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x1b3374: 0xc0711da  jal         func_1C4768
    ctx->pc = 0x1B3374u;
    SET_GPR_U32(ctx, 31, 0x1B337Cu);
    ctx->pc = 0x1B3378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3374u;
    // 0x1b3378: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4768u, 0x1B3374u, 0x1B337Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B337Cu;
label_1b337c:
    // 0x1b337c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1b337cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x1b3380: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3384: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b3384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3388: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1b3388u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1b338c: 0xc071230  jal         func_1C48C0
    ctx->pc = 0x1B338Cu;
    SET_GPR_U32(ctx, 31, 0x1B3394u);
    ctx->pc = 0x1B3390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B338Cu;
    // 0x1b3390: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C48C0u, 0x1B338Cu, 0x1B3394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3394u;
label_1b3394:
    // 0x1b3394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3398: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b3398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b339c: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1b339cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b33a0: 0xc07114a  jal         func_1C4528
    ctx->pc = 0x1B33A0u;
    SET_GPR_U32(ctx, 31, 0x1B33A8u);
    ctx->pc = 0x1B33A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B33A0u;
    // 0x1b33a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4528u, 0x1B33A0u, 0x1B33A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B33A8u;
label_1b33a8:
    // 0x1b33a8: 0xc64cd424  lwc1        $f12, -0x2BDC($s2)
    ctx->pc = 0x1b33a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294956068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b33ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b33acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b33b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b33b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b33b4: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x1b33b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1b33b8: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x1b33b8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x1b33bc: 0xc0711da  jal         func_1C4768
    ctx->pc = 0x1B33BCu;
    SET_GPR_U32(ctx, 31, 0x1B33C4u);
    ctx->pc = 0x1B33C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B33BCu;
    // 0x1b33c0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4768u, 0x1B33BCu, 0x1B33C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B33C4u;
label_1b33c4:
    // 0x1b33c4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1b33c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x1b33c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b33c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b33cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b33ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b33d0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1b33d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1b33d4: 0xc071230  jal         func_1C48C0
    ctx->pc = 0x1B33D4u;
    SET_GPR_U32(ctx, 31, 0x1B33DCu);
    ctx->pc = 0x1B33D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B33D4u;
    // 0x1b33d8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C48C0u, 0x1B33D4u, 0x1B33DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B33DCu;
label_1b33dc:
    // 0x1b33dc: 0xc64cd424  lwc1        $f12, -0x2BDC($s2)
    ctx->pc = 0x1b33dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294956068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b33e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b33e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b33e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b33e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b33e8: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x1b33e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x1b33ec: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1B33ECu;
    {
        const bool branch_taken_0x1b33ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B33F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B33ECu;
        // 0x1b33f0: 0x46156302  mul.s       $f12, $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b33ec) {
            ctx->pc = 0x1B3554u;
            goto label_1b3554;
        }
    }
    ctx->pc = 0x1B33F4u;
label_1b33f4:
    // 0x1b33f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b33f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b33f8: 0x14c2003b  bne         $a2, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1B33F8u;
    {
        const bool branch_taken_0x1b33f8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B33FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B33F8u;
        // 0x1b33fc: 0x24c2ffff  addiu       $v0, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b33f8) {
            ctx->pc = 0x1B34E8u;
            goto label_1b34e8;
        }
    }
    ctx->pc = 0x1B3400u;
    // 0x1b3400: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1b3400u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x1b3404: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1b3404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1b3408: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b3408u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b340c: 0xc64cd424  lwc1        $f12, -0x2BDC($s2)
    ctx->pc = 0x1b340cu;
    { uint32_t bits = FAST_READ32(0x50D424u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b3410: 0x263015d0  addiu       $s0, $s1, 0x15D0
    ctx->pc = 0x1b3410u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 5584));
    // 0x1b3414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3418: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b3418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b341c: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x1b341cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x1b3420: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1b3420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b3424: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b3424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3428: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1b3428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1b342c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b342cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b3430: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1b3430u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1b3434: 0xc0711da  jal         func_1C4768
    ctx->pc = 0x1B3434u;
    SET_GPR_U32(ctx, 31, 0x1B343Cu);
    ctx->pc = 0x1B3438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3434u;
    // 0x1b3438: 0x26313f10  addiu       $s1, $s1, 0x3F10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4768u, 0x1B3434u, 0x1B343Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B343Cu;
label_1b343c:
    // 0x1b343c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1b343cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x1b3440: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3444: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b3444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3448: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1b3448u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1b344c: 0xc071230  jal         func_1C48C0
    ctx->pc = 0x1B344Cu;
    SET_GPR_U32(ctx, 31, 0x1B3454u);
    ctx->pc = 0x1B3450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B344Cu;
    // 0x1b3450: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C48C0u, 0x1B344Cu, 0x1B3454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3454u;
label_1b3454:
    // 0x1b3454: 0xc64cd424  lwc1        $f12, -0x2BDC($s2)
    ctx->pc = 0x1b3454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294956068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b3458: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b345c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b345cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3460: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x1b3460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x1b3464: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x1b3464u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x1b3468: 0xc0711da  jal         func_1C4768
    ctx->pc = 0x1B3468u;
    SET_GPR_U32(ctx, 31, 0x1B3470u);
    ctx->pc = 0x1B346Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3468u;
    // 0x1b346c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4768u, 0x1B3468u, 0x1B3470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3470u;
label_1b3470:
    // 0x1b3470: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1b3470u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x1b3474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3478: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b3478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b347c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1b347cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1b3480: 0xc071230  jal         func_1C48C0
    ctx->pc = 0x1B3480u;
    SET_GPR_U32(ctx, 31, 0x1B3488u);
    ctx->pc = 0x1B3484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3480u;
    // 0x1b3484: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C48C0u, 0x1B3480u, 0x1B3488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3488u;
label_1b3488:
    // 0x1b3488: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b348c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b348cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3490: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1b3490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b3494: 0xc07114a  jal         func_1C4528
    ctx->pc = 0x1B3494u;
    SET_GPR_U32(ctx, 31, 0x1B349Cu);
    ctx->pc = 0x1B3498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3494u;
    // 0x1b3498: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4528u, 0x1B3494u, 0x1B349Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B349Cu;
label_1b349c:
    // 0x1b349c: 0xc64cd424  lwc1        $f12, -0x2BDC($s2)
    ctx->pc = 0x1b349cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294956068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b34a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b34a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b34a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b34a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b34a8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1b34a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b34ac: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x1b34acu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x1b34b0: 0xc0711da  jal         func_1C4768
    ctx->pc = 0x1B34B0u;
    SET_GPR_U32(ctx, 31, 0x1B34B8u);
    ctx->pc = 0x1B34B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B34B0u;
    // 0x1b34b4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4768u, 0x1B34B0u, 0x1B34B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B34B8u;
label_1b34b8:
    // 0x1b34b8: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1b34b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x1b34bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b34bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b34c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b34c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b34c4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1b34c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1b34c8: 0xc071230  jal         func_1C48C0
    ctx->pc = 0x1B34C8u;
    SET_GPR_U32(ctx, 31, 0x1B34D0u);
    ctx->pc = 0x1B34CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B34C8u;
    // 0x1b34cc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C48C0u, 0x1B34C8u, 0x1B34D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B34D0u;
label_1b34d0:
    // 0x1b34d0: 0xc64cd424  lwc1        $f12, -0x2BDC($s2)
    ctx->pc = 0x1b34d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294956068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b34d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b34d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b34d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b34d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b34dc: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x1b34dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x1b34e0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1B34E0u;
    {
        const bool branch_taken_0x1b34e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B34E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B34E0u;
        // 0x1b34e4: 0x46156302  mul.s       $f12, $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b34e0) {
            ctx->pc = 0x1B3554u;
            goto label_1b3554;
        }
    }
    ctx->pc = 0x1B34E8u;
label_1b34e8:
    // 0x1b34e8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1b34e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b34ec: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1B34ECu;
    {
        const bool branch_taken_0x1b34ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B34F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B34ECu;
        // 0x1b34f0: 0x263015d0  addiu       $s0, $s1, 0x15D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 5584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b34ec) {
            ctx->pc = 0x1B3590u;
            goto label_1b3590;
        }
    }
    ctx->pc = 0x1B34F4u;
    // 0x1b34f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b34f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b34f8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b34f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b34fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b34fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3500: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b3500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3504: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b3504u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1b3508: 0x24060160  addiu       $a2, $zero, 0x160
    ctx->pc = 0x1b3508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x1b350c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b350cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3510: 0xc0711da  jal         func_1C4768
    ctx->pc = 0x1B3510u;
    SET_GPR_U32(ctx, 31, 0x1B3518u);
    ctx->pc = 0x1B3514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3510u;
    // 0x1b3514: 0x26313f10  addiu       $s1, $s1, 0x3F10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4768u, 0x1B3510u, 0x1B3518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3518u;
label_1b3518:
    // 0x1b3518: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1b3518u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x1b351c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b351cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3520: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b3520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3524: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1b3524u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1b3528: 0xc071230  jal         func_1C48C0
    ctx->pc = 0x1B3528u;
    SET_GPR_U32(ctx, 31, 0x1B3530u);
    ctx->pc = 0x1B352Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3528u;
    // 0x1b352c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C48C0u, 0x1B3528u, 0x1B3530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3530u;
label_1b3530:
    // 0x1b3530: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3534: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b3534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3538: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1b3538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b353c: 0xc07114a  jal         func_1C4528
    ctx->pc = 0x1B353Cu;
    SET_GPR_U32(ctx, 31, 0x1B3544u);
    ctx->pc = 0x1B3540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B353Cu;
    // 0x1b3540: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4528u, 0x1B353Cu, 0x1B3544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3544u;
label_1b3544:
    // 0x1b3544: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b3544u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1b3548: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b3548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b354c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b354cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3550: 0x24060160  addiu       $a2, $zero, 0x160
    ctx->pc = 0x1b3550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
label_1b3554:
    // 0x1b3554: 0xc0711da  jal         func_1C4768
    ctx->pc = 0x1B3554u;
    SET_GPR_U32(ctx, 31, 0x1B355Cu);
    ctx->pc = 0x1B3558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3554u;
    // 0x1b3558: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4768u, 0x1B3554u, 0x1B355Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B355Cu;
label_1b355c:
    // 0x1b355c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1b355cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x1b3560: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b3560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3564: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b3564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3568: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1b3568u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1b356c: 0xc071230  jal         func_1C48C0
    ctx->pc = 0x1B356Cu;
    SET_GPR_U32(ctx, 31, 0x1B3574u);
    ctx->pc = 0x1B3570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B356Cu;
    // 0x1b3570: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C48C0u, 0x1B356Cu, 0x1B3574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3574u;
label_1b3574:
    // 0x1b3574: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b3574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3578: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b3578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b357c: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1b357cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b3580: 0xc07114a  jal         func_1C4528
    ctx->pc = 0x1B3580u;
    SET_GPR_U32(ctx, 31, 0x1B3588u);
    ctx->pc = 0x1B3584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3580u;
    // 0x1b3584: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4528u, 0x1B3580u, 0x1B3588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3588u;
label_1b3588:
    // 0x1b3588: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1B3588u;
    {
        const bool branch_taken_0x1b3588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3588u;
        // 0x1b358c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3588) {
            ctx->pc = 0x1B35F0u;
            goto label_1b35f0;
        }
    }
    ctx->pc = 0x1B3590u;
label_1b3590:
    // 0x1b3590: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b3590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3594: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3598: 0x24060063  addiu       $a2, $zero, 0x63
    ctx->pc = 0x1b3598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x1b359c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b359cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b35a0: 0xc07114a  jal         func_1C4528
    ctx->pc = 0x1B35A0u;
    SET_GPR_U32(ctx, 31, 0x1B35A8u);
    ctx->pc = 0x1B35A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B35A0u;
    // 0x1b35a4: 0x26313f10  addiu       $s1, $s1, 0x3F10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4528u, 0x1B35A0u, 0x1B35A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B35A8u;
label_1b35a8:
    // 0x1b35a8: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1b35a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x1b35ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b35acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b35b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b35b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b35b4: 0x34c6ff00  ori         $a2, $a2, 0xFF00
    ctx->pc = 0x1b35b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65280);
    // 0x1b35b8: 0xc071230  jal         func_1C48C0
    ctx->pc = 0x1B35B8u;
    SET_GPR_U32(ctx, 31, 0x1B35C0u);
    ctx->pc = 0x1B35BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B35B8u;
    // 0x1b35bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C48C0u, 0x1B35B8u, 0x1B35C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B35C0u;
label_1b35c0:
    // 0x1b35c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b35c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b35c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b35c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b35c8: 0x24060063  addiu       $a2, $zero, 0x63
    ctx->pc = 0x1b35c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x1b35cc: 0xc07114a  jal         func_1C4528
    ctx->pc = 0x1B35CCu;
    SET_GPR_U32(ctx, 31, 0x1B35D4u);
    ctx->pc = 0x1B35D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B35CCu;
    // 0x1b35d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4528u, 0x1B35CCu, 0x1B35D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B35D4u;
label_1b35d4:
    // 0x1b35d4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1b35d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x1b35d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b35d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b35dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b35dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b35e0: 0x34c6ff00  ori         $a2, $a2, 0xFF00
    ctx->pc = 0x1b35e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65280);
    // 0x1b35e4: 0xc071230  jal         func_1C48C0
    ctx->pc = 0x1B35E4u;
    SET_GPR_U32(ctx, 31, 0x1B35ECu);
    ctx->pc = 0x1B35E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B35E4u;
    // 0x1b35e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C48C0u, 0x1B35E4u, 0x1B35ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B35ECu;
label_1b35ec:
    // 0x1b35ec: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b35ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b35f0:
    // 0x1b35f0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b35f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b35f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b35f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b35f8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1b35f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b35fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b35fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3600: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x1b3600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1b3604: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1b3604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b3608: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B360Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3608u;
        // 0x1b360c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3610u;
}
