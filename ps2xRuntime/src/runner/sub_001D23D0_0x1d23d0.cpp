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

// Function: sub_001D23D0
// Address: 0x1d23d0 - 0x1d2970
void sub_001D23D0_0x1d23d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D23D0_0x1d23d0");
#endif

    switch (ctx->pc) {
        case 0x1d2414u: goto label_1d2414;
        case 0x1d2428u: goto label_1d2428;
        case 0x1d2430u: goto label_1d2430;
        case 0x1d2444u: goto label_1d2444;
        case 0x1d2450u: goto label_1d2450;
        case 0x1d2498u: goto label_1d2498;
        case 0x1d24b8u: goto label_1d24b8;
        case 0x1d24fcu: goto label_1d24fc;
        case 0x1d2510u: goto label_1d2510;
        case 0x1d251cu: goto label_1d251c;
        case 0x1d2548u: goto label_1d2548;
        case 0x1d2554u: goto label_1d2554;
        case 0x1d2584u: goto label_1d2584;
        case 0x1d258cu: goto label_1d258c;
        case 0x1d2598u: goto label_1d2598;
        case 0x1d2640u: goto label_1d2640;
        case 0x1d2650u: goto label_1d2650;
        case 0x1d2668u: goto label_1d2668;
        case 0x1d26d4u: goto label_1d26d4;
        case 0x1d26e4u: goto label_1d26e4;
        case 0x1d2720u: goto label_1d2720;
        case 0x1d2728u: goto label_1d2728;
        case 0x1d275cu: goto label_1d275c;
        case 0x1d2780u: goto label_1d2780;
        case 0x1d278cu: goto label_1d278c;
        case 0x1d27ccu: goto label_1d27cc;
        case 0x1d27d4u: goto label_1d27d4;
        case 0x1d2808u: goto label_1d2808;
        case 0x1d2810u: goto label_1d2810;
        case 0x1d2844u: goto label_1d2844;
        case 0x1d2854u: goto label_1d2854;
        case 0x1d285cu: goto label_1d285c;
        case 0x1d28c4u: goto label_1d28c4;
        case 0x1d28ecu: goto label_1d28ec;
        case 0x1d28f4u: goto label_1d28f4;
        case 0x1d2900u: goto label_1d2900;
        case 0x1d2910u: goto label_1d2910;
        case 0x1d2928u: goto label_1d2928;
        default: break;
    }

    ctx->pc = 0x1d23d0u;

    // 0x1d23d0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1d23d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1d23d4: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x1d23d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x1d23d8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d23d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d23dc: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x1d23dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x1d23e0: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x1d23e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x1d23e4: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x1d23e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x1d23e8: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1d23e8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x1d23ec: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x1d23ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x1d23f0: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x1d23f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x1d23f4: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x1d23f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x1d23f8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1d23f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d23fc: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x1d23fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x1d2400: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1d2400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1d2404: 0x3c170051  lui         $s7, 0x51
    ctx->pc = 0x1d2404u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
    // 0x1d2408: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1d2408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1d240c: 0xc0746a8  jal         func_1D1AA0
    ctx->pc = 0x1D240Cu;
    SET_GPR_U32(ctx, 31, 0x1D2414u);
    ctx->pc = 0x1D2410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D240Cu;
    // 0x1d2410: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1AA0u, 0x1D240Cu, 0x1D2414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2414u;
label_1d2414:
    // 0x1d2414: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1d2414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1d2418: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1d2418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1d241c: 0x8c4391b8  lw          $v1, -0x6E48($v0)
    ctx->pc = 0x1d241cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D91B8u));
    // 0x1d2420: 0xc0e4060  jal         func_390180
    ctx->pc = 0x1D2420u;
    SET_GPR_U32(ctx, 31, 0x1D2428u);
    ctx->pc = 0x1D2424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2420u;
    // 0x1d2424: 0xafa30060  sw          $v1, 0x60($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1D2420u, 0x1D2428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2428u;
label_1d2428:
    // 0x1d2428: 0xc08a61a  jal         func_229868
    ctx->pc = 0x1D2428u;
    SET_GPR_U32(ctx, 31, 0x1D2430u);
    ctx->pc = 0x1D242Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2428u;
    // 0x1d242c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x1D2428u, 0x1D2430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2430u;
label_1d2430:
    // 0x1d2430: 0x8e30489c  lw          $s0, 0x489C($s1)
    ctx->pc = 0x1d2430u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
    // 0x1d2434: 0x804201b0  lb          $v0, 0x1B0($v0)
    ctx->pc = 0x1d2434u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x1d2438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d243c: 0xc136ad6  jal         func_4DAB58
    ctx->pc = 0x1D243Cu;
    SET_GPR_U32(ctx, 31, 0x1D2444u);
    ctx->pc = 0x1D2440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D243Cu;
    // 0x1d2440: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x1D243Cu, 0x1D2444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2444u;
label_1d2444:
    // 0x1d2444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2448: 0xc136ad4  jal         func_4DAB50
    ctx->pc = 0x1D2448u;
    SET_GPR_U32(ctx, 31, 0x1D2450u);
    ctx->pc = 0x1D244Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2448u;
    // 0x1d244c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x1D2448u, 0x1D2450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2450u;
label_1d2450:
    // 0x1d2450: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x1d2450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d2454: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1d2454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1d2458: 0xafa30074  sw          $v1, 0x74($sp)
    ctx->pc = 0x1d2458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
    // 0x1d245c: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x1d245cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d2460: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x1d2460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x1d2464: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x1d2464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x1d2468: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1d2468u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d246c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d246cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d2470: 0x27b40064  addiu       $s4, $sp, 0x64
    ctx->pc = 0x1d2470u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x1d2474: 0x27b60068  addiu       $s6, $sp, 0x68
    ctx->pc = 0x1d2474u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1d2478: 0x27be0030  addiu       $fp, $sp, 0x30
    ctx->pc = 0x1d2478u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d247c: 0x2490deb8  addiu       $s0, $a0, -0x2148
    ctx->pc = 0x1d247cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958776));
    // 0x1d2480: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1d2480u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d2484: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1d2484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d2488: 0x3842005f  xori        $v0, $v0, 0x5F
    ctx->pc = 0x1d2488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)95);
    // 0x1d248c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1d248cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1d2490: 0xae6207d0  sw          $v0, 0x7D0($s3)
    ctx->pc = 0x1d2490u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2000), GPR_U32(ctx, 2));
    // 0x1d2494: 0x0  nop
    ctx->pc = 0x1d2494u;
    // NOP
label_1d2498:
    // 0x1d2498: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d2498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d249c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d249cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d24a0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1d24a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1d24a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1d24a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d24a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d24a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d24ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d24acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d24b0: 0xc063514  jal         func_18D450
    ctx->pc = 0x1D24B0u;
    SET_GPR_U32(ctx, 31, 0x1D24B8u);
    ctx->pc = 0x1D24B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D24B0u;
    // 0x1d24b4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D450u, 0x1D24B0u, 0x1D24B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D24B8u;
label_1d24b8:
    // 0x1d24b8: 0x2ea20002  sltiu       $v0, $s5, 0x2
    ctx->pc = 0x1d24b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d24bc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D24BCu;
    {
        const bool branch_taken_0x1d24bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D24C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D24BCu;
        // 0x1d24c0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d24bc) {
            ctx->pc = 0x1D2498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2498;
        }
    }
    ctx->pc = 0x1D24C4u;
    // 0x1d24c4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d24c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d24c8: 0xc6e1ec94  lwc1        $f1, -0x136C($s7)
    ctx->pc = 0x1d24c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294962324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d24cc: 0xc440ec9c  lwc1        $f0, -0x1364($v0)
    ctx->pc = 0x1d24ccu;
    { uint32_t bits = FAST_READ32(0x50EC9Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d24d0: 0x26710170  addiu       $s1, $s3, 0x170
    ctx->pc = 0x1d24d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 368));
    // 0x1d24d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d24d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d24d8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1d24d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d24dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d24dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d24e0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1d24e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1d24e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d24e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d24e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d24e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d24ec: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x1d24ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1d24f0: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1d24f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x1d24f4: 0xc06e4dc  jal         func_1B9370
    ctx->pc = 0x1D24F4u;
    SET_GPR_U32(ctx, 31, 0x1D24FCu);
    ctx->pc = 0x1D24F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D24F4u;
    // 0x1d24f8: 0xe654000c  swc1        $f20, 0xC($s2) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9370u, 0x1D24F4u, 0x1D24FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D24FCu;
label_1d24fc:
    // 0x1d24fc: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x1d24fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x1d2500: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D2500u;
    {
        const bool branch_taken_0x1d2500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2500u;
        // 0x1d2504: 0x240300aa  addiu       $v1, $zero, 0xAA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2500) {
            ctx->pc = 0x1D2520u;
            goto label_1d2520;
        }
    }
    ctx->pc = 0x1D2508u;
    // 0x1d2508: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1D2508u;
    SET_GPR_U32(ctx, 31, 0x1D2510u);
    ctx->pc = 0x1D250Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2508u;
    // 0x1d250c: 0x240400da  addiu       $a0, $zero, 0xDA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 218));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D2508u, 0x1D2510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2510u;
label_1d2510:
    // 0x1d2510: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d2510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2514: 0xc06ec94  jal         func_1BB250
    ctx->pc = 0x1D2514u;
    SET_GPR_U32(ctx, 31, 0x1D251Cu);
    ctx->pc = 0x1D2518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2514u;
    // 0x1d2518: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1D2514u, 0x1D251Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D251Cu;
label_1d251c:
    // 0x1d251c: 0x240300aa  addiu       $v1, $zero, 0xAA
    ctx->pc = 0x1d251cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
label_1d2520:
    // 0x1d2520: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1d2520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d2524: 0xa3a30064  sb          $v1, 0x64($sp)
    ctx->pc = 0x1d2524u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 100), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d2528: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x1d2528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x1d252c: 0xa2820003  sb          $v0, 0x3($s4)
    ctx->pc = 0x1d252cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d2530: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d2530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2534: 0xa2850002  sb          $a1, 0x2($s4)
    ctx->pc = 0x1d2534u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d2538: 0x26700430  addiu       $s0, $s3, 0x430
    ctx->pc = 0x1d2538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1072));
    // 0x1d253c: 0xa2850001  sb          $a1, 0x1($s4)
    ctx->pc = 0x1d253cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d2540: 0xc06e534  jal         func_1B94D0
    ctx->pc = 0x1D2540u;
    SET_GPR_U32(ctx, 31, 0x1D2548u);
    ctx->pc = 0x1D2544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2540u;
    // 0x1d2544: 0x8fa50064  lw          $a1, 0x64($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B94D0u, 0x1D2540u, 0x1D2548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2548u;
label_1d2548:
    // 0x1d2548: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d2548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d254c: 0xc06e51e  jal         func_1B9478
    ctx->pc = 0x1D254Cu;
    SET_GPR_U32(ctx, 31, 0x1D2554u);
    ctx->pc = 0x1D2550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D254Cu;
    // 0x1d2550: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9478u, 0x1D254Cu, 0x1D2554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2554u;
label_1d2554:
    // 0x1d2554: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1d2554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1d2558: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d2558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d255c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d255cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d2560: 0xc440ecac  lwc1        $f0, -0x1354($v0)
    ctx->pc = 0x1d2560u;
    { uint32_t bits = FAST_READ32(0x50ECACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2564: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d2564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2568: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1d2568u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1d256c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d256cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2570: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1d2570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1d2574: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2578: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1d2578u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x1d257c: 0xc073ad0  jal         func_1CEB40
    ctx->pc = 0x1D257Cu;
    SET_GPR_U32(ctx, 31, 0x1D2584u);
    ctx->pc = 0x1D2580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D257Cu;
    // 0x1d2580: 0xe654000c  swc1        $f20, 0xC($s2) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEB40u, 0x1D257Cu, 0x1D2584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2584u;
label_1d2584:
    // 0x1d2584: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1D2584u;
    SET_GPR_U32(ctx, 31, 0x1D258Cu);
    ctx->pc = 0x1D2588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2584u;
    // 0x1d2588: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D2584u, 0x1D258Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D258Cu;
label_1d258c:
    // 0x1d258c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d258cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2590: 0xc073b0a  jal         func_1CEC28
    ctx->pc = 0x1D2590u;
    SET_GPR_U32(ctx, 31, 0x1D2598u);
    ctx->pc = 0x1D2594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2590u;
    // 0x1d2594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x1D2590u, 0x1D2598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2598u;
label_1d2598:
    // 0x1d2598: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d2598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d259c: 0xc6e0ec94  lwc1        $f0, -0x136C($s7)
    ctx->pc = 0x1d259cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294962324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d25a0: 0xc441ec90  lwc1        $f1, -0x1370($v0)
    ctx->pc = 0x1d25a0u;
    { uint32_t bits = FAST_READ32(0x50EC90u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d25a4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d25a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1d25a8: 0x8ca2489c  lw          $v0, 0x489C($a1)
    ctx->pc = 0x1d25a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x51489Cu));
    // 0x1d25ac: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1d25acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1d25b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d25b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d25b4: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1d25b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1d25b8: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x1d25b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1d25bc: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1d25bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x1d25c0: 0x8c510120  lw          $s1, 0x120($v0)
    ctx->pc = 0x1d25c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x1d25c4: 0x16230003  bne         $s1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D25C4u;
    {
        const bool branch_taken_0x1d25c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D25C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D25C4u;
        // 0x1d25c8: 0x3c09020b  lui         $t1, 0x20B (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)523 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d25c4) {
            ctx->pc = 0x1D25D4u;
            goto label_1d25d4;
        }
    }
    ctx->pc = 0x1D25CCu;
    // 0x1d25cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D25CCu;
    {
        const bool branch_taken_0x1d25cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D25D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D25CCu;
        // 0x1d25d0: 0x3c09020d  lui         $t1, 0x20D (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)525 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d25cc) {
            ctx->pc = 0x1D25E0u;
            goto label_1d25e0;
        }
    }
    ctx->pc = 0x1D25D4u;
label_1d25d4:
    // 0x1d25d4: 0x3a230002  xori        $v1, $s1, 0x2
    ctx->pc = 0x1d25d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)2);
    // 0x1d25d8: 0x3c02020c  lui         $v0, 0x20C
    ctx->pc = 0x1d25d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)524 << 16));
    // 0x1d25dc: 0x43480a  movz        $t1, $v0, $v1
    ctx->pc = 0x1d25dcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 2));
label_1d25e0:
    // 0x1d25e0: 0x240200bf  addiu       $v0, $zero, 0xBF
    ctx->pc = 0x1d25e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
    // 0x1d25e4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1d25e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d25e8: 0xa3a20068  sb          $v0, 0x68($sp)
    ctx->pc = 0x1d25e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 104), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d25ec: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1d25ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x1d25f0: 0xa2c20002  sb          $v0, 0x2($s6)
    ctx->pc = 0x1d25f0u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d25f4: 0x26700070  addiu       $s0, $s3, 0x70
    ctx->pc = 0x1d25f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    // 0x1d25f8: 0xa2c30003  sb          $v1, 0x3($s6)
    ctx->pc = 0x1d25f8u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d25fc: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x1d25fcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x1d2600: 0xa2c20001  sb          $v0, 0x1($s6)
    ctx->pc = 0x1d2600u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d2604: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1d2604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d2608: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x1d2608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
    // 0x1d260c: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x1d260cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
    // 0x1d2610: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1d2610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1d2614: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d2614u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2618: 0xc4ccec98  lwc1        $f12, -0x1368($a2)
    ctx->pc = 0x1d2618u;
    { uint32_t bits = FAST_READ32(0x50EC98u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d261c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d261cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2620: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1d2620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1d2624: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x1d2624u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x1d2628: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1d2628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1d262c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d262cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2630: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1d2630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1d2634: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2638: 0xc06876e  jal         func_1A1DB8
    ctx->pc = 0x1D2638u;
    SET_GPR_U32(ctx, 31, 0x1D2640u);
    ctx->pc = 0x1D263Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2638u;
    // 0x1d263c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1D2638u, 0x1D2640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2640u;
label_1d2640:
    // 0x1d2640: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1d2640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d2644: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d2644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2648: 0xc068818  jal         func_1A2060
    ctx->pc = 0x1D2648u;
    SET_GPR_U32(ctx, 31, 0x1D2650u);
    ctx->pc = 0x1D264Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2648u;
    // 0x1d264c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1D2648u, 0x1D2650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2650u;
label_1d2650:
    // 0x1d2650: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1d2650u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x1d2654: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2658: 0xc4ecec98  lwc1        $f12, -0x1368($a3)
    ctx->pc = 0x1d2658u;
    { uint32_t bits = FAST_READ32(0x50EC98u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d265c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d265cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2660: 0xc068848  jal         func_1A2120
    ctx->pc = 0x1D2660u;
    SET_GPR_U32(ctx, 31, 0x1D2668u);
    ctx->pc = 0x1D2664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2660u;
    // 0x1d2664: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1D2660u, 0x1D2668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2668u;
label_1d2668:
    // 0x1d2668: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d2668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d266c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1d266cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1d2670: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d2670u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d2674: 0xc442eca8  lwc1        $f2, -0x1358($v0)
    ctx->pc = 0x1d2674u;
    { uint32_t bits = FAST_READ32(0x50ECA8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d2678: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d2678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d267c: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1d267cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x1d2680: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d2680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d2684: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d2684u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2688: 0x24475d10  addiu       $a3, $v0, 0x5D10
    ctx->pc = 0x1d2688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 23824));
    // 0x1d268c: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x1d268cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1d2690: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x1d2690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1d2694: 0xb3a40037  sdl         $a0, 0x37($sp)
    ctx->pc = 0x1d2694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d2698: 0xb7a40030  sdr         $a0, 0x30($sp)
    ctx->pc = 0x1d2698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d269c: 0xafa3006c  sw          $v1, 0x6C($sp)
    ctx->pc = 0x1d269cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
    // 0x1d26a0: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1d26a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1d26a4: 0x8e6207d0  lw          $v0, 0x7D0($s3)
    ctx->pc = 0x1d26a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2000)));
    // 0x1d26a8: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x1d26a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1d26ac: 0xe6420008  swc1        $f2, 0x8($s2)
    ctx->pc = 0x1d26acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1d26b0: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1D26B0u;
    {
        const bool branch_taken_0x1d26b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D26B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D26B0u;
        // 0x1d26b4: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d26b0) {
            ctx->pc = 0x1D2764u;
            goto label_1d2764;
        }
    }
    ctx->pc = 0x1D26B8u;
    // 0x1d26b8: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x1d26b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d26bc: 0x26700360  addiu       $s0, $s3, 0x360
    ctx->pc = 0x1d26bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 864));
    // 0x1d26c0: 0x27a5006c  addiu       $a1, $sp, 0x6C
    ctx->pc = 0x1d26c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1d26c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d26c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d26c8: 0x26670040  addiu       $a3, $s3, 0x40
    ctx->pc = 0x1d26c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x1d26cc: 0xc075044  jal         func_1D4110
    ctx->pc = 0x1D26CCu;
    SET_GPR_U32(ctx, 31, 0x1D26D4u);
    ctx->pc = 0x1D26D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D26CCu;
    // 0x1d26d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4110u, 0x1D26CCu, 0x1D26D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D26D4u;
label_1d26d4:
    // 0x1d26d4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1d26d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d26d8: 0x240400df  addiu       $a0, $zero, 0xDF
    ctx->pc = 0x1d26d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    // 0x1d26dc: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1D26DCu;
    SET_GPR_U32(ctx, 31, 0x1D26E4u);
    ctx->pc = 0x1D26E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D26DCu;
    // 0x1d26e0: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D26DCu, 0x1D26E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D26E4u;
label_1d26e4:
    // 0x1d26e4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1d26e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1d26e8: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x1d26e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
    // 0x1d26ec: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1d26ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1d26f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1d26f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d26f4: 0x8c71d320  lw          $s1, -0x2CE0($v1)
    ctx->pc = 0x1d26f4u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5FD320u));
    // 0x1d26f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d26f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d26fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d26fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2700: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d2700u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2704: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1d2704u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d2708: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d2708u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d270c: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1d270cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2710: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x1d2710u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d2714: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x1d2714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x1d2718: 0xc07508c  jal         func_1D4230
    ctx->pc = 0x1D2718u;
    SET_GPR_U32(ctx, 31, 0x1D2720u);
    ctx->pc = 0x1D271Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2718u;
    // 0x1d271c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1D2718u, 0x1D2720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2720u;
label_1d2720:
    // 0x1d2720: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1D2720u;
    SET_GPR_U32(ctx, 31, 0x1D2728u);
    ctx->pc = 0x1D2724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2720u;
    // 0x1d2724: 0x240400d9  addiu       $a0, $zero, 0xD9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 217));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D2720u, 0x1D2728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2728u;
label_1d2728:
    // 0x1d2728: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x1d2728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
    // 0x1d272c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1d272cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1d2730: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1d2730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d2734: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d2734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2738: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x1d2738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x1d273c: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1d273cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2740: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2744: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d2744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2748: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d2748u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d274c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1d274cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d2750: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d2750u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2754: 0xc07508c  jal         func_1D4230
    ctx->pc = 0x1D2754u;
    SET_GPR_U32(ctx, 31, 0x1D275Cu);
    ctx->pc = 0x1D2758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2754u;
    // 0x1d2758: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1D2754u, 0x1D275Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D275Cu;
label_1d275c:
    // 0x1d275c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1D275Cu;
    {
        const bool branch_taken_0x1d275c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D275Cu;
        // 0x1d2760: 0x8fa50070  lw          $a1, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d275c) {
            ctx->pc = 0x1D2848u;
            goto label_1d2848;
        }
    }
    ctx->pc = 0x1D2764u;
label_1d2764:
    // 0x1d2764: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x1d2764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d2768: 0x26700360  addiu       $s0, $s3, 0x360
    ctx->pc = 0x1d2768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 864));
    // 0x1d276c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1d276cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2770: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d2770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2774: 0x26670040  addiu       $a3, $s3, 0x40
    ctx->pc = 0x1d2774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x1d2778: 0xc075044  jal         func_1D4110
    ctx->pc = 0x1D2778u;
    SET_GPR_U32(ctx, 31, 0x1D2780u);
    ctx->pc = 0x1D277Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2778u;
    // 0x1d277c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4110u, 0x1D2778u, 0x1D2780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2780u;
label_1d2780:
    // 0x1d2780: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1d2780u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2784: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1D2784u;
    SET_GPR_U32(ctx, 31, 0x1D278Cu);
    ctx->pc = 0x1D2788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2784u;
    // 0x1d2788: 0x240400d7  addiu       $a0, $zero, 0xD7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 215));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D2784u, 0x1D278Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D278Cu;
label_1d278c:
    // 0x1d278c: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x1d278cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2790: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d2790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d2794: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x1d2794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
    // 0x1d2798: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1d2798u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1d279c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1d279cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d27a0: 0x8c91d320  lw          $s1, -0x2CE0($a0)
    ctx->pc = 0x1d27a0u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5FD320u));
    // 0x1d27a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d27a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27a8: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x1d27a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x1d27ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d27acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d27b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27b4: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1d27b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d27b8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d27b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d27bc: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1d27bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27c0: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x1d27c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d27c4: 0xc07508c  jal         func_1D4230
    ctx->pc = 0x1D27C4u;
    SET_GPR_U32(ctx, 31, 0x1D27CCu);
    ctx->pc = 0x1D27C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27C4u;
    // 0x1d27c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1D27C4u, 0x1D27CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27CCu;
label_1d27cc:
    // 0x1d27cc: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1D27CCu;
    SET_GPR_U32(ctx, 31, 0x1D27D4u);
    ctx->pc = 0x1D27D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27CCu;
    // 0x1d27d0: 0x240400d8  addiu       $a0, $zero, 0xD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D27CCu, 0x1D27D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27D4u;
label_1d27d4:
    // 0x1d27d4: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x1d27d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
    // 0x1d27d8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1d27d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1d27dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1d27dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d27e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d27e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d27e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d27e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d27e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27ec: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1d27ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d27f0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d27f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d27f4: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1d27f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27f8: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x1d27f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d27fc: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x1d27fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x1d2800: 0xc07508c  jal         func_1D4230
    ctx->pc = 0x1D2800u;
    SET_GPR_U32(ctx, 31, 0x1D2808u);
    ctx->pc = 0x1D2804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2800u;
    // 0x1d2804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1D2800u, 0x1D2808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2808u;
label_1d2808:
    // 0x1d2808: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1D2808u;
    SET_GPR_U32(ctx, 31, 0x1D2810u);
    ctx->pc = 0x1D280Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2808u;
    // 0x1d280c: 0x240400d9  addiu       $a0, $zero, 0xD9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 217));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D2808u, 0x1D2810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2810u;
label_1d2810:
    // 0x1d2810: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x1d2810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
    // 0x1d2814: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1d2814u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1d2818: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1d2818u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d281c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d281cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2820: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x1d2820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x1d2824: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1d2824u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d282c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d282cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2830: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d2830u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2834: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1d2834u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d2838: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d2838u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d283c: 0xc07508c  jal         func_1D4230
    ctx->pc = 0x1D283Cu;
    SET_GPR_U32(ctx, 31, 0x1D2844u);
    ctx->pc = 0x1D2840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D283Cu;
    // 0x1d2840: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1D283Cu, 0x1D2844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2844u;
label_1d2844:
    // 0x1d2844: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1d2844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1d2848:
    // 0x1d2848: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d2848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d284c: 0xc075080  jal         func_1D4200
    ctx->pc = 0x1D284Cu;
    SET_GPR_U32(ctx, 31, 0x1D2854u);
    ctx->pc = 0x1D2850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D284Cu;
    // 0x1d2850: 0x267107e0  addiu       $s1, $s3, 0x7E0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 2016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4200u, 0x1D284Cu, 0x1D2854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2854u;
label_1d2854:
    // 0x1d2854: 0xc07534a  jal         func_1D4D28
    ctx->pc = 0x1D2854u;
    SET_GPR_U32(ctx, 31, 0x1D285Cu);
    ctx->pc = 0x1D2858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2854u;
    // 0x1d2858: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4D28u, 0x1D2854u, 0x1D285Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D285Cu;
label_1d285c:
    // 0x1d285c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d285cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d2860: 0x8fa50074  lw          $a1, 0x74($sp)
    ctx->pc = 0x1d2860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x1d2864: 0xc441ecb0  lwc1        $f1, -0x1350($v0)
    ctx->pc = 0x1d2864u;
    { uint32_t bits = FAST_READ32(0x50ECB0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d2868: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d2868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1d286c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d286cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d2870: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d2870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d2874: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1d2874u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1d2878: 0xc440ecb4  lwc1        $f0, -0x134C($v0)
    ctx->pc = 0x1d2878u;
    { uint32_t bits = FAST_READ32(0x50ECB4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d287c: 0x24040102  addiu       $a0, $zero, 0x102
    ctx->pc = 0x1d287cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x1d2880: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x1d2880u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1d2884: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d2884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d2888: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1d2888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1d288c: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1d288cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x1d2890: 0xe4a4000c  swc1        $f4, 0xC($a1)
    ctx->pc = 0x1d2890u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x1d2894: 0xc442ecb8  lwc1        $f2, -0x1348($v0)
    ctx->pc = 0x1d2894u;
    { uint32_t bits = FAST_READ32(0x50ECB8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d2898: 0xc463ecbc  lwc1        $f3, -0x1344($v1)
    ctx->pc = 0x1d2898u;
    { uint32_t bits = FAST_READ32(0x50ECBCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d289c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1d289cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d28a0: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x1d28a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d28a4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1d28a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1d28a8: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x1d28a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1d28ac: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1d28acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1d28b0: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x1d28b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x1d28b4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1d28b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1d28b8: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x1d28b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1d28bc: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1D28BCu;
    SET_GPR_U32(ctx, 31, 0x1D28C4u);
    ctx->pc = 0x1D28C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28BCu;
    // 0x1d28c0: 0xe4c4000c  swc1        $f4, 0xC($a2) (Delay Slot)
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D28BCu, 0x1D28C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28C4u;
label_1d28c4:
    // 0x1d28c4: 0x8fa60074  lw          $a2, 0x74($sp)
    ctx->pc = 0x1d28c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x1d28c8: 0x3c09001d  lui         $t1, 0x1D
    ctx->pc = 0x1d28c8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)29 << 16));
    // 0x1d28cc: 0x8fa70078  lw          $a3, 0x78($sp)
    ctx->pc = 0x1d28ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1d28d0: 0x25292018  addiu       $t1, $t1, 0x2018
    ctx->pc = 0x1d28d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8216));
    // 0x1d28d4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d28d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d28d8: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1d28d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d28dc: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1d28dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d28e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d28e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28e4: 0xc0759ce  jal         func_1D6738
    ctx->pc = 0x1D28E4u;
    SET_GPR_U32(ctx, 31, 0x1D28ECu);
    ctx->pc = 0x1D28E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28E4u;
    // 0x1d28e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6738u, 0x1D28E4u, 0x1D28ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28ECu;
label_1d28ec:
    // 0x1d28ec: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1D28ECu;
    SET_GPR_U32(ctx, 31, 0x1D28F4u);
    ctx->pc = 0x1D28F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28ECu;
    // 0x1d28f0: 0x2404003b  addiu       $a0, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D28ECu, 0x1D28F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28F4u;
label_1d28f4:
    // 0x1d28f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d28f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28f8: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1D28F8u;
    SET_GPR_U32(ctx, 31, 0x1D2900u);
    ctx->pc = 0x1D28FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28F8u;
    // 0x1d28fc: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D28F8u, 0x1D2900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2900u;
label_1d2900:
    // 0x1d2900: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d2900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2904: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d2904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2908: 0xc075a44  jal         func_1D6910
    ctx->pc = 0x1D2908u;
    SET_GPR_U32(ctx, 31, 0x1D2910u);
    ctx->pc = 0x1D290Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2908u;
    // 0x1d290c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6910u, 0x1D2908u, 0x1D2910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2910u;
label_1d2910:
    // 0x1d2910: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x1d2910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
    // 0x1d2914: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1d2914u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1d2918: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1d2918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d291c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d291cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2920: 0xc075920  jal         func_1D6480
    ctx->pc = 0x1D2920u;
    SET_GPR_U32(ctx, 31, 0x1D2928u);
    ctx->pc = 0x1D2924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2920u;
    // 0x1d2924: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6480u, 0x1D2920u, 0x1D2928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2928u;
label_1d2928:
    // 0x1d2928: 0xae600cb0  sw          $zero, 0xCB0($s3)
    ctx->pc = 0x1d2928u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3248), GPR_U32(ctx, 0));
    // 0x1d292c: 0xae6007a0  sw          $zero, 0x7A0($s3)
    ctx->pc = 0x1d292cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1952), GPR_U32(ctx, 0));
    // 0x1d2930: 0xae6007a4  sw          $zero, 0x7A4($s3)
    ctx->pc = 0x1d2930u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1956), GPR_U32(ctx, 0));
    // 0x1d2934: 0xae6007a8  sw          $zero, 0x7A8($s3)
    ctx->pc = 0x1d2934u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1960), GPR_U32(ctx, 0));
    // 0x1d2938: 0xae6007ac  sw          $zero, 0x7AC($s3)
    ctx->pc = 0x1d2938u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1964), GPR_U32(ctx, 0));
    // 0x1d293c: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x1d293cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1d2940: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x1d2940u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1d2944: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x1d2944u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d2948: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x1d2948u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d294c: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x1d294cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d2950: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x1d2950u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d2954: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x1d2954u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d2958: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x1d2958u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d295c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1d295cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d2960: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1d2960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d2964: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x1d2964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d2968: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D296Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2968u;
        // 0x1d296c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2970u;
}
