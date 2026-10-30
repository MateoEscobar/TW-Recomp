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

// Function: sub_00112700
// Address: 0x112700 - 0x1129b8
void sub_00112700_0x112700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112700_0x112700");
#endif

    switch (ctx->pc) {
        case 0x112744u: goto label_112744;
        case 0x112778u: goto label_112778;
        case 0x11278cu: goto label_11278c;
        case 0x1127a0u: goto label_1127a0;
        case 0x1127b0u: goto label_1127b0;
        case 0x1127d4u: goto label_1127d4;
        case 0x1127e0u: goto label_1127e0;
        case 0x112804u: goto label_112804;
        case 0x112810u: goto label_112810;
        case 0x112828u: goto label_112828;
        case 0x112834u: goto label_112834;
        case 0x1128bcu: goto label_1128bc;
        case 0x1128d0u: goto label_1128d0;
        case 0x1128e4u: goto label_1128e4;
        case 0x112908u: goto label_112908;
        case 0x112914u: goto label_112914;
        case 0x112924u: goto label_112924;
        case 0x112930u: goto label_112930;
        case 0x11295cu: goto label_11295c;
        case 0x112968u: goto label_112968;
        default: break;
    }

    ctx->pc = 0x112700u;

    // 0x112700: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x112700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x112704: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x112704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x112708: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x112708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x11270c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11270cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112710: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x112710u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112714: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x112714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x112718: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x112718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x11271c: 0x26c40004  addiu       $a0, $s6, 0x4
    ctx->pc = 0x11271cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x112720: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x112720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x112724: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x112724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x112728: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x112728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x11272c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x11272cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x112730: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x112730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x112734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x112734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x112738: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x112738u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x11273c: 0xc043c9e  jal         func_10F278
    ctx->pc = 0x11273Cu;
    SET_GPR_U32(ctx, 31, 0x112744u);
    ctx->pc = 0x112740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11273Cu;
    // 0x112740: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F278u, 0x11273Cu, 0x112744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112744u;
label_112744:
    // 0x112744: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x112744u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x112748: 0x1220008c  beqz        $s1, . + 4 + (0x8C << 2)
    ctx->pc = 0x112748u;
    {
        const bool branch_taken_0x112748 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112748u;
        // 0x11274c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112748) {
            ctx->pc = 0x11297Cu;
            goto label_11297c;
        }
    }
    ctx->pc = 0x112750u;
    // 0x112750: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x112750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x112754: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x112754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x112758: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x112758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11275c: 0x905783bb  lbu         $s7, -0x7C45($v0)
    ctx->pc = 0x11275cu;
    SET_GPR_ZE32(ctx, 23, (uint8_t)FAST_READ8(0x5483BBu));
    // 0x112760: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x112760u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112764: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x112764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x112768: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x112768u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x11276c: 0x241e0002  addiu       $fp, $zero, 0x2
    ctx->pc = 0x11276cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x112770: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x112770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x112774: 0x0  nop
    ctx->pc = 0x112774u;
    // NOP
label_112778:
    // 0x112778: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x112778u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11277c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11277Cu;
    {
        const bool branch_taken_0x11277c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11277Cu;
        // 0x112780: 0x26320004  addiu       $s2, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11277c) {
            ctx->pc = 0x112798u;
            goto label_112798;
        }
    }
    ctx->pc = 0x112784u;
    // 0x112784: 0xc043c9e  jal         func_10F278
    ctx->pc = 0x112784u;
    SET_GPR_U32(ctx, 31, 0x11278Cu);
    ctx->pc = 0x112788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112784u;
    // 0x112788: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F278u, 0x112784u, 0x11278Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11278Cu;
label_11278c:
    // 0x11278c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x11278cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x112790: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x112790u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x112794: 0x2a80a  movz        $s5, $zero, $v0
    ctx->pc = 0x112794u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_112798:
    // 0x112798: 0xc043ca8  jal         func_10F2A0
    ctx->pc = 0x112798u;
    SET_GPR_U32(ctx, 31, 0x1127A0u);
    ctx->pc = 0x11279Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112798u;
    // 0x11279c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F2A0u, 0x112798u, 0x1127A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1127A0u;
label_1127a0:
    // 0x1127a0: 0x505e003e  beql        $v0, $fp, . + 4 + (0x3E << 2)
    ctx->pc = 0x1127A0u;
    {
        const bool branch_taken_0x1127a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        if (branch_taken_0x1127a0) {
            ctx->pc = 0x1127A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1127A0u;
            // 0x1127a4: 0x8e31000c  lw          $s1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11289Cu;
            goto label_11289c;
        }
    }
    ctx->pc = 0x1127A8u;
    // 0x1127a8: 0xc043c9e  jal         func_10F278
    ctx->pc = 0x1127A8u;
    SET_GPR_U32(ctx, 31, 0x1127B0u);
    ctx->pc = 0x1127ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1127A8u;
    // 0x1127ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F278u, 0x1127A8u, 0x1127B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1127B0u;
label_1127b0:
    // 0x1127b0: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x1127b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1127b4: 0x54400039  bnel        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x1127B4u;
    {
        const bool branch_taken_0x1127b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1127b4) {
            ctx->pc = 0x1127B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1127B4u;
            // 0x1127b8: 0x8e31000c  lw          $s1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11289Cu;
            goto label_11289c;
        }
    }
    ctx->pc = 0x1127BCu;
    // 0x1127bc: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x1127bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1127c0: 0x54400036  bnel        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x1127C0u;
    {
        const bool branch_taken_0x1127c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1127c0) {
            ctx->pc = 0x1127C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1127C0u;
            // 0x1127c4: 0x8e31000c  lw          $s1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11289Cu;
            goto label_11289c;
        }
    }
    ctx->pc = 0x1127C8u;
    // 0x1127c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1127c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1127cc: 0xc043cbc  jal         func_10F2F0
    ctx->pc = 0x1127CCu;
    SET_GPR_U32(ctx, 31, 0x1127D4u);
    ctx->pc = 0x1127D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1127CCu;
    // 0x1127d0: 0x26d30004  addiu       $s3, $s6, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F2F0u, 0x1127CCu, 0x1127D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1127D4u;
label_1127d4:
    // 0x1127d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1127d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1127d8: 0xc043cbc  jal         func_10F2F0
    ctx->pc = 0x1127D8u;
    SET_GPR_U32(ctx, 31, 0x1127E0u);
    ctx->pc = 0x1127DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1127D8u;
    // 0x1127dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F2F0u, 0x1127D8u, 0x1127E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1127E0u;
label_1127e0:
    // 0x1127e0: 0x5602002e  bnel        $s0, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1127E0u;
    {
        const bool branch_taken_0x1127e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1127e0) {
            ctx->pc = 0x1127E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1127E0u;
            // 0x1127e4: 0x8e31000c  lw          $s1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11289Cu;
            goto label_11289c;
        }
    }
    ctx->pc = 0x1127E8u;
    // 0x1127e8: 0x52d1002c  beql        $s6, $s1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1127E8u;
    {
        const bool branch_taken_0x1127e8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 17));
        if (branch_taken_0x1127e8) {
            ctx->pc = 0x1127ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1127E8u;
            // 0x1127ec: 0x8e31000c  lw          $s1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11289Cu;
            goto label_11289c;
        }
    }
    ctx->pc = 0x1127F0u;
    // 0x1127f0: 0x92220094  lbu         $v0, 0x94($s1)
    ctx->pc = 0x1127f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x1127f4: 0x50570029  beql        $v0, $s7, . + 4 + (0x29 << 2)
    ctx->pc = 0x1127F4u;
    {
        const bool branch_taken_0x1127f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        if (branch_taken_0x1127f4) {
            ctx->pc = 0x1127F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1127F4u;
            // 0x1127f8: 0x8e31000c  lw          $s1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11289Cu;
            goto label_11289c;
        }
    }
    ctx->pc = 0x1127FCu;
    // 0x1127fc: 0xc043c14  jal         func_10F050
    ctx->pc = 0x1127FCu;
    SET_GPR_U32(ctx, 31, 0x112804u);
    ctx->pc = 0x112800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1127FCu;
    // 0x112800: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F050u, 0x1127FCu, 0x112804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112804u;
label_112804:
    // 0x112804: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x112804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112808: 0xc043c14  jal         func_10F050
    ctx->pc = 0x112808u;
    SET_GPR_U32(ctx, 31, 0x112810u);
    ctx->pc = 0x11280Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112808u;
    // 0x11280c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F050u, 0x112808u, 0x112810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112810u;
label_112810:
    // 0x112810: 0x56020022  bnel        $s0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x112810u;
    {
        const bool branch_taken_0x112810 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x112810) {
            ctx->pc = 0x112814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112810u;
            // 0x112814: 0x8e31000c  lw          $s1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11289Cu;
            goto label_11289c;
        }
    }
    ctx->pc = 0x112818u;
    // 0x112818: 0x52a00020  beql        $s5, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x112818u;
    {
        const bool branch_taken_0x112818 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x112818) {
            ctx->pc = 0x11281Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112818u;
            // 0x11281c: 0x8e31000c  lw          $s1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11289Cu;
            goto label_11289c;
        }
    }
    ctx->pc = 0x112820u;
    // 0x112820: 0xc043c9e  jal         func_10F278
    ctx->pc = 0x112820u;
    SET_GPR_U32(ctx, 31, 0x112828u);
    ctx->pc = 0x112824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112820u;
    // 0x112824: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F278u, 0x112820u, 0x112828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112828u;
label_112828:
    // 0x112828: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x112828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11282c: 0xc043c9e  jal         func_10F278
    ctx->pc = 0x11282Cu;
    SET_GPR_U32(ctx, 31, 0x112834u);
    ctx->pc = 0x112830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11282Cu;
    // 0x112830: 0x26840004  addiu       $a0, $s4, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F278u, 0x11282Cu, 0x112834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112834u;
label_112834:
    // 0x112834: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x112834u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112838: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x112838u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11283c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11283Cu;
    {
        const bool branch_taken_0x11283c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11283c) {
            ctx->pc = 0x11285Cu;
            goto label_11285c;
        }
    }
    ctx->pc = 0x112844u;
    // 0x112844: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x112844u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112848: 0xc6200058  lwc1        $f0, 0x58($s1)
    ctx->pc = 0x112848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11284c: 0xc681005c  lwc1        $f1, 0x5C($s4)
    ctx->pc = 0x11284cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x112850: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x112850u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x112854: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x112854u;
    {
        const bool branch_taken_0x112854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112854u;
        // 0x112858: 0x46150502  mul.s       $f20, $f0, $f21 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x112854) {
            ctx->pc = 0x112898u;
            goto label_112898;
        }
    }
    ctx->pc = 0x11285Cu;
label_11285c:
    // 0x11285c: 0x5603000f  bnel        $s0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x11285Cu;
    {
        const bool branch_taken_0x11285c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x11285c) {
            ctx->pc = 0x112860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11285Cu;
            // 0x112860: 0x8e31000c  lw          $s1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11289Cu;
            goto label_11289c;
        }
    }
    ctx->pc = 0x112864u;
    // 0x112864: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x112864u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x112868: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x112868u;
    {
        const bool branch_taken_0x112868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112868) {
            ctx->pc = 0x11286Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112868u;
            // 0x11286c: 0x8e31000c  lw          $s1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11289Cu;
            goto label_11289c;
        }
    }
    ctx->pc = 0x112870u;
    // 0x112870: 0xc6200058  lwc1        $f0, 0x58($s1)
    ctx->pc = 0x112870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x112874: 0xc621005c  lwc1        $f1, 0x5C($s1)
    ctx->pc = 0x112874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x112878: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x112878u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11287c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x11287cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x112880: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x112880u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x112884: 0x0  nop
    ctx->pc = 0x112884u;
    // NOP
    // 0x112888: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x112888u;
    {
        const bool branch_taken_0x112888 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x112888) {
            ctx->pc = 0x11288Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112888u;
            // 0x11288c: 0x8e31000c  lw          $s1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11289Cu;
            goto label_11289c;
        }
    }
    ctx->pc = 0x112890u;
    // 0x112890: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x112890u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x112894: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x112894u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_112898:
    // 0x112898: 0x8e31000c  lw          $s1, 0xC($s1)
    ctx->pc = 0x112898u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_11289c:
    // 0x11289c: 0x5620ffb6  bnel        $s1, $zero, . + 4 + (-0x4A << 2)
    ctx->pc = 0x11289Cu;
    {
        const bool branch_taken_0x11289c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x11289c) {
            ctx->pc = 0x1128A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11289Cu;
            // 0x1128a0: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112778;
        }
    }
    ctx->pc = 0x1128A4u;
    // 0x1128a4: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x1128a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1128a8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1128a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1128ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1128ACu;
    {
        const bool branch_taken_0x1128ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1128B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1128ACu;
        // 0x1128b0: 0x26910004  addiu       $s1, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1128ac) {
            ctx->pc = 0x1128C8u;
            goto label_1128c8;
        }
    }
    ctx->pc = 0x1128B4u;
    // 0x1128b4: 0xc043c9e  jal         func_10F278
    ctx->pc = 0x1128B4u;
    SET_GPR_U32(ctx, 31, 0x1128BCu);
    ctx->pc = 0x1128B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1128B4u;
    // 0x1128b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F278u, 0x1128B4u, 0x1128BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1128BCu;
label_1128bc:
    // 0x1128bc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1128bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1128c0: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1128c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1128c4: 0x3980a  movz        $s3, $zero, $v1
    ctx->pc = 0x1128c4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
label_1128c8:
    // 0x1128c8: 0xc043ca8  jal         func_10F2A0
    ctx->pc = 0x1128C8u;
    SET_GPR_U32(ctx, 31, 0x1128D0u);
    ctx->pc = 0x1128CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1128C8u;
    // 0x1128cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F2A0u, 0x1128C8u, 0x1128D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1128D0u;
label_1128d0:
    // 0x1128d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1128d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1128d4: 0x10430029  beq         $v0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1128D4u;
    {
        const bool branch_taken_0x1128d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1128D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1128D4u;
        // 0x1128d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1128d4) {
            ctx->pc = 0x11297Cu;
            goto label_11297c;
        }
    }
    ctx->pc = 0x1128DCu;
    // 0x1128dc: 0xc043c9e  jal         func_10F278
    ctx->pc = 0x1128DCu;
    SET_GPR_U32(ctx, 31, 0x1128E4u);
    ctx->pc = 0x1128E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1128DCu;
    // 0x1128e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F278u, 0x1128DCu, 0x1128E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1128E4u;
label_1128e4:
    // 0x1128e4: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x1128e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1128e8: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1128E8u;
    {
        const bool branch_taken_0x1128e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1128ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1128E8u;
        // 0x1128ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1128e8) {
            ctx->pc = 0x11297Cu;
            goto label_11297c;
        }
    }
    ctx->pc = 0x1128F0u;
    // 0x1128f0: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x1128f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x1128f4: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1128F4u;
    {
        const bool branch_taken_0x1128f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1128F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1128F4u;
        // 0x1128f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1128f4) {
            ctx->pc = 0x11297Cu;
            goto label_11297c;
        }
    }
    ctx->pc = 0x1128FCu;
    // 0x1128fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1128fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112900: 0xc043cbc  jal         func_10F2F0
    ctx->pc = 0x112900u;
    SET_GPR_U32(ctx, 31, 0x112908u);
    ctx->pc = 0x112904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112900u;
    // 0x112904: 0x26d20004  addiu       $s2, $s6, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F2F0u, 0x112900u, 0x112908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112908u;
label_112908:
    // 0x112908: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x112908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11290c: 0xc043cbc  jal         func_10F2F0
    ctx->pc = 0x11290Cu;
    SET_GPR_U32(ctx, 31, 0x112914u);
    ctx->pc = 0x112910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11290Cu;
    // 0x112910: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F2F0u, 0x11290Cu, 0x112914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112914u;
label_112914:
    // 0x112914: 0x16020019  bne         $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x112914u;
    {
        const bool branch_taken_0x112914 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x112918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112914u;
        // 0x112918: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112914) {
            ctx->pc = 0x11297Cu;
            goto label_11297c;
        }
    }
    ctx->pc = 0x11291Cu;
    // 0x11291c: 0xc043c9e  jal         func_10F278
    ctx->pc = 0x11291Cu;
    SET_GPR_U32(ctx, 31, 0x112924u);
    ctx->pc = 0x112920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11291Cu;
    // 0x112920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F278u, 0x11291Cu, 0x112924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112924u;
label_112924:
    // 0x112924: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x112924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112928: 0xc043c9e  jal         func_10F278
    ctx->pc = 0x112928u;
    SET_GPR_U32(ctx, 31, 0x112930u);
    ctx->pc = 0x11292Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112928u;
    // 0x11292c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F278u, 0x112928u, 0x112930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112930u;
label_112930:
    // 0x112930: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x112930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x112934: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x112934u;
    {
        const bool branch_taken_0x112934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112934u;
        // 0x112938: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112934) {
            ctx->pc = 0x11297Cu;
            goto label_11297c;
        }
    }
    ctx->pc = 0x11293Cu;
    // 0x11293c: 0x1296000e  beq         $s4, $s6, . + 4 + (0xE << 2)
    ctx->pc = 0x11293Cu;
    {
        const bool branch_taken_0x11293c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 22));
        ctx->pc = 0x112940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11293Cu;
        // 0x112940: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11293c) {
            ctx->pc = 0x112978u;
            goto label_112978;
        }
    }
    ctx->pc = 0x112944u;
    // 0x112944: 0x92840094  lbu         $a0, 0x94($s4)
    ctx->pc = 0x112944u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x112948: 0x904383bb  lbu         $v1, -0x7C45($v0)
    ctx->pc = 0x112948u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294935483)));
    // 0x11294c: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x11294Cu;
    {
        const bool branch_taken_0x11294c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x112950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11294Cu;
        // 0x112950: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11294c) {
            ctx->pc = 0x11297Cu;
            goto label_11297c;
        }
    }
    ctx->pc = 0x112954u;
    // 0x112954: 0xc043c14  jal         func_10F050
    ctx->pc = 0x112954u;
    SET_GPR_U32(ctx, 31, 0x11295Cu);
    ctx->pc = 0x112958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112954u;
    // 0x112958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F050u, 0x112954u, 0x11295Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11295Cu;
label_11295c:
    // 0x11295c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11295cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112960: 0xc043c14  jal         func_10F050
    ctx->pc = 0x112960u;
    SET_GPR_U32(ctx, 31, 0x112968u);
    ctx->pc = 0x112964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112960u;
    // 0x112964: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F050u, 0x112960u, 0x112968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112968u;
label_112968:
    // 0x112968: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x112968u;
    {
        const bool branch_taken_0x112968 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x11296Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112968u;
        // 0x11296c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112968) {
            ctx->pc = 0x11297Cu;
            goto label_11297c;
        }
    }
    ctx->pc = 0x112970u;
    // 0x112970: 0x16600002  bnez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x112970u;
    {
        const bool branch_taken_0x112970 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x112974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112970u;
        // 0x112974: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112970) {
            ctx->pc = 0x11297Cu;
            goto label_11297c;
        }
    }
    ctx->pc = 0x112978u;
label_112978:
    // 0x112978: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x112978u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11297c:
    // 0x11297c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x11297cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x112980: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x112980u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x112984: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x112984u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x112988: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x112988u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11298c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x11298cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x112990: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x112990u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x112994: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x112994u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x112998: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x112998u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11299c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x11299cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1129a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1129a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1129a4: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x1129a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1129a8: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x1129a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1129ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1129ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1129B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1129ACu;
        // 0x1129b0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1129ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1129B4u;
    // 0x1129b4: 0x0  nop
    ctx->pc = 0x1129b4u;
    // NOP
    ctx->pc = 0x1129b8u;
}
