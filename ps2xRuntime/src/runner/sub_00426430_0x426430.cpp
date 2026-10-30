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

// Function: sub_00426430
// Address: 0x426430 - 0x426c30
void sub_00426430_0x426430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00426430_0x426430");
#endif

    switch (ctx->pc) {
        case 0x426474u: goto label_426474;
        case 0x4264ecu: goto label_4264ec;
        case 0x4265e8u: goto label_4265e8;
        case 0x426628u: goto label_426628;
        case 0x426638u: goto label_426638;
        case 0x426680u: goto label_426680;
        case 0x426bb0u: goto label_426bb0;
        case 0x426bf8u: goto label_426bf8;
        default: break;
    }

    ctx->pc = 0x426430u;

    // 0x426430: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x426430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x426434: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x426434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x426438: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x426438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x42643c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x42643cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426440: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x426440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x426444: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x426444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x426448: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x426448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x42644c: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x42644cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x426450: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x426450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x426454: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x426454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x426458: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x426458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x42645c: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x42645cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x426460: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x426460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x426464: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x426464u;
    {
        const bool branch_taken_0x426464 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x426468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426464u;
        // 0x426468: 0x8e950008  lw          $s5, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426464) {
            ctx->pc = 0x426478u;
            goto label_426478;
        }
    }
    ctx->pc = 0x42646Cu;
    // 0x42646c: 0xc1291a4  jal         func_4A4690
    ctx->pc = 0x42646Cu;
    SET_GPR_U32(ctx, 31, 0x426474u);
    ctx->pc = 0x426470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42646Cu;
    // 0x426470: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4690u, 0x42646Cu, 0x426474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426474u;
label_426474:
    // 0x426474: 0x0  nop
    ctx->pc = 0x426474u;
    // NOP
label_426478:
    // 0x426478: 0x8e910040  lw          $s1, 0x40($s4)
    ctx->pc = 0x426478u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x42647c: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x42647Cu;
    {
        const bool branch_taken_0x42647c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x426480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42647Cu;
        // 0x426480: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42647c) {
            ctx->pc = 0x426488u;
            goto label_426488;
        }
    }
    ctx->pc = 0x426484u;
    // 0x426484: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x426484u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_426488:
    // 0x426488: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x426488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x42648c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x42648cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426490: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x426490u;
    {
        const bool branch_taken_0x426490 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x426494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426490u;
        // 0x426494: 0xac40711c  sw          $zero, 0x711C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28956), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426490) {
            ctx->pc = 0x4264B8u;
            goto label_4264b8;
        }
    }
    ctx->pc = 0x426498u;
    // 0x426498: 0x92020023  lbu         $v0, 0x23($s0)
    ctx->pc = 0x426498u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x42649c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x42649cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x4264a0: 0x38430005  xori        $v1, $v0, 0x5
    ctx->pc = 0x4264a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x4264a4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4264a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x4264a8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4264a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x4264ac: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4264acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x4264b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4264b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4264b4: 0xaee2711c  sw          $v0, 0x711C($s7)
    ctx->pc = 0x4264b4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 28956), GPR_U32(ctx, 2));
label_4264b8:
    // 0x4264b8: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4264b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x4264bc: 0x3c160059  lui         $s6, 0x59
    ctx->pc = 0x4264bcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)89 << 16));
    // 0x4264c0: 0x8c627118  lw          $v0, 0x7118($v1)
    ctx->pc = 0x4264c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x597118u));
    // 0x4264c4: 0x12020038  beq         $s0, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x4264C4u;
    {
        const bool branch_taken_0x4264c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x4264C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4264C4u;
        // 0x4264c8: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4264c4) {
            ctx->pc = 0x4265A8u;
            goto label_4265a8;
        }
    }
    ctx->pc = 0x4264CCu;
    // 0x4264cc: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4264CCu;
    {
        const bool branch_taken_0x4264cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4264D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4264CCu;
        // 0x4264d0: 0xdec26e20  ld          $v0, 0x6E20($s6) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 28192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4264cc) {
            ctx->pc = 0x4264F4u;
            goto label_4264f4;
        }
    }
    ctx->pc = 0x4264D4u;
    // 0x4264d4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x4264d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4264d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4264d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4264dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4264dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4264e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4264e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4264e4: 0xc128ed2  jal         func_4A3B48
    ctx->pc = 0x4264E4u;
    SET_GPR_U32(ctx, 31, 0x4264ECu);
    ctx->pc = 0x4264E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4264E4u;
    // 0x4264e8: 0xfec26e20  sd          $v0, 0x6E20($s6) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 22), 28192), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A3B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A3B48u, 0x4264E4u, 0x4264ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4264ECu;
label_4264ec:
    // 0x4264ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4264ECu;
    {
        const bool branch_taken_0x4264ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4264F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4264ECu;
        // 0x4264f0: 0xae507118  sw          $s0, 0x7118($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28952), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4264ec) {
            ctx->pc = 0x426504u;
            goto label_426504;
        }
    }
    ctx->pc = 0x4264F4u;
label_4264f4:
    // 0x4264f4: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x4264f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x4264f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4264f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4264fc: 0xfec26e20  sd          $v0, 0x6E20($s6)
    ctx->pc = 0x4264fcu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 28192), GPR_U64(ctx, 2));
    // 0x426500: 0xae507118  sw          $s0, 0x7118($s2)
    ctx->pc = 0x426500u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28952), GPR_U32(ctx, 16));
label_426504:
    // 0x426504: 0x12200028  beqz        $s1, . + 4 + (0x28 << 2)
    ctx->pc = 0x426504u;
    {
        const bool branch_taken_0x426504 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x426508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426504u;
        // 0x426508: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426504) {
            ctx->pc = 0x4265A8u;
            goto label_4265a8;
        }
    }
    ctx->pc = 0x42650Cu;
    // 0x42650c: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x42650cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x426510: 0xdca26e08  ld          $v0, 0x6E08($a1)
    ctx->pc = 0x426510u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 28168)));
    // 0x426514: 0x2403fe1f  addiu       $v1, $zero, -0x1E1
    ctx->pc = 0x426514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966815));
    // 0x426518: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x426518u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x42651c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x42651cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x426520: 0x34010006  ori         $at, $zero, 0x6
    ctx->pc = 0x426520u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)6);
    // 0x426524: 0x5024000e  beql        $at, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x426524u;
    {
        const bool branch_taken_0x426524 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 4));
        if (branch_taken_0x426524) {
            ctx->pc = 0x426528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x426524u;
            // 0x426528: 0x34420160  ori         $v0, $v0, 0x160 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)352);
            ctx->in_delay_slot = false;
            ctx->pc = 0x426560u;
            goto label_426560;
        }
    }
    ctx->pc = 0x42652Cu;
    // 0x42652c: 0x34010005  ori         $at, $zero, 0x5
    ctx->pc = 0x42652cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)5);
    // 0x426530: 0x5024000b  beql        $at, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x426530u;
    {
        const bool branch_taken_0x426530 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 4));
        if (branch_taken_0x426530) {
            ctx->pc = 0x426534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x426530u;
            // 0x426534: 0x344200c0  ori         $v0, $v0, 0xC0 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x426560u;
            goto label_426560;
        }
    }
    ctx->pc = 0x426538u;
    // 0x426538: 0x34010004  ori         $at, $zero, 0x4
    ctx->pc = 0x426538u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)4);
    // 0x42653c: 0x50240008  beql        $at, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x42653Cu;
    {
        const bool branch_taken_0x42653c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 4));
        if (branch_taken_0x42653c) {
            ctx->pc = 0x426540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42653Cu;
            // 0x426540: 0x34420120  ori         $v0, $v0, 0x120 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
            ctx->in_delay_slot = false;
            ctx->pc = 0x426560u;
            goto label_426560;
        }
    }
    ctx->pc = 0x426544u;
    // 0x426544: 0x34010003  ori         $at, $zero, 0x3
    ctx->pc = 0x426544u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)3);
    // 0x426548: 0x50240005  beql        $at, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x426548u;
    {
        const bool branch_taken_0x426548 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 4));
        if (branch_taken_0x426548) {
            ctx->pc = 0x42654Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x426548u;
            // 0x42654c: 0x34420080  ori         $v0, $v0, 0x80 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
            ctx->in_delay_slot = false;
            ctx->pc = 0x426560u;
            goto label_426560;
        }
    }
    ctx->pc = 0x426550u;
    // 0x426550: 0x34010002  ori         $at, $zero, 0x2
    ctx->pc = 0x426550u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)2);
    // 0x426554: 0x50240002  beql        $at, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x426554u;
    {
        const bool branch_taken_0x426554 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 4));
        if (branch_taken_0x426554) {
            ctx->pc = 0x426558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x426554u;
            // 0x426558: 0x34420060  ori         $v0, $v0, 0x60 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
            ctx->in_delay_slot = false;
            ctx->pc = 0x426560u;
            goto label_426560;
        }
    }
    ctx->pc = 0x42655Cu;
    // 0x42655c: 0x34420000  ori         $v0, $v0, 0x0
    ctx->pc = 0x42655cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)0);
label_426560:
    // 0x426560: 0x0  nop
    ctx->pc = 0x426560u;
    // NOP
    // 0x426564: 0xfca26e08  sd          $v0, 0x6E08($a1)
    ctx->pc = 0x426564u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 28168), GPR_U64(ctx, 2));
    // 0x426568: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x426568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x42656c: 0x30c20f00  andi        $v0, $a2, 0xF00
    ctx->pc = 0x42656cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3840);
    // 0x426570: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x426570u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x426574: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x426574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x426578: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x426578u;
    {
        const bool branch_taken_0x426578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x42657Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426578u;
        // 0x42657c: 0xfc806e00  sd          $zero, 0x6E00($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 28160), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426578) {
            ctx->pc = 0x426588u;
            goto label_426588;
        }
    }
    ctx->pc = 0x426580u;
    // 0x426580: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x426580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x426584: 0xfc826e00  sd          $v0, 0x6E00($a0)
    ctx->pc = 0x426584u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 28160), GPR_U64(ctx, 2));
label_426588:
    // 0x426588: 0x30c2f000  andi        $v0, $a2, 0xF000
    ctx->pc = 0x426588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)61440);
    // 0x42658c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x42658cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x426590: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x426590u;
    {
        const bool branch_taken_0x426590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x426594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426590u;
        // 0x426594: 0x8ee2711c  lw          $v0, 0x711C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 28956)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426590) {
            ctx->pc = 0x4265ACu;
            goto label_4265ac;
        }
    }
    ctx->pc = 0x426598u;
    // 0x426598: 0xdc826e00  ld          $v0, 0x6E00($a0)
    ctx->pc = 0x426598u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 28160)));
    // 0x42659c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x42659cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4265a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4265a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4265a4: 0xfc826e00  sd          $v0, 0x6E00($a0)
    ctx->pc = 0x4265a4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 28160), GPR_U64(ctx, 2));
label_4265a8:
    // 0x4265a8: 0x8ee2711c  lw          $v0, 0x711C($s7)
    ctx->pc = 0x4265a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 28956)));
label_4265ac:
    // 0x4265ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4265ACu;
    {
        const bool branch_taken_0x4265ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4265B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4265ACu;
        // 0x4265b0: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4265ac) {
            ctx->pc = 0x4265C8u;
            goto label_4265c8;
        }
    }
    ctx->pc = 0x4265B4u;
    // 0x4265b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4265b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4265b8: 0xdc436de8  ld          $v1, 0x6DE8($v0)
    ctx->pc = 0x4265b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 28136)));
    // 0x4265bc: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x4265bcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4265c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4265C0u;
    {
        const bool branch_taken_0x4265c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4265C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4265C0u;
        // 0x4265c4: 0x641825  or          $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4265c0) {
            ctx->pc = 0x4265D8u;
            goto label_4265d8;
        }
    }
    ctx->pc = 0x4265C8u;
label_4265c8:
    // 0x4265c8: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x4265c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x4265cc: 0xdc436de8  ld          $v1, 0x6DE8($v0)
    ctx->pc = 0x4265ccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 28136)));
    // 0x4265d0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x4265d0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4265d4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4265d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_4265d8:
    // 0x4265d8: 0xfc436de8  sd          $v1, 0x6DE8($v0)
    ctx->pc = 0x4265d8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 28136), GPR_U64(ctx, 3));
    // 0x4265dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4265dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4265e0: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x4265E0u;
    SET_GPR_U32(ctx, 31, 0x4265E8u);
    ctx->pc = 0x4265E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4265E0u;
    // 0x4265e4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x4265E0u, 0x4265E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4265E8u;
label_4265e8:
    // 0x4265e8: 0x3c120059  lui         $s2, 0x59
    ctx->pc = 0x4265e8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)89 << 16));
    // 0x4265ec: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x4265ecu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x4265f0: 0x36730003  ori         $s3, $s3, 0x3
    ctx->pc = 0x4265f0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)3);
    // 0x4265f4: 0x3402d806  ori         $v0, $zero, 0xD806
    ctx->pc = 0x4265f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55302);
    // 0x4265f8: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x4265f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x4265fc: 0x3442cf00  ori         $v0, $v0, 0xCF00
    ctx->pc = 0x4265fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52992);
    // 0x426600: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x426600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x426604: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x426604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
    // 0x426608: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x426608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x42660c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x42660cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x426610: 0x8e50707c  lw          $s0, 0x707C($s2)
    ctx->pc = 0x426610u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28796)));
    // 0x426614: 0x70531389  pcpyld      $v0, $v0, $s3
    ctx->pc = 0x426614u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 19)));
    // 0x426618: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x426618u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x42661c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x42661cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x426620: 0xc064a30  jal         func_1928C0
    ctx->pc = 0x426620u;
    SET_GPR_U32(ctx, 31, 0x426628u);
    ctx->pc = 0x426624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x426620u;
    // 0x426624: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1928C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1928C0u, 0x426620u, 0x426628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426628u;
label_426628:
    // 0x426628: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x426628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x42662c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x42662cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426630: 0xc064a3c  jal         func_1928F0
    ctx->pc = 0x426630u;
    SET_GPR_U32(ctx, 31, 0x426638u);
    ctx->pc = 0x426634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x426630u;
    // 0x426634: 0xdfb30040  ld          $s3, 0x40($sp) (Delay Slot)
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1928F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1928F0u, 0x426630u, 0x426638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426638u;
label_426638:
    // 0x426638: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x426638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x42663c: 0xdfa20040  ld          $v0, 0x40($sp)
    ctx->pc = 0x42663cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x426640: 0x70531389  pcpyld      $v0, $v0, $s3
    ctx->pc = 0x426640u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 19)));
    // 0x426644: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x426644u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x426648: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x426648u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x42664c: 0xdfb30010  ld          $s3, 0x10($sp)
    ctx->pc = 0x42664cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x426650: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x426650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426654: 0x72331389  pcpyld      $v0, $s1, $s3
    ctx->pc = 0x426654u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 19)));
    // 0x426658: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x426658u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x42665c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x42665cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x426660: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x426660u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x426664: 0x72331389  pcpyld      $v0, $s1, $s3
    ctx->pc = 0x426664u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 19)));
    // 0x426668: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x426668u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x42666c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x42666cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x426670: 0xae50707c  sw          $s0, 0x707C($s2)
    ctx->pc = 0x426670u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 16));
    // 0x426674: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x426674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426678: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x426678u;
    SET_GPR_U32(ctx, 31, 0x426680u);
    ctx->pc = 0x42667Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x426678u;
    // 0x42667c: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x426678u, 0x426680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426680u;
label_426680:
    // 0x426680: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x426680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x426684: 0x3463000f  ori         $v1, $v1, 0xF
    ctx->pc = 0x426684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15);
    // 0x426688: 0x72231b89  pcpyld      $v1, $s1, $v1
    ctx->pc = 0x426688u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 3)));
    // 0x42668c: 0x8e42707c  lw          $v0, 0x707C($s2)
    ctx->pc = 0x42668cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28796)));
    // 0x426690: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x426690u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x426694: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x426694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x426698: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x426698u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x42669c: 0x3404d802  ori         $a0, $zero, 0xD802
    ctx->pc = 0x42669cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x4266a0: 0x42578  dsll        $a0, $a0, 21
    ctx->pc = 0x4266a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 21);
    // 0x4266a4: 0x3484fe80  ori         $a0, $a0, 0xFE80
    ctx->pc = 0x4266a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65152);
    // 0x4266a8: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x4266a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x4266ac: 0x34848002  ori         $a0, $a0, 0x8002
    ctx->pc = 0x4266acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32770);
    // 0x4266b0: 0x42278  dsll        $a0, $a0, 9
    ctx->pc = 0x4266b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 9);
    // 0x4266b4: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x4266b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x4266b8: 0x70912389  pcpyld      $a0, $a0, $s1
    ctx->pc = 0x4266b8u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 17)));
    // 0x4266bc: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x4266bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x4266c0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4266c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4266c4: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x4266c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x4266c8: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x4266c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x4266cc: 0x92820047  lbu         $v0, 0x47($s4)
    ctx->pc = 0x4266ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 71)));
    // 0x4266d0: 0x8ee3711c  lw          $v1, 0x711C($s7)
    ctx->pc = 0x4266d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 28956)));
    // 0x4266d4: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x4266d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
    // 0x4266d8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4266d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4266dc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x4266dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4266e0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4266E0u;
    {
        const bool branch_taken_0x4266e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4266E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4266E0u;
        // 0x4266e4: 0xac827120  sw          $v0, 0x7120($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28960), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4266e0) {
            ctx->pc = 0x4266F8u;
            goto label_4266f8;
        }
    }
    ctx->pc = 0x4266E8u;
    // 0x4266e8: 0xdec26e20  ld          $v0, 0x6E20($s6)
    ctx->pc = 0x4266e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 28192)));
    // 0x4266ec: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x4266ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x4266f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4266F0u;
    {
        const bool branch_taken_0x4266f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4266F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4266F0u;
        // 0x4266f4: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4266f0) {
            ctx->pc = 0x426704u;
            goto label_426704;
        }
    }
    ctx->pc = 0x4266F8u;
label_4266f8:
    // 0x4266f8: 0xdec26e20  ld          $v0, 0x6E20($s6)
    ctx->pc = 0x4266f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 28192)));
    // 0x4266fc: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x4266fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x426700: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x426700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_426704:
    // 0x426704: 0xfec26e20  sd          $v0, 0x6E20($s6)
    ctx->pc = 0x426704u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 28192), GPR_U64(ctx, 2));
    // 0x426708: 0x92860029  lbu         $a2, 0x29($s4)
    ctx->pc = 0x426708u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 41)));
    // 0x42670c: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x42670cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x426710: 0x8ec26e20  lw          $v0, 0x6E20($s6)
    ctx->pc = 0x426710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28192)));
    // 0x426714: 0x3407fc00  ori         $a3, $zero, 0xFC00
    ctx->pc = 0x426714u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64512);
    // 0x426718: 0x73c78  dsll        $a3, $a3, 17
    ctx->pc = 0x426718u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 17);
    // 0x42671c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x42671cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x426720: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x426720u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x426724: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x426724u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x426728: 0x73bf8  dsll        $a3, $a3, 15
    ctx->pc = 0x426728u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 15);
    // 0x42672c: 0x34e77fff  ori         $a3, $a3, 0x7FFF
    ctx->pc = 0x42672cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32767);
    // 0x426730: 0xdc64f750  ld          $a0, -0x8B0($v1)
    ctx->pc = 0x426730u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294965072)));
    // 0x426734: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x426734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x426738: 0x2463f750  addiu       $v1, $v1, -0x8B0
    ctx->pc = 0x426738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965072));
    // 0x42673c: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x42673cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x426740: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x426740u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x426744: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x426744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x426748: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x426748u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x42674c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x42674cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x426750: 0x70a42389  pcpyld      $a0, $a1, $a0
    ctx->pc = 0x426750u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x426754: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x426754u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x426758: 0x8e46707c  lw          $a2, 0x707C($s2)
    ctx->pc = 0x426758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28796)));
    // 0x42675c: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x42675cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x426760: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x426760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x426764: 0xae46707c  sw          $a2, 0x707C($s2)
    ctx->pc = 0x426764u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 6));
    // 0x426768: 0x3402d802  ori         $v0, $zero, 0xD802
    ctx->pc = 0x426768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x42676c: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x42676cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x426770: 0x3442fec0  ori         $v0, $v0, 0xFEC0
    ctx->pc = 0x426770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65216);
    // 0x426774: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x426774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x426778: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x426778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
    // 0x42677c: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x42677cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x426780: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x426780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x426784: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x426784u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426788: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x426788u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x42678c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x42678cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x426790: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x426790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x426794: 0xae43707c  sw          $v1, 0x707C($s2)
    ctx->pc = 0x426794u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 3));
    // 0x426798: 0xdec26e20  ld          $v0, 0x6E20($s6)
    ctx->pc = 0x426798u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 28192)));
    // 0x42679c: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x42679cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x4267a0: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x4267a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x4267a4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x4267a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x4267a8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x4267a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x4267ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4267ACu;
    {
        const bool branch_taken_0x4267ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4267B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4267ACu;
        // 0x4267b0: 0x92820044  lbu         $v0, 0x44($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4267ac) {
            ctx->pc = 0x4267C0u;
            goto label_4267c0;
        }
    }
    ctx->pc = 0x4267B4u;
    // 0x4267b4: 0x3c013b01  lui         $at, 0x3B01
    ctx->pc = 0x4267b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15105 << 16));
    // 0x4267b8: 0x34211b50  ori         $at, $at, 0x1B50
    ctx->pc = 0x4267b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6992);
    // 0x4267bc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x4267bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_4267c0:
    // 0x4267c0: 0x92830045  lbu         $v1, 0x45($s4)
    ctx->pc = 0x4267c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 69)));
    // 0x4267c4: 0x92840046  lbu         $a0, 0x46($s4)
    ctx->pc = 0x4267c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 70)));
    // 0x4267c8: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x4267c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x4267cc: 0x0  nop
    ctx->pc = 0x4267ccu;
    // NOP
    // 0x4267d0: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x4267d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x4267d4: 0x92850047  lbu         $a1, 0x47($s4)
    ctx->pc = 0x4267d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 71)));
    // 0x4267d8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4267d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4267dc: 0x0  nop
    ctx->pc = 0x4267dcu;
    // NOP
    // 0x4267e0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x4267e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x4267e4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x4267e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4267e8: 0x0  nop
    ctx->pc = 0x4267e8u;
    // NOP
    // 0x4267ec: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x4267ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x4267f0: 0x3c013b01  lui         $at, 0x3B01
    ctx->pc = 0x4267f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15105 << 16));
    // 0x4267f4: 0x34211b50  ori         $at, $at, 0x1B50
    ctx->pc = 0x4267f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6992);
    // 0x4267f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4267f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4267fc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4267fcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x426800: 0x0  nop
    ctx->pc = 0x426800u;
    // NOP
    // 0x426804: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x426804u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x426808: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x426808u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x42680c: 0x460519c2  mul.s       $f7, $f3, $f5
    ctx->pc = 0x42680cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x426810: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x426810u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x426814: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x426814u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x426818: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x426818u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x42681c: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x42681cu;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x426820: 0x46051182  mul.s       $f6, $f2, $f5
    ctx->pc = 0x426820u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x426824: 0x460521c2  mul.s       $f7, $f4, $f5
    ctx->pc = 0x426824u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x426828: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x426828u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x42682c: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x42682cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x426830: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x426830u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x426834: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x426834u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x426838: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x426838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x42683c: 0xae43707c  sw          $v1, 0x707C($s2)
    ctx->pc = 0x42683cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 3));
    // 0x426840: 0x3402d802  ori         $v0, $zero, 0xD802
    ctx->pc = 0x426840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x426844: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x426844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x426848: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x426848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x42684c: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x42684cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x426850: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x426850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
    // 0x426854: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x426854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x426858: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x426858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x42685c: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x42685cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x426860: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x426860u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x426864: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x426864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x426868: 0xae43707c  sw          $v1, 0x707C($s2)
    ctx->pc = 0x426868u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 3));
    // 0x42686c: 0x8e82003c  lw          $v0, 0x3C($s4)
    ctx->pc = 0x42686cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x426870: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x426870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x426874: 0x34210001  ori         $at, $at, 0x1
    ctx->pc = 0x426874u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1);
    // 0x426878: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x426878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x42687c: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x42687cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x426880: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x426880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x426884: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x426884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x426888: 0xc680001c  lwc1        $f0, 0x1C($s4)
    ctx->pc = 0x426888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x42688c: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x42688cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x426890: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x426890u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x426894: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x426894u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x426898: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x426898u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x42689c: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x42689cu;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x4268a0: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x4268a0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x4268a4: 0x46041142  mul.s       $f5, $f2, $f4
    ctx->pc = 0x4268a4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x4268a8: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x4268a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4268ac: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x4268acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4268b0: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x4268b0u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x4268b4: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x4268b4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x4268b8: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x4268b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x4268bc: 0xae43707c  sw          $v1, 0x707C($s2)
    ctx->pc = 0x4268bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 3));
    // 0x4268c0: 0x92820028  lbu         $v0, 0x28($s4)
    ctx->pc = 0x4268c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x4268c4: 0x3404d806  ori         $a0, $zero, 0xD806
    ctx->pc = 0x4268c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55302);
    // 0x4268c8: 0x42578  dsll        $a0, $a0, 21
    ctx->pc = 0x4268c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 21);
    // 0x4268cc: 0x3484ff40  ori         $a0, $a0, 0xFF40
    ctx->pc = 0x4268ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65344);
    // 0x4268d0: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x4268d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x4268d4: 0x34848002  ori         $a0, $a0, 0x8002
    ctx->pc = 0x4268d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32770);
    // 0x4268d8: 0x42278  dsll        $a0, $a0, 9
    ctx->pc = 0x4268d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 9);
    // 0x4268dc: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x4268dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x4268e0: 0x70871b89  pcpyld      $v1, $a0, $a3
    ctx->pc = 0x4268e0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x4268e4: 0x30470007  andi        $a3, $v0, 0x7
    ctx->pc = 0x4268e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x4268e8: 0x7cc30040  sq          $v1, 0x40($a2)
    ctx->pc = 0x4268e8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 3));
    // 0x4268ec: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x4268ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x4268f0: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x4268f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x4268f4: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4268f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x4268f8: 0x8c626e80  lw          $v0, 0x6E80($v1)
    ctx->pc = 0x4268f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x596E80u));
    // 0x4268fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4268FCu;
    {
        const bool branch_taken_0x4268fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x426900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4268FCu;
        // 0x426900: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4268fc) {
            ctx->pc = 0x426910u;
            goto label_426910;
        }
    }
    ctx->pc = 0x426904u;
    // 0x426904: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x426904u;
    {
        const bool branch_taken_0x426904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x426904) {
            ctx->pc = 0x426908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x426904u;
            // 0x426908: 0x34e70008  ori         $a3, $a3, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x426930u;
            goto label_426930;
        }
    }
    ctx->pc = 0x42690Cu;
    // 0x42690c: 0x0  nop
    ctx->pc = 0x42690cu;
    // NOP
label_426910:
    // 0x426910: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x426910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x426914: 0x8c436e84  lw          $v1, 0x6E84($v0)
    ctx->pc = 0x426914u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x596E84u));
    // 0x426918: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x426918u;
    {
        const bool branch_taken_0x426918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x42691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426918u;
        // 0x42691c: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x426918) {
            ctx->pc = 0x426958u;
            goto label_426958;
        }
    }
    ctx->pc = 0x426920u;
    // 0x426920: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x426920u;
    {
        const bool branch_taken_0x426920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x426920) {
            ctx->pc = 0x426924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x426920u;
            // 0x426924: 0x3c030053  lui         $v1, 0x53 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x426960u;
            goto label_426960;
        }
    }
    ctx->pc = 0x426928u;
    // 0x426928: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x426928u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
    // 0x42692c: 0x0  nop
    ctx->pc = 0x42692cu;
    // NOP
label_426930:
    // 0x426930: 0x8e44707c  lw          $a0, 0x707C($s2)
    ctx->pc = 0x426930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28796)));
    // 0x426934: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x426934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x426938: 0x2463f7f0  addiu       $v1, $v1, -0x810
    ctx->pc = 0x426938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965232));
    // 0x42693c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x42693cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x52F7F0u));
    // 0x426940: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x426940u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x426944: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x426944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x426948: 0xae44707c  sw          $a0, 0x707C($s2)
    ctx->pc = 0x426948u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 4));
    // 0x42694c: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x42694cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x426950: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x426950u;
    {
        const bool branch_taken_0x426950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x426954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426950u;
        // 0x426954: 0x2463f800  addiu       $v1, $v1, -0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426950) {
            ctx->pc = 0x426980u;
            goto label_426980;
        }
    }
    ctx->pc = 0x426958u;
label_426958:
    // 0x426958: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x426958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x42695c: 0x0  nop
    ctx->pc = 0x42695cu;
    // NOP
label_426960:
    // 0x426960: 0x8e44707c  lw          $a0, 0x707C($s2)
    ctx->pc = 0x426960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28796)));
    // 0x426964: 0x2463f7d0  addiu       $v1, $v1, -0x830
    ctx->pc = 0x426964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965200));
    // 0x426968: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x426968u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x42696c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x42696cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x426970: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x426970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x426974: 0xae44707c  sw          $a0, 0x707C($s2)
    ctx->pc = 0x426974u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 4));
    // 0x426978: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x426978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x42697c: 0x2463f7e0  addiu       $v1, $v1, -0x820
    ctx->pc = 0x42697cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965216));
label_426980:
    // 0x426980: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x426980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x426984: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x426984u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x426988: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x426988u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x42698c: 0xae45707c  sw          $a1, 0x707C($s2)
    ctx->pc = 0x42698cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 5));
    // 0x426990: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x426990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x426994: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x426994u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x426998: 0x8c447124  lw          $a0, 0x7124($v0)
    ctx->pc = 0x426998u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x597124u));
    // 0x42699c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x42699cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4269a0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4269A0u;
    {
        const bool branch_taken_0x4269a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x4269A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4269A0u;
        // 0x4269a4: 0xaca06e78  sw          $zero, 0x6E78($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 28280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4269a0) {
            ctx->pc = 0x4269B0u;
            goto label_4269b0;
        }
    }
    ctx->pc = 0x4269A8u;
    // 0x4269a8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x4269a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4269ac: 0xaca26e78  sw          $v0, 0x6E78($a1)
    ctx->pc = 0x4269acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28280), GPR_U32(ctx, 2));
label_4269b0:
    // 0x4269b0: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x4269b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x4269b4: 0x9ca56e78  lwu         $a1, 0x6E78($a1)
    ctx->pc = 0x4269b4u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 28280)));
    // 0x4269b8: 0x9c826e7c  lwu         $v0, 0x6E7C($a0)
    ctx->pc = 0x4269b8u;
    SET_GPR_ZE32(ctx, 2, FAST_READ32(0x596E7Cu));
    // 0x4269bc: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x4269bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x4269c0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x4269c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x4269c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4269c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4269c8: 0x452025  or          $a0, $v0, $a1
    ctx->pc = 0x4269c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4269cc: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x4269ccu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x4269d0: 0x8e44707c  lw          $a0, 0x707C($s2)
    ctx->pc = 0x4269d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28796)));
    // 0x4269d4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x4269d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x4269d8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x4269d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4269dc: 0xae44707c  sw          $a0, 0x707C($s2)
    ctx->pc = 0x4269dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 4));
    // 0x4269e0: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x4269e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x4269e4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x4269E4u;
    {
        const bool branch_taken_0x4269e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4269E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4269E4u;
        // 0x4269e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4269e4) {
            ctx->pc = 0x426A70u;
            goto label_426a70;
        }
    }
    ctx->pc = 0x4269ECu;
    // 0x4269ec: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x4269ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x4269f0: 0x31f38  dsll        $v1, $v1, 28
    ctx->pc = 0x4269f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 28);
    // 0x4269f4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x4269f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x4269f8: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x4269f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x4269fc: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x4269fcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x426a00: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x426a00u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x426a04: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x426a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x426a08: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x426a08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x426a0c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x426a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x426a10: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x426a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x426a14: 0x34428003  ori         $v0, $v0, 0x8003
    ctx->pc = 0x426a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32771);
    // 0x426a18: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x426a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x426a1c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x426a1cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x426a20: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x426a20u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x426a24: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x426a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x426a28: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x426a28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x426a2c: 0xdfc26de8  ld          $v0, 0x6DE8($fp)
    ctx->pc = 0x426a2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 28136)));
    // 0x426a30: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x426a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x426a34: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x426a34u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x426a38: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x426a38u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x426a3c: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x426a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x426a40: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x426a40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x426a44: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x426a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x426a48: 0xdc626e08  ld          $v0, 0x6E08($v1)
    ctx->pc = 0x426a48u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x596E08u));
    // 0x426a4c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x426a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x426a50: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x426a50u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x426a54: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x426a54u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x426a58: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x426a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x426a5c: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x426a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x426a60: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x426a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x426a64: 0xdc626e00  ld          $v0, 0x6E00($v1)
    ctx->pc = 0x426a64u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x596E00u));
    // 0x426a68: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x426A68u;
    {
        const bool branch_taken_0x426a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x426A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426A68u;
        // 0x426a6c: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426a68) {
            ctx->pc = 0x426AE0u;
            goto label_426ae0;
        }
    }
    ctx->pc = 0x426A70u;
label_426a70:
    // 0x426a70: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x426a70u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x426a74: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x426a74u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x426a78: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x426a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x426a7c: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x426a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x426a80: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x426a80u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x426a84: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x426a84u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x426a88: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x426a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x426a8c: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x426a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x426a90: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x426a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x426a94: 0x31f78  dsll        $v1, $v1, 29
    ctx->pc = 0x426a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 29);
    // 0x426a98: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x426a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x426a9c: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x426a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
    // 0x426aa0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x426aa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426aa4: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x426aa4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x426aa8: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x426aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x426aac: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x426aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x426ab0: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x426ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x426ab4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x426ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x426ab8: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x426ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x426abc: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x426abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x426ac0: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x426ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x426ac4: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x426ac4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x426ac8: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x426ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x426acc: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x426accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x426ad0: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x426ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x426ad4: 0xdfc26de8  ld          $v0, 0x6DE8($fp)
    ctx->pc = 0x426ad4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 28136)));
    // 0x426ad8: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x426ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x426adc: 0x0  nop
    ctx->pc = 0x426adcu;
    // NOP
label_426ae0:
    // 0x426ae0: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x426ae0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x426ae4: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x426ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x426ae8: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x426ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x426aec: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x426aecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x426af0: 0x92830028  lbu         $v1, 0x28($s4)
    ctx->pc = 0x426af0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x426af4: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x426af4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x426af8: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x426af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x426afc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x426afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x426b00: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x426b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x426b04: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x426b04u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x426b08: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x426b08u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x426b0c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x426b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x426b10: 0xa282002b  sb          $v0, 0x2B($s4)
    ctx->pc = 0x426b10u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x426b14: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x426b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x426b18: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x426b18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x426b1c: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x426b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x426b20: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x426b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x426b24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x426b24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x426b28: 0x8cc36e74  lw          $v1, 0x6E74($a2)
    ctx->pc = 0x426b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28276)));
    // 0x426b2c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x426b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x426b30: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x426b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x426b34: 0x1065000a  beq         $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x426B34u;
    {
        const bool branch_taken_0x426b34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x426B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426B34u;
        // 0x426b38: 0x5203c  dsll32      $a0, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426b34) {
            ctx->pc = 0x426B60u;
            goto label_426b60;
        }
    }
    ctx->pc = 0x426B3Cu;
    // 0x426b3c: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x426b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x426b40: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x426b40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x426b44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x426b44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426b48: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x426b48u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x426b4c: 0x8e43707c  lw          $v1, 0x707C($s2)
    ctx->pc = 0x426b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28796)));
    // 0x426b50: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x426b50u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x426b54: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x426b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x426b58: 0xae43707c  sw          $v1, 0x707C($s2)
    ctx->pc = 0x426b58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 3));
    // 0x426b5c: 0xacc56e74  sw          $a1, 0x6E74($a2)
    ctx->pc = 0x426b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28276), GPR_U32(ctx, 5));
label_426b60:
    // 0x426b60: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x426b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x426b64: 0x3c070200  lui         $a3, 0x200
    ctx->pc = 0x426b64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)512 << 16));
    // 0x426b68: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x426b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x426b6c: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x426b6cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x426b70: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x426b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x426b74: 0x3c060300  lui         $a2, 0x300
    ctx->pc = 0x426b74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)768 << 16));
    // 0x426b78: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x426b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x426b7c: 0x24a90018  addiu       $t1, $a1, 0x18
    ctx->pc = 0x426b7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x426b80: 0x9d240008  lwu         $a0, 0x8($t1)
    ctx->pc = 0x426b80u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x426b84: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x426b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x426b88: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x426b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x426b8c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x426b8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x426b90: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x426b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x426b94: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x426b94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x426b98: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x426b98u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x426b9c: 0x8e43707c  lw          $v1, 0x707C($s2)
    ctx->pc = 0x426b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28796)));
    // 0x426ba0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x426ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x426ba4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x426ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x426ba8: 0xae43707c  sw          $v1, 0x707C($s2)
    ctx->pc = 0x426ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 3));
    // 0x426bac: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x426bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_426bb0:
    // 0x426bb0: 0x42000039  di
    ctx->pc = 0x426bb0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x426bb4: 0x40f  sync.p
    ctx->pc = 0x426bb4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x426bb8: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x426bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x426bbc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x426bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x426bc0: 0x0  nop
    ctx->pc = 0x426bc0u;
    // NOP
    // 0x426bc4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x426BC4u;
    {
        const bool branch_taken_0x426bc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x426bc4) {
            ctx->pc = 0x426BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_426bb0;
        }
    }
    ctx->pc = 0x426BCCu;
    // 0x426bcc: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x426bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x426bd0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x426bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x426bd4: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x426bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x426bd8: 0x42000038  ei
    ctx->pc = 0x426bd8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x426bdc: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x426bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x426be0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x426be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x426be4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x426be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x426be8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x426BE8u;
    {
        const bool branch_taken_0x426be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x426BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426BE8u;
        // 0x426bec: 0xad220004  sw          $v0, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426be8) {
            ctx->pc = 0x426BF8u;
            goto label_426bf8;
        }
    }
    ctx->pc = 0x426BF0u;
    // 0x426bf0: 0xc1237ea  jal         func_48DFA8
    ctx->pc = 0x426BF0u;
    SET_GPR_U32(ctx, 31, 0x426BF8u);
    ctx->pc = 0x426BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x426BF0u;
    // 0x426bf4: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48DFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DFA8u, 0x426BF0u, 0x426BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426BF8u;
label_426bf8:
    // 0x426bf8: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x426bf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x426bfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x426bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x426c00: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x426c00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x426c04: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x426c04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x426c08: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x426c08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x426c0c: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x426c0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x426c10: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x426c10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x426c14: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x426c14u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x426c18: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x426c18u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x426c1c: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x426c1cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x426c20: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x426c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x426c24: 0x3e00008  jr          $ra
    ctx->pc = 0x426C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x426C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426C24u;
        // 0x426c28: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x426C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x426C2Cu;
    // 0x426c2c: 0x0  nop
    ctx->pc = 0x426c2cu;
    // NOP
    ctx->pc = 0x426c30u;
}
