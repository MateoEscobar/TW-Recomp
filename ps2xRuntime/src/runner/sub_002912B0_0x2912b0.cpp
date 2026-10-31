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

// Function: sub_002912B0
// Address: 0x2912b0 - 0x2913c0
void sub_002912B0_0x2912b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002912B0_0x2912b0");
#endif

    switch (ctx->pc) {
        case 0x2912e8u: goto label_2912e8;
        case 0x2912f0u: goto label_2912f0;
        case 0x291310u: goto label_291310;
        case 0x291320u: goto label_291320;
        case 0x291330u: goto label_291330;
        case 0x291368u: goto label_291368;
        case 0x291374u: goto label_291374;
        default: break;
    }

    ctx->pc = 0x2912b0u;

    // 0x2912b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2912b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2912b4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2912b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2912b8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2912b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2912bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2912bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2912c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2912c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2912c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2912c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2912c8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2912c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2912cc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2912ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2912d0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2912d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2912d4: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2912d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x2912d8: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2912D8u;
    {
        const bool branch_taken_0x2912d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2912DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2912D8u;
        // 0x2912dc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2912d8) {
            ctx->pc = 0x291304u;
            goto label_291304;
        }
    }
    ctx->pc = 0x2912E0u;
    // 0x2912e0: 0xc087502  jal         func_21D408
    ctx->pc = 0x2912E0u;
    SET_GPR_U32(ctx, 31, 0x2912E8u);
    ctx->pc = 0x2912E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2912E0u;
    // 0x2912e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2912E0u, 0x2912E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2912E8u;
label_2912e8:
    // 0x2912e8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2912E8u;
    SET_GPR_U32(ctx, 31, 0x2912F0u);
    ctx->pc = 0x2912ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2912E8u;
    // 0x2912ec: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2912E8u, 0x2912F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2912F0u;
label_2912f0:
    // 0x2912f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2912f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2912f4: 0x56200004  bnel        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2912F4u;
    {
        const bool branch_taken_0x2912f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2912f4) {
            ctx->pc = 0x2912F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2912F4u;
            // 0x2912f8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291308u;
            goto label_291308;
        }
    }
    ctx->pc = 0x2912FCu;
    // 0x2912fc: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2912FCu;
    {
        const bool branch_taken_0x2912fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2912FCu;
        // 0x291300: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2912fc) {
            ctx->pc = 0x29139Cu;
            goto label_29139c;
        }
    }
    ctx->pc = 0x291304u;
label_291304:
    // 0x291304: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x291304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_291308:
    // 0x291308: 0xc088aa4  jal         func_222A90
    ctx->pc = 0x291308u;
    SET_GPR_U32(ctx, 31, 0x291310u);
    ctx->pc = 0x29130Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291308u;
    // 0x29130c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x291308u, 0x291310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291310u;
label_291310:
    // 0x291310: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x291310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x291314: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x291314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291318: 0xc088a92  jal         func_222A48
    ctx->pc = 0x291318u;
    SET_GPR_U32(ctx, 31, 0x291320u);
    ctx->pc = 0x29131Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291318u;
    // 0x29131c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A48u, 0x291318u, 0x291320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291320u;
label_291320:
    // 0x291320: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x291320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x291324: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x291324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291328: 0xc088aa4  jal         func_222A90
    ctx->pc = 0x291328u;
    SET_GPR_U32(ctx, 31, 0x291330u);
    ctx->pc = 0x29132Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291328u;
    // 0x29132c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x291328u, 0x291330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291330u;
label_291330:
    // 0x291330: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x291330u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291334: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x291334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x291338: 0x16a20010  bne         $s5, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x291338u;
    {
        const bool branch_taken_0x291338 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x291338) {
            ctx->pc = 0x29137Cu;
            goto label_29137c;
        }
    }
    ctx->pc = 0x291340u;
    // 0x291340: 0x1680000e  bnez        $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x291340u;
    {
        const bool branch_taken_0x291340 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x291340) {
            ctx->pc = 0x29137Cu;
            goto label_29137c;
        }
    }
    ctx->pc = 0x291348u;
    // 0x291348: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x291348u;
    {
        const bool branch_taken_0x291348 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x291348) {
            ctx->pc = 0x29137Cu;
            goto label_29137c;
        }
    }
    ctx->pc = 0x291350u;
    // 0x291350: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x291350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x291354: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x291354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x291358: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x291358u;
    {
        const bool branch_taken_0x291358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291358u;
        // 0x29135c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291358) {
            ctx->pc = 0x291378u;
            goto label_291378;
        }
    }
    ctx->pc = 0x291360u;
    // 0x291360: 0xc087502  jal         func_21D408
    ctx->pc = 0x291360u;
    SET_GPR_U32(ctx, 31, 0x291368u);
    ctx->pc = 0x291364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291360u;
    // 0x291364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x291360u, 0x291368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291368u;
label_291368:
    // 0x291368: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x291368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29136c: 0xc0a40ca  jal         func_290328
    ctx->pc = 0x29136Cu;
    SET_GPR_U32(ctx, 31, 0x291374u);
    ctx->pc = 0x291370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29136Cu;
    // 0x291370: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290328u, 0x29136Cu, 0x291374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291374u;
label_291374:
    // 0x291374: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x291374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_291378:
    // 0x291378: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x291378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29137c:
    // 0x29137c: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29137Cu;
    {
        const bool branch_taken_0x29137c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x291380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29137Cu;
        // 0x291380: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29137c) {
            ctx->pc = 0x29138Cu;
            goto label_29138c;
        }
    }
    ctx->pc = 0x291384u;
    // 0x291384: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x291384u;
    {
        const bool branch_taken_0x291384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291384u;
        // 0x291388: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291384) {
            ctx->pc = 0x291398u;
            goto label_291398;
        }
    }
    ctx->pc = 0x29138Cu;
label_29138c:
    // 0x29138c: 0x3a820001  xori        $v0, $s4, 0x1
    ctx->pc = 0x29138cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)1);
    // 0x291390: 0x15200b  movn        $a0, $zero, $s5
    ctx->pc = 0x291390u;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x291394: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x291394u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_291398:
    // 0x291398: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x291398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29139c:
    // 0x29139c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x29139cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2913a0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2913a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2913a4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2913a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2913a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2913a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2913ac: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2913acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2913b0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2913b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2913b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2913b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2913b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2913B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2913BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2913B8u;
        // 0x2913bc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2913B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2913C0u;
}
