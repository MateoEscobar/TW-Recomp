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

// Function: sub_0027F3B0
// Address: 0x27f3b0 - 0x27fd68
void sub_0027F3B0_0x27f3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F3B0_0x27f3b0");
#endif

    switch (ctx->pc) {
        case 0x27f3d4u: goto label_27f3d4;
        case 0x27f3e0u: goto label_27f3e0;
        case 0x27f3f4u: goto label_27f3f4;
        case 0x27f404u: goto label_27f404;
        case 0x27f420u: goto label_27f420;
        case 0x27f444u: goto label_27f444;
        case 0x27f45cu: goto label_27f45c;
        case 0x27f474u: goto label_27f474;
        case 0x27f48cu: goto label_27f48c;
        case 0x27f49cu: goto label_27f49c;
        case 0x27f4acu: goto label_27f4ac;
        case 0x27f4c0u: goto label_27f4c0;
        case 0x27f4e0u: goto label_27f4e0;
        case 0x27f4f0u: goto label_27f4f0;
        case 0x27f510u: goto label_27f510;
        case 0x27f520u: goto label_27f520;
        case 0x27f548u: goto label_27f548;
        case 0x27f558u: goto label_27f558;
        case 0x27f560u: goto label_27f560;
        case 0x27f578u: goto label_27f578;
        case 0x27f594u: goto label_27f594;
        case 0x27f5a4u: goto label_27f5a4;
        case 0x27f5c0u: goto label_27f5c0;
        case 0x27f5d8u: goto label_27f5d8;
        case 0x27f5e8u: goto label_27f5e8;
        case 0x27f5f8u: goto label_27f5f8;
        case 0x27f614u: goto label_27f614;
        case 0x27f624u: goto label_27f624;
        case 0x27f63cu: goto label_27f63c;
        case 0x27f64cu: goto label_27f64c;
        case 0x27f65cu: goto label_27f65c;
        case 0x27f67cu: goto label_27f67c;
        case 0x27f68cu: goto label_27f68c;
        case 0x27f694u: goto label_27f694;
        case 0x27f6a4u: goto label_27f6a4;
        case 0x27f6c0u: goto label_27f6c0;
        case 0x27f6d0u: goto label_27f6d0;
        case 0x27f6e8u: goto label_27f6e8;
        case 0x27f6f8u: goto label_27f6f8;
        case 0x27f708u: goto label_27f708;
        case 0x27f728u: goto label_27f728;
        case 0x27f738u: goto label_27f738;
        case 0x27f740u: goto label_27f740;
        case 0x27f750u: goto label_27f750;
        case 0x27f76cu: goto label_27f76c;
        case 0x27f77cu: goto label_27f77c;
        case 0x27f794u: goto label_27f794;
        case 0x27f7a4u: goto label_27f7a4;
        case 0x27f7dcu: goto label_27f7dc;
        case 0x27f7fcu: goto label_27f7fc;
        case 0x27f80cu: goto label_27f80c;
        case 0x27f814u: goto label_27f814;
        case 0x27f824u: goto label_27f824;
        case 0x27f834u: goto label_27f834;
        case 0x27f844u: goto label_27f844;
        case 0x27f864u: goto label_27f864;
        case 0x27f890u: goto label_27f890;
        case 0x27f8c4u: goto label_27f8c4;
        case 0x27f8d4u: goto label_27f8d4;
        case 0x27f8e4u: goto label_27f8e4;
        case 0x27f8f4u: goto label_27f8f4;
        case 0x27f908u: goto label_27f908;
        case 0x27f928u: goto label_27f928;
        case 0x27f93cu: goto label_27f93c;
        case 0x27f954u: goto label_27f954;
        case 0x27f96cu: goto label_27f96c;
        case 0x27f998u: goto label_27f998;
        case 0x27f9c8u: goto label_27f9c8;
        case 0x27f9d8u: goto label_27f9d8;
        case 0x27f9ecu: goto label_27f9ec;
        case 0x27fa0cu: goto label_27fa0c;
        case 0x27fa20u: goto label_27fa20;
        case 0x27fa38u: goto label_27fa38;
        case 0x27fa50u: goto label_27fa50;
        case 0x27fa64u: goto label_27fa64;
        case 0x27fa88u: goto label_27fa88;
        case 0x27fab8u: goto label_27fab8;
        case 0x27fac8u: goto label_27fac8;
        case 0x27fad8u: goto label_27fad8;
        case 0x27faecu: goto label_27faec;
        case 0x27fafcu: goto label_27fafc;
        case 0x27fb1cu: goto label_27fb1c;
        case 0x27fb30u: goto label_27fb30;
        case 0x27fb48u: goto label_27fb48;
        case 0x27fb58u: goto label_27fb58;
        case 0x27fb70u: goto label_27fb70;
        case 0x27fb80u: goto label_27fb80;
        case 0x27fba0u: goto label_27fba0;
        case 0x27fbb0u: goto label_27fbb0;
        case 0x27fbc4u: goto label_27fbc4;
        case 0x27fbdcu: goto label_27fbdc;
        case 0x27fbecu: goto label_27fbec;
        case 0x27fc04u: goto label_27fc04;
        case 0x27fc14u: goto label_27fc14;
        case 0x27fc30u: goto label_27fc30;
        case 0x27fc68u: goto label_27fc68;
        case 0x27fc98u: goto label_27fc98;
        case 0x27fcc8u: goto label_27fcc8;
        case 0x27fcd8u: goto label_27fcd8;
        case 0x27fce8u: goto label_27fce8;
        case 0x27fd18u: goto label_27fd18;
        case 0x27fd44u: goto label_27fd44;
        default: break;
    }

    ctx->pc = 0x27f3b0u;

    // 0x27f3b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27f3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27f3b4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x27f3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x27f3b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27f3b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f3bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x27f3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x27f3c0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x27f3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x27f3c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27f3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27f3c8: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x27f3c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x27f3cc: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x27F3CCu;
    SET_GPR_U32(ctx, 31, 0x27F3D4u);
    ctx->pc = 0x27F3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F3CCu;
    // 0x27f3d0: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x27F3CCu, 0x27F3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F3D4u;
label_27f3d4:
    // 0x27f3d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27f3d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f3d8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x27F3D8u;
    SET_GPR_U32(ctx, 31, 0x27F3E0u);
    ctx->pc = 0x27F3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F3D8u;
    // 0x27f3dc: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x27F3D8u, 0x27F3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F3E0u;
label_27f3e0:
    // 0x27f3e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27f3e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f3e4: 0x12400258  beqz        $s2, . + 4 + (0x258 << 2)
    ctx->pc = 0x27F3E4u;
    {
        const bool branch_taken_0x27f3e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F3E4u;
        // 0x27f3e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f3e4) {
            ctx->pc = 0x27FD48u;
            goto label_27fd48;
        }
    }
    ctx->pc = 0x27F3ECu;
    // 0x27f3ec: 0xc088e48  jal         func_223920
    ctx->pc = 0x27F3ECu;
    SET_GPR_U32(ctx, 31, 0x27F3F4u);
    ctx->pc = 0x27F3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F3ECu;
    // 0x27f3f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223920u, 0x27F3ECu, 0x27F3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F3F4u;
label_27f3f4:
    // 0x27f3f4: 0x10400254  beqz        $v0, . + 4 + (0x254 << 2)
    ctx->pc = 0x27F3F4u;
    {
        const bool branch_taken_0x27f3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F3F4u;
        // 0x27f3f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f3f4) {
            ctx->pc = 0x27FD48u;
            goto label_27fd48;
        }
    }
    ctx->pc = 0x27F3FCu;
    // 0x27f3fc: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27F3FCu;
    SET_GPR_U32(ctx, 31, 0x27F404u);
    ctx->pc = 0x27F400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F3FCu;
    // 0x27f400: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27F3FCu, 0x27F404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F404u;
label_27f404:
    // 0x27f404: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x27F404u;
    {
        const bool branch_taken_0x27f404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f404) {
            ctx->pc = 0x27F484u;
            goto label_27f484;
        }
    }
    ctx->pc = 0x27F40Cu;
    // 0x27f40c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x27f40cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x27f410: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x27f410u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x27f414: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27f414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x27f418: 0xc09512e  jal         func_2544B8
    ctx->pc = 0x27F418u;
    SET_GPR_U32(ctx, 31, 0x27F420u);
    ctx->pc = 0x27F41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F418u;
    // 0x27f41c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544B8u, 0x27F418u, 0x27F420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F420u;
label_27f420:
    // 0x27f420: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x27f420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x27f424: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x27f424u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x27f428: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x27f428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27f42c: 0x46140040  add.s       $f1, $f0, $f20
    ctx->pc = 0x27f42cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x27f430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f434: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27f434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f438: 0x46020542  mul.s       $f21, $f0, $f2
    ctx->pc = 0x27f438u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x27f43c: 0xc08a684  jal         func_229A10
    ctx->pc = 0x27F43Cu;
    SET_GPR_U32(ctx, 31, 0x27F444u);
    ctx->pc = 0x27F440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F43Cu;
    // 0x27f440: 0x4601ad68  max.s       $f21, $f21, $f1 (Delay Slot)
    ctx->f[21] = std::max(ctx->f[21], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x229A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229A10u, 0x27F43Cu, 0x27F444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F444u;
label_27f444:
    // 0x27f444: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x27f444u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27f448: 0x0  nop
    ctx->pc = 0x27f448u;
    // NOP
    // 0x27f44c: 0x450101d2  bc1t        . + 4 + (0x1D2 << 2)
    ctx->pc = 0x27F44Cu;
    {
        const bool branch_taken_0x27f44c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27F450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F44Cu;
        // 0x27f450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f44c) {
            ctx->pc = 0x27FB98u;
            goto label_27fb98;
        }
    }
    ctx->pc = 0x27F454u;
    // 0x27f454: 0xc08a658  jal         func_229960
    ctx->pc = 0x27F454u;
    SET_GPR_U32(ctx, 31, 0x27F45Cu);
    ctx->pc = 0x27F458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F454u;
    // 0x27f458: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229960u, 0x27F454u, 0x27F45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F45Cu;
label_27f45c:
    // 0x27f45c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x27f45cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27f460: 0x0  nop
    ctx->pc = 0x27f460u;
    // NOP
    // 0x27f464: 0x450101cc  bc1t        . + 4 + (0x1CC << 2)
    ctx->pc = 0x27F464u;
    {
        const bool branch_taken_0x27f464 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27F468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F464u;
        // 0x27f468: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f464) {
            ctx->pc = 0x27FB98u;
            goto label_27fb98;
        }
    }
    ctx->pc = 0x27F46Cu;
    // 0x27f46c: 0xc087090  jal         func_21C240
    ctx->pc = 0x27F46Cu;
    SET_GPR_U32(ctx, 31, 0x27F474u);
    ctx->pc = 0x27F470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F46Cu;
    // 0x27f470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C240u, 0x27F46Cu, 0x27F474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F474u;
label_27f474:
    // 0x27f474: 0x104001c8  beqz        $v0, . + 4 + (0x1C8 << 2)
    ctx->pc = 0x27F474u;
    {
        const bool branch_taken_0x27f474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F474u;
        // 0x27f478: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f474) {
            ctx->pc = 0x27FB98u;
            goto label_27fb98;
        }
    }
    ctx->pc = 0x27F47Cu;
    // 0x27f47c: 0x10000233  b           . + 4 + (0x233 << 2)
    ctx->pc = 0x27F47Cu;
    {
        const bool branch_taken_0x27f47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F47Cu;
        // 0x27f480: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f47c) {
            ctx->pc = 0x27FD4Cu;
            goto label_27fd4c;
        }
    }
    ctx->pc = 0x27F484u;
label_27f484:
    // 0x27f484: 0xc09ee84  jal         func_27BA10
    ctx->pc = 0x27F484u;
    SET_GPR_U32(ctx, 31, 0x27F48Cu);
    ctx->pc = 0x27F488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F484u;
    // 0x27f488: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BA10u, 0x27F484u, 0x27F48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F48Cu;
label_27f48c:
    // 0x27f48c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27F48Cu;
    {
        const bool branch_taken_0x27f48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F48Cu;
        // 0x27f490: 0x3c0505c7  lui         $a1, 0x5C7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1479 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f48c) {
            ctx->pc = 0x27F4B4u;
            goto label_27f4b4;
        }
    }
    ctx->pc = 0x27F494u;
    // 0x27f494: 0xc0897fc  jal         func_225FF0
    ctx->pc = 0x27F494u;
    SET_GPR_U32(ctx, 31, 0x27F49Cu);
    ctx->pc = 0x27F498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F494u;
    // 0x27f498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225FF0u, 0x27F494u, 0x27F49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F49Cu;
label_27f49c:
    // 0x27f49c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27F49Cu;
    {
        const bool branch_taken_0x27f49c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F49Cu;
        // 0x27f4a0: 0x3c0505c7  lui         $a1, 0x5C7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1479 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f49c) {
            ctx->pc = 0x27F4B4u;
            goto label_27f4b4;
        }
    }
    ctx->pc = 0x27F4A4u;
    // 0x27f4a4: 0xc09ca6a  jal         func_2729A8
    ctx->pc = 0x27F4A4u;
    SET_GPR_U32(ctx, 31, 0x27F4ACu);
    ctx->pc = 0x27F4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F4A4u;
    // 0x27f4a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2729A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2729A8u, 0x27F4A4u, 0x27F4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F4ACu;
label_27f4ac:
    // 0x27f4ac: 0x10000226  b           . + 4 + (0x226 << 2)
    ctx->pc = 0x27F4ACu;
    {
        const bool branch_taken_0x27f4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F4ACu;
        // 0x27f4b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f4ac) {
            ctx->pc = 0x27FD48u;
            goto label_27fd48;
        }
    }
    ctx->pc = 0x27F4B4u;
label_27f4b4:
    // 0x27f4b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f4b8: 0xc089998  jal         func_226660
    ctx->pc = 0x27F4B8u;
    SET_GPR_U32(ctx, 31, 0x27F4C0u);
    ctx->pc = 0x27F4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F4B8u;
    // 0x27f4bc: 0x34a5eee1  ori         $a1, $a1, 0xEEE1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61153);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x27F4B8u, 0x27F4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F4C0u;
label_27f4c0:
    // 0x27f4c0: 0x14400221  bnez        $v0, . + 4 + (0x221 << 2)
    ctx->pc = 0x27F4C0u;
    {
        const bool branch_taken_0x27f4c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F4C0u;
        // 0x27f4c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f4c0) {
            ctx->pc = 0x27FD48u;
            goto label_27fd48;
        }
    }
    ctx->pc = 0x27F4C8u;
    // 0x27f4c8: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x27f4c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x27f4cc: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x27f4ccu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x27f4d0: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x27F4D0u;
    {
        const bool branch_taken_0x27f4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f4d0) {
            ctx->pc = 0x27F644u;
            goto label_27f644;
        }
    }
    ctx->pc = 0x27F4D8u;
    // 0x27f4d8: 0xc09ee10  jal         func_27B840
    ctx->pc = 0x27F4D8u;
    SET_GPR_U32(ctx, 31, 0x27F4E0u);
    ctx->pc = 0x27F4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F4D8u;
    // 0x27f4dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B840u, 0x27F4D8u, 0x27F4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F4E0u;
label_27f4e0:
    // 0x27f4e0: 0x104000ae  beqz        $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x27F4E0u;
    {
        const bool branch_taken_0x27f4e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f4e0) {
            ctx->pc = 0x27F79Cu;
            goto label_27f79c;
        }
    }
    ctx->pc = 0x27F4E8u;
    // 0x27f4e8: 0xc089944  jal         func_226510
    ctx->pc = 0x27F4E8u;
    SET_GPR_U32(ctx, 31, 0x27F4F0u);
    ctx->pc = 0x27F4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F4E8u;
    // 0x27f4ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226510u, 0x27F4E8u, 0x27F4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F4F0u;
label_27f4f0:
    // 0x27f4f0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27f4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x27f4f4: 0xc4410278  lwc1        $f1, 0x278($v0)
    ctx->pc = 0x27f4f4u;
    { uint32_t bits = FAST_READ32(0x510278u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27f4f8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27f4f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27f4fc: 0x0  nop
    ctx->pc = 0x27f4fcu;
    // NOP
    // 0x27f500: 0x450101a5  bc1t        . + 4 + (0x1A5 << 2)
    ctx->pc = 0x27F500u;
    {
        const bool branch_taken_0x27f500 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27F504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F500u;
        // 0x27f504: 0x261200c4  addiu       $s2, $s0, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f500) {
            ctx->pc = 0x27FB98u;
            goto label_27fb98;
        }
    }
    ctx->pc = 0x27F508u;
    // 0x27f508: 0xc0e409a  jal         func_390268
    ctx->pc = 0x27F508u;
    SET_GPR_U32(ctx, 31, 0x27F510u);
    ctx->pc = 0x27F50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F508u;
    // 0x27f50c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x27F508u, 0x27F510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F510u;
label_27f510:
    // 0x27f510: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27f510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f514: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27f514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f518: 0xc087570  jal         func_21D5C0
    ctx->pc = 0x27F518u;
    SET_GPR_U32(ctx, 31, 0x27F520u);
    ctx->pc = 0x27F51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F518u;
    // 0x27f51c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D5C0u, 0x27F518u, 0x27F520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F520u;
label_27f520:
    // 0x27f520: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x27f520u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x27f524: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x27f524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x27f528: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27f528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27f52c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x27f52cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x27f530: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x27f530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x27f534: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x27f534u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x27f538: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x27F538u;
    {
        const bool branch_taken_0x27f538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f538) {
            ctx->pc = 0x27F5E0u;
            goto label_27f5e0;
        }
    }
    ctx->pc = 0x27F540u;
    // 0x27f540: 0xc0e409a  jal         func_390268
    ctx->pc = 0x27F540u;
    SET_GPR_U32(ctx, 31, 0x27F548u);
    ctx->pc = 0x27F544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F540u;
    // 0x27f544: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x27F540u, 0x27F548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F548u;
label_27f548:
    // 0x27f548: 0x240500e7  addiu       $a1, $zero, 0xE7
    ctx->pc = 0x27f548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
    // 0x27f54c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27f54cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f550: 0xc0950ba  jal         func_2542E8
    ctx->pc = 0x27F550u;
    SET_GPR_U32(ctx, 31, 0x27F558u);
    ctx->pc = 0x27F554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F550u;
    // 0x27f554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2542E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2542E8u, 0x27F550u, 0x27F558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F558u;
label_27f558:
    // 0x27f558: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x27F558u;
    SET_GPR_U32(ctx, 31, 0x27F560u);
    ctx->pc = 0x27F55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F558u;
    // 0x27f55c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x27F558u, 0x27F560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F560u;
label_27f560:
    // 0x27f560: 0xde0300e0  ld          $v1, 0xE0($s0)
    ctx->pc = 0x27f560u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x27f564: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x27f564u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x27f568: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27f568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f56c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x27f56cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x27f570: 0xc09970a  jal         func_265C28
    ctx->pc = 0x27F570u;
    SET_GPR_U32(ctx, 31, 0x27F578u);
    ctx->pc = 0x27F574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F570u;
    // 0x27f574: 0x43280a  movz        $a1, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265C28u, 0x27F570u, 0x27F578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F578u;
label_27f578:
    // 0x27f578: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F578u;
    {
        const bool branch_taken_0x27f578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F578u;
        // 0x27f57c: 0x2403fff7  addiu       $v1, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f578) {
            ctx->pc = 0x27F58Cu;
            goto label_27f58c;
        }
    }
    ctx->pc = 0x27F580u;
    // 0x27f580: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x27f580u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x27f584: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27f584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27f588: 0xfe2200e0  sd          $v0, 0xE0($s1)
    ctx->pc = 0x27f588u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
label_27f58c:
    // 0x27f58c: 0xc088e70  jal         func_2239C0
    ctx->pc = 0x27F58Cu;
    SET_GPR_U32(ctx, 31, 0x27F594u);
    ctx->pc = 0x27F590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F58Cu;
    // 0x27f590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239C0u, 0x27F58Cu, 0x27F594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F594u;
label_27f594:
    // 0x27f594: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27F594u;
    {
        const bool branch_taken_0x27f594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f594) {
            ctx->pc = 0x27F5B8u;
            goto label_27f5b8;
        }
    }
    ctx->pc = 0x27F59Cu;
    // 0x27f59c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x27F59Cu;
    SET_GPR_U32(ctx, 31, 0x27F5A4u);
    ctx->pc = 0x27F5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F59Cu;
    // 0x27f5a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x27F59Cu, 0x27F5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F5A4u;
label_27f5a4:
    // 0x27f5a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f5a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27f5a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f5ac: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x27f5acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x27f5b0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x27F5B0u;
    {
        const bool branch_taken_0x27f5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F5B0u;
        // 0x27f5b4: 0x2407003f  addiu       $a3, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f5b0) {
            ctx->pc = 0x27F608u;
            goto label_27f608;
        }
    }
    ctx->pc = 0x27F5B8u;
label_27f5b8:
    // 0x27f5b8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x27F5B8u;
    SET_GPR_U32(ctx, 31, 0x27F5C0u);
    ctx->pc = 0x27F5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F5B8u;
    // 0x27f5bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x27F5B8u, 0x27F5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F5C0u;
label_27f5c0:
    // 0x27f5c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f5c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27f5c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f5c8: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x27f5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x27f5cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x27f5ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f5d0: 0xc098ab2  jal         func_262AC8
    ctx->pc = 0x27F5D0u;
    SET_GPR_U32(ctx, 31, 0x27F5D8u);
    ctx->pc = 0x27F5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F5D0u;
    // 0x27f5d4: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AC8u, 0x27F5D0u, 0x27F5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F5D8u;
label_27f5d8:
    // 0x27f5d8: 0x100001db  b           . + 4 + (0x1DB << 2)
    ctx->pc = 0x27F5D8u;
    {
        const bool branch_taken_0x27f5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F5D8u;
        // 0x27f5dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f5d8) {
            ctx->pc = 0x27FD48u;
            goto label_27fd48;
        }
    }
    ctx->pc = 0x27F5E0u;
label_27f5e0:
    // 0x27f5e0: 0xc088e70  jal         func_2239C0
    ctx->pc = 0x27F5E0u;
    SET_GPR_U32(ctx, 31, 0x27F5E8u);
    ctx->pc = 0x27F5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F5E0u;
    // 0x27f5e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239C0u, 0x27F5E0u, 0x27F5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F5E8u;
label_27f5e8:
    // 0x27f5e8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x27F5E8u;
    {
        const bool branch_taken_0x27f5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f5e8) {
            ctx->pc = 0x27F61Cu;
            goto label_27f61c;
        }
    }
    ctx->pc = 0x27F5F0u;
    // 0x27f5f0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x27F5F0u;
    SET_GPR_U32(ctx, 31, 0x27F5F8u);
    ctx->pc = 0x27F5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F5F0u;
    // 0x27f5f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x27F5F0u, 0x27F5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F5F8u;
label_27f5f8:
    // 0x27f5f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f5fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27f5fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f600: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x27f600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x27f604: 0x24070039  addiu       $a3, $zero, 0x39
    ctx->pc = 0x27f604u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_27f608:
    // 0x27f608: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x27f608u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f60c: 0xc098ce0  jal         func_263380
    ctx->pc = 0x27F60Cu;
    SET_GPR_U32(ctx, 31, 0x27F614u);
    ctx->pc = 0x27F610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F60Cu;
    // 0x27f610: 0x3c090040  lui         $t1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263380u, 0x27F60Cu, 0x27F614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F614u;
label_27f614:
    // 0x27f614: 0x100001cc  b           . + 4 + (0x1CC << 2)
    ctx->pc = 0x27F614u;
    {
        const bool branch_taken_0x27f614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F614u;
        // 0x27f618: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f614) {
            ctx->pc = 0x27FD48u;
            goto label_27fd48;
        }
    }
    ctx->pc = 0x27F61Cu;
label_27f61c:
    // 0x27f61c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x27F61Cu;
    SET_GPR_U32(ctx, 31, 0x27F624u);
    ctx->pc = 0x27F620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F61Cu;
    // 0x27f620: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x27F61Cu, 0x27F624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F624u;
label_27f624:
    // 0x27f624: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f628: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27f628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f62c: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x27f62cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x27f630: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x27f630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f634: 0xc098ab2  jal         func_262AC8
    ctx->pc = 0x27F634u;
    SET_GPR_U32(ctx, 31, 0x27F63Cu);
    ctx->pc = 0x27F638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F634u;
    // 0x27f638: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AC8u, 0x27F634u, 0x27F63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F63Cu;
label_27f63c:
    // 0x27f63c: 0x100001c2  b           . + 4 + (0x1C2 << 2)
    ctx->pc = 0x27F63Cu;
    {
        const bool branch_taken_0x27f63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F63Cu;
        // 0x27f640: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f63c) {
            ctx->pc = 0x27FD48u;
            goto label_27fd48;
        }
    }
    ctx->pc = 0x27F644u;
label_27f644:
    // 0x27f644: 0xc09ee10  jal         func_27B840
    ctx->pc = 0x27F644u;
    SET_GPR_U32(ctx, 31, 0x27F64Cu);
    ctx->pc = 0x27F648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F644u;
    // 0x27f648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B840u, 0x27F644u, 0x27F64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F64Cu;
label_27f64c:
    // 0x27f64c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x27F64Cu;
    {
        const bool branch_taken_0x27f64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f64c) {
            ctx->pc = 0x27F6F0u;
            goto label_27f6f0;
        }
    }
    ctx->pc = 0x27F654u;
    // 0x27f654: 0xc089944  jal         func_226510
    ctx->pc = 0x27F654u;
    SET_GPR_U32(ctx, 31, 0x27F65Cu);
    ctx->pc = 0x27F658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F654u;
    // 0x27f658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226510u, 0x27F654u, 0x27F65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F65Cu;
label_27f65c:
    // 0x27f65c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27f65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x27f660: 0xc4410278  lwc1        $f1, 0x278($v0)
    ctx->pc = 0x27f660u;
    { uint32_t bits = FAST_READ32(0x510278u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27f664: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27f664u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27f668: 0x0  nop
    ctx->pc = 0x27f668u;
    // NOP
    // 0x27f66c: 0x4501014a  bc1t        . + 4 + (0x14A << 2)
    ctx->pc = 0x27F66Cu;
    {
        const bool branch_taken_0x27f66c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27F670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F66Cu;
        // 0x27f670: 0x261100c4  addiu       $s1, $s0, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f66c) {
            ctx->pc = 0x27FB98u;
            goto label_27fb98;
        }
    }
    ctx->pc = 0x27F674u;
    // 0x27f674: 0xc0e409a  jal         func_390268
    ctx->pc = 0x27F674u;
    SET_GPR_U32(ctx, 31, 0x27F67Cu);
    ctx->pc = 0x27F678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F674u;
    // 0x27f678: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x27F674u, 0x27F67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F67Cu;
label_27f67c:
    // 0x27f67c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27f67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f680: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27f680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f684: 0xc087570  jal         func_21D5C0
    ctx->pc = 0x27F684u;
    SET_GPR_U32(ctx, 31, 0x27F68Cu);
    ctx->pc = 0x27F688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F684u;
    // 0x27f688: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D5C0u, 0x27F684u, 0x27F68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F68Cu;
label_27f68c:
    // 0x27f68c: 0xc088e70  jal         func_2239C0
    ctx->pc = 0x27F68Cu;
    SET_GPR_U32(ctx, 31, 0x27F694u);
    ctx->pc = 0x27F690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F68Cu;
    // 0x27f690: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239C0u, 0x27F68Cu, 0x27F694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F694u;
label_27f694:
    // 0x27f694: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x27F694u;
    {
        const bool branch_taken_0x27f694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f694) {
            ctx->pc = 0x27F6C8u;
            goto label_27f6c8;
        }
    }
    ctx->pc = 0x27F69Cu;
    // 0x27f69c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x27F69Cu;
    SET_GPR_U32(ctx, 31, 0x27F6A4u);
    ctx->pc = 0x27F6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F69Cu;
    // 0x27f6a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x27F69Cu, 0x27F6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F6A4u;
label_27f6a4:
    // 0x27f6a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f6a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27f6a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f6ac: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x27f6acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x27f6b0: 0x24070039  addiu       $a3, $zero, 0x39
    ctx->pc = 0x27f6b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x27f6b4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x27f6b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f6b8: 0xc098ce0  jal         func_263380
    ctx->pc = 0x27F6B8u;
    SET_GPR_U32(ctx, 31, 0x27F6C0u);
    ctx->pc = 0x27F6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F6B8u;
    // 0x27f6bc: 0x3c090040  lui         $t1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263380u, 0x27F6B8u, 0x27F6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F6C0u;
label_27f6c0:
    // 0x27f6c0: 0x100001a1  b           . + 4 + (0x1A1 << 2)
    ctx->pc = 0x27F6C0u;
    {
        const bool branch_taken_0x27f6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F6C0u;
        // 0x27f6c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f6c0) {
            ctx->pc = 0x27FD48u;
            goto label_27fd48;
        }
    }
    ctx->pc = 0x27F6C8u;
label_27f6c8:
    // 0x27f6c8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x27F6C8u;
    SET_GPR_U32(ctx, 31, 0x27F6D0u);
    ctx->pc = 0x27F6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F6C8u;
    // 0x27f6cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x27F6C8u, 0x27F6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F6D0u;
label_27f6d0:
    // 0x27f6d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f6d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27f6d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f6d8: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x27f6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x27f6dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x27f6dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f6e0: 0xc098ab2  jal         func_262AC8
    ctx->pc = 0x27F6E0u;
    SET_GPR_U32(ctx, 31, 0x27F6E8u);
    ctx->pc = 0x27F6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F6E0u;
    // 0x27f6e4: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AC8u, 0x27F6E0u, 0x27F6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F6E8u;
label_27f6e8:
    // 0x27f6e8: 0x10000197  b           . + 4 + (0x197 << 2)
    ctx->pc = 0x27F6E8u;
    {
        const bool branch_taken_0x27f6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F6E8u;
        // 0x27f6ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f6e8) {
            ctx->pc = 0x27FD48u;
            goto label_27fd48;
        }
    }
    ctx->pc = 0x27F6F0u;
label_27f6f0:
    // 0x27f6f0: 0xc09ee1a  jal         func_27B868
    ctx->pc = 0x27F6F0u;
    SET_GPR_U32(ctx, 31, 0x27F6F8u);
    ctx->pc = 0x27F6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F6F0u;
    // 0x27f6f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B868u, 0x27F6F0u, 0x27F6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F6F8u;
label_27f6f8:
    // 0x27f6f8: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x27F6F8u;
    {
        const bool branch_taken_0x27f6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f6f8) {
            ctx->pc = 0x27F79Cu;
            goto label_27f79c;
        }
    }
    ctx->pc = 0x27F700u;
    // 0x27f700: 0xc089944  jal         func_226510
    ctx->pc = 0x27F700u;
    SET_GPR_U32(ctx, 31, 0x27F708u);
    ctx->pc = 0x27F704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F700u;
    // 0x27f704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226510u, 0x27F700u, 0x27F708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F708u;
label_27f708:
    // 0x27f708: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27f708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x27f70c: 0xc4410278  lwc1        $f1, 0x278($v0)
    ctx->pc = 0x27f70cu;
    { uint32_t bits = FAST_READ32(0x510278u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27f710: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27f710u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27f714: 0x0  nop
    ctx->pc = 0x27f714u;
    // NOP
    // 0x27f718: 0x4501011f  bc1t        . + 4 + (0x11F << 2)
    ctx->pc = 0x27F718u;
    {
        const bool branch_taken_0x27f718 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27F71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F718u;
        // 0x27f71c: 0x261100c4  addiu       $s1, $s0, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f718) {
            ctx->pc = 0x27FB98u;
            goto label_27fb98;
        }
    }
    ctx->pc = 0x27F720u;
    // 0x27f720: 0xc0e409a  jal         func_390268
    ctx->pc = 0x27F720u;
    SET_GPR_U32(ctx, 31, 0x27F728u);
    ctx->pc = 0x27F724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F720u;
    // 0x27f724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x27F720u, 0x27F728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F728u;
label_27f728:
    // 0x27f728: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27f728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f72c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27f72cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f730: 0xc087570  jal         func_21D5C0
    ctx->pc = 0x27F730u;
    SET_GPR_U32(ctx, 31, 0x27F738u);
    ctx->pc = 0x27F734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F730u;
    // 0x27f734: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D5C0u, 0x27F730u, 0x27F738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F738u;
label_27f738:
    // 0x27f738: 0xc088e70  jal         func_2239C0
    ctx->pc = 0x27F738u;
    SET_GPR_U32(ctx, 31, 0x27F740u);
    ctx->pc = 0x27F73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F738u;
    // 0x27f73c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239C0u, 0x27F738u, 0x27F740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F740u;
label_27f740:
    // 0x27f740: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x27F740u;
    {
        const bool branch_taken_0x27f740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f740) {
            ctx->pc = 0x27F774u;
            goto label_27f774;
        }
    }
    ctx->pc = 0x27F748u;
    // 0x27f748: 0xc0e409a  jal         func_390268
    ctx->pc = 0x27F748u;
    SET_GPR_U32(ctx, 31, 0x27F750u);
    ctx->pc = 0x27F74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F748u;
    // 0x27f74c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x27F748u, 0x27F750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F750u;
label_27f750:
    // 0x27f750: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f754: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27f754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f758: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x27f758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x27f75c: 0x2407003f  addiu       $a3, $zero, 0x3F
    ctx->pc = 0x27f75cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x27f760: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x27f760u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f764: 0xc098ce0  jal         func_263380
    ctx->pc = 0x27F764u;
    SET_GPR_U32(ctx, 31, 0x27F76Cu);
    ctx->pc = 0x27F768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F764u;
    // 0x27f768: 0x3c090040  lui         $t1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263380u, 0x27F764u, 0x27F76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F76Cu;
label_27f76c:
    // 0x27f76c: 0x10000176  b           . + 4 + (0x176 << 2)
    ctx->pc = 0x27F76Cu;
    {
        const bool branch_taken_0x27f76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F76Cu;
        // 0x27f770: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f76c) {
            ctx->pc = 0x27FD48u;
            goto label_27fd48;
        }
    }
    ctx->pc = 0x27F774u;
label_27f774:
    // 0x27f774: 0xc0e409a  jal         func_390268
    ctx->pc = 0x27F774u;
    SET_GPR_U32(ctx, 31, 0x27F77Cu);
    ctx->pc = 0x27F778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F774u;
    // 0x27f778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x27F774u, 0x27F77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F77Cu;
label_27f77c:
    // 0x27f77c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f780: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27f780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f784: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x27f784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x27f788: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x27f788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f78c: 0xc098ab2  jal         func_262AC8
    ctx->pc = 0x27F78Cu;
    SET_GPR_U32(ctx, 31, 0x27F794u);
    ctx->pc = 0x27F790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F78Cu;
    // 0x27f790: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AC8u, 0x27F78Cu, 0x27F794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F794u;
label_27f794:
    // 0x27f794: 0x1000016c  b           . + 4 + (0x16C << 2)
    ctx->pc = 0x27F794u;
    {
        const bool branch_taken_0x27f794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F794u;
        // 0x27f798: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f794) {
            ctx->pc = 0x27FD48u;
            goto label_27fd48;
        }
    }
    ctx->pc = 0x27F79Cu;
label_27f79c:
    // 0x27f79c: 0xc09efcc  jal         func_27BF30
    ctx->pc = 0x27F79Cu;
    SET_GPR_U32(ctx, 31, 0x27F7A4u);
    ctx->pc = 0x27F7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F79Cu;
    // 0x27f7a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BF30u, 0x27F79Cu, 0x27F7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F7A4u;
label_27f7a4:
    // 0x27f7a4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x27F7A4u;
    {
        const bool branch_taken_0x27f7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f7a4) {
            ctx->pc = 0x27F81Cu;
            goto label_27f81c;
        }
    }
    ctx->pc = 0x27F7ACu;
    // 0x27f7ac: 0x92220018  lbu         $v0, 0x18($s1)
    ctx->pc = 0x27f7acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x27f7b0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x27f7b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x27f7b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27f7b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27f7b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27f7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27f7bc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x27f7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x27f7c0: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x27f7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f7c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27f7c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27f7c8: 0x0  nop
    ctx->pc = 0x27f7c8u;
    // NOP
    // 0x27f7cc: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x27F7CCu;
    {
        const bool branch_taken_0x27f7cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27f7cc) {
            ctx->pc = 0x27F81Cu;
            goto label_27f81c;
        }
    }
    ctx->pc = 0x27F7D4u;
    // 0x27f7d4: 0xc089944  jal         func_226510
    ctx->pc = 0x27F7D4u;
    SET_GPR_U32(ctx, 31, 0x27F7DCu);
    ctx->pc = 0x27F7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F7D4u;
    // 0x27f7d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226510u, 0x27F7D4u, 0x27F7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F7DCu;
label_27f7dc:
    // 0x27f7dc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x27f7e0: 0xc4410278  lwc1        $f1, 0x278($v0)
    ctx->pc = 0x27f7e0u;
    { uint32_t bits = FAST_READ32(0x510278u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27f7e4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27f7e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27f7e8: 0x0  nop
    ctx->pc = 0x27f7e8u;
    // NOP
    // 0x27f7ec: 0x450100ea  bc1t        . + 4 + (0xEA << 2)
    ctx->pc = 0x27F7ECu;
    {
        const bool branch_taken_0x27f7ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27f7ec) {
            ctx->pc = 0x27FB98u;
            goto label_27fb98;
        }
    }
    ctx->pc = 0x27F7F4u;
    // 0x27f7f4: 0xc0e409a  jal         func_390268
    ctx->pc = 0x27F7F4u;
    SET_GPR_U32(ctx, 31, 0x27F7FCu);
    ctx->pc = 0x27F7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F7F4u;
    // 0x27f7f8: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x27F7F4u, 0x27F7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F7FCu;
label_27f7fc:
    // 0x27f7fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27f7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f800: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27f800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f804: 0xc087570  jal         func_21D5C0
    ctx->pc = 0x27F804u;
    SET_GPR_U32(ctx, 31, 0x27F80Cu);
    ctx->pc = 0x27F808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F804u;
    // 0x27f808: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D5C0u, 0x27F804u, 0x27F80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F80Cu;
label_27f80c:
    // 0x27f80c: 0xc09b742  jal         func_26DD08
    ctx->pc = 0x27F80Cu;
    SET_GPR_U32(ctx, 31, 0x27F814u);
    ctx->pc = 0x27F810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F80Cu;
    // 0x27f810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26DD08u, 0x27F80Cu, 0x27F814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F814u;
label_27f814:
    // 0x27f814: 0x1000014c  b           . + 4 + (0x14C << 2)
    ctx->pc = 0x27F814u;
    {
        const bool branch_taken_0x27f814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F814u;
        // 0x27f818: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f814) {
            ctx->pc = 0x27FD48u;
            goto label_27fd48;
        }
    }
    ctx->pc = 0x27F81Cu;
label_27f81c:
    // 0x27f81c: 0xc09efc2  jal         func_27BF08
    ctx->pc = 0x27F81Cu;
    SET_GPR_U32(ctx, 31, 0x27F824u);
    ctx->pc = 0x27F820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F81Cu;
    // 0x27f820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BF08u, 0x27F81Cu, 0x27F824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F824u;
label_27f824:
    // 0x27f824: 0x144000dc  bnez        $v0, . + 4 + (0xDC << 2)
    ctx->pc = 0x27F824u;
    {
        const bool branch_taken_0x27f824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f824) {
            ctx->pc = 0x27FB98u;
            goto label_27fb98;
        }
    }
    ctx->pc = 0x27F82Cu;
    // 0x27f82c: 0xc09ef66  jal         func_27BD98
    ctx->pc = 0x27F82Cu;
    SET_GPR_U32(ctx, 31, 0x27F834u);
    ctx->pc = 0x27F830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F82Cu;
    // 0x27f830: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BD98u, 0x27F82Cu, 0x27F834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F834u;
label_27f834:
    // 0x27f834: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x27F834u;
    {
        const bool branch_taken_0x27f834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f834) {
            ctx->pc = 0x27F8CCu;
            goto label_27f8cc;
        }
    }
    ctx->pc = 0x27F83Cu;
    // 0x27f83c: 0xc089944  jal         func_226510
    ctx->pc = 0x27F83Cu;
    SET_GPR_U32(ctx, 31, 0x27F844u);
    ctx->pc = 0x27F840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F83Cu;
    // 0x27f840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226510u, 0x27F83Cu, 0x27F844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F844u;
label_27f844:
    // 0x27f844: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27f844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x27f848: 0xc4410278  lwc1        $f1, 0x278($v0)
    ctx->pc = 0x27f848u;
    { uint32_t bits = FAST_READ32(0x510278u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27f84c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27f84cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27f850: 0x0  nop
    ctx->pc = 0x27f850u;
    // NOP
    // 0x27f854: 0x450100d0  bc1t        . + 4 + (0xD0 << 2)
    ctx->pc = 0x27F854u;
    {
        const bool branch_taken_0x27f854 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27f854) {
            ctx->pc = 0x27FB98u;
            goto label_27fb98;
        }
    }
    ctx->pc = 0x27F85Cu;
    // 0x27f85c: 0xc088e70  jal         func_2239C0
    ctx->pc = 0x27F85Cu;
    SET_GPR_U32(ctx, 31, 0x27F864u);
    ctx->pc = 0x27F860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F85Cu;
    // 0x27f860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239C0u, 0x27F85Cu, 0x27F864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F864u;
label_27f864:
    // 0x27f864: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x27F864u;
    {
        const bool branch_taken_0x27f864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F864u;
        // 0x27f868: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f864) {
            ctx->pc = 0x27F898u;
            goto label_27f898;
        }
    }
    ctx->pc = 0x27F86Cu;
    // 0x27f86c: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x27f86cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x27f870: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27f870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27f874: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x27f874u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x27f878: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x27f878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x27f87c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x27f87cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x27f880: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27F880u;
    {
        const bool branch_taken_0x27f880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f880) {
            ctx->pc = 0x27F884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F880u;
            // 0x27f884: 0xde0200e0  ld          $v0, 0xE0($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F89Cu;
            goto label_27f89c;
        }
    }
    ctx->pc = 0x27F888u;
    // 0x27f888: 0xc09b666  jal         func_26D998
    ctx->pc = 0x27F888u;
    SET_GPR_U32(ctx, 31, 0x27F890u);
    ctx->pc = 0x27F88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F888u;
    // 0x27f88c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26D998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D998u, 0x27F888u, 0x27F890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F890u;
label_27f890:
    // 0x27f890: 0x1000012d  b           . + 4 + (0x12D << 2)
    ctx->pc = 0x27F890u;
    {
        const bool branch_taken_0x27f890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F890u;
        // 0x27f894: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f890) {
            ctx->pc = 0x27FD48u;
            goto label_27fd48;
        }
    }
    ctx->pc = 0x27F898u;
label_27f898:
    // 0x27f898: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x27f898u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_27f89c:
    // 0x27f89c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x27f89cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x27f8a0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x27f8a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x27f8a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27f8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27f8a8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x27f8a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x27f8ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x27f8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x27f8b0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x27f8b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x27f8b4: 0x14400124  bnez        $v0, . + 4 + (0x124 << 2)
    ctx->pc = 0x27F8B4u;
    {
        const bool branch_taken_0x27f8b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F8B4u;
        // 0x27f8b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f8b4) {
            ctx->pc = 0x27FD48u;
            goto label_27fd48;
        }
    }
    ctx->pc = 0x27F8BCu;
    // 0x27f8bc: 0xc09b55c  jal         func_26D570
    ctx->pc = 0x27F8BCu;
    SET_GPR_U32(ctx, 31, 0x27F8C4u);
    ctx->pc = 0x27F8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F8BCu;
    // 0x27f8c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26D570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D570u, 0x27F8BCu, 0x27F8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F8C4u;
label_27f8c4:
    // 0x27f8c4: 0x10000120  b           . + 4 + (0x120 << 2)
    ctx->pc = 0x27F8C4u;
    {
        const bool branch_taken_0x27f8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F8C4u;
        // 0x27f8c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f8c4) {
            ctx->pc = 0x27FD48u;
            goto label_27fd48;
        }
    }
    ctx->pc = 0x27F8CCu;
label_27f8cc:
    // 0x27f8cc: 0xc09ed82  jal         func_27B608
    ctx->pc = 0x27F8CCu;
    SET_GPR_U32(ctx, 31, 0x27F8D4u);
    ctx->pc = 0x27F8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F8CCu;
    // 0x27f8d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B608u, 0x27F8CCu, 0x27F8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F8D4u;
label_27f8d4:
    // 0x27f8d4: 0x1040007a  beqz        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x27F8D4u;
    {
        const bool branch_taken_0x27f8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f8d4) {
            ctx->pc = 0x27FAC0u;
            goto label_27fac0;
        }
    }
    ctx->pc = 0x27F8DCu;
    // 0x27f8dc: 0xc088e70  jal         func_2239C0
    ctx->pc = 0x27F8DCu;
    SET_GPR_U32(ctx, 31, 0x27F8E4u);
    ctx->pc = 0x27F8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F8DCu;
    // 0x27f8e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239C0u, 0x27F8DCu, 0x27F8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F8E4u;
label_27f8e4:
    // 0x27f8e4: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x27F8E4u;
    {
        const bool branch_taken_0x27f8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f8e4) {
            ctx->pc = 0x27F9D0u;
            goto label_27f9d0;
        }
    }
    ctx->pc = 0x27F8ECu;
    // 0x27f8ec: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x27F8ECu;
    SET_GPR_U32(ctx, 31, 0x27F8F4u);
    ctx->pc = 0x27F8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F8ECu;
    // 0x27f8f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x27F8ECu, 0x27F8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F8F4u;
label_27f8f4:
    // 0x27f8f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27f8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f8f8: 0x5443001e  bnel        $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x27F8F8u;
    {
        const bool branch_taken_0x27f8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x27f8f8) {
            ctx->pc = 0x27F8FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F8F8u;
            // 0x27f8fc: 0xde0200e0  ld          $v0, 0xE0($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F974u;
            goto label_27f974;
        }
    }
    ctx->pc = 0x27F900u;
    // 0x27f900: 0xc089944  jal         func_226510
    ctx->pc = 0x27F900u;
    SET_GPR_U32(ctx, 31, 0x27F908u);
    ctx->pc = 0x27F904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F900u;
    // 0x27f904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226510u, 0x27F900u, 0x27F908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F908u;
label_27f908:
    // 0x27f908: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27f908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x27f90c: 0xc4410278  lwc1        $f1, 0x278($v0)
    ctx->pc = 0x27f90cu;
    { uint32_t bits = FAST_READ32(0x510278u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27f910: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27f910u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27f914: 0x0  nop
    ctx->pc = 0x27f914u;
    // NOP
    // 0x27f918: 0x4501009f  bc1t        . + 4 + (0x9F << 2)
    ctx->pc = 0x27F918u;
    {
        const bool branch_taken_0x27f918 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27f918) {
            ctx->pc = 0x27FB98u;
            goto label_27fb98;
        }
    }
    ctx->pc = 0x27F920u;
    // 0x27f920: 0xc08c68e  jal         func_231A38
    ctx->pc = 0x27F920u;
    SET_GPR_U32(ctx, 31, 0x27F928u);
    ctx->pc = 0x27F924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F920u;
    // 0x27f924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A38u, 0x27F920u, 0x27F928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F928u;
label_27f928:
    // 0x27f928: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x27f928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x27f92c: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x27F92Cu;
    {
        const bool branch_taken_0x27f92c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x27f92c) {
            ctx->pc = 0x27F94Cu;
            goto label_27f94c;
        }
    }
    ctx->pc = 0x27F934u;
    // 0x27f934: 0xc0e409a  jal         func_390268
    ctx->pc = 0x27F934u;
    SET_GPR_U32(ctx, 31, 0x27F93Cu);
    ctx->pc = 0x27F938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F934u;
    // 0x27f938: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x27F934u, 0x27F93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F93Cu;
label_27f93c:
    // 0x27f93c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f940: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27f940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f944: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27F944u;
    {
        const bool branch_taken_0x27f944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F944u;
        // 0x27f948: 0x240601ec  addiu       $a2, $zero, 0x1EC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 492));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f944) {
            ctx->pc = 0x27F960u;
            goto label_27f960;
        }
    }
    ctx->pc = 0x27F94Cu;
label_27f94c:
    // 0x27f94c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x27F94Cu;
    SET_GPR_U32(ctx, 31, 0x27F954u);
    ctx->pc = 0x27F950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F94Cu;
    // 0x27f950: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x27F94Cu, 0x27F954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F954u;
label_27f954:
    // 0x27f954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f958: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27f958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f95c: 0x240601e4  addiu       $a2, $zero, 0x1E4
    ctx->pc = 0x27f95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 484));
label_27f960:
    // 0x27f960: 0x3c070080  lui         $a3, 0x80
    ctx->pc = 0x27f960u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)128 << 16));
    // 0x27f964: 0xc098ab2  jal         func_262AC8
    ctx->pc = 0x27F964u;
    SET_GPR_U32(ctx, 31, 0x27F96Cu);
    ctx->pc = 0x27F968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F964u;
    // 0x27f968: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AC8u, 0x27F964u, 0x27F96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F96Cu;
label_27f96c:
    // 0x27f96c: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x27F96Cu;
    {
        const bool branch_taken_0x27f96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F96Cu;
        // 0x27f970: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f96c) {
            ctx->pc = 0x27FD48u;
            goto label_27fd48;
        }
    }
    ctx->pc = 0x27F974u;
label_27f974:
    // 0x27f974: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x27f974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x27f978: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27f978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27f97c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x27f97cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x27f980: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x27f980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x27f984: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x27f984u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x27f988: 0x144000ef  bnez        $v0, . + 4 + (0xEF << 2)
    ctx->pc = 0x27F988u;
    {
        const bool branch_taken_0x27f988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F988u;
        // 0x27f98c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f988) {
            ctx->pc = 0x27FD48u;
            goto label_27fd48;
        }
    }
    ctx->pc = 0x27F990u;
    // 0x27f990: 0xc09bb04  jal         func_26EC10
    ctx->pc = 0x27F990u;
    SET_GPR_U32(ctx, 31, 0x27F998u);
    ctx->pc = 0x27F994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F990u;
    // 0x27f994: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EC10u, 0x27F990u, 0x27F998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F998u;
label_27f998:
    // 0x27f998: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x27f998u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x27f99c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x27f99cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x27f9a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27F9A0u;
    {
        const bool branch_taken_0x27f9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F9A0u;
        // 0x27f9a4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f9a0) {
            ctx->pc = 0x27F9BCu;
            goto label_27f9bc;
        }
    }
    ctx->pc = 0x27F9A8u;
    // 0x27f9a8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x27f9a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x27f9ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27f9acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27f9b0: 0xc4400998  lwc1        $f0, 0x998($v0)
    ctx->pc = 0x27f9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f9b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27F9B4u;
    {
        const bool branch_taken_0x27f9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F9B4u;
        // 0x27f9b8: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f9b4) {
            ctx->pc = 0x27F9C0u;
            goto label_27f9c0;
        }
    }
    ctx->pc = 0x27F9BCu;
label_27f9bc:
    // 0x27f9bc: 0xc44c0998  lwc1        $f12, 0x998($v0)
    ctx->pc = 0x27f9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_27f9c0:
    // 0x27f9c0: 0xc089912  jal         func_226448
    ctx->pc = 0x27F9C0u;
    SET_GPR_U32(ctx, 31, 0x27F9C8u);
    ctx->pc = 0x27F9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F9C0u;
    // 0x27f9c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226448u, 0x27F9C0u, 0x27F9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F9C8u;
label_27f9c8:
    // 0x27f9c8: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x27F9C8u;
    {
        const bool branch_taken_0x27f9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F9C8u;
        // 0x27f9cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f9c8) {
            ctx->pc = 0x27FD48u;
            goto label_27fd48;
        }
    }
    ctx->pc = 0x27F9D0u;
label_27f9d0:
    // 0x27f9d0: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x27F9D0u;
    SET_GPR_U32(ctx, 31, 0x27F9D8u);
    ctx->pc = 0x27F9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F9D0u;
    // 0x27f9d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x27F9D0u, 0x27F9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F9D8u;
label_27f9d8:
    // 0x27f9d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27f9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f9dc: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x27F9DCu;
    {
        const bool branch_taken_0x27f9dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x27F9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F9DCu;
        // 0x27f9e0: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f9dc) {
            ctx->pc = 0x27FA58u;
            goto label_27fa58;
        }
    }
    ctx->pc = 0x27F9E4u;
    // 0x27f9e4: 0xc089944  jal         func_226510
    ctx->pc = 0x27F9E4u;
    SET_GPR_U32(ctx, 31, 0x27F9ECu);
    ctx->pc = 0x27F9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F9E4u;
    // 0x27f9e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226510u, 0x27F9E4u, 0x27F9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F9ECu;
label_27f9ec:
    // 0x27f9ec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x27f9f0: 0xc4410278  lwc1        $f1, 0x278($v0)
    ctx->pc = 0x27f9f0u;
    { uint32_t bits = FAST_READ32(0x510278u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27f9f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27f9f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27f9f8: 0x0  nop
    ctx->pc = 0x27f9f8u;
    // NOP
    // 0x27f9fc: 0x45010066  bc1t        . + 4 + (0x66 << 2)
    ctx->pc = 0x27F9FCu;
    {
        const bool branch_taken_0x27f9fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27f9fc) {
            ctx->pc = 0x27FB98u;
            goto label_27fb98;
        }
    }
    ctx->pc = 0x27FA04u;
    // 0x27fa04: 0xc08c68e  jal         func_231A38
    ctx->pc = 0x27FA04u;
    SET_GPR_U32(ctx, 31, 0x27FA0Cu);
    ctx->pc = 0x27FA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FA04u;
    // 0x27fa08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A38u, 0x27FA04u, 0x27FA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FA0Cu;
label_27fa0c:
    // 0x27fa0c: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x27fa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x27fa10: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x27FA10u;
    {
        const bool branch_taken_0x27fa10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x27fa10) {
            ctx->pc = 0x27FA30u;
            goto label_27fa30;
        }
    }
    ctx->pc = 0x27FA18u;
    // 0x27fa18: 0xc0e409a  jal         func_390268
    ctx->pc = 0x27FA18u;
    SET_GPR_U32(ctx, 31, 0x27FA20u);
    ctx->pc = 0x27FA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FA18u;
    // 0x27fa1c: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x27FA18u, 0x27FA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FA20u;
label_27fa20:
    // 0x27fa20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27fa20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fa24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27fa24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fa28: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27FA28u;
    {
        const bool branch_taken_0x27fa28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FA28u;
        // 0x27fa2c: 0x240601ee  addiu       $a2, $zero, 0x1EE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 494));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fa28) {
            ctx->pc = 0x27FA44u;
            goto label_27fa44;
        }
    }
    ctx->pc = 0x27FA30u;
label_27fa30:
    // 0x27fa30: 0xc0e409a  jal         func_390268
    ctx->pc = 0x27FA30u;
    SET_GPR_U32(ctx, 31, 0x27FA38u);
    ctx->pc = 0x27FA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FA30u;
    // 0x27fa34: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x27FA30u, 0x27FA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FA38u;
label_27fa38:
    // 0x27fa38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27fa38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fa3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27fa3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fa40: 0x240601e6  addiu       $a2, $zero, 0x1E6
    ctx->pc = 0x27fa40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 486));
label_27fa44:
    // 0x27fa44: 0x3c070080  lui         $a3, 0x80
    ctx->pc = 0x27fa44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)128 << 16));
    // 0x27fa48: 0xc098ab2  jal         func_262AC8
    ctx->pc = 0x27FA48u;
    SET_GPR_U32(ctx, 31, 0x27FA50u);
    ctx->pc = 0x27FA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FA48u;
    // 0x27fa4c: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AC8u, 0x27FA48u, 0x27FA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FA50u;
label_27fa50:
    // 0x27fa50: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x27FA50u;
    {
        const bool branch_taken_0x27fa50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FA50u;
        // 0x27fa54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fa50) {
            ctx->pc = 0x27FD48u;
            goto label_27fd48;
        }
    }
    ctx->pc = 0x27FA58u;
label_27fa58:
    // 0x27fa58: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27fa58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27fa5c: 0xc0cd526  jal         func_335498
    ctx->pc = 0x27FA5Cu;
    SET_GPR_U32(ctx, 31, 0x27FA64u);
    ctx->pc = 0x27FA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FA5Cu;
    // 0x27fa60: 0x2484b898  addiu       $a0, $a0, -0x4768 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x27FA5Cu, 0x27FA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FA64u;
label_27fa64:
    // 0x27fa64: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x27fa64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x27fa68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27fa68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fa6c: 0xa46200bc  sh          $v0, 0xBC($v1)
    ctx->pc = 0x27fa6cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 188), (uint16_t)GPR_U32(ctx, 2));
    // 0x27fa70: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x27fa70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x27fa74: 0x844500bc  lh          $a1, 0xBC($v0)
    ctx->pc = 0x27fa74u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x27fa78: 0x8c430068  lw          $v1, 0x68($v0)
    ctx->pc = 0x27fa78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x27fa7c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x27fa7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x27fa80: 0xc09b97e  jal         func_26E5F8
    ctx->pc = 0x27FA80u;
    SET_GPR_U32(ctx, 31, 0x27FA88u);
    ctx->pc = 0x27FA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FA80u;
    // 0x27fa84: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26E5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E5F8u, 0x27FA80u, 0x27FA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FA88u;
label_27fa88:
    // 0x27fa88: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x27fa88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x27fa8c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x27fa8cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x27fa90: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27FA90u;
    {
        const bool branch_taken_0x27fa90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FA90u;
        // 0x27fa94: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fa90) {
            ctx->pc = 0x27FAACu;
            goto label_27faac;
        }
    }
    ctx->pc = 0x27FA98u;
    // 0x27fa98: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x27fa98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x27fa9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27fa9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27faa0: 0xc4400998  lwc1        $f0, 0x998($v0)
    ctx->pc = 0x27faa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27faa4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27FAA4u;
    {
        const bool branch_taken_0x27faa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FAA4u;
        // 0x27faa8: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27faa4) {
            ctx->pc = 0x27FAB0u;
            goto label_27fab0;
        }
    }
    ctx->pc = 0x27FAACu;
label_27faac:
    // 0x27faac: 0xc44c0998  lwc1        $f12, 0x998($v0)
    ctx->pc = 0x27faacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_27fab0:
    // 0x27fab0: 0xc089912  jal         func_226448
    ctx->pc = 0x27FAB0u;
    SET_GPR_U32(ctx, 31, 0x27FAB8u);
    ctx->pc = 0x27FAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FAB0u;
    // 0x27fab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226448u, 0x27FAB0u, 0x27FAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FAB8u;
label_27fab8:
    // 0x27fab8: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x27FAB8u;
    {
        const bool branch_taken_0x27fab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FAB8u;
        // 0x27fabc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fab8) {
            ctx->pc = 0x27FD48u;
            goto label_27fd48;
        }
    }
    ctx->pc = 0x27FAC0u;
label_27fac0:
    // 0x27fac0: 0xc09ed78  jal         func_27B5E0
    ctx->pc = 0x27FAC0u;
    SET_GPR_U32(ctx, 31, 0x27FAC8u);
    ctx->pc = 0x27FAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FAC0u;
    // 0x27fac4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B5E0u, 0x27FAC0u, 0x27FAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FAC8u;
label_27fac8:
    // 0x27fac8: 0x10400081  beqz        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x27FAC8u;
    {
        const bool branch_taken_0x27fac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fac8) {
            ctx->pc = 0x27FCD0u;
            goto label_27fcd0;
        }
    }
    ctx->pc = 0x27FAD0u;
    // 0x27fad0: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x27FAD0u;
    SET_GPR_U32(ctx, 31, 0x27FAD8u);
    ctx->pc = 0x27FAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FAD0u;
    // 0x27fad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x27FAD0u, 0x27FAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FAD8u;
label_27fad8:
    // 0x27fad8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27fad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27fadc: 0x1443004b  bne         $v0, $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x27FADCu;
    {
        const bool branch_taken_0x27fadc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x27fadc) {
            ctx->pc = 0x27FC0Cu;
            goto label_27fc0c;
        }
    }
    ctx->pc = 0x27FAE4u;
    // 0x27fae4: 0xc088e70  jal         func_2239C0
    ctx->pc = 0x27FAE4u;
    SET_GPR_U32(ctx, 31, 0x27FAECu);
    ctx->pc = 0x27FAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FAE4u;
    // 0x27fae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239C0u, 0x27FAE4u, 0x27FAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FAECu;
label_27faec:
    // 0x27faec: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x27FAECu;
    {
        const bool branch_taken_0x27faec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27faec) {
            ctx->pc = 0x27FB78u;
            goto label_27fb78;
        }
    }
    ctx->pc = 0x27FAF4u;
    // 0x27faf4: 0xc089944  jal         func_226510
    ctx->pc = 0x27FAF4u;
    SET_GPR_U32(ctx, 31, 0x27FAFCu);
    ctx->pc = 0x27FAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FAF4u;
    // 0x27faf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226510u, 0x27FAF4u, 0x27FAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FAFCu;
label_27fafc:
    // 0x27fafc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27fafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x27fb00: 0xc4410278  lwc1        $f1, 0x278($v0)
    ctx->pc = 0x27fb00u;
    { uint32_t bits = FAST_READ32(0x510278u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27fb04: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27fb04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27fb08: 0x0  nop
    ctx->pc = 0x27fb08u;
    // NOP
    // 0x27fb0c: 0x45010022  bc1t        . + 4 + (0x22 << 2)
    ctx->pc = 0x27FB0Cu;
    {
        const bool branch_taken_0x27fb0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27fb0c) {
            ctx->pc = 0x27FB98u;
            goto label_27fb98;
        }
    }
    ctx->pc = 0x27FB14u;
    // 0x27fb14: 0xc08c68e  jal         func_231A38
    ctx->pc = 0x27FB14u;
    SET_GPR_U32(ctx, 31, 0x27FB1Cu);
    ctx->pc = 0x27FB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FB14u;
    // 0x27fb18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A38u, 0x27FB14u, 0x27FB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FB1Cu;
label_27fb1c:
    // 0x27fb1c: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x27fb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x27fb20: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x27FB20u;
    {
        const bool branch_taken_0x27fb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x27fb20) {
            ctx->pc = 0x27FB50u;
            goto label_27fb50;
        }
    }
    ctx->pc = 0x27FB28u;
    // 0x27fb28: 0xc0e409a  jal         func_390268
    ctx->pc = 0x27FB28u;
    SET_GPR_U32(ctx, 31, 0x27FB30u);
    ctx->pc = 0x27FB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FB28u;
    // 0x27fb2c: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x27FB28u, 0x27FB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FB30u;
label_27fb30:
    // 0x27fb30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27fb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fb34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27fb34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fb38: 0x240601ec  addiu       $a2, $zero, 0x1EC
    ctx->pc = 0x27fb38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 492));
    // 0x27fb3c: 0x3c070080  lui         $a3, 0x80
    ctx->pc = 0x27fb3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)128 << 16));
    // 0x27fb40: 0xc098ab2  jal         func_262AC8
    ctx->pc = 0x27FB40u;
    SET_GPR_U32(ctx, 31, 0x27FB48u);
    ctx->pc = 0x27FB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FB40u;
    // 0x27fb44: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AC8u, 0x27FB40u, 0x27FB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FB48u;
label_27fb48:
    // 0x27fb48: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x27FB48u;
    {
        const bool branch_taken_0x27fb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FB48u;
        // 0x27fb4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fb48) {
            ctx->pc = 0x27FD48u;
            goto label_27fd48;
        }
    }
    ctx->pc = 0x27FB50u;
label_27fb50:
    // 0x27fb50: 0xc0e409a  jal         func_390268
    ctx->pc = 0x27FB50u;
    SET_GPR_U32(ctx, 31, 0x27FB58u);
    ctx->pc = 0x27FB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FB50u;
    // 0x27fb54: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x27FB50u, 0x27FB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FB58u;
label_27fb58:
    // 0x27fb58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27fb58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fb5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27fb5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fb60: 0x240601e4  addiu       $a2, $zero, 0x1E4
    ctx->pc = 0x27fb60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 484));
    // 0x27fb64: 0x3c070080  lui         $a3, 0x80
    ctx->pc = 0x27fb64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)128 << 16));
    // 0x27fb68: 0xc098ab2  jal         func_262AC8
    ctx->pc = 0x27FB68u;
    SET_GPR_U32(ctx, 31, 0x27FB70u);
    ctx->pc = 0x27FB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FB68u;
    // 0x27fb6c: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AC8u, 0x27FB68u, 0x27FB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FB70u;
label_27fb70:
    // 0x27fb70: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x27FB70u;
    {
        const bool branch_taken_0x27fb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FB70u;
        // 0x27fb74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fb70) {
            ctx->pc = 0x27FD48u;
            goto label_27fd48;
        }
    }
    ctx->pc = 0x27FB78u;
label_27fb78:
    // 0x27fb78: 0xc089944  jal         func_226510
    ctx->pc = 0x27FB78u;
    SET_GPR_U32(ctx, 31, 0x27FB80u);
    ctx->pc = 0x27FB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FB78u;
    // 0x27fb7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226510u, 0x27FB78u, 0x27FB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FB80u;
label_27fb80:
    // 0x27fb80: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27fb80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x27fb84: 0xc4410278  lwc1        $f1, 0x278($v0)
    ctx->pc = 0x27fb84u;
    { uint32_t bits = FAST_READ32(0x510278u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27fb88: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27fb88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27fb8c: 0x0  nop
    ctx->pc = 0x27fb8cu;
    // NOP
    // 0x27fb90: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27FB90u;
    {
        const bool branch_taken_0x27fb90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27fb90) {
            ctx->pc = 0x27FBA8u;
            goto label_27fba8;
        }
    }
    ctx->pc = 0x27FB98u;
label_27fb98:
    // 0x27fb98: 0xc09b1f8  jal         func_26C7E0
    ctx->pc = 0x27FB98u;
    SET_GPR_U32(ctx, 31, 0x27FBA0u);
    ctx->pc = 0x27FB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FB98u;
    // 0x27fb9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C7E0u, 0x27FB98u, 0x27FBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FBA0u;
label_27fba0:
    // 0x27fba0: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x27FBA0u;
    {
        const bool branch_taken_0x27fba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FBA0u;
        // 0x27fba4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fba0) {
            ctx->pc = 0x27FD48u;
            goto label_27fd48;
        }
    }
    ctx->pc = 0x27FBA8u;
label_27fba8:
    // 0x27fba8: 0xc08c68e  jal         func_231A38
    ctx->pc = 0x27FBA8u;
    SET_GPR_U32(ctx, 31, 0x27FBB0u);
    ctx->pc = 0x27FBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FBA8u;
    // 0x27fbac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A38u, 0x27FBA8u, 0x27FBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FBB0u;
label_27fbb0:
    // 0x27fbb0: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x27fbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x27fbb4: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x27FBB4u;
    {
        const bool branch_taken_0x27fbb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x27fbb4) {
            ctx->pc = 0x27FBE4u;
            goto label_27fbe4;
        }
    }
    ctx->pc = 0x27FBBCu;
    // 0x27fbbc: 0xc0e409a  jal         func_390268
    ctx->pc = 0x27FBBCu;
    SET_GPR_U32(ctx, 31, 0x27FBC4u);
    ctx->pc = 0x27FBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FBBCu;
    // 0x27fbc0: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x27FBBCu, 0x27FBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FBC4u;
label_27fbc4:
    // 0x27fbc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27fbc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fbc8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27fbc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fbcc: 0x240601ee  addiu       $a2, $zero, 0x1EE
    ctx->pc = 0x27fbccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 494));
    // 0x27fbd0: 0x3c070080  lui         $a3, 0x80
    ctx->pc = 0x27fbd0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)128 << 16));
    // 0x27fbd4: 0xc098ab2  jal         func_262AC8
    ctx->pc = 0x27FBD4u;
    SET_GPR_U32(ctx, 31, 0x27FBDCu);
    ctx->pc = 0x27FBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FBD4u;
    // 0x27fbd8: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AC8u, 0x27FBD4u, 0x27FBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FBDCu;
label_27fbdc:
    // 0x27fbdc: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x27FBDCu;
    {
        const bool branch_taken_0x27fbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FBDCu;
        // 0x27fbe0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fbdc) {
            ctx->pc = 0x27FD48u;
            goto label_27fd48;
        }
    }
    ctx->pc = 0x27FBE4u;
label_27fbe4:
    // 0x27fbe4: 0xc0e409a  jal         func_390268
    ctx->pc = 0x27FBE4u;
    SET_GPR_U32(ctx, 31, 0x27FBECu);
    ctx->pc = 0x27FBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FBE4u;
    // 0x27fbe8: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x27FBE4u, 0x27FBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FBECu;
label_27fbec:
    // 0x27fbec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27fbecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fbf0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27fbf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fbf4: 0x240601e6  addiu       $a2, $zero, 0x1E6
    ctx->pc = 0x27fbf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 486));
    // 0x27fbf8: 0x3c070080  lui         $a3, 0x80
    ctx->pc = 0x27fbf8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)128 << 16));
    // 0x27fbfc: 0xc098ab2  jal         func_262AC8
    ctx->pc = 0x27FBFCu;
    SET_GPR_U32(ctx, 31, 0x27FC04u);
    ctx->pc = 0x27FC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FBFCu;
    // 0x27fc00: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AC8u, 0x27FBFCu, 0x27FC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FC04u;
label_27fc04:
    // 0x27fc04: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x27FC04u;
    {
        const bool branch_taken_0x27fc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FC04u;
        // 0x27fc08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fc04) {
            ctx->pc = 0x27FD48u;
            goto label_27fd48;
        }
    }
    ctx->pc = 0x27FC0Cu;
label_27fc0c:
    // 0x27fc0c: 0xc088e68  jal         func_2239A0
    ctx->pc = 0x27FC0Cu;
    SET_GPR_U32(ctx, 31, 0x27FC14u);
    ctx->pc = 0x27FC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FC0Cu;
    // 0x27fc10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239A0u, 0x27FC0Cu, 0x27FC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FC14u;
label_27fc14:
    // 0x27fc14: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x27FC14u;
    {
        const bool branch_taken_0x27fc14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FC14u;
        // 0x27fc18: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fc14) {
            ctx->pc = 0x27FC70u;
            goto label_27fc70;
        }
    }
    ctx->pc = 0x27FC1Cu;
    // 0x27fc1c: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x27fc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x27fc20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27fc20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fc24: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x27fc24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x27fc28: 0xc09b97e  jal         func_26E5F8
    ctx->pc = 0x27FC28u;
    SET_GPR_U32(ctx, 31, 0x27FC30u);
    ctx->pc = 0x27FC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FC28u;
    // 0x27fc2c: 0xa44300bc  sh          $v1, 0xBC($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 188), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26E5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E5F8u, 0x27FC28u, 0x27FC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FC30u;
label_27fc30:
    // 0x27fc30: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x27fc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x27fc34: 0xac6000b8  sw          $zero, 0xB8($v1)
    ctx->pc = 0x27fc34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 184), GPR_U32(ctx, 0));
    // 0x27fc38: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x27fc38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x27fc3c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x27fc3cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x27fc40: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27FC40u;
    {
        const bool branch_taken_0x27fc40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FC40u;
        // 0x27fc44: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fc40) {
            ctx->pc = 0x27FC5Cu;
            goto label_27fc5c;
        }
    }
    ctx->pc = 0x27FC48u;
    // 0x27fc48: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x27fc48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x27fc4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27fc4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27fc50: 0xc4400998  lwc1        $f0, 0x998($v0)
    ctx->pc = 0x27fc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27fc54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27FC54u;
    {
        const bool branch_taken_0x27fc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FC54u;
        // 0x27fc58: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fc54) {
            ctx->pc = 0x27FC60u;
            goto label_27fc60;
        }
    }
    ctx->pc = 0x27FC5Cu;
label_27fc5c:
    // 0x27fc5c: 0xc44c0998  lwc1        $f12, 0x998($v0)
    ctx->pc = 0x27fc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_27fc60:
    // 0x27fc60: 0xc089912  jal         func_226448
    ctx->pc = 0x27FC60u;
    SET_GPR_U32(ctx, 31, 0x27FC68u);
    ctx->pc = 0x27FC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FC60u;
    // 0x27fc64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226448u, 0x27FC60u, 0x27FC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FC68u;
label_27fc68:
    // 0x27fc68: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x27FC68u;
    {
        const bool branch_taken_0x27fc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FC68u;
        // 0x27fc6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fc68) {
            ctx->pc = 0x27FD48u;
            goto label_27fd48;
        }
    }
    ctx->pc = 0x27FC70u;
label_27fc70:
    // 0x27fc70: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x27fc70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x27fc74: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x27fc74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x27fc78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27fc78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27fc7c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x27fc7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x27fc80: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x27fc80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x27fc84: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x27fc84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x27fc88: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x27FC88u;
    {
        const bool branch_taken_0x27fc88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FC88u;
        // 0x27fc8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fc88) {
            ctx->pc = 0x27FD48u;
            goto label_27fd48;
        }
    }
    ctx->pc = 0x27FC90u;
    // 0x27fc90: 0xc09bb04  jal         func_26EC10
    ctx->pc = 0x27FC90u;
    SET_GPR_U32(ctx, 31, 0x27FC98u);
    ctx->pc = 0x27FC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FC90u;
    // 0x27fc94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EC10u, 0x27FC90u, 0x27FC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FC98u;
label_27fc98:
    // 0x27fc98: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x27fc98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x27fc9c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x27fc9cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x27fca0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27FCA0u;
    {
        const bool branch_taken_0x27fca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FCA0u;
        // 0x27fca4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fca0) {
            ctx->pc = 0x27FCBCu;
            goto label_27fcbc;
        }
    }
    ctx->pc = 0x27FCA8u;
    // 0x27fca8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x27fca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x27fcac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27fcacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27fcb0: 0xc4400998  lwc1        $f0, 0x998($v0)
    ctx->pc = 0x27fcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27fcb4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27FCB4u;
    {
        const bool branch_taken_0x27fcb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FCB4u;
        // 0x27fcb8: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fcb4) {
            ctx->pc = 0x27FCC0u;
            goto label_27fcc0;
        }
    }
    ctx->pc = 0x27FCBCu;
label_27fcbc:
    // 0x27fcbc: 0xc44c0998  lwc1        $f12, 0x998($v0)
    ctx->pc = 0x27fcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_27fcc0:
    // 0x27fcc0: 0xc089912  jal         func_226448
    ctx->pc = 0x27FCC0u;
    SET_GPR_U32(ctx, 31, 0x27FCC8u);
    ctx->pc = 0x27FCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FCC0u;
    // 0x27fcc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226448u, 0x27FCC0u, 0x27FCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FCC8u;
label_27fcc8:
    // 0x27fcc8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x27FCC8u;
    {
        const bool branch_taken_0x27fcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FCC8u;
        // 0x27fccc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fcc8) {
            ctx->pc = 0x27FD48u;
            goto label_27fd48;
        }
    }
    ctx->pc = 0x27FCD0u;
label_27fcd0:
    // 0x27fcd0: 0xc09effc  jal         func_27BFF0
    ctx->pc = 0x27FCD0u;
    SET_GPR_U32(ctx, 31, 0x27FCD8u);
    ctx->pc = 0x27FCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FCD0u;
    // 0x27fcd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BFF0u, 0x27FCD0u, 0x27FCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FCD8u;
label_27fcd8:
    // 0x27fcd8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x27FCD8u;
    {
        const bool branch_taken_0x27fcd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FCD8u;
        // 0x27fcdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fcd8) {
            ctx->pc = 0x27FD48u;
            goto label_27fd48;
        }
    }
    ctx->pc = 0x27FCE0u;
    // 0x27fce0: 0xc088e68  jal         func_2239A0
    ctx->pc = 0x27FCE0u;
    SET_GPR_U32(ctx, 31, 0x27FCE8u);
    ctx->pc = 0x27FCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FCE0u;
    // 0x27fce4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239A0u, 0x27FCE0u, 0x27FCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FCE8u;
label_27fce8:
    // 0x27fce8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27FCE8u;
    {
        const bool branch_taken_0x27fce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FCE8u;
        // 0x27fcec: 0xde0200e0  ld          $v0, 0xE0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fce8) {
            ctx->pc = 0x27FD20u;
            goto label_27fd20;
        }
    }
    ctx->pc = 0x27FCF0u;
    // 0x27fcf0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x27fcf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x27fcf4: 0x31c78  dsll        $v1, $v1, 17
    ctx->pc = 0x27fcf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 17);
    // 0x27fcf8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27fcf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27fcfc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x27fcfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x27fd00: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x27fd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x27fd04: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x27fd04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x27fd08: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x27FD08u;
    {
        const bool branch_taken_0x27fd08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27fd08) {
            ctx->pc = 0x27FD0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27FD08u;
            // 0x27fd0c: 0xde0200e0  ld          $v0, 0xE0($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27FD20u;
            goto label_27fd20;
        }
    }
    ctx->pc = 0x27FD10u;
    // 0x27fd10: 0xc09bc02  jal         func_26F008
    ctx->pc = 0x27FD10u;
    SET_GPR_U32(ctx, 31, 0x27FD18u);
    ctx->pc = 0x27FD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FD10u;
    // 0x27fd14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F008u, 0x27FD10u, 0x27FD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FD18u;
label_27fd18:
    // 0x27fd18: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27FD18u;
    {
        const bool branch_taken_0x27fd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD18u;
        // 0x27fd1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fd18) {
            ctx->pc = 0x27FD48u;
            goto label_27fd48;
        }
    }
    ctx->pc = 0x27FD20u;
label_27fd20:
    // 0x27fd20: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x27fd20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x27fd24: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27fd24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27fd28: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x27fd28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x27fd2c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x27fd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x27fd30: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x27fd30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x27fd34: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27FD34u;
    {
        const bool branch_taken_0x27fd34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD34u;
        // 0x27fd38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fd34) {
            ctx->pc = 0x27FD48u;
            goto label_27fd48;
        }
    }
    ctx->pc = 0x27FD3Cu;
    // 0x27fd3c: 0xc09b666  jal         func_26D998
    ctx->pc = 0x27FD3Cu;
    SET_GPR_U32(ctx, 31, 0x27FD44u);
    ctx->pc = 0x27FD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FD3Cu;
    // 0x27fd40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26D998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D998u, 0x27FD3Cu, 0x27FD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FD44u;
label_27fd44:
    // 0x27fd44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27fd44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27fd48:
    // 0x27fd48: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x27fd48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27fd4c:
    // 0x27fd4c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27fd4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27fd50: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x27fd50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27fd54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27fd54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27fd58: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x27fd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27fd5c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x27fd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27fd60: 0x3e00008  jr          $ra
    ctx->pc = 0x27FD60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27FD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD60u;
        // 0x27fd64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27FD60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27FD68u;
}
