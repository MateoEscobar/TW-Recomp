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

// Function: sub_001A94E8
// Address: 0x1a94e8 - 0x1a9600
void sub_001A94E8_0x1a94e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A94E8_0x1a94e8");
#endif

    switch (ctx->pc) {
        case 0x1a9520u: goto label_1a9520;
        case 0x1a9528u: goto label_1a9528;
        case 0x1a953cu: goto label_1a953c;
        case 0x1a9560u: goto label_1a9560;
        case 0x1a9570u: goto label_1a9570;
        case 0x1a95a0u: goto label_1a95a0;
        case 0x1a95c0u: goto label_1a95c0;
        case 0x1a95d4u: goto label_1a95d4;
        default: break;
    }

    ctx->pc = 0x1a94e8u;

    // 0x1a94e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a94e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a94ec: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1a94ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1a94f0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1a94f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1a94f4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1a94f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a94f8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1a94f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1a94fc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a94fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1a9500: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1a9500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1a9504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a9508: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x1a9508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1a950c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1A950Cu;
    {
        const bool branch_taken_0x1a950c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A950Cu;
        // 0x1a9510: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a950c) {
            ctx->pc = 0x1A95E0u;
            goto label_1a95e0;
        }
    }
    ctx->pc = 0x1A9514u;
    // 0x1a9514: 0x3c130055  lui         $s3, 0x55
    ctx->pc = 0x1a9514u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)85 << 16));
    // 0x1a9518: 0x26900048  addiu       $s0, $s4, 0x48
    ctx->pc = 0x1a9518u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
    // 0x1a951c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a951cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a9520:
    // 0x1a9520: 0xc073462  jal         func_1CD188
    ctx->pc = 0x1A9520u;
    SET_GPR_U32(ctx, 31, 0x1A9528u);
    ctx->pc = 0x1A9524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9520u;
    // 0x1a9524: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x1A9520u, 0x1A9528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9528u;
label_1a9528:
    // 0x1a9528: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a9528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a952c: 0x266540b8  addiu       $a1, $s3, 0x40B8
    ctx->pc = 0x1a952cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16568));
    // 0x1a9530: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x1a9530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1a9534: 0xc139138  jal         func_4E44E0
    ctx->pc = 0x1A9534u;
    SET_GPR_U32(ctx, 31, 0x1A953Cu);
    ctx->pc = 0x1A9538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9534u;
    // 0x1a9538: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E44E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E44E0u, 0x1A9534u, 0x1A953Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A953Cu;
label_1a953c:
    // 0x1a953c: 0x2e220046  sltiu       $v0, $s1, 0x46
    ctx->pc = 0x1a953cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)70) ? 1 : 0);
    // 0x1a9540: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1A9540u;
    {
        const bool branch_taken_0x1a9540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9540) {
            ctx->pc = 0x1A9544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9540u;
            // 0x1a9544: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9520;
        }
    }
    ctx->pc = 0x1A9548u;
    // 0x1a9548: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x1a9548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x1a954c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1a954cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a9550: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x1a9550u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a9554: 0x5203000b  beql        $s0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1A9554u;
    {
        const bool branch_taken_0x1a9554 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a9554) {
            ctx->pc = 0x1A9558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9554u;
            // 0x1a9558: 0x8e910040  lw          $s1, 0x40($s4) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9584u;
            goto label_1a9584;
        }
    }
    ctx->pc = 0x1A955Cu;
    // 0x1a955c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a955cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a9560:
    // 0x1a9560: 0x266540b8  addiu       $a1, $s3, 0x40B8
    ctx->pc = 0x1a9560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16568));
    // 0x1a9564: 0x240600c5  addiu       $a2, $zero, 0xC5
    ctx->pc = 0x1a9564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 197));
    // 0x1a9568: 0xc139158  jal         func_4E4560
    ctx->pc = 0x1A9568u;
    SET_GPR_U32(ctx, 31, 0x1A9570u);
    ctx->pc = 0x1A956Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9568u;
    // 0x1a956c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E4560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E4560u, 0x1A9568u, 0x1A9570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9570u;
label_1a9570:
    // 0x1a9570: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x1a9570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x1a9574: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1a9574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a9578: 0x5603fff9  bnel        $s0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A9578u;
    {
        const bool branch_taken_0x1a9578 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a9578) {
            ctx->pc = 0x1A957Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9578u;
            // 0x1a957c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9560;
        }
    }
    ctx->pc = 0x1A9580u;
    // 0x1a9580: 0x8e910040  lw          $s1, 0x40($s4)
    ctx->pc = 0x1a9580u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_1a9584:
    // 0x1a9584: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a9584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9588: 0x267340b8  addiu       $s3, $s3, 0x40B8
    ctx->pc = 0x1a9588u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16568));
    // 0x1a958c: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x1a958cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a9590: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x1a9590u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a9594: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a9594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9598: 0xc10c1bb  jal         func_4306EC
    ctx->pc = 0x1A9598u;
    SET_GPR_U32(ctx, 31, 0x1A95A0u);
    ctx->pc = 0x1A959Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9598u;
    // 0x1a959c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x1A9598u, 0x1A95A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A95A0u;
label_1a95a0:
    // 0x1a95a0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1a95a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a95a4: 0x2128023  subu        $s0, $s0, $s2
    ctx->pc = 0x1a95a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1a95a8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a95a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a95ac: 0x240600c8  addiu       $a2, $zero, 0xC8
    ctx->pc = 0x1a95acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1a95b0: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1a95b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a95b4: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1a95b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1a95b8: 0xc13916a  jal         func_4E45A8
    ctx->pc = 0x1A95B8u;
    SET_GPR_U32(ctx, 31, 0x1A95C0u);
    ctx->pc = 0x1A95BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A95B8u;
    // 0x1a95bc: 0x8e840040  lw          $a0, 0x40($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E45A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E45A8u, 0x1A95B8u, 0x1A95C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A95C0u;
label_1a95c0:
    // 0x1a95c0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a95c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1a95c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a95c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a95c8: 0x8c44d33c  lw          $a0, -0x2CC4($v0)
    ctx->pc = 0x1a95c8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50D33Cu));
    // 0x1a95cc: 0xc139190  jal         func_4E4640
    ctx->pc = 0x1A95CCu;
    SET_GPR_U32(ctx, 31, 0x1A95D4u);
    ctx->pc = 0x1A95D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A95CCu;
    // 0x1a95d0: 0x240600ca  addiu       $a2, $zero, 0xCA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E4640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E4640u, 0x1A95CCu, 0x1A95D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A95D4u;
label_1a95d4:
    // 0x1a95d4: 0xae800010  sw          $zero, 0x10($s4)
    ctx->pc = 0x1a95d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
    // 0x1a95d8: 0xae800044  sw          $zero, 0x44($s4)
    ctx->pc = 0x1a95d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 0));
    // 0x1a95dc: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x1a95dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
label_1a95e0:
    // 0x1a95e0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1a95e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a95e4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1a95e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a95e8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a95e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a95ec: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1a95ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a95f0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1a95f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a95f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a95f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a95f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A95F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A95FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A95F8u;
        // 0x1a95fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A95F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9600u;
}
