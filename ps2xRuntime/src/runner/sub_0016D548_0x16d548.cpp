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

// Function: sub_0016D548
// Address: 0x16d548 - 0x16d5c0
void sub_0016D548_0x16d548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D548_0x16d548");
#endif

    switch (ctx->pc) {
        case 0x16d568u: goto label_16d568;
        case 0x16d570u: goto label_16d570;
        case 0x16d580u: goto label_16d580;
        case 0x16d590u: goto label_16d590;
        default: break;
    }

    ctx->pc = 0x16d548u;

    // 0x16d548: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16d548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16d54c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16d54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16d550: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16d550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16d554: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16d554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d558: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x16d558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x16d55c: 0x3c110001  lui         $s1, 0x1
    ctx->pc = 0x16d55cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)1 << 16));
    // 0x16d560: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16d560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16d564: 0x3c120001  lui         $s2, 0x1
    ctx->pc = 0x16d564u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)1 << 16));
label_16d568:
    // 0x16d568: 0xc0e402c  jal         func_3900B0
    ctx->pc = 0x16D568u;
    SET_GPR_U32(ctx, 31, 0x16D570u);
    ctx->pc = 0x16D56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D568u;
    // 0x16d56c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3900B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900B0u, 0x16D568u, 0x16D570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D570u;
label_16d570:
    // 0x16d570: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16D570u;
    {
        const bool branch_taken_0x16d570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D570u;
        // 0x16d574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d570) {
            ctx->pc = 0x16D590u;
            goto label_16d590;
        }
    }
    ctx->pc = 0x16D578u;
    // 0x16d578: 0xc0e402c  jal         func_3900B0
    ctx->pc = 0x16D578u;
    SET_GPR_U32(ctx, 31, 0x16D580u);
    ctx->pc = 0x3900B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900B0u, 0x16D578u, 0x16D580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D580u;
label_16d580:
    // 0x16d580: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16D580u;
    {
        const bool branch_taken_0x16d580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D580u;
        // 0x16d584: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d580) {
            ctx->pc = 0x16D590u;
            goto label_16d590;
        }
    }
    ctx->pc = 0x16D588u;
    // 0x16d588: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x16D588u;
    SET_GPR_U32(ctx, 31, 0x16D590u);
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x16D588u, 0x16D590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D590u;
label_16d590:
    // 0x16d590: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x16d590u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d594: 0x38403  sra         $s0, $v1, 16
    ctx->pc = 0x16d594u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 16));
    // 0x16d598: 0x2a02003c  slti        $v0, $s0, 0x3C
    ctx->pc = 0x16d598u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x16d59c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x16D59Cu;
    {
        const bool branch_taken_0x16d59c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D59Cu;
        // 0x16d5a0: 0x2328821  addu        $s1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d59c) {
            ctx->pc = 0x16D568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16d568;
        }
    }
    ctx->pc = 0x16D5A4u;
    // 0x16d5a4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16d5a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16d5a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16d5a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d5ac: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x16d5acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d5b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16d5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x16D5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D5B4u;
        // 0x16d5b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D5BCu;
    // 0x16d5bc: 0x0  nop
    ctx->pc = 0x16d5bcu;
    // NOP
    ctx->pc = 0x16d5c0u;
}
