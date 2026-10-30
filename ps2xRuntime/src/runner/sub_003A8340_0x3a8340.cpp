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

// Function: sub_003A8340
// Address: 0x3a8340 - 0x3a84a8
void sub_003A8340_0x3a8340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A8340_0x3a8340");
#endif

    switch (ctx->pc) {
        case 0x3a83e0u: goto label_3a83e0;
        case 0x3a8410u: goto label_3a8410;
        case 0x3a841cu: goto label_3a841c;
        case 0x3a8428u: goto label_3a8428;
        case 0x3a8434u: goto label_3a8434;
        case 0x3a8440u: goto label_3a8440;
        case 0x3a844cu: goto label_3a844c;
        case 0x3a8458u: goto label_3a8458;
        case 0x3a8464u: goto label_3a8464;
        default: break;
    }

    ctx->pc = 0x3a8340u;

    // 0x3a8340: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x3a8340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x3a8344: 0x79620000  lq          $v0, 0x0($t3)
    ctx->pc = 0x3a8344u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3a8348: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x3a8348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x3a834c: 0x3a0682d  daddu       $t5, $sp, $zero
    ctx->pc = 0x3a834cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8350: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x3a8350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x3a8354: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a8354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8358: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x3a8358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x3a835c: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x3a835cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x3a8360: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x3a8360u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a8364: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x3a8364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x3a8368: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x3a8368u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3a836c: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x3a836cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x3a8370: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x3a8370u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3a8374: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x3a8374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x3a8378: 0x27b50040  addiu       $s5, $sp, 0x40
    ctx->pc = 0x3a8378u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3a837c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x3a837cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x3a8380: 0x27b60050  addiu       $s6, $sp, 0x50
    ctx->pc = 0x3a8380u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3a8384: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3a8384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3a8388: 0x27b70060  addiu       $s7, $sp, 0x60
    ctx->pc = 0x3a8388u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3a838c: 0x79240000  lq          $a0, 0x0($t1)
    ctx->pc = 0x3a838cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3a8390: 0x78ac0000  lq          $t4, 0x0($a1)
    ctx->pc = 0x3a8390u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a8394: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x3a8394u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3a8398: 0x78e60000  lq          $a2, 0x0($a3)
    ctx->pc = 0x3a8398u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a839c: 0x79070000  lq          $a3, 0x0($t0)
    ctx->pc = 0x3a839cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3a83a0: 0x79430000  lq          $v1, 0x0($t2)
    ctx->pc = 0x3a83a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3a83a4: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x3a83a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
    // 0x3a83a8: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x3a83a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
    // 0x3a83ac: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x3a83acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x3a83b0: 0x8fb10110  lw          $s1, 0x110($sp)
    ctx->pc = 0x3a83b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3a83b4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3a83b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a83b8: 0x7fac0000  sq          $t4, 0x0($sp)
    ctx->pc = 0x3a83b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 12));
    // 0x3a83bc: 0x7fa70030  sq          $a3, 0x30($sp)
    ctx->pc = 0x3a83bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 7));
    // 0x3a83c0: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x3a83c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
    // 0x3a83c4: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3a83c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x3a83c8: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3a83c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x3a83cc: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x3a83ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a83d0: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x3a83d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3a83d4: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3a83d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x3a83d8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3a83d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3a83dc: 0x0  nop
    ctx->pc = 0x3a83dcu;
    // NOP
label_3a83e0:
    // 0x3a83e0: 0x0  nop
    ctx->pc = 0x3a83e0u;
    // NOP
    // 0x3a83e4: 0x0  nop
    ctx->pc = 0x3a83e4u;
    // NOP
    // 0x3a83e8: 0x0  nop
    ctx->pc = 0x3a83e8u;
    // NOP
    // 0x3a83ec: 0x0  nop
    ctx->pc = 0x3a83ecu;
    // NOP
    // 0x3a83f0: 0x14a6fffb  bne         $a1, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3A83F0u;
    {
        const bool branch_taken_0x3a83f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x3A83F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A83F0u;
        // 0x3a83f4: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a83f0) {
            ctx->pc = 0x3A83E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a83e0;
        }
    }
    ctx->pc = 0x3A83F8u;
    // 0x3a83f8: 0x2602fff0  addiu       $v0, $s0, -0x10
    ctx->pc = 0x3a83f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x3a83fc: 0xae100404  sw          $s0, 0x404($s0)
    ctx->pc = 0x3a83fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 16));
    // 0x3a8400: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x3a8400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8404: 0xae020400  sw          $v0, 0x400($s0)
    ctx->pc = 0x3a8404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1024), GPR_U32(ctx, 2));
    // 0x3a8408: 0xc0ea152  jal         func_3A8548
    ctx->pc = 0x3A8408u;
    SET_GPR_U32(ctx, 31, 0x3A8410u);
    ctx->pc = 0x3A840Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8408u;
    // 0x3a840c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8548u, 0x3A8408u, 0x3A8410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8410u;
label_3a8410:
    // 0x3a8410: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3a8410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8414: 0xc0ea152  jal         func_3A8548
    ctx->pc = 0x3A8414u;
    SET_GPR_U32(ctx, 31, 0x3A841Cu);
    ctx->pc = 0x3A8418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8414u;
    // 0x3a8418: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8548u, 0x3A8414u, 0x3A841Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A841Cu;
label_3a841c:
    // 0x3a841c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3a841cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8420: 0xc0ea152  jal         func_3A8548
    ctx->pc = 0x3A8420u;
    SET_GPR_U32(ctx, 31, 0x3A8428u);
    ctx->pc = 0x3A8424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8420u;
    // 0x3a8424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8548u, 0x3A8420u, 0x3A8428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8428u;
label_3a8428:
    // 0x3a8428: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3a8428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a842c: 0xc0ea152  jal         func_3A8548
    ctx->pc = 0x3A842Cu;
    SET_GPR_U32(ctx, 31, 0x3A8434u);
    ctx->pc = 0x3A8430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A842Cu;
    // 0x3a8430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8548u, 0x3A842Cu, 0x3A8434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8434u;
label_3a8434:
    // 0x3a8434: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3a8434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8438: 0xc0ea152  jal         func_3A8548
    ctx->pc = 0x3A8438u;
    SET_GPR_U32(ctx, 31, 0x3A8440u);
    ctx->pc = 0x3A843Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8438u;
    // 0x3a843c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8548u, 0x3A8438u, 0x3A8440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8440u;
label_3a8440:
    // 0x3a8440: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3a8440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8444: 0xc0ea152  jal         func_3A8548
    ctx->pc = 0x3A8444u;
    SET_GPR_U32(ctx, 31, 0x3A844Cu);
    ctx->pc = 0x3A8448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8444u;
    // 0x3a8448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8548u, 0x3A8444u, 0x3A844Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A844Cu;
label_3a844c:
    // 0x3a844c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3a844cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8450: 0xc0ea152  jal         func_3A8548
    ctx->pc = 0x3A8450u;
    SET_GPR_U32(ctx, 31, 0x3A8458u);
    ctx->pc = 0x3A8454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8450u;
    // 0x3a8454: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8548u, 0x3A8450u, 0x3A8458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8458u;
label_3a8458:
    // 0x3a8458: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a8458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a845c: 0xc0ea152  jal         func_3A8548
    ctx->pc = 0x3A845Cu;
    SET_GPR_U32(ctx, 31, 0x3A8464u);
    ctx->pc = 0x3A8460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A845Cu;
    // 0x3a8460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8548u, 0x3A845Cu, 0x3A8464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8464u;
label_3a8464:
    // 0x3a8464: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a8464u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8468: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x3a8468u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3a846c: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x3a846cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3a8470: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x3a8470u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3a8474: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x3a8474u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3a8478: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x3a8478u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3a847c: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x3a847cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3a8480: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x3a8480u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3a8484: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x3a8484u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3a8488: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3a8488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3a848c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A848Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A8490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A848Cu;
        // 0x3a8490: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A848Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A8494u;
    // 0x3a8494: 0x0  nop
    ctx->pc = 0x3a8494u;
    // NOP
    // 0x3a8498: 0x27bd0130  addiu       $sp, $sp, 0x130
    ctx->pc = 0x3a8498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3a849c: 0x0  nop
    ctx->pc = 0x3a849cu;
    // NOP
    // 0x3a84a0: 0xac820400  sw          $v0, 0x400($a0)
    ctx->pc = 0x3a84a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1024), GPR_U32(ctx, 2));
    // 0x3a84a4: 0x0  nop
    ctx->pc = 0x3a84a4u;
    // NOP
    ctx->pc = 0x3a84a8u;
}
