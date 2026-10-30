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

// Function: sub_0038D538
// Address: 0x38d538 - 0x38d5b8
void sub_0038D538_0x38d538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D538_0x38d538");
#endif

    switch (ctx->pc) {
        case 0x38d570u: goto label_38d570;
        case 0x38d580u: goto label_38d580;
        case 0x38d598u: goto label_38d598;
        default: break;
    }

    ctx->pc = 0x38d538u;

    // 0x38d538: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x38d538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x38d53c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x38d53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x38d540: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x38d540u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x38d544: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x38d544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x38d548: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38d548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x38d54c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x38d54cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d550: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x38d550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x38d554: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x38d554u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d558: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38d558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38d55c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x38d55cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d560: 0x8e222c7c  lw          $v0, 0x2C7C($s1)
    ctx->pc = 0x38d560u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x38d564: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x38d564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38d568: 0xc0e637e  jal         func_398DF8
    ctx->pc = 0x38D568u;
    SET_GPR_U32(ctx, 31, 0x38D570u);
    ctx->pc = 0x38D56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D568u;
    // 0x38d56c: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x38D568u, 0x38D570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D570u;
label_38d570:
    // 0x38d570: 0x8e222c7c  lw          $v0, 0x2C7C($s1)
    ctx->pc = 0x38d570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x38d574: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38d574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d578: 0xc0e66fc  jal         func_399BF0
    ctx->pc = 0x38D578u;
    SET_GPR_U32(ctx, 31, 0x38D580u);
    ctx->pc = 0x38D57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D578u;
    // 0x38d57c: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BF0u, 0x38D578u, 0x38D580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D580u;
label_38d580:
    // 0x38d580: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38d580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38d584: 0xae62120c  sw          $v0, 0x120C($s3)
    ctx->pc = 0x38d584u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4620), GPR_U32(ctx, 2));
    // 0x38d588: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x38D588u;
    {
        const bool branch_taken_0x38d588 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D588u;
        // 0x38d58c: 0xa26312e4  sb          $v1, 0x12E4($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 4836), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d588) {
            ctx->pc = 0x38D598u;
            goto label_38d598;
        }
    }
    ctx->pc = 0x38D590u;
    // 0x38d590: 0xc0e3462  jal         func_38D188
    ctx->pc = 0x38D590u;
    SET_GPR_U32(ctx, 31, 0x38D598u);
    ctx->pc = 0x38D594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D590u;
    // 0x38d594: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D188u, 0x38D590u, 0x38D598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D598u;
label_38d598:
    // 0x38d598: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x38d598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38d59c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x38d59cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38d5a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38d5a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38d5a4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x38d5a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38d5a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38d5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38d5ac: 0x3e00008  jr          $ra
    ctx->pc = 0x38D5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D5ACu;
        // 0x38d5b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D5ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D5B4u;
    // 0x38d5b4: 0x0  nop
    ctx->pc = 0x38d5b4u;
    // NOP
    ctx->pc = 0x38d5b8u;
}
