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

// Function: sub_002F2438
// Address: 0x2f2438 - 0x2f2600
void sub_002F2438_0x2f2438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2438_0x2f2438");
#endif

    switch (ctx->pc) {
        case 0x2f247cu: goto label_2f247c;
        case 0x2f2494u: goto label_2f2494;
        case 0x2f24a0u: goto label_2f24a0;
        case 0x2f24ccu: goto label_2f24cc;
        case 0x2f2520u: goto label_2f2520;
        case 0x2f2598u: goto label_2f2598;
        case 0x2f25a8u: goto label_2f25a8;
        case 0x2f25c0u: goto label_2f25c0;
        case 0x2f25e0u: goto label_2f25e0;
        default: break;
    }

    ctx->pc = 0x2f2438u;

    // 0x2f2438: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f2438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f243c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2f243cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2f2440: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2f2440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2f2444: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f2444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2448: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2f2448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2f244c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f244cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2450: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f2450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f2454: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f2454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2458: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2f2458u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2f245c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x2f245cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2f2460: 0x1445001c  bne         $v0, $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2F2460u;
    {
        const bool branch_taken_0x2f2460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2F2464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2460u;
        // 0x2f2464: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2460) {
            ctx->pc = 0x2F24D4u;
            goto label_2f24d4;
        }
    }
    ctx->pc = 0x2F2468u;
    // 0x2f2468: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f2468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f246c: 0x245000f8  addiu       $s0, $v0, 0xF8
    ctx->pc = 0x2f246cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 248));
    // 0x2f2470: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2f2470u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f2474: 0xc0a5d08  jal         func_297420
    ctx->pc = 0x2F2474u;
    SET_GPR_U32(ctx, 31, 0x2F247Cu);
    ctx->pc = 0x2F2478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2474u;
    // 0x2f2478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297420u, 0x2F2474u, 0x2F247Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F247Cu;
label_2f247c:
    // 0x2f247c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F247Cu;
    {
        const bool branch_taken_0x2f247c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F247Cu;
        // 0x2f2480: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f247c) {
            ctx->pc = 0x2F2498u;
            goto label_2f2498;
        }
    }
    ctx->pc = 0x2F2484u;
    // 0x2f2484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f2484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2488: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2f2488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f248c: 0xc0a5d0c  jal         func_297430
    ctx->pc = 0x2F248Cu;
    SET_GPR_U32(ctx, 31, 0x2F2494u);
    ctx->pc = 0x2F2490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F248Cu;
    // 0x2f2490: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297430u, 0x2F248Cu, 0x2F2494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2494u;
label_2f2494:
    // 0x2f2494: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f2494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f2498:
    // 0x2f2498: 0xc087b0e  jal         func_21EC38
    ctx->pc = 0x2F2498u;
    SET_GPR_U32(ctx, 31, 0x2F24A0u);
    ctx->pc = 0x2F249Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2498u;
    // 0x2f249c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x2F2498u, 0x2F24A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F24A0u;
label_2f24a0:
    // 0x2f24a0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2f24a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2f24a4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2f24a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2f24a8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f24a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f24ac: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2f24acu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2f24b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f24b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f24b4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2f24b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f24b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f24b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f24bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f24bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f24c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f24c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f24c4: 0xc088178  jal         func_2205E0
    ctx->pc = 0x2F24C4u;
    SET_GPR_U32(ctx, 31, 0x2F24CCu);
    ctx->pc = 0x2F24C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F24C4u;
    // 0x2f24c8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2F24C4u, 0x2F24CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F24CCu;
label_2f24cc:
    // 0x2f24cc: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2F24CCu;
    {
        const bool branch_taken_0x2f24cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F24D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F24CCu;
        // 0x2f24d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f24cc) {
            ctx->pc = 0x2F25E4u;
            goto label_2f25e4;
        }
    }
    ctx->pc = 0x2F24D4u;
label_2f24d4:
    // 0x2f24d4: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x2f24d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x2f24d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F24D8u;
    {
        const bool branch_taken_0x2f24d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F24DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F24D8u;
        // 0x2f24dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f24d8) {
            ctx->pc = 0x2F24F0u;
            goto label_2f24f0;
        }
    }
    ctx->pc = 0x2F24E0u;
    // 0x2f24e0: 0x38620003  xori        $v0, $v1, 0x3
    ctx->pc = 0x2f24e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x2f24e4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F24E4u;
    {
        const bool branch_taken_0x2f24e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F24E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F24E4u;
        // 0x2f24e8: 0x38620005  xori        $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f24e4) {
            ctx->pc = 0x2F24F0u;
            goto label_2f24f0;
        }
    }
    ctx->pc = 0x2F24ECu;
    // 0x2f24ec: 0xa2200b  movn        $a0, $a1, $v0
    ctx->pc = 0x2f24ecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
label_2f24f0:
    // 0x2f24f0: 0x1480003c  bnez        $a0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2F24F0u;
    {
        const bool branch_taken_0x2f24f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F24F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F24F0u;
        // 0x2f24f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f24f0) {
            ctx->pc = 0x2F25E4u;
            goto label_2f25e4;
        }
    }
    ctx->pc = 0x2F24F8u;
    // 0x2f24f8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2f24f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f24fc: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F24FCu;
    {
        const bool branch_taken_0x2f24fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f24fc) {
            ctx->pc = 0x2F2500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F24FCu;
            // 0x2f2500: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2510u;
            goto label_2f2510;
        }
    }
    ctx->pc = 0x2F2504u;
    // 0x2f2504: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f2504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f2508: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x2f2508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x2f250c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f250cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f2510:
    // 0x2f2510: 0x2405010c  addiu       $a1, $zero, 0x10C
    ctx->pc = 0x2f2510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 268));
    // 0x2f2514: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2f2514u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f2518: 0xc040680  jal         func_101A00
    ctx->pc = 0x2F2518u;
    SET_GPR_U32(ctx, 31, 0x2F2520u);
    ctx->pc = 0x2F251Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2518u;
    // 0x2f251c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x2F2518u, 0x2F2520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2520u;
label_2f2520:
    // 0x2f2520: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2f2520u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2f2524: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2f2524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2f2528: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f2528u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2f252c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f252cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f2530: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x2f2530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f2534: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x2f2534u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x2f2538: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x2f2538u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f253c: 0x0  nop
    ctx->pc = 0x2f253cu;
    // NOP
    // 0x2f2540: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2F2540u;
    {
        const bool branch_taken_0x2f2540 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f2540) {
            ctx->pc = 0x2F255Cu;
            goto label_2f255c;
        }
    }
    ctx->pc = 0x2F2548u;
    // 0x2f2548: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2f2548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2f254c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f254cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2f2550: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f2550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f2554: 0x0  nop
    ctx->pc = 0x2f2554u;
    // NOP
    // 0x2f2558: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2f2558u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_2f255c:
    // 0x2f255c: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x2f255cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x2f2560: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f2560u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2f2564: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f2564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f2568: 0x0  nop
    ctx->pc = 0x2f2568u;
    // NOP
    // 0x2f256c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x2f256cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f2570: 0x0  nop
    ctx->pc = 0x2f2570u;
    // NOP
    // 0x2f2574: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2F2574u;
    {
        const bool branch_taken_0x2f2574 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F2578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2574u;
        // 0x2f2578: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2574) {
            ctx->pc = 0x2F2590u;
            goto label_2f2590;
        }
    }
    ctx->pc = 0x2F257Cu;
    // 0x2f257c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2f257cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2f2580: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f2580u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2f2584: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f2584u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f2588: 0x0  nop
    ctx->pc = 0x2f2588u;
    // NOP
    // 0x2f258c: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x2f258cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_2f2590:
    // 0x2f2590: 0xc08f3e2  jal         func_23CF88
    ctx->pc = 0x2F2590u;
    SET_GPR_U32(ctx, 31, 0x2F2598u);
    ctx->pc = 0x2F2594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2590u;
    // 0x2f2594: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF88u, 0x2F2590u, 0x2F2598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2598u;
label_2f2598:
    // 0x2f2598: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x2f2598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2f259c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f259cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f25a0: 0xc08f4ae  jal         func_23D2B8
    ctx->pc = 0x2F25A0u;
    SET_GPR_U32(ctx, 31, 0x2F25A8u);
    ctx->pc = 0x2F25A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F25A0u;
    // 0x2f25a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D2B8u, 0x2F25A0u, 0x2F25A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F25A8u;
label_2f25a8:
    // 0x2f25a8: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x2f25a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2f25ac: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2F25ACu;
    {
        const bool branch_taken_0x2f25ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F25B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F25ACu;
        // 0x2f25b0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f25ac) {
            ctx->pc = 0x2F25E0u;
            goto label_2f25e0;
        }
    }
    ctx->pc = 0x2F25B4u;
    // 0x2f25b4: 0x94a50112  lhu         $a1, 0x112($a1)
    ctx->pc = 0x2f25b4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 274)));
    // 0x2f25b8: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x2F25B8u;
    SET_GPR_U32(ctx, 31, 0x2F25C0u);
    ctx->pc = 0x2F25BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F25B8u;
    // 0x2f25bc: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x2F25B8u, 0x2F25C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F25C0u;
label_2f25c0:
    // 0x2f25c0: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x2f25c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
    // 0x2f25c4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2f25c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2f25c8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F25C8u;
    {
        const bool branch_taken_0x2f25c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F25CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F25C8u;
        // 0x2f25cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f25c8) {
            ctx->pc = 0x2F25E4u;
            goto label_2f25e4;
        }
    }
    ctx->pc = 0x2F25D0u;
    // 0x2f25d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f25d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f25d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f25d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f25d8: 0xc0bc88c  jal         func_2F2230
    ctx->pc = 0x2F25D8u;
    SET_GPR_U32(ctx, 31, 0x2F25E0u);
    ctx->pc = 0x2F25DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F25D8u;
    // 0x2f25dc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2230u, 0x2F25D8u, 0x2F25E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F25E0u;
label_2f25e0:
    // 0x2f25e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f25e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f25e4:
    // 0x2f25e4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2f25e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f25e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2f25e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f25ec: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2f25ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f25f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f25f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f25f4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2f25f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f25f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F25F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F25FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F25F8u;
        // 0x2f25fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F25F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F2600u;
}
