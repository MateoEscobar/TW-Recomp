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

// Function: sub_002D8550
// Address: 0x2d8550 - 0x2d85d0
void sub_002D8550_0x2d8550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8550_0x2d8550");
#endif

    switch (ctx->pc) {
        case 0x2d8574u: goto label_2d8574;
        case 0x2d8584u: goto label_2d8584;
        case 0x2d8594u: goto label_2d8594;
        case 0x2d85a4u: goto label_2d85a4;
        case 0x2d85bcu: goto label_2d85bc;
        default: break;
    }

    ctx->pc = 0x2d8550u;

    // 0x2d8550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d8550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d8554: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d8554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8558: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d8558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d855c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d855cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8560: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d8560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d8564: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d8564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d8568: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2d8568u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d856c: 0xc0b6174  jal         func_2D85D0
    ctx->pc = 0x2D856Cu;
    SET_GPR_U32(ctx, 31, 0x2D8574u);
    ctx->pc = 0x2D8570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D856Cu;
    // 0x2d8570: 0xa2030284  sb          $v1, 0x284($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 644), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D85D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D85D0u, 0x2D856Cu, 0x2D8574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8574u;
label_2d8574:
    // 0x2d8574: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x2d8574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x2d8578: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d8578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d857c: 0xc089998  jal         func_226660
    ctx->pc = 0x2D857Cu;
    SET_GPR_U32(ctx, 31, 0x2D8584u);
    ctx->pc = 0x2D8580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D857Cu;
    // 0x2d8580: 0x34a56a40  ori         $a1, $a1, 0x6A40 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27200);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2D857Cu, 0x2D8584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8584u;
label_2d8584:
    // 0x2d8584: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2D8584u;
    {
        const bool branch_taken_0x2d8584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d8584) {
            ctx->pc = 0x2D8588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8584u;
            // 0x2d8588: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D85C0u;
            goto label_2d85c0;
        }
    }
    ctx->pc = 0x2D858Cu;
    // 0x2d858c: 0xc089f98  jal         func_227E60
    ctx->pc = 0x2D858Cu;
    SET_GPR_U32(ctx, 31, 0x2D8594u);
    ctx->pc = 0x2D8590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D858Cu;
    // 0x2d8590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x2D858Cu, 0x2D8594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8594u;
label_2d8594:
    // 0x2d8594: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2D8594u;
    {
        const bool branch_taken_0x2d8594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d8594) {
            ctx->pc = 0x2D8598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8594u;
            // 0x2d8598: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D85C0u;
            goto label_2d85c0;
        }
    }
    ctx->pc = 0x2D859Cu;
    // 0x2d859c: 0xc0899ae  jal         func_2266B8
    ctx->pc = 0x2D859Cu;
    SET_GPR_U32(ctx, 31, 0x2D85A4u);
    ctx->pc = 0x2D85A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D859Cu;
    // 0x2d85a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x2D859Cu, 0x2D85A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D85A4u;
label_2d85a4:
    // 0x2d85a4: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x2d85a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2d85a8: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x2d85a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2d85ac: 0x50440004  beql        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D85ACu;
    {
        const bool branch_taken_0x2d85ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2d85ac) {
            ctx->pc = 0x2D85B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D85ACu;
            // 0x2d85b0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D85C0u;
            goto label_2d85c0;
        }
    }
    ctx->pc = 0x2D85B4u;
    // 0x2d85b4: 0xc097ddc  jal         func_25F770
    ctx->pc = 0x2D85B4u;
    SET_GPR_U32(ctx, 31, 0x2D85BCu);
    ctx->pc = 0x2D85B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D85B4u;
    // 0x2d85b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F770u, 0x2D85B4u, 0x2D85BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D85BCu;
label_2d85bc:
    // 0x2d85bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d85bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d85c0:
    // 0x2d85c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d85c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d85c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D85C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D85C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D85C4u;
        // 0x2d85c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D85C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D85CCu;
    // 0x2d85cc: 0x0  nop
    ctx->pc = 0x2d85ccu;
    // NOP
    ctx->pc = 0x2d85d0u;
}
