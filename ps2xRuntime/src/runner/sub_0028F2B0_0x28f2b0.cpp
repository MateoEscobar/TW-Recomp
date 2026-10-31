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

// Function: sub_0028F2B0
// Address: 0x28f2b0 - 0x28f6c0
void sub_0028F2B0_0x28f2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F2B0_0x28f2b0");
#endif

    switch (ctx->pc) {
        case 0x28f2e0u: goto label_28f2e0;
        case 0x28f2f4u: goto label_28f2f4;
        case 0x28f314u: goto label_28f314;
        case 0x28f324u: goto label_28f324;
        case 0x28f340u: goto label_28f340;
        case 0x28f350u: goto label_28f350;
        case 0x28f364u: goto label_28f364;
        case 0x28f39cu: goto label_28f39c;
        case 0x28f3b0u: goto label_28f3b0;
        case 0x28f3e8u: goto label_28f3e8;
        case 0x28f3fcu: goto label_28f3fc;
        case 0x28f410u: goto label_28f410;
        case 0x28f420u: goto label_28f420;
        case 0x28f43cu: goto label_28f43c;
        case 0x28f444u: goto label_28f444;
        case 0x28f488u: goto label_28f488;
        case 0x28f4c0u: goto label_28f4c0;
        case 0x28f4d0u: goto label_28f4d0;
        case 0x28f4e4u: goto label_28f4e4;
        case 0x28f4f4u: goto label_28f4f4;
        case 0x28f504u: goto label_28f504;
        case 0x28f518u: goto label_28f518;
        case 0x28f528u: goto label_28f528;
        case 0x28f538u: goto label_28f538;
        case 0x28f54cu: goto label_28f54c;
        case 0x28f55cu: goto label_28f55c;
        case 0x28f56cu: goto label_28f56c;
        case 0x28f57cu: goto label_28f57c;
        case 0x28f590u: goto label_28f590;
        case 0x28f5a0u: goto label_28f5a0;
        case 0x28f5b0u: goto label_28f5b0;
        case 0x28f5c4u: goto label_28f5c4;
        case 0x28f5d4u: goto label_28f5d4;
        case 0x28f5e4u: goto label_28f5e4;
        case 0x28f5f8u: goto label_28f5f8;
        case 0x28f608u: goto label_28f608;
        case 0x28f618u: goto label_28f618;
        case 0x28f62cu: goto label_28f62c;
        case 0x28f63cu: goto label_28f63c;
        case 0x28f64cu: goto label_28f64c;
        case 0x28f660u: goto label_28f660;
        case 0x28f670u: goto label_28f670;
        case 0x28f680u: goto label_28f680;
        case 0x28f694u: goto label_28f694;
        case 0x28f69cu: goto label_28f69c;
        default: break;
    }

    ctx->pc = 0x28f2b0u;

    // 0x28f2b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x28f2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x28f2b4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x28f2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x28f2b8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x28f2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x28f2bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28f2bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f2c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28f2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28f2c4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x28f2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x28f2c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28f2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28f2cc: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x28f2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x28f2d0: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x28F2D0u;
    {
        const bool branch_taken_0x28f2d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f2d0) {
            ctx->pc = 0x28F2D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F2D0u;
            // 0x28f2d4: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F2F8u;
            goto label_28f2f8;
        }
    }
    ctx->pc = 0x28F2D8u;
    // 0x28f2d8: 0xc0a7bb6  jal         func_29EED8
    ctx->pc = 0x28F2D8u;
    SET_GPR_U32(ctx, 31, 0x28F2E0u);
    ctx->pc = 0x29EED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EED8u, 0x28F2D8u, 0x28F2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F2E0u;
label_28f2e0:
    // 0x28f2e0: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x28f2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x28f2e4: 0x144000ee  bnez        $v0, . + 4 + (0xEE << 2)
    ctx->pc = 0x28F2E4u;
    {
        const bool branch_taken_0x28f2e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F2E4u;
        // 0x28f2e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f2e4) {
            ctx->pc = 0x28F6A0u;
            goto label_28f6a0;
        }
    }
    ctx->pc = 0x28F2ECu;
    // 0x28f2ec: 0xc0a3c90  jal         func_28F240
    ctx->pc = 0x28F2ECu;
    SET_GPR_U32(ctx, 31, 0x28F2F4u);
    ctx->pc = 0x28F2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F2ECu;
    // 0x28f2f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F240u, 0x28F2ECu, 0x28F2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F2F4u;
label_28f2f4:
    // 0x28f2f4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x28f2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_28f2f8:
    // 0x28f2f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x28f2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28f2fc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28F2FCu;
    {
        const bool branch_taken_0x28f2fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28F300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F2FCu;
        // 0x28f300: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f2fc) {
            ctx->pc = 0x28F30Cu;
            goto label_28f30c;
        }
    }
    ctx->pc = 0x28F304u;
    // 0x28f304: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x28F304u;
    {
        const bool branch_taken_0x28f304 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28F308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F304u;
        // 0x28f308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f304) {
            ctx->pc = 0x28F35Cu;
            goto label_28f35c;
        }
    }
    ctx->pc = 0x28F30Cu;
label_28f30c:
    // 0x28f30c: 0xc0a40d2  jal         func_290348
    ctx->pc = 0x28F30Cu;
    SET_GPR_U32(ctx, 31, 0x28F314u);
    ctx->pc = 0x28F310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F30Cu;
    // 0x28f310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290348u, 0x28F30Cu, 0x28F314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F314u;
label_28f314:
    // 0x28f314: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x28F314u;
    {
        const bool branch_taken_0x28f314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F314u;
        // 0x28f318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f314) {
            ctx->pc = 0x28F35Cu;
            goto label_28f35c;
        }
    }
    ctx->pc = 0x28F31Cu;
    // 0x28f31c: 0xc089fee  jal         func_227FB8
    ctx->pc = 0x28F31Cu;
    SET_GPR_U32(ctx, 31, 0x28F324u);
    ctx->pc = 0x28F320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F31Cu;
    // 0x28f320: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227FB8u, 0x28F31Cu, 0x28F324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F324u;
label_28f324:
    // 0x28f324: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28F324u;
    {
        const bool branch_taken_0x28f324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F324u;
        // 0x28f328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f324) {
            ctx->pc = 0x28F35Cu;
            goto label_28f35c;
        }
    }
    ctx->pc = 0x28F32Cu;
    // 0x28f32c: 0x920202d7  lbu         $v0, 0x2D7($s0)
    ctx->pc = 0x28f32cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 727)));
    // 0x28f330: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x28F330u;
    {
        const bool branch_taken_0x28f330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f330) {
            ctx->pc = 0x28F35Cu;
            goto label_28f35c;
        }
    }
    ctx->pc = 0x28F338u;
    // 0x28f338: 0xc0a4106  jal         func_290418
    ctx->pc = 0x28F338u;
    SET_GPR_U32(ctx, 31, 0x28F340u);
    ctx->pc = 0x28F33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F338u;
    // 0x28f33c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290418u, 0x28F338u, 0x28F340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F340u;
label_28f340:
    // 0x28f340: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28F340u;
    {
        const bool branch_taken_0x28f340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F340u;
        // 0x28f344: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f340) {
            ctx->pc = 0x28F35Cu;
            goto label_28f35c;
        }
    }
    ctx->pc = 0x28F348u;
    // 0x28f348: 0xc089f98  jal         func_227E60
    ctx->pc = 0x28F348u;
    SET_GPR_U32(ctx, 31, 0x28F350u);
    ctx->pc = 0x28F34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F348u;
    // 0x28f34c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x28F348u, 0x28F350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F350u;
label_28f350:
    // 0x28f350: 0x104000d3  beqz        $v0, . + 4 + (0xD3 << 2)
    ctx->pc = 0x28F350u;
    {
        const bool branch_taken_0x28f350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F350u;
        // 0x28f354: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f350) {
            ctx->pc = 0x28F6A0u;
            goto label_28f6a0;
        }
    }
    ctx->pc = 0x28F358u;
    // 0x28f358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28f358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28f35c:
    // 0x28f35c: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x28F35Cu;
    SET_GPR_U32(ctx, 31, 0x28F364u);
    ctx->pc = 0x28F360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F35Cu;
    // 0x28f360: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x28F35Cu, 0x28F364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F364u;
label_28f364:
    // 0x28f364: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28f364u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f368: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x28f368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28f36c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x28F36Cu;
    {
        const bool branch_taken_0x28f36c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28F370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F36Cu;
        // 0x28f370: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f36c) {
            ctx->pc = 0x28F3A8u;
            goto label_28f3a8;
        }
    }
    ctx->pc = 0x28F374u;
    // 0x28f374: 0x4600007  bltz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x28F374u;
    {
        const bool branch_taken_0x28f374 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x28F378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F374u;
        // 0x28f378: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f374) {
            ctx->pc = 0x28F394u;
            goto label_28f394;
        }
    }
    ctx->pc = 0x28F37Cu;
    // 0x28f37c: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x28f37cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x28f380: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x28f380u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28f384: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28F384u;
    {
        const bool branch_taken_0x28f384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F384u;
        // 0x28f388: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f384) {
            ctx->pc = 0x28F394u;
            goto label_28f394;
        }
    }
    ctx->pc = 0x28F38Cu;
    // 0x28f38c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x28f38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x28f390: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x28f390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_28f394:
    // 0x28f394: 0xc0aedca  jal         func_2BB728
    ctx->pc = 0x28F394u;
    SET_GPR_U32(ctx, 31, 0x28F39Cu);
    ctx->pc = 0x2BB728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB728u, 0x28F394u, 0x28F39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F39Cu;
label_28f39c:
    // 0x28f39c: 0x104000c0  beqz        $v0, . + 4 + (0xC0 << 2)
    ctx->pc = 0x28F39Cu;
    {
        const bool branch_taken_0x28f39c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F39Cu;
        // 0x28f3a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f39c) {
            ctx->pc = 0x28F6A0u;
            goto label_28f6a0;
        }
    }
    ctx->pc = 0x28F3A4u;
    // 0x28f3a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28f3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28f3a8:
    // 0x28f3a8: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x28F3A8u;
    SET_GPR_U32(ctx, 31, 0x28F3B0u);
    ctx->pc = 0x28F3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F3A8u;
    // 0x28f3ac: 0x24050092  addiu       $a1, $zero, 0x92 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x28F3A8u, 0x28F3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F3B0u;
label_28f3b0:
    // 0x28f3b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28f3b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f3b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x28f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28f3b8: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x28F3B8u;
    {
        const bool branch_taken_0x28f3b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28F3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F3B8u;
        // 0x28f3bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f3b8) {
            ctx->pc = 0x28F3F4u;
            goto label_28f3f4;
        }
    }
    ctx->pc = 0x28F3C0u;
    // 0x28f3c0: 0x4600007  bltz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x28F3C0u;
    {
        const bool branch_taken_0x28f3c0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x28F3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F3C0u;
        // 0x28f3c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f3c0) {
            ctx->pc = 0x28F3E0u;
            goto label_28f3e0;
        }
    }
    ctx->pc = 0x28F3C8u;
    // 0x28f3c8: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x28f3c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x28f3cc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x28f3ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28f3d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28F3D0u;
    {
        const bool branch_taken_0x28f3d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F3D0u;
        // 0x28f3d4: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f3d0) {
            ctx->pc = 0x28F3E0u;
            goto label_28f3e0;
        }
    }
    ctx->pc = 0x28F3D8u;
    // 0x28f3d8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x28f3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x28f3dc: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x28f3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_28f3e0:
    // 0x28f3e0: 0xc0bd8c6  jal         func_2F6318
    ctx->pc = 0x28F3E0u;
    SET_GPR_U32(ctx, 31, 0x28F3E8u);
    ctx->pc = 0x2F6318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6318u, 0x28F3E0u, 0x28F3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F3E8u;
label_28f3e8:
    // 0x28f3e8: 0x104000ad  beqz        $v0, . + 4 + (0xAD << 2)
    ctx->pc = 0x28F3E8u;
    {
        const bool branch_taken_0x28f3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F3E8u;
        // 0x28f3ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f3e8) {
            ctx->pc = 0x28F6A0u;
            goto label_28f6a0;
        }
    }
    ctx->pc = 0x28F3F0u;
    // 0x28f3f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28f3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28f3f4:
    // 0x28f3f4: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x28F3F4u;
    SET_GPR_U32(ctx, 31, 0x28F3FCu);
    ctx->pc = 0x28F3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F3F4u;
    // 0x28f3f8: 0x24050089  addiu       $a1, $zero, 0x89 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x28F3F4u, 0x28F3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F3FCu;
label_28f3fc:
    // 0x28f3fc: 0x44100a8  bgez        $v0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x28F3FCu;
    {
        const bool branch_taken_0x28f3fc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x28F400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F3FCu;
        // 0x28f400: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f3fc) {
            ctx->pc = 0x28F6A0u;
            goto label_28f6a0;
        }
    }
    ctx->pc = 0x28F404u;
    // 0x28f404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28f404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f408: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x28F408u;
    SET_GPR_U32(ctx, 31, 0x28F410u);
    ctx->pc = 0x28F40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F408u;
    // 0x28f40c: 0x2405004f  addiu       $a1, $zero, 0x4F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x28F408u, 0x28F410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F410u;
label_28f410:
    // 0x28f410: 0x440000e  bltz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x28F410u;
    {
        const bool branch_taken_0x28f410 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28F414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F410u;
        // 0x28f414: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f410) {
            ctx->pc = 0x28F44Cu;
            goto label_28f44c;
        }
    }
    ctx->pc = 0x28F418u;
    // 0x28f418: 0xc0a40d2  jal         func_290348
    ctx->pc = 0x28F418u;
    SET_GPR_U32(ctx, 31, 0x28F420u);
    ctx->pc = 0x28F41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F418u;
    // 0x28f41c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290348u, 0x28F418u, 0x28F420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F420u;
label_28f420:
    // 0x28f420: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x28F420u;
    {
        const bool branch_taken_0x28f420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F420u;
        // 0x28f424: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f420) {
            ctx->pc = 0x28F44Cu;
            goto label_28f44c;
        }
    }
    ctx->pc = 0x28F428u;
    // 0x28f428: 0x920202d7  lbu         $v0, 0x2D7($s0)
    ctx->pc = 0x28f428u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 727)));
    // 0x28f42c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28F42Cu;
    {
        const bool branch_taken_0x28f42c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F42Cu;
        // 0x28f430: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f42c) {
            ctx->pc = 0x28F44Cu;
            goto label_28f44c;
        }
    }
    ctx->pc = 0x28F434u;
    // 0x28f434: 0xc0a4106  jal         func_290418
    ctx->pc = 0x28F434u;
    SET_GPR_U32(ctx, 31, 0x28F43Cu);
    ctx->pc = 0x28F438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F434u;
    // 0x28f438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290418u, 0x28F434u, 0x28F43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F43Cu;
label_28f43c:
    // 0x28f43c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28F43Cu;
    {
        const bool branch_taken_0x28f43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F43Cu;
        // 0x28f440: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f43c) {
            ctx->pc = 0x28F44Cu;
            goto label_28f44c;
        }
    }
    ctx->pc = 0x28F444u;
label_28f444:
    // 0x28f444: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x28F444u;
    {
        const bool branch_taken_0x28f444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F444u;
        // 0x28f448: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f444) {
            ctx->pc = 0x28F6A0u;
            goto label_28f6a0;
        }
    }
    ctx->pc = 0x28F44Cu;
label_28f44c:
    // 0x28f44c: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x28f44cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28f450: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x28f450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x28f454: 0x8c640158  lw          $a0, 0x158($v1)
    ctx->pc = 0x28f454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 344)));
    // 0x28f458: 0x14800016  bnez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x28F458u;
    {
        const bool branch_taken_0x28f458 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F458u;
        // 0x28f45c: 0x2c930001  sltiu       $s3, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f458) {
            ctx->pc = 0x28F4B4u;
            goto label_28f4b4;
        }
    }
    ctx->pc = 0x28F460u;
    // 0x28f460: 0x8e5100cc  lw          $s1, 0xCC($s2)
    ctx->pc = 0x28f460u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
    // 0x28f464: 0x2622ff89  addiu       $v0, $s1, -0x77
    ctx->pc = 0x28f464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967177));
    // 0x28f468: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x28f468u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x28f46c: 0x1440008c  bnez        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x28F46Cu;
    {
        const bool branch_taken_0x28f46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F46Cu;
        // 0x28f470: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f46c) {
            ctx->pc = 0x28F6A0u;
            goto label_28f6a0;
        }
    }
    ctx->pc = 0x28F474u;
    // 0x28f474: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x28f474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x28f478: 0x12220089  beq         $s1, $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x28F478u;
    {
        const bool branch_taken_0x28f478 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x28F47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F478u;
        // 0x28f47c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f478) {
            ctx->pc = 0x28F6A0u;
            goto label_28f6a0;
        }
    }
    ctx->pc = 0x28F480u;
    // 0x28f480: 0xc088ef0  jal         func_223BC0
    ctx->pc = 0x28F480u;
    SET_GPR_U32(ctx, 31, 0x28F488u);
    ctx->pc = 0x28F484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F480u;
    // 0x28f484: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223BC0u, 0x28F480u, 0x28F488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F488u;
label_28f488:
    // 0x28f488: 0x5453000b  bnel        $v0, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x28F488u;
    {
        const bool branch_taken_0x28f488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x28f488) {
            ctx->pc = 0x28F48Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F488u;
            // 0x28f48c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F4B8u;
            goto label_28f4b8;
        }
    }
    ctx->pc = 0x28F490u;
    // 0x28f490: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x28f490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x28f494: 0x1222ffeb  beq         $s1, $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x28F494u;
    {
        const bool branch_taken_0x28f494 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x28F498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F494u;
        // 0x28f498: 0x240200b2  addiu       $v0, $zero, 0xB2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f494) {
            ctx->pc = 0x28F444u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28f444;
        }
    }
    ctx->pc = 0x28F49Cu;
    // 0x28f49c: 0x1222ffe9  beq         $s1, $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x28F49Cu;
    {
        const bool branch_taken_0x28f49c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x28F4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F49Cu;
        // 0x28f4a0: 0x24020087  addiu       $v0, $zero, 0x87 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f49c) {
            ctx->pc = 0x28F444u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28f444;
        }
    }
    ctx->pc = 0x28F4A4u;
    // 0x28f4a4: 0x1222ffe7  beq         $s1, $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x28F4A4u;
    {
        const bool branch_taken_0x28f4a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x28F4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F4A4u;
        // 0x28f4a8: 0x24020062  addiu       $v0, $zero, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f4a4) {
            ctx->pc = 0x28F444u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28f444;
        }
    }
    ctx->pc = 0x28F4ACu;
    // 0x28f4ac: 0x1222007c  beq         $s1, $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x28F4ACu;
    {
        const bool branch_taken_0x28f4ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x28F4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F4ACu;
        // 0x28f4b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f4ac) {
            ctx->pc = 0x28F6A0u;
            goto label_28f6a0;
        }
    }
    ctx->pc = 0x28F4B4u;
label_28f4b4:
    // 0x28f4b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28f4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28f4b8:
    // 0x28f4b8: 0xc088edc  jal         func_223B70
    ctx->pc = 0x28F4B8u;
    SET_GPR_U32(ctx, 31, 0x28F4C0u);
    ctx->pc = 0x28F4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F4B8u;
    // 0x28f4bc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x28F4B8u, 0x28F4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F4C0u;
label_28f4c0:
    // 0x28f4c0: 0x1451000a  bne         $v0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x28F4C0u;
    {
        const bool branch_taken_0x28f4c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x28f4c0) {
            ctx->pc = 0x28F4ECu;
            goto label_28f4ec;
        }
    }
    ctx->pc = 0x28F4C8u;
    // 0x28f4c8: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x28F4C8u;
    SET_GPR_U32(ctx, 31, 0x28F4D0u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x28F4C8u, 0x28F4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F4D0u;
label_28f4d0:
    // 0x28f4d0: 0x10400070  beqz        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x28F4D0u;
    {
        const bool branch_taken_0x28f4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F4D0u;
        // 0x28f4d4: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f4d0) {
            ctx->pc = 0x28F694u;
            goto label_28f694;
        }
    }
    ctx->pc = 0x28F4D8u;
    // 0x28f4d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28f4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f4dc: 0xc0adb70  jal         func_2B6DC0
    ctx->pc = 0x28F4DCu;
    SET_GPR_U32(ctx, 31, 0x28F4E4u);
    ctx->pc = 0x28F4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F4DCu;
    // 0x28f4e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6DC0u, 0x28F4DCu, 0x28F4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F4E4u;
label_28f4e4:
    // 0x28f4e4: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x28F4E4u;
    {
        const bool branch_taken_0x28f4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f4e4) {
            ctx->pc = 0x28F694u;
            goto label_28f694;
        }
    }
    ctx->pc = 0x28F4ECu;
label_28f4ec:
    // 0x28f4ec: 0xc088e60  jal         func_223980
    ctx->pc = 0x28F4ECu;
    SET_GPR_U32(ctx, 31, 0x28F4F4u);
    ctx->pc = 0x28F4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F4ECu;
    // 0x28f4f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223980u, 0x28F4ECu, 0x28F4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F4F4u;
label_28f4f4:
    // 0x28f4f4: 0x1451000a  bne         $v0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x28F4F4u;
    {
        const bool branch_taken_0x28f4f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x28f4f4) {
            ctx->pc = 0x28F520u;
            goto label_28f520;
        }
    }
    ctx->pc = 0x28F4FCu;
    // 0x28f4fc: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x28F4FCu;
    SET_GPR_U32(ctx, 31, 0x28F504u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x28F4FCu, 0x28F504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F504u;
label_28f504:
    // 0x28f504: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x28F504u;
    {
        const bool branch_taken_0x28f504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F504u;
        // 0x28f508: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f504) {
            ctx->pc = 0x28F694u;
            goto label_28f694;
        }
    }
    ctx->pc = 0x28F50Cu;
    // 0x28f50c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28f50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f510: 0xc0ad6a6  jal         func_2B5A98
    ctx->pc = 0x28F510u;
    SET_GPR_U32(ctx, 31, 0x28F518u);
    ctx->pc = 0x28F514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F510u;
    // 0x28f514: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5A98u, 0x28F510u, 0x28F518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F518u;
label_28f518:
    // 0x28f518: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x28F518u;
    {
        const bool branch_taken_0x28f518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f518) {
            ctx->pc = 0x28F694u;
            goto label_28f694;
        }
    }
    ctx->pc = 0x28F520u;
label_28f520:
    // 0x28f520: 0xc088e40  jal         func_223900
    ctx->pc = 0x28F520u;
    SET_GPR_U32(ctx, 31, 0x28F528u);
    ctx->pc = 0x28F524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F520u;
    // 0x28f524: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223900u, 0x28F520u, 0x28F528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F528u;
label_28f528:
    // 0x28f528: 0x1451000a  bne         $v0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x28F528u;
    {
        const bool branch_taken_0x28f528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x28f528) {
            ctx->pc = 0x28F554u;
            goto label_28f554;
        }
    }
    ctx->pc = 0x28F530u;
    // 0x28f530: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x28F530u;
    SET_GPR_U32(ctx, 31, 0x28F538u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x28F530u, 0x28F538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F538u;
label_28f538:
    // 0x28f538: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x28F538u;
    {
        const bool branch_taken_0x28f538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F538u;
        // 0x28f53c: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f538) {
            ctx->pc = 0x28F694u;
            goto label_28f694;
        }
    }
    ctx->pc = 0x28F540u;
    // 0x28f540: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28f540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f544: 0xc0ad97e  jal         func_2B65F8
    ctx->pc = 0x28F544u;
    SET_GPR_U32(ctx, 31, 0x28F54Cu);
    ctx->pc = 0x28F548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F544u;
    // 0x28f548: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B65F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B65F8u, 0x28F544u, 0x28F54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F54Cu;
label_28f54c:
    // 0x28f54c: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x28F54Cu;
    {
        const bool branch_taken_0x28f54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f54c) {
            ctx->pc = 0x28F694u;
            goto label_28f694;
        }
    }
    ctx->pc = 0x28F554u;
label_28f554:
    // 0x28f554: 0xc088e48  jal         func_223920
    ctx->pc = 0x28F554u;
    SET_GPR_U32(ctx, 31, 0x28F55Cu);
    ctx->pc = 0x28F558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F554u;
    // 0x28f558: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223920u, 0x28F554u, 0x28F55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F55Cu;
label_28f55c:
    // 0x28f55c: 0x10510005  beq         $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28F55Cu;
    {
        const bool branch_taken_0x28f55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x28f55c) {
            ctx->pc = 0x28F574u;
            goto label_28f574;
        }
    }
    ctx->pc = 0x28F564u;
    // 0x28f564: 0xc08a024  jal         func_228090
    ctx->pc = 0x28F564u;
    SET_GPR_U32(ctx, 31, 0x28F56Cu);
    ctx->pc = 0x28F568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F564u;
    // 0x28f568: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228090u, 0x28F564u, 0x28F56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F56Cu;
label_28f56c:
    // 0x28f56c: 0x1451000a  bne         $v0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x28F56Cu;
    {
        const bool branch_taken_0x28f56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x28f56c) {
            ctx->pc = 0x28F598u;
            goto label_28f598;
        }
    }
    ctx->pc = 0x28F574u;
label_28f574:
    // 0x28f574: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x28F574u;
    SET_GPR_U32(ctx, 31, 0x28F57Cu);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x28F574u, 0x28F57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F57Cu;
label_28f57c:
    // 0x28f57c: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x28F57Cu;
    {
        const bool branch_taken_0x28f57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F57Cu;
        // 0x28f580: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f57c) {
            ctx->pc = 0x28F694u;
            goto label_28f694;
        }
    }
    ctx->pc = 0x28F584u;
    // 0x28f584: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28f584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f588: 0xc0ada06  jal         func_2B6818
    ctx->pc = 0x28F588u;
    SET_GPR_U32(ctx, 31, 0x28F590u);
    ctx->pc = 0x28F58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F588u;
    // 0x28f58c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6818u, 0x28F588u, 0x28F590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F590u;
label_28f590:
    // 0x28f590: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x28F590u;
    {
        const bool branch_taken_0x28f590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f590) {
            ctx->pc = 0x28F694u;
            goto label_28f694;
        }
    }
    ctx->pc = 0x28F598u;
label_28f598:
    // 0x28f598: 0xc088e38  jal         func_2238E0
    ctx->pc = 0x28F598u;
    SET_GPR_U32(ctx, 31, 0x28F5A0u);
    ctx->pc = 0x28F59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F598u;
    // 0x28f59c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238E0u, 0x28F598u, 0x28F5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F5A0u;
label_28f5a0:
    // 0x28f5a0: 0x1451000a  bne         $v0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x28F5A0u;
    {
        const bool branch_taken_0x28f5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x28f5a0) {
            ctx->pc = 0x28F5CCu;
            goto label_28f5cc;
        }
    }
    ctx->pc = 0x28F5A8u;
    // 0x28f5a8: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x28F5A8u;
    SET_GPR_U32(ctx, 31, 0x28F5B0u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x28F5A8u, 0x28F5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F5B0u;
label_28f5b0:
    // 0x28f5b0: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x28F5B0u;
    {
        const bool branch_taken_0x28f5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F5B0u;
        // 0x28f5b4: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f5b0) {
            ctx->pc = 0x28F694u;
            goto label_28f694;
        }
    }
    ctx->pc = 0x28F5B8u;
    // 0x28f5b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28f5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f5bc: 0xc0adae2  jal         func_2B6B88
    ctx->pc = 0x28F5BCu;
    SET_GPR_U32(ctx, 31, 0x28F5C4u);
    ctx->pc = 0x28F5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F5BCu;
    // 0x28f5c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6B88u, 0x28F5BCu, 0x28F5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F5C4u;
label_28f5c4:
    // 0x28f5c4: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x28F5C4u;
    {
        const bool branch_taken_0x28f5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f5c4) {
            ctx->pc = 0x28F694u;
            goto label_28f694;
        }
    }
    ctx->pc = 0x28F5CCu;
label_28f5cc:
    // 0x28f5cc: 0xc088ee6  jal         func_223B98
    ctx->pc = 0x28F5CCu;
    SET_GPR_U32(ctx, 31, 0x28F5D4u);
    ctx->pc = 0x28F5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F5CCu;
    // 0x28f5d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x28F5CCu, 0x28F5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F5D4u;
label_28f5d4:
    // 0x28f5d4: 0x1451000a  bne         $v0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x28F5D4u;
    {
        const bool branch_taken_0x28f5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x28f5d4) {
            ctx->pc = 0x28F600u;
            goto label_28f600;
        }
    }
    ctx->pc = 0x28F5DCu;
    // 0x28f5dc: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x28F5DCu;
    SET_GPR_U32(ctx, 31, 0x28F5E4u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x28F5DCu, 0x28F5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F5E4u;
label_28f5e4:
    // 0x28f5e4: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x28F5E4u;
    {
        const bool branch_taken_0x28f5e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F5E4u;
        // 0x28f5e8: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f5e4) {
            ctx->pc = 0x28F694u;
            goto label_28f694;
        }
    }
    ctx->pc = 0x28F5ECu;
    // 0x28f5ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28f5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f5f0: 0xc0ad27e  jal         func_2B49F8
    ctx->pc = 0x28F5F0u;
    SET_GPR_U32(ctx, 31, 0x28F5F8u);
    ctx->pc = 0x28F5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F5F0u;
    // 0x28f5f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B49F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B49F8u, 0x28F5F0u, 0x28F5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F5F8u;
label_28f5f8:
    // 0x28f5f8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x28F5F8u;
    {
        const bool branch_taken_0x28f5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f5f8) {
            ctx->pc = 0x28F694u;
            goto label_28f694;
        }
    }
    ctx->pc = 0x28F600u;
label_28f600:
    // 0x28f600: 0xc088ef0  jal         func_223BC0
    ctx->pc = 0x28F600u;
    SET_GPR_U32(ctx, 31, 0x28F608u);
    ctx->pc = 0x28F604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F600u;
    // 0x28f604: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223BC0u, 0x28F600u, 0x28F608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F608u;
label_28f608:
    // 0x28f608: 0x1451000a  bne         $v0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x28F608u;
    {
        const bool branch_taken_0x28f608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x28f608) {
            ctx->pc = 0x28F634u;
            goto label_28f634;
        }
    }
    ctx->pc = 0x28F610u;
    // 0x28f610: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x28F610u;
    SET_GPR_U32(ctx, 31, 0x28F618u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x28F610u, 0x28F618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F618u;
label_28f618:
    // 0x28f618: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x28F618u;
    {
        const bool branch_taken_0x28f618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F618u;
        // 0x28f61c: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f618) {
            ctx->pc = 0x28F694u;
            goto label_28f694;
        }
    }
    ctx->pc = 0x28F620u;
    // 0x28f620: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28f620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f624: 0xc0ad2e2  jal         func_2B4B88
    ctx->pc = 0x28F624u;
    SET_GPR_U32(ctx, 31, 0x28F62Cu);
    ctx->pc = 0x28F628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F624u;
    // 0x28f628: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B88u, 0x28F624u, 0x28F62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F62Cu;
label_28f62c:
    // 0x28f62c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x28F62Cu;
    {
        const bool branch_taken_0x28f62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f62c) {
            ctx->pc = 0x28F694u;
            goto label_28f694;
        }
    }
    ctx->pc = 0x28F634u;
label_28f634:
    // 0x28f634: 0xc089fee  jal         func_227FB8
    ctx->pc = 0x28F634u;
    SET_GPR_U32(ctx, 31, 0x28F63Cu);
    ctx->pc = 0x28F638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F634u;
    // 0x28f638: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227FB8u, 0x28F634u, 0x28F63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F63Cu;
label_28f63c:
    // 0x28f63c: 0x1451000a  bne         $v0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x28F63Cu;
    {
        const bool branch_taken_0x28f63c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x28f63c) {
            ctx->pc = 0x28F668u;
            goto label_28f668;
        }
    }
    ctx->pc = 0x28F644u;
    // 0x28f644: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x28F644u;
    SET_GPR_U32(ctx, 31, 0x28F64Cu);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x28F644u, 0x28F64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F64Cu;
label_28f64c:
    // 0x28f64c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x28F64Cu;
    {
        const bool branch_taken_0x28f64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F64Cu;
        // 0x28f650: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f64c) {
            ctx->pc = 0x28F694u;
            goto label_28f694;
        }
    }
    ctx->pc = 0x28F654u;
    // 0x28f654: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28f654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f658: 0xc0ad300  jal         func_2B4C00
    ctx->pc = 0x28F658u;
    SET_GPR_U32(ctx, 31, 0x28F660u);
    ctx->pc = 0x28F65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F658u;
    // 0x28f65c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4C00u, 0x28F658u, 0x28F660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F660u;
label_28f660:
    // 0x28f660: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x28F660u;
    {
        const bool branch_taken_0x28f660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f660) {
            ctx->pc = 0x28F694u;
            goto label_28f694;
        }
    }
    ctx->pc = 0x28F668u;
label_28f668:
    // 0x28f668: 0xc089f66  jal         func_227D98
    ctx->pc = 0x28F668u;
    SET_GPR_U32(ctx, 31, 0x28F670u);
    ctx->pc = 0x28F66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F668u;
    // 0x28f66c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D98u, 0x28F668u, 0x28F670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F670u;
label_28f670:
    // 0x28f670: 0x1451000b  bne         $v0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x28F670u;
    {
        const bool branch_taken_0x28f670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x28F674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F670u;
        // 0x28f674: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f670) {
            ctx->pc = 0x28F6A0u;
            goto label_28f6a0;
        }
    }
    ctx->pc = 0x28F678u;
    // 0x28f678: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x28F678u;
    SET_GPR_U32(ctx, 31, 0x28F680u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x28F678u, 0x28F680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F680u;
label_28f680:
    // 0x28f680: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F680u;
    {
        const bool branch_taken_0x28f680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F680u;
        // 0x28f684: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f680) {
            ctx->pc = 0x28F694u;
            goto label_28f694;
        }
    }
    ctx->pc = 0x28F688u;
    // 0x28f688: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28f688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f68c: 0xc0ad444  jal         func_2B5110
    ctx->pc = 0x28F68Cu;
    SET_GPR_U32(ctx, 31, 0x28F694u);
    ctx->pc = 0x28F690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F68Cu;
    // 0x28f690: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5110u, 0x28F68Cu, 0x28F694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F694u;
label_28f694:
    // 0x28f694: 0xc0a3c7a  jal         func_28F1E8
    ctx->pc = 0x28F694u;
    SET_GPR_U32(ctx, 31, 0x28F69Cu);
    ctx->pc = 0x28F698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F694u;
    // 0x28f698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F1E8u, 0x28F694u, 0x28F69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F69Cu;
label_28f69c:
    // 0x28f69c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28f69cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f6a0:
    // 0x28f6a0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x28f6a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28f6a4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x28f6a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28f6a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28f6a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28f6ac: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x28f6acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f6b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x28F6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F6B4u;
        // 0x28f6b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F6B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F6BCu;
    // 0x28f6bc: 0x0  nop
    ctx->pc = 0x28f6bcu;
    // NOP
    ctx->pc = 0x28f6c0u;
}
