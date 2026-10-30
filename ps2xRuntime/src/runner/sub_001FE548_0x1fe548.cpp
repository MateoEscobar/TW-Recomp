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

// Function: sub_001FE548
// Address: 0x1fe548 - 0x1fe5d0
void sub_001FE548_0x1fe548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE548_0x1fe548");
#endif

    switch (ctx->pc) {
        case 0x1fe5c0u: goto label_1fe5c0;
        default: break;
    }

    ctx->pc = 0x1fe548u;

    // 0x1fe548: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fe548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fe54c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1fe54cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1fe550: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE550u;
    {
        const bool branch_taken_0x1fe550 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE550u;
        // 0x1fe554: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe550) {
            ctx->pc = 0x1FE560u;
            goto label_1fe560;
        }
    }
    ctx->pc = 0x1FE558u;
    // 0x1fe558: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1FE558u;
    {
        const bool branch_taken_0x1fe558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE558u;
        // 0x1fe55c: 0x2404005a  addiu       $a0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe558) {
            ctx->pc = 0x1FE5B8u;
            goto label_1fe5b8;
        }
    }
    ctx->pc = 0x1FE560u;
label_1fe560:
    // 0x1fe560: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fe560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fe564: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE564u;
    {
        const bool branch_taken_0x1fe564 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FE568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE564u;
        // 0x1fe568: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe564) {
            ctx->pc = 0x1FE574u;
            goto label_1fe574;
        }
    }
    ctx->pc = 0x1FE56Cu;
    // 0x1fe56c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1FE56Cu;
    {
        const bool branch_taken_0x1fe56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE56Cu;
        // 0x1fe570: 0x2404005b  addiu       $a0, $zero, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe56c) {
            ctx->pc = 0x1FE5B8u;
            goto label_1fe5b8;
        }
    }
    ctx->pc = 0x1FE574u;
label_1fe574:
    // 0x1fe574: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE574u;
    {
        const bool branch_taken_0x1fe574 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FE578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE574u;
        // 0x1fe578: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe574) {
            ctx->pc = 0x1FE584u;
            goto label_1fe584;
        }
    }
    ctx->pc = 0x1FE57Cu;
    // 0x1fe57c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1FE57Cu;
    {
        const bool branch_taken_0x1fe57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE57Cu;
        // 0x1fe580: 0x2404005c  addiu       $a0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe57c) {
            ctx->pc = 0x1FE5B8u;
            goto label_1fe5b8;
        }
    }
    ctx->pc = 0x1FE584u;
label_1fe584:
    // 0x1fe584: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE584u;
    {
        const bool branch_taken_0x1fe584 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FE588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE584u;
        // 0x1fe588: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe584) {
            ctx->pc = 0x1FE594u;
            goto label_1fe594;
        }
    }
    ctx->pc = 0x1FE58Cu;
    // 0x1fe58c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1FE58Cu;
    {
        const bool branch_taken_0x1fe58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE58Cu;
        // 0x1fe590: 0x2404005d  addiu       $a0, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe58c) {
            ctx->pc = 0x1FE5B8u;
            goto label_1fe5b8;
        }
    }
    ctx->pc = 0x1FE594u;
label_1fe594:
    // 0x1fe594: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE594u;
    {
        const bool branch_taken_0x1fe594 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FE598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE594u;
        // 0x1fe598: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe594) {
            ctx->pc = 0x1FE5A4u;
            goto label_1fe5a4;
        }
    }
    ctx->pc = 0x1FE59Cu;
    // 0x1fe59c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FE59Cu;
    {
        const bool branch_taken_0x1fe59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE59Cu;
        // 0x1fe5a0: 0x2404005e  addiu       $a0, $zero, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe59c) {
            ctx->pc = 0x1FE5B8u;
            goto label_1fe5b8;
        }
    }
    ctx->pc = 0x1FE5A4u;
label_1fe5a4:
    // 0x1fe5a4: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE5A4u;
    {
        const bool branch_taken_0x1fe5a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FE5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE5A4u;
        // 0x1fe5a8: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe5a4) {
            ctx->pc = 0x1FE5B4u;
            goto label_1fe5b4;
        }
    }
    ctx->pc = 0x1FE5ACu;
    // 0x1fe5ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE5ACu;
    {
        const bool branch_taken_0x1fe5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE5ACu;
        // 0x1fe5b0: 0x24428118  addiu       $v0, $v0, -0x7EE8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe5ac) {
            ctx->pc = 0x1FE5C0u;
            goto label_1fe5c0;
        }
    }
    ctx->pc = 0x1FE5B4u;
label_1fe5b4:
    // 0x1fe5b4: 0x2404005f  addiu       $a0, $zero, 0x5F
    ctx->pc = 0x1fe5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
label_1fe5b8:
    // 0x1fe5b8: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1FE5B8u;
    SET_GPR_U32(ctx, 31, 0x1FE5C0u);
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1FE5B8u, 0x1FE5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE5C0u;
label_1fe5c0:
    // 0x1fe5c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe5c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE5C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE5C4u;
        // 0x1fe5c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE5C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE5CCu;
    // 0x1fe5cc: 0x0  nop
    ctx->pc = 0x1fe5ccu;
    // NOP
    ctx->pc = 0x1fe5d0u;
}
