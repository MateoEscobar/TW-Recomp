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

// Function: sub_00334300
// Address: 0x334300 - 0x334410
void sub_00334300_0x334300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334300_0x334300");
#endif

    switch (ctx->pc) {
        case 0x334334u: goto label_334334;
        case 0x334348u: goto label_334348;
        case 0x33435cu: goto label_33435c;
        case 0x334390u: goto label_334390;
        case 0x33439cu: goto label_33439c;
        case 0x3343b0u: goto label_3343b0;
        case 0x3343e0u: goto label_3343e0;
        default: break;
    }

    ctx->pc = 0x334300u;

    // 0x334300: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x334300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x334304: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x334304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x334308: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x334308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x33430c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x33430cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334310: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x334310u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334314: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x334314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x334318: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x334318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x33431c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x33431cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x334320: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x334320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334324: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x334324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x334328: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x334328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33432c: 0xc0cc7e6  jal         func_331F98
    ctx->pc = 0x33432Cu;
    SET_GPR_U32(ctx, 31, 0x334334u);
    ctx->pc = 0x334330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33432Cu;
    // 0x334330: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331F98u, 0x33432Cu, 0x334334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334334u;
label_334334:
    // 0x334334: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x334334u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334338: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x334338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x33433c: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x33433cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x334340: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x334340u;
    {
        const bool branch_taken_0x334340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x334344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334340u;
        // 0x334344: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334340) {
            ctx->pc = 0x334380u;
            goto label_334380;
        }
    }
    ctx->pc = 0x334348u;
label_334348:
    // 0x334348: 0x26900001  addiu       $s0, $s4, 0x1
    ctx->pc = 0x334348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x33434c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33434cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334350: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x334350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334354: 0xc0cc8c6  jal         func_332318
    ctx->pc = 0x334354u;
    SET_GPR_U32(ctx, 31, 0x33435Cu);
    ctx->pc = 0x334358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334354u;
    // 0x334358: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332318u, 0x334354u, 0x33435Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33435Cu;
label_33435c:
    // 0x33435c: 0xde230000  ld          $v1, 0x0($s1)
    ctx->pc = 0x33435cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x334360: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x334360u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x334364: 0xde240008  ld          $a0, 0x8($s1)
    ctx->pc = 0x334364u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x334368: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x334368u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x33436c: 0xfc440008  sd          $a0, 0x8($v0)
    ctx->pc = 0x33436cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 4));
    // 0x334370: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x334370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x334374: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x334374u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x334378: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x334378u;
    {
        const bool branch_taken_0x334378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334378u;
        // 0x33437c: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334378) {
            ctx->pc = 0x334348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334348;
        }
    }
    ctx->pc = 0x334380u;
label_334380:
    // 0x334380: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x334380u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x334384: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x334384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334388: 0xc0cbf58  jal         func_32FD60
    ctx->pc = 0x334388u;
    SET_GPR_U32(ctx, 31, 0x334390u);
    ctx->pc = 0x33438Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334388u;
    // 0x33438c: 0x24a56868  addiu       $a1, $a1, 0x6868 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FD60u, 0x334388u, 0x334390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334390u;
label_334390:
    // 0x334390: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x334390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334394: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x334394u;
    SET_GPR_U32(ctx, 31, 0x33439Cu);
    ctx->pc = 0x334398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334394u;
    // 0x334398: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x334394u, 0x33439Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33439Cu;
label_33439c:
    // 0x33439c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x33439cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3343a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3343a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3343a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3343a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3343a8: 0xc0cc8da  jal         func_332368
    ctx->pc = 0x3343A8u;
    SET_GPR_U32(ctx, 31, 0x3343B0u);
    ctx->pc = 0x3343ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3343A8u;
    // 0x3343ac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332368u, 0x3343A8u, 0x3343B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3343B0u;
label_3343b0:
    // 0x3343b0: 0xae550000  sw          $s5, 0x0($s2)
    ctx->pc = 0x3343b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 21));
    // 0x3343b4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3343b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3343b8: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x3343b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x3343bc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3343bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3343c0: 0xac730008  sw          $s3, 0x8($v1)
    ctx->pc = 0x3343c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 19));
    // 0x3343c4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3343c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3343c8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3343c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3343cc: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3343CCu;
    {
        const bool branch_taken_0x3343cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3343cc) {
            ctx->pc = 0x3343D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3343CCu;
            // 0x3343d0: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3343E4u;
            goto label_3343e4;
        }
    }
    ctx->pc = 0x3343D4u;
    // 0x3343d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3343d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3343d8: 0xc0ca1dc  jal         func_328770
    ctx->pc = 0x3343D8u;
    SET_GPR_U32(ctx, 31, 0x3343E0u);
    ctx->pc = 0x3343DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3343D8u;
    // 0x3343dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328770u, 0x3343D8u, 0x3343E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3343E0u;
label_3343e0:
    // 0x3343e0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3343e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3343e4:
    // 0x3343e4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3343e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3343e8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3343e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3343ec: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3343ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3343f0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3343f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x3343f4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3343f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3343f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3343f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3343fc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3343fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x334400: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x334400u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x334404: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x334404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x334408: 0x3e00008  jr          $ra
    ctx->pc = 0x334408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334408u;
        // 0x33440c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334410u;
}
