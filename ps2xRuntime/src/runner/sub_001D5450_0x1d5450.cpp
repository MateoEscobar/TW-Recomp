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

// Function: sub_001D5450
// Address: 0x1d5450 - 0x1d55e8
void sub_001D5450_0x1d5450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5450_0x1d5450");
#endif

    switch (ctx->pc) {
        case 0x1d54b8u: goto label_1d54b8;
        case 0x1d54f8u: goto label_1d54f8;
        case 0x1d5504u: goto label_1d5504;
        case 0x1d5538u: goto label_1d5538;
        case 0x1d5548u: goto label_1d5548;
        default: break;
    }

    ctx->pc = 0x1d5450u;

    // 0x1d5450: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1d5450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1d5454: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1d5454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x1d5458: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1d5458u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1d545c: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1d545cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x1d5460: 0x8e02d310  lw          $v0, -0x2CF0($s0)
    ctx->pc = 0x1d5460u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FD310u));
    // 0x1d5464: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1d5464u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5468: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1d5468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x1d546c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1d546cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d5470: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1d5470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x1d5474: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x1d5474u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5478: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1d5478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x1d547c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d547cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5480: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1d5480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x1d5484: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1d5484u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5488: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1d5488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1d548c: 0x26950020  addiu       $s5, $s4, 0x20
    ctx->pc = 0x1d548cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x1d5490: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x1d5490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x1d5494: 0x26960050  addiu       $s6, $s4, 0x50
    ctx->pc = 0x1d5494u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x1d5498: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x1d5498u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1d549c: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x1d549cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d54a0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1d54a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1d54a4: 0xae8901f4  sw          $t1, 0x1F4($s4)
    ctx->pc = 0x1d54a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 500), GPR_U32(ctx, 9));
    // 0x1d54a8: 0xae880004  sw          $t0, 0x4($s4)
    ctx->pc = 0x1d54a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 8));
    // 0x1d54ac: 0xae8b01f8  sw          $t3, 0x1F8($s4)
    ctx->pc = 0x1d54acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 504), GPR_U32(ctx, 11));
    // 0x1d54b0: 0xc05e602  jal         func_179808
    ctx->pc = 0x1D54B0u;
    SET_GPR_U32(ctx, 31, 0x1D54B8u);
    ctx->pc = 0x1D54B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D54B0u;
    // 0x1d54b4: 0xae8201f0  sw          $v0, 0x1F0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 496), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1D54B0u, 0x1D54B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D54B8u;
label_1d54b8:
    // 0x1d54b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d54b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d54bc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1d54bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d54c0: 0xae800020  sw          $zero, 0x20($s4)
    ctx->pc = 0x1d54c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 0));
    // 0x1d54c4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1d54c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d54c8: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x1d54c8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
    // 0x1d54cc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1d54ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d54d0: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x1d54d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
    // 0x1d54d4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1d54d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d54d8: 0xe6b4000c  swc1        $f20, 0xC($s5)
    ctx->pc = 0x1d54d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x1d54dc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d54dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d54e0: 0x8e07d310  lw          $a3, -0x2CF0($s0)
    ctx->pc = 0x1d54e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294955792)));
    // 0x1d54e4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d54e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d54e8: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1d54e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x1d54ec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d54ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d54f0: 0xc073418  jal         func_1CD060
    ctx->pc = 0x1D54F0u;
    SET_GPR_U32(ctx, 31, 0x1D54F8u);
    ctx->pc = 0x1D54F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D54F0u;
    // 0x1d54f4: 0x2e0582d  daddu       $t3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD060u, 0x1D54F0u, 0x1D54F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D54F8u;
label_1d54f8:
    // 0x1d54f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d54f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d54fc: 0xc073478  jal         func_1CD1E0
    ctx->pc = 0x1D54FCu;
    SET_GPR_U32(ctx, 31, 0x1D5504u);
    ctx->pc = 0x1D5500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D54FCu;
    // 0x1d5500: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1D54FCu, 0x1D5504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5504u;
label_1d5504:
    // 0x1d5504: 0x1260001f  beqz        $s3, . + 4 + (0x1F << 2)
    ctx->pc = 0x1D5504u;
    {
        const bool branch_taken_0x1d5504 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5504u;
        // 0x1d5508: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5504) {
            ctx->pc = 0x1D5584u;
            goto label_1d5584;
        }
    }
    ctx->pc = 0x1D550Cu;
    // 0x1d550c: 0x8e8701f4  lw          $a3, 0x1F4($s4)
    ctx->pc = 0x1d550cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 500)));
    // 0x1d5510: 0x26900120  addiu       $s0, $s4, 0x120
    ctx->pc = 0x1d5510u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 288));
    // 0x1d5514: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1d5514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5518: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1d5518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1d551c: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x1d551cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5524: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1d5524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d5528: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d5528u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d552c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d552cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5530: 0xc073418  jal         func_1CD060
    ctx->pc = 0x1D5530u;
    SET_GPR_U32(ctx, 31, 0x1D5538u);
    ctx->pc = 0x1D5534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5530u;
    // 0x1d5534: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD060u, 0x1D5530u, 0x1D5538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5538u;
label_1d5538:
    // 0x1d5538: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1d5538u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1d553c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d553cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5540: 0xc073478  jal         func_1CD1E0
    ctx->pc = 0x1D5540u;
    SET_GPR_U32(ctx, 31, 0x1D5548u);
    ctx->pc = 0x1D5544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5540u;
    // 0x1d5544: 0x24a55f98  addiu       $a1, $a1, 0x5F98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1D5540u, 0x1D5548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5548u;
label_1d5548:
    // 0x1d5548: 0x7ac300b0  lq          $v1, 0xB0($s6)
    ctx->pc = 0x1d5548u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 22), 176)));
    // 0x1d554c: 0x26840030  addiu       $a0, $s4, 0x30
    ctx->pc = 0x1d554cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x1d5550: 0x7a0200b0  lq          $v0, 0xB0($s0)
    ctx->pc = 0x1d5550u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x1d5554: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1d5554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x1d5558: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1d5558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1d555c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1d555cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5560: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1d5560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d5564: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x1d5564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x1d5568: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d5568u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d556c: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x1d556cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d5570: 0xe6800030  swc1        $f0, 0x30($s4)
    ctx->pc = 0x1d5570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 48), bits); }
    // 0x1d5574: 0xe494000c  swc1        $f20, 0xC($a0)
    ctx->pc = 0x1d5574u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1d5578: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x1d5578u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1d557c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D557Cu;
    {
        const bool branch_taken_0x1d557c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D557Cu;
        // 0x1d5580: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d557c) {
            ctx->pc = 0x1D55ACu;
            goto label_1d55ac;
        }
    }
    ctx->pc = 0x1D5584u;
label_1d5584:
    // 0x1d5584: 0x7ac200b0  lq          $v0, 0xB0($s6)
    ctx->pc = 0x1d5584u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 176)));
    // 0x1d5588: 0x26830030  addiu       $v1, $s4, 0x30
    ctx->pc = 0x1d5588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x1d558c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1d558cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1d5590: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1d5590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1d5594: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1d5594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5598: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1d5598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d559c: 0xe6800030  swc1        $f0, 0x30($s4)
    ctx->pc = 0x1d559cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 48), bits); }
    // 0x1d55a0: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x1d55a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1d55a4: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1d55a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1d55a8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1d55a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1d55ac:
    // 0x1d55ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d55acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d55b0: 0xae800010  sw          $zero, 0x10($s4)
    ctx->pc = 0x1d55b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
    // 0x1d55b4: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x1d55b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x1d55b8: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1d55b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d55bc: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1d55bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d55c0: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1d55c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d55c4: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1d55c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d55c8: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x1d55c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d55cc: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1d55ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d55d0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1d55d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d55d4: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x1d55d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d55d8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1d55d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d55dc: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x1d55dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d55e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D55E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D55E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D55E0u;
        // 0x1d55e4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D55E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D55E8u;
}
