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

// Function: sub_004AE6C0
// Address: 0x4ae6c0 - 0x4ae720
void sub_004AE6C0_0x4ae6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE6C0_0x4ae6c0");
#endif

    switch (ctx->pc) {
        case 0x4ae70cu: goto label_4ae70c;
        default: break;
    }

    ctx->pc = 0x4ae6c0u;

    // 0x4ae6c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ae6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ae6c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ae6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ae6c8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4ae6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ae6cc: 0x9083001a  lbu         $v1, 0x1A($a0)
    ctx->pc = 0x4ae6ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x4ae6d0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AE6D0u;
    {
        const bool branch_taken_0x4ae6d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE6D0u;
        // 0x4ae6d4: 0x34630002  ori         $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae6d0) {
            ctx->pc = 0x4AE6E4u;
            goto label_4ae6e4;
        }
    }
    ctx->pc = 0x4AE6D8u;
    // 0x4ae6d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4ae6d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae6dc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4AE6DCu;
    {
        const bool branch_taken_0x4ae6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE6DCu;
        // 0x4ae6e0: 0xa083001a  sb          $v1, 0x1A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae6dc) {
            ctx->pc = 0x4AE710u;
            goto label_4ae710;
        }
    }
    ctx->pc = 0x4AE6E4u;
label_4ae6e4:
    // 0x4ae6e4: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x4ae6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4ae6e8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4AE6E8u;
    {
        const bool branch_taken_0x4ae6e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE6E8u;
        // 0x4ae6ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae6e8) {
            ctx->pc = 0x4AE710u;
            goto label_4ae710;
        }
    }
    ctx->pc = 0x4AE6F0u;
    // 0x4ae6f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4ae6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ae6f4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4ae6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4ae6f8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4ae6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4ae6fc: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AE6FCu;
    {
        const bool branch_taken_0x4ae6fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x4AE700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE6FCu;
        // 0x4ae700: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae6fc) {
            ctx->pc = 0x4AE710u;
            goto label_4ae710;
        }
    }
    ctx->pc = 0x4AE704u;
    // 0x4ae704: 0xc12b652  jal         func_4AD948
    ctx->pc = 0x4AE704u;
    SET_GPR_U32(ctx, 31, 0x4AE70Cu);
    ctx->pc = 0x4AE708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE704u;
    // 0x4ae708: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD948u, 0x4AE704u, 0x4AE70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE70Cu;
label_4ae70c:
    // 0x4ae70c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ae70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ae710:
    // 0x4ae710: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ae710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ae714: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE714u;
        // 0x4ae718: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE71Cu;
    // 0x4ae71c: 0x0  nop
    ctx->pc = 0x4ae71cu;
    // NOP
    ctx->pc = 0x4ae720u;
}
