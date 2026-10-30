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

// Function: sub_00179378
// Address: 0x179378 - 0x1795f8
void sub_00179378_0x179378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179378_0x179378");
#endif

    switch (ctx->pc) {
        case 0x1793b4u: goto label_1793b4;
        case 0x1793c0u: goto label_1793c0;
        case 0x1793d8u: goto label_1793d8;
        case 0x1793e8u: goto label_1793e8;
        case 0x1793f8u: goto label_1793f8;
        case 0x179410u: goto label_179410;
        case 0x179420u: goto label_179420;
        case 0x179430u: goto label_179430;
        case 0x179440u: goto label_179440;
        case 0x179458u: goto label_179458;
        case 0x179480u: goto label_179480;
        case 0x17949cu: goto label_17949c;
        case 0x1794acu: goto label_1794ac;
        case 0x1794ccu: goto label_1794cc;
        case 0x179538u: goto label_179538;
        case 0x179570u: goto label_179570;
        case 0x179588u: goto label_179588;
        default: break;
    }

    ctx->pc = 0x179378u;

    // 0x179378: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x179378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x17937c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x17937cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x179380: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x179380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x179384: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x179384u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
    // 0x179388: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x179388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x17938c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x17938cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179390: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x179390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x179394: 0x2604b8a8  addiu       $a0, $s0, -0x4758
    ctx->pc = 0x179394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949032));
    // 0x179398: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x179398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x17939c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x17939cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1793a0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1793a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1793a4: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x1793a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1793a8: 0x8e650038  lw          $a1, 0x38($s3)
    ctx->pc = 0x1793a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x1793ac: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x1793ACu;
    SET_GPR_U32(ctx, 31, 0x1793B4u);
    ctx->pc = 0x1793B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1793ACu;
    // 0x1793b0: 0x8e66003c  lw          $a2, 0x3C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x1793ACu, 0x1793B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1793B4u;
label_1793b4:
    // 0x1793b4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1793b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1793b8: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1793B8u;
    {
        const bool branch_taken_0x1793b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1793BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1793B8u;
        // 0x1793bc: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1793b8) {
            ctx->pc = 0x1794D0u;
            goto label_1794d0;
        }
    }
    ctx->pc = 0x1793C0u;
label_1793c0:
    // 0x1793c0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1793c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1793c4: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x1793c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1793c8: 0x26b0b8a8  addiu       $s0, $s5, -0x4758
    ctx->pc = 0x1793c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294949032));
    // 0x1793cc: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x1793ccu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x1793d0: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x1793D0u;
    SET_GPR_U32(ctx, 31, 0x1793D8u);
    ctx->pc = 0x1793D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1793D0u;
    // 0x1793d4: 0xc66c0030  lwc1        $f12, 0x30($s3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x1793D0u, 0x1793D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1793D8u;
label_1793d8:
    // 0x1793d8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1793d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1793dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1793dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1793e0: 0xc0cd550  jal         func_335540
    ctx->pc = 0x1793E0u;
    SET_GPR_U32(ctx, 31, 0x1793E8u);
    ctx->pc = 0x1793E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1793E0u;
    // 0x1793e4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335540u, 0x1793E0u, 0x1793E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1793E8u;
label_1793e8:
    // 0x1793e8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1793e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1793ec: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1793ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1793f0: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x1793F0u;
    SET_GPR_U32(ctx, 31, 0x1793F8u);
    ctx->pc = 0x1793F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1793F0u;
    // 0x1793f4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x1793F0u, 0x1793F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1793F8u;
label_1793f8:
    // 0x1793f8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1793f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1793fc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1793fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179400: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x179400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179404: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x179404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179408: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x179408u;
    SET_GPR_U32(ctx, 31, 0x179410u);
    ctx->pc = 0x17940Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179408u;
    // 0x17940c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x179408u, 0x179410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179410u;
label_179410:
    // 0x179410: 0xc66c0034  lwc1        $f12, 0x34($s3)
    ctx->pc = 0x179410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x179414: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x179414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x179418: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x179418u;
    SET_GPR_U32(ctx, 31, 0x179420u);
    ctx->pc = 0x17941Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179418u;
    // 0x17941c: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x179418u, 0x179420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179420u;
label_179420:
    // 0x179420: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x179420u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179424: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x179424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179428: 0xc0cd550  jal         func_335540
    ctx->pc = 0x179428u;
    SET_GPR_U32(ctx, 31, 0x179430u);
    ctx->pc = 0x17942Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179428u;
    // 0x17942c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335540u, 0x179428u, 0x179430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179430u;
label_179430:
    // 0x179430: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x179430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x179434: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x179434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x179438: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x179438u;
    SET_GPR_U32(ctx, 31, 0x179440u);
    ctx->pc = 0x17943Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179438u;
    // 0x17943c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x179438u, 0x179440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179440u;
label_179440:
    // 0x179440: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x179440u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179444: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x179444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179448: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x179448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17944c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17944cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179450: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x179450u;
    SET_GPR_U32(ctx, 31, 0x179458u);
    ctx->pc = 0x179454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179450u;
    // 0x179454: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x179450u, 0x179458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179458u;
label_179458:
    // 0x179458: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x179458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x17945c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x17945cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x179460: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x179460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x179464: 0x8ca6cc9c  lw          $a2, -0x3364($a1)
    ctx->pc = 0x179464u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x50CC9Cu));
    // 0x179468: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x179468u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x17946c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17946cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5116C0u));
    // 0x179470: 0x8ce5cc98  lw          $a1, -0x3368($a3)
    ctx->pc = 0x179470u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50CC98u));
    // 0x179474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x179474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179478: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x179478u;
    SET_GPR_U32(ctx, 31, 0x179480u);
    ctx->pc = 0x17947Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179478u;
    // 0x17947c: 0x7e230010  sq          $v1, 0x10($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x179478u, 0x179480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179480u;
label_179480:
    // 0x179480: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x179480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x179484: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x179484u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x179488: 0xc46dcca4  lwc1        $f13, -0x335C($v1)
    ctx->pc = 0x179488u;
    { uint32_t bits = FAST_READ32(0x50CCA4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x17948c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17948cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179490: 0xc4accca0  lwc1        $f12, -0x3360($a1)
    ctx->pc = 0x179490u;
    { uint32_t bits = FAST_READ32(0x50CCA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x179494: 0xc0cd508  jal         func_335420
    ctx->pc = 0x179494u;
    SET_GPR_U32(ctx, 31, 0x17949Cu);
    ctx->pc = 0x179498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179494u;
    // 0x179498: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x179494u, 0x17949Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17949Cu;
label_17949c:
    // 0x17949c: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x17949cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x1794a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1794a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1794a4: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x1794A4u;
    SET_GPR_U32(ctx, 31, 0x1794ACu);
    ctx->pc = 0x1794A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1794A4u;
    // 0x1794a8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x1794A4u, 0x1794ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1794ACu;
label_1794ac:
    // 0x1794ac: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1794acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1794b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1794b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1794b4: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x1794b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x1794b8: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x1794b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1794bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1794bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1794c0: 0x2406005a  addiu       $a2, $zero, 0x5A
    ctx->pc = 0x1794c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1794c4: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x1794C4u;
    SET_GPR_U32(ctx, 31, 0x1794CCu);
    ctx->pc = 0x1794C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1794C4u;
    // 0x1794c8: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x1794C4u, 0x1794CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1794CCu;
label_1794cc:
    // 0x1794cc: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x1794ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_1794d0:
    // 0x1794d0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1794d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1794d4: 0x26720040  addiu       $s2, $s3, 0x40
    ctx->pc = 0x1794d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x1794d8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1794D8u;
    {
        const bool branch_taken_0x1794d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1794DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1794D8u;
        // 0x1794dc: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1794d8) {
            ctx->pc = 0x17951Cu;
            goto label_17951c;
        }
    }
    ctx->pc = 0x1794E0u;
    // 0x1794e0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1794e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1794e4: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1794e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1794e8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1794e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1794ec: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1794ECu;
    {
        const bool branch_taken_0x1794ec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1794F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1794ECu;
        // 0x1794f0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1794ec) {
            ctx->pc = 0x179514u;
            goto label_179514;
        }
    }
    ctx->pc = 0x1794F4u;
    // 0x1794f4: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x1794f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x1794f8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1794f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1794fc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1794fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x179500: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x179500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x179504: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x179504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x179508: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x179508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17950c: 0xae63004c  sw          $v1, 0x4C($s3)
    ctx->pc = 0x17950cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 3));
    // 0x179510: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x179510u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_179514:
    // 0x179514: 0x5620ffaa  bnel        $s1, $zero, . + 4 + (-0x56 << 2)
    ctx->pc = 0x179514u;
    {
        const bool branch_taken_0x179514 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x179514) {
            ctx->pc = 0x179518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179514u;
            // 0x179518: 0x7a620000  lq          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1793C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1793c0;
        }
    }
    ctx->pc = 0x17951Cu;
label_17951c:
    // 0x17951c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x17951cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x179520: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x179520u;
    {
        const bool branch_taken_0x179520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179520u;
        // 0x179524: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179520) {
            ctx->pc = 0x1795CCu;
            goto label_1795cc;
        }
    }
    ctx->pc = 0x179528u;
    // 0x179528: 0x3c013f05  lui         $at, 0x3F05
    ctx->pc = 0x179528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16133 << 16));
    // 0x17952c: 0x3421cd7c  ori         $at, $at, 0xCD7C
    ctx->pc = 0x17952cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52604);
    // 0x179530: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x179530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x179534: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x179534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_179538:
    // 0x179538: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x179538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17953c: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x17953cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
    // 0x179540: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x179540u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x179544: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x179544u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x179548: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x179548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17954c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17954cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x179550: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x179550u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x179554: 0xc601002c  lwc1        $f1, 0x2C($s0)
    ctx->pc = 0x179554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179558: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x179558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x17955c: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x17955cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179560: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x179560u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x179564: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x179564u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x179568: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x179568u;
    SET_GPR_U32(ctx, 31, 0x179570u);
    ctx->pc = 0x17956Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179568u;
    // 0x17956c: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x179568u, 0x179570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179570u;
label_179570:
    // 0x179570: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x179570u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179574: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x179574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179578: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x179578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17957c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x17957cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179580: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x179580u;
    SET_GPR_U32(ctx, 31, 0x179588u);
    ctx->pc = 0x179584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179580u;
    // 0x179584: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x179580u, 0x179588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179588u;
label_179588:
    // 0x179588: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x179588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x17958c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17958cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x179590: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x179590u;
    {
        const bool branch_taken_0x179590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179590u;
        // 0x179594: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179590) {
            ctx->pc = 0x1795B8u;
            goto label_1795b8;
        }
    }
    ctx->pc = 0x179598u;
    // 0x179598: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x179598u;
    {
        const bool branch_taken_0x179598 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179598u;
        // 0x17959c: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179598) {
            ctx->pc = 0x1795BCu;
            goto label_1795bc;
        }
    }
    ctx->pc = 0x1795A0u;
    // 0x1795a0: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1795a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1795a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1795a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1795a8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1795a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1795ac: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x1795acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x1795b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1795b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1795b4: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1795b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_1795b8:
    // 0x1795b8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1795b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1795bc:
    // 0x1795bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1795bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1795c0: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1795c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1795c4: 0x5440ffdc  bnel        $v0, $zero, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1795C4u;
    {
        const bool branch_taken_0x1795c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1795c4) {
            ctx->pc = 0x1795C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1795C4u;
            // 0x1795c8: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179538;
        }
    }
    ctx->pc = 0x1795CCu;
label_1795cc:
    // 0x1795cc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1795ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1795d0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1795d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1795d4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1795d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1795d8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1795d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1795dc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1795dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1795e0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1795e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1795e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1795e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1795e8: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x1795e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1795ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1795ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1795F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1795ECu;
        // 0x1795f0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1795ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1795F4u;
    // 0x1795f4: 0x0  nop
    ctx->pc = 0x1795f4u;
    // NOP
    ctx->pc = 0x1795f8u;
}
