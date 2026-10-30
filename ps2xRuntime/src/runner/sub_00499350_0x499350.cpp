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

// Function: sub_00499350
// Address: 0x499350 - 0x499760
void sub_00499350_0x499350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00499350_0x499350");
#endif

    switch (ctx->pc) {
        case 0x4993ccu: goto label_4993cc;
        case 0x49942cu: goto label_49942c;
        case 0x499520u: goto label_499520;
        case 0x4995ecu: goto label_4995ec;
        case 0x499660u: goto label_499660;
        case 0x499678u: goto label_499678;
        case 0x4996e8u: goto label_4996e8;
        case 0x499700u: goto label_499700;
        default: break;
    }

    ctx->pc = 0x499350u;

    // 0x499350: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x499350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x499354: 0x8f838a58  lw          $v1, -0x75A8($gp)
    ctx->pc = 0x499354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937176)));
    // 0x499358: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x499358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x49935c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x49935cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499360: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x499360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x499364: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x499364u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499368: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x499368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x49936c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x49936cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x499370: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x499370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x499374: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x499374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x499378: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x499378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x49937c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x49937cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x499380: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x499380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x499384: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x499384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x499388: 0x90640020  lbu         $a0, 0x20($v1)
    ctx->pc = 0x499388u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x49938c: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x49938cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x499390: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x499390u;
    {
        const bool branch_taken_0x499390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x499394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499390u;
        // 0x499394: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499390) {
            ctx->pc = 0x4993B0u;
            goto label_4993b0;
        }
    }
    ctx->pc = 0x499398u;
    // 0x499398: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x499398u;
    {
        const bool branch_taken_0x499398 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x499398) {
            ctx->pc = 0x4993C4u;
            goto label_4993c4;
        }
    }
    ctx->pc = 0x4993A0u;
    // 0x4993a0: 0x10800094  beqz        $a0, . + 4 + (0x94 << 2)
    ctx->pc = 0x4993A0u;
    {
        const bool branch_taken_0x4993a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4993A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4993A0u;
        // 0x4993a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4993a0) {
            ctx->pc = 0x4995F4u;
            goto label_4995f4;
        }
    }
    ctx->pc = 0x4993A8u;
    // 0x4993a8: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x4993A8u;
    {
        const bool branch_taken_0x4993a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4993ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4993A8u;
        // 0x4993ac: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4993a8) {
            ctx->pc = 0x499734u;
            goto label_499734;
        }
    }
    ctx->pc = 0x4993B0u;
label_4993b0:
    // 0x4993b0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4993b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4993b4: 0x1082008f  beq         $a0, $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x4993B4u;
    {
        const bool branch_taken_0x4993b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4993B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4993B4u;
        // 0x4993b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4993b4) {
            ctx->pc = 0x4995F4u;
            goto label_4995f4;
        }
    }
    ctx->pc = 0x4993BCu;
    // 0x4993bc: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x4993BCu;
    {
        const bool branch_taken_0x4993bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4993C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4993BCu;
        // 0x4993c0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4993bc) {
            ctx->pc = 0x499734u;
            goto label_499734;
        }
    }
    ctx->pc = 0x4993C4u;
label_4993c4:
    // 0x4993c4: 0xc12638e  jal         func_498E38
    ctx->pc = 0x4993C4u;
    SET_GPR_U32(ctx, 31, 0x4993CCu);
    ctx->pc = 0x4993C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4993C4u;
    // 0x4993c8: 0x7fa80000  sq          $t0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498E38u, 0x4993C4u, 0x4993CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4993CCu;
label_4993cc:
    // 0x4993cc: 0x8f828a58  lw          $v0, -0x75A8($gp)
    ctx->pc = 0x4993ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937176)));
    // 0x4993d0: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x4993d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4993d4: 0x90430023  lbu         $v1, 0x23($v0)
    ctx->pc = 0x4993d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 35)));
    // 0x4993d8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x4993d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x4993dc: 0x30630f00  andi        $v1, $v1, 0xF00
    ctx->pc = 0x4993dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
    // 0x4993e0: 0x14640041  bne         $v1, $a0, . + 4 + (0x41 << 2)
    ctx->pc = 0x4993E0u;
    {
        const bool branch_taken_0x4993e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x4993E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4993E0u;
        // 0x4993e4: 0x7ba80000  lq          $t0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4993e0) {
            ctx->pc = 0x4994E8u;
            goto label_4994e8;
        }
    }
    ctx->pc = 0x4993E8u;
    // 0x4993e8: 0x8fd6000c  lw          $s6, 0xC($fp)
    ctx->pc = 0x4993e8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x4993ec: 0x3117001f  andi        $s7, $t0, 0x1F
    ctx->pc = 0x4993ecu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)31);
    // 0x4993f0: 0x8fd30000  lw          $s3, 0x0($fp)
    ctx->pc = 0x4993f0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4993f4: 0x311403e0  andi        $s4, $t0, 0x3E0
    ctx->pc = 0x4993f4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)992);
    // 0x4993f8: 0x8fd10004  lw          $s1, 0x4($fp)
    ctx->pc = 0x4993f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x4993fc: 0x31127c00  andi        $s2, $t0, 0x7C00
    ctx->pc = 0x4993fcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)31744);
    // 0x499400: 0x8fd50008  lw          $s5, 0x8($fp)
    ctx->pc = 0x499400u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x499404: 0x31108000  andi        $s0, $t0, 0x8000
    ctx->pc = 0x499404u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32768);
    // 0x499408: 0x17b8c0  sll         $s7, $s7, 3
    ctx->pc = 0x499408u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
    // 0x49940c: 0x14a083  sra         $s4, $s4, 2
    ctx->pc = 0x49940cu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 20), 2));
    // 0x499410: 0x1291c3  sra         $s2, $s2, 7
    ctx->pc = 0x499410u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 7));
    // 0x499414: 0x108203  sra         $s0, $s0, 8
    ctx->pc = 0x499414u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 8));
    // 0x499418: 0x275a821  addu        $s5, $s3, $s5
    ctx->pc = 0x499418u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x49941c: 0x236b021  addu        $s6, $s1, $s6
    ctx->pc = 0x49941cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x499420: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x499420u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x499424: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x499424u;
    SET_GPR_U32(ctx, 31, 0x49942Cu);
    ctx->pc = 0x499428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499424u;
    // 0x499428: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x499424u, 0x49942Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49942Cu;
label_49942c:
    // 0x49942c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x49942cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x499430: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x499430u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x499434: 0x34c68004  ori         $a2, $a2, 0x8004
    ctx->pc = 0x499434u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32772);
    // 0x499438: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x499438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x49943c: 0x70461389  pcpyld      $v0, $v0, $a2
    ctx->pc = 0x49943cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x499440: 0x8f83898c  lw          $v1, -0x7674($gp)
    ctx->pc = 0x499440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x499444: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x499444u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x499448: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x499448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x49944c: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x49944cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x499450: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x499450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499454: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x499454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x499458: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x499458u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x49945c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x49945cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x499460: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x499460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x499464: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x499464u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x499468: 0x7ba80000  lq          $t0, 0x0($sp)
    ctx->pc = 0x499468u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49946c: 0x8203c  dsll32      $a0, $t0, 0
    ctx->pc = 0x49946cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) << (32 + 0));
    // 0x499470: 0x118d00  sll         $s1, $s1, 20
    ctx->pc = 0x499470u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 20));
    // 0x499474: 0x139900  sll         $s3, $s3, 4
    ctx->pc = 0x499474u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x499478: 0x2241025  or          $v0, $s1, $a0
    ctx->pc = 0x499478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
    // 0x49947c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x49947cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x499480: 0x2623025  or          $a2, $s3, $v0
    ctx->pc = 0x499480u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x499484: 0x70a61389  pcpyld      $v0, $a1, $a2
    ctx->pc = 0x499484u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x499488: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x499488u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x49948c: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x49948cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x499490: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x499490u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x499494: 0x108600  sll         $s0, $s0, 24
    ctx->pc = 0x499494u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 24));
    // 0x499498: 0x129400  sll         $s2, $s2, 16
    ctx->pc = 0x499498u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x49949c: 0x14a200  sll         $s4, $s4, 8
    ctx->pc = 0x49949cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 8));
    // 0x4994a0: 0x2128025  or          $s0, $s0, $s2
    ctx->pc = 0x4994a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 18));
    // 0x4994a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4994a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4994a8: 0x2148025  or          $s0, $s0, $s4
    ctx->pc = 0x4994a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 20));
    // 0x4994ac: 0x2178025  or          $s0, $s0, $s7
    ctx->pc = 0x4994acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 23));
    // 0x4994b0: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x4994b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x4994b4: 0x10303e  dsrl32      $a2, $s0, 0
    ctx->pc = 0x4994b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x4994b8: 0x70461389  pcpyld      $v0, $v0, $a2
    ctx->pc = 0x4994b8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x4994bc: 0x7c620020  sq          $v0, 0x20($v1)
    ctx->pc = 0x4994bcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 2));
    // 0x4994c0: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x4994c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x4994c4: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4994c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x4994c8: 0x16b500  sll         $s6, $s6, 20
    ctx->pc = 0x4994c8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 22), 20));
    // 0x4994cc: 0x2c42025  or          $a0, $s6, $a0
    ctx->pc = 0x4994ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) | GPR_U64(ctx, 4));
    // 0x4994d0: 0x15a900  sll         $s5, $s5, 4
    ctx->pc = 0x4994d0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x4994d4: 0x2a43025  or          $a2, $s5, $a0
    ctx->pc = 0x4994d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) | GPR_U64(ctx, 4));
    // 0x4994d8: 0x70a61389  pcpyld      $v0, $a1, $a2
    ctx->pc = 0x4994d8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x4994dc: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x4994DCu;
    {
        const bool branch_taken_0x4994dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4994E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4994DCu;
        // 0x4994e0: 0x7c620030  sq          $v0, 0x30($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4994dc) {
            ctx->pc = 0x4995E0u;
            goto label_4995e0;
        }
    }
    ctx->pc = 0x4994E4u;
    // 0x4994e4: 0x0  nop
    ctx->pc = 0x4994e4u;
    // NOP
label_4994e8:
    // 0x4994e8: 0x8fd5000c  lw          $s5, 0xC($fp)
    ctx->pc = 0x4994e8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x4994ec: 0x3113ff00  andi        $s3, $t0, 0xFF00
    ctx->pc = 0x4994ecu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65280);
    // 0x4994f0: 0x8fd10000  lw          $s1, 0x0($fp)
    ctx->pc = 0x4994f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4994f4: 0x89402  srl         $s2, $t0, 16
    ctx->pc = 0x4994f4u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x4994f8: 0x8fd00004  lw          $s0, 0x4($fp)
    ctx->pc = 0x4994f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x4994fc: 0x139a03  sra         $s3, $s3, 8
    ctx->pc = 0x4994fcu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 19), 8));
    // 0x499500: 0x8fd40008  lw          $s4, 0x8($fp)
    ctx->pc = 0x499500u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x499504: 0x325200ff  andi        $s2, $s2, 0xFF
    ctx->pc = 0x499504u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x499508: 0x215a821  addu        $s5, $s0, $s5
    ctx->pc = 0x499508u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x49950c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x49950cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x499510: 0x234a021  addu        $s4, $s1, $s4
    ctx->pc = 0x499510u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x499514: 0x7fa80000  sq          $t0, 0x0($sp)
    ctx->pc = 0x499514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 8));
    // 0x499518: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x499518u;
    SET_GPR_U32(ctx, 31, 0x499520u);
    ctx->pc = 0x49951Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499518u;
    // 0x49951c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x499518u, 0x499520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499520u;
label_499520:
    // 0x499520: 0x7ba80000  lq          $t0, 0x0($sp)
    ctx->pc = 0x499520u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x499524: 0x3c171000  lui         $s7, 0x1000
    ctx->pc = 0x499524u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)4096 << 16));
    // 0x499528: 0x17b83c  dsll32      $s7, $s7, 0
    ctx->pc = 0x499528u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << (32 + 0));
    // 0x49952c: 0x36f78004  ori         $s7, $s7, 0x8004
    ctx->pc = 0x49952cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)32772);
    // 0x499530: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x499530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x499534: 0x310700ff  andi        $a3, $t0, 0xFF
    ctx->pc = 0x499534u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x499538: 0x70571389  pcpyld      $v0, $v0, $s7
    ctx->pc = 0x499538u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 23)));
    // 0x49953c: 0x82602  srl         $a0, $t0, 24
    ctx->pc = 0x49953cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), 24));
    // 0x499540: 0x8f83898c  lw          $v1, -0x7674($gp)
    ctx->pc = 0x499540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x499544: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x499544u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x499548: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x499548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x49954c: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x49954cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x499550: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x499550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499554: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x499554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x499558: 0x70a21389  pcpyld      $v0, $a1, $v0
    ctx->pc = 0x499558u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x49955c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x49955cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x499560: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x499560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x499564: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x499564u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x499568: 0x8283c  dsll32      $a1, $t0, 0
    ctx->pc = 0x499568u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) << (32 + 0));
    // 0x49956c: 0x108500  sll         $s0, $s0, 20
    ctx->pc = 0x49956cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 20));
    // 0x499570: 0x118900  sll         $s1, $s1, 4
    ctx->pc = 0x499570u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x499574: 0x2051025  or          $v0, $s0, $a1
    ctx->pc = 0x499574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 5));
    // 0x499578: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x499578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x49957c: 0x222b825  or          $s7, $s1, $v0
    ctx->pc = 0x49957cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x499580: 0x70d71389  pcpyld      $v0, $a2, $s7
    ctx->pc = 0x499580u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 23)));
    // 0x499584: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x499584u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x499588: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x499588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x49958c: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x49958cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x499590: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x499590u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x499594: 0x129400  sll         $s2, $s2, 16
    ctx->pc = 0x499594u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x499598: 0x139a00  sll         $s3, $s3, 8
    ctx->pc = 0x499598u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 8));
    // 0x49959c: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x49959cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x4995a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4995a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4995a4: 0x932025  or          $a0, $a0, $s3
    ctx->pc = 0x4995a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 19));
    // 0x4995a8: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x4995a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x4995ac: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x4995acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x4995b0: 0x4b83e  dsrl32      $s7, $a0, 0
    ctx->pc = 0x4995b0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x4995b4: 0x70571389  pcpyld      $v0, $v0, $s7
    ctx->pc = 0x4995b4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 23)));
    // 0x4995b8: 0x7c620020  sq          $v0, 0x20($v1)
    ctx->pc = 0x4995b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 2));
    // 0x4995bc: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x4995bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x4995c0: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4995c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x4995c4: 0x15ad00  sll         $s5, $s5, 20
    ctx->pc = 0x4995c4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 20));
    // 0x4995c8: 0x2a52825  or          $a1, $s5, $a1
    ctx->pc = 0x4995c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) | GPR_U64(ctx, 5));
    // 0x4995cc: 0x14a100  sll         $s4, $s4, 4
    ctx->pc = 0x4995ccu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x4995d0: 0x285b825  or          $s7, $s4, $a1
    ctx->pc = 0x4995d0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 20) | GPR_U64(ctx, 5));
    // 0x4995d4: 0x70d71389  pcpyld      $v0, $a2, $s7
    ctx->pc = 0x4995d4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 23)));
    // 0x4995d8: 0x7c620030  sq          $v0, 0x30($v1)
    ctx->pc = 0x4995d8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
    // 0x4995dc: 0x0  nop
    ctx->pc = 0x4995dcu;
    // NOP
label_4995e0:
    // 0x4995e0: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x4995e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x4995e4: 0xc126482  jal         func_499208
    ctx->pc = 0x4995E4u;
    SET_GPR_U32(ctx, 31, 0x4995ECu);
    ctx->pc = 0x4995E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4995E4u;
    // 0x4995e8: 0xaf83898c  sw          $v1, -0x7674($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499208u, 0x4995E4u, 0x4995ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4995ECu;
label_4995ec:
    // 0x4995ec: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x4995ECu;
    {
        const bool branch_taken_0x4995ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4995F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4995ECu;
        // 0x4995f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4995ec) {
            ctx->pc = 0x499730u;
            goto label_499730;
        }
    }
    ctx->pc = 0x4995F4u;
label_4995f4:
    // 0x4995f4: 0x8ca90004  lw          $t1, 0x4($a1)
    ctx->pc = 0x4995f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4995f8: 0x1120004d  beqz        $t1, . + 4 + (0x4D << 2)
    ctx->pc = 0x4995F8u;
    {
        const bool branch_taken_0x4995f8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x4995FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4995F8u;
        // 0x4995fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4995f8) {
            ctx->pc = 0x499730u;
            goto label_499730;
        }
    }
    ctx->pc = 0x499600u;
    // 0x499600: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x499600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x499604: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x499604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x499608: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x499608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x49960c: 0x220c3  sra         $a0, $v0, 3
    ctx->pc = 0x49960cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 3));
    // 0x499610: 0x10830026  beq         $a0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x499610u;
    {
        const bool branch_taken_0x499610 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x499614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499610u;
        // 0x499614: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499610) {
            ctx->pc = 0x4996ACu;
            goto label_4996ac;
        }
    }
    ctx->pc = 0x499618u;
    // 0x499618: 0x14820045  bne         $a0, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x499618u;
    {
        const bool branch_taken_0x499618 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x49961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499618u;
        // 0x49961c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499618) {
            ctx->pc = 0x499730u;
            goto label_499730;
        }
    }
    ctx->pc = 0x499620u;
    // 0x499620: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x499620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x499624: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x499624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x499628: 0x33082  srl         $a2, $v1, 2
    ctx->pc = 0x499628u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x49962c: 0x8fc7000c  lw          $a3, 0xC($fp)
    ctx->pc = 0x49962cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x499630: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x499630u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x499634: 0x8fc40008  lw          $a0, 0x8($fp)
    ctx->pc = 0x499634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x499638: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x499638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49963c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x49963cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x499640: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x499640u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x499644: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x499644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x499648: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x499648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x49964c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x49964cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x499650: 0x10a00036  beqz        $a1, . + 4 + (0x36 << 2)
    ctx->pc = 0x499650u;
    {
        const bool branch_taken_0x499650 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x499654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499650u;
        // 0x499654: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499650) {
            ctx->pc = 0x49972Cu;
            goto label_49972c;
        }
    }
    ctx->pc = 0x499658u;
    // 0x499658: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x499658u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x49965c: 0x0  nop
    ctx->pc = 0x49965cu;
    // NOP
label_499660:
    // 0x499660: 0x8fc40008  lw          $a0, 0x8($fp)
    ctx->pc = 0x499660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x499664: 0x24e5ffff  addiu       $a1, $a3, -0x1
    ctx->pc = 0x499664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x499668: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x499668u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49966c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x49966Cu;
    {
        const bool branch_taken_0x49966c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x499670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49966Cu;
        // 0x499670: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49966c) {
            ctx->pc = 0x499694u;
            goto label_499694;
        }
    }
    ctx->pc = 0x499674u;
    // 0x499674: 0x0  nop
    ctx->pc = 0x499674u;
    // NOP
label_499678:
    // 0x499678: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x499678u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x49967c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x49967cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499680: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x499680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x499684: 0x0  nop
    ctx->pc = 0x499684u;
    // NOP
    // 0x499688: 0x0  nop
    ctx->pc = 0x499688u;
    // NOP
    // 0x49968c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x49968Cu;
    {
        const bool branch_taken_0x49968c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x499690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49968Cu;
        // 0x499690: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49968c) {
            ctx->pc = 0x499678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_499678;
        }
    }
    ctx->pc = 0x499694u;
label_499694:
    // 0x499694: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x499694u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499698: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x499698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x49969c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x49969Cu;
    {
        const bool branch_taken_0x49969c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4996A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49969Cu;
        // 0x4996a0: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49969c) {
            ctx->pc = 0x499660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_499660;
        }
    }
    ctx->pc = 0x4996A4u;
    // 0x4996a4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x4996A4u;
    {
        const bool branch_taken_0x4996a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4996A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4996A4u;
        // 0x4996a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4996a4) {
            ctx->pc = 0x499730u;
            goto label_499730;
        }
    }
    ctx->pc = 0x4996ACu;
label_4996ac:
    // 0x4996ac: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x4996acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x4996b0: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x4996b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x4996b4: 0x33042  srl         $a2, $v1, 1
    ctx->pc = 0x4996b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x4996b8: 0x8fc7000c  lw          $a3, 0xC($fp)
    ctx->pc = 0x4996b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x4996bc: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x4996bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4996c0: 0x8fc40008  lw          $a0, 0x8($fp)
    ctx->pc = 0x4996c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x4996c4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x4996c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4996c8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4996c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4996cc: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x4996ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x4996d0: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x4996d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x4996d4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x4996d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4996d8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4996d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4996dc: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x4996DCu;
    {
        const bool branch_taken_0x4996dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4996E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4996DCu;
        // 0x4996e0: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4996dc) {
            ctx->pc = 0x49972Cu;
            goto label_49972c;
        }
    }
    ctx->pc = 0x4996E4u;
    // 0x4996e4: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x4996e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_4996e8:
    // 0x4996e8: 0x8fc40008  lw          $a0, 0x8($fp)
    ctx->pc = 0x4996e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x4996ec: 0x24e5ffff  addiu       $a1, $a3, -0x1
    ctx->pc = 0x4996ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4996f0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4996f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4996f4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4996F4u;
    {
        const bool branch_taken_0x4996f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4996F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4996F4u;
        // 0x4996f8: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4996f4) {
            ctx->pc = 0x49971Cu;
            goto label_49971c;
        }
    }
    ctx->pc = 0x4996FCu;
    // 0x4996fc: 0x0  nop
    ctx->pc = 0x4996fcu;
    // NOP
label_499700:
    // 0x499700: 0xa4680000  sh          $t0, 0x0($v1)
    ctx->pc = 0x499700u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x499704: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x499704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499708: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x499708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x49970c: 0x0  nop
    ctx->pc = 0x49970cu;
    // NOP
    // 0x499710: 0x0  nop
    ctx->pc = 0x499710u;
    // NOP
    // 0x499714: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x499714u;
    {
        const bool branch_taken_0x499714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x499718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499714u;
        // 0x499718: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499714) {
            ctx->pc = 0x499700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_499700;
        }
    }
    ctx->pc = 0x49971Cu;
label_49971c:
    // 0x49971c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x49971cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499720: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x499720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x499724: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x499724u;
    {
        const bool branch_taken_0x499724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x499728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499724u;
        // 0x499728: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499724) {
            ctx->pc = 0x4996E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4996e8;
        }
    }
    ctx->pc = 0x49972Cu;
label_49972c:
    // 0x49972c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x49972cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_499730:
    // 0x499730: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x499730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_499734:
    // 0x499734: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x499734u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x499738: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x499738u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x49973c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x49973cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x499740: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x499740u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x499744: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x499744u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x499748: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x499748u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x49974c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x49974cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x499750: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x499750u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x499754: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x499754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x499758: 0x3e00008  jr          $ra
    ctx->pc = 0x499758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499758u;
        // 0x49975c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x499758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x499760u;
}
