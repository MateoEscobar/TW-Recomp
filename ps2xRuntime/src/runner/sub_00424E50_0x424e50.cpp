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

// Function: sub_00424E50
// Address: 0x424e50 - 0x424ec8
void sub_00424E50_0x424e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00424E50_0x424e50");
#endif

    switch (ctx->pc) {
        case 0x424e70u: goto label_424e70;
        case 0x424e98u: goto label_424e98;
        case 0x424ebcu: goto label_424ebc;
        default: break;
    }

    ctx->pc = 0x424e50u;

    // 0x424e50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x424e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x424e54: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x424e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x424e58: 0x14a20018  bne         $a1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x424E58u;
    {
        const bool branch_taken_0x424e58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x424E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424E58u;
        // 0x424e5c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424e58) {
            ctx->pc = 0x424EBCu;
            goto label_424ebc;
        }
    }
    ctx->pc = 0x424E60u;
    // 0x424e60: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x424E60u;
    {
        const bool branch_taken_0x424e60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x424E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424E60u;
        // 0x424e64: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424e60) {
            ctx->pc = 0x424EBCu;
            goto label_424ebc;
        }
    }
    ctx->pc = 0x424E68u;
    // 0x424e68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x424e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424e6c: 0x2443e8f8  addiu       $v1, $v0, -0x1708
    ctx->pc = 0x424e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961400));
label_424e70:
    // 0x424e70: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x424e70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x424e74: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x424e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x424e78: 0x2c820014  sltiu       $v0, $a0, 0x14
    ctx->pc = 0x424e78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x424e7c: 0x0  nop
    ctx->pc = 0x424e7cu;
    // NOP
    // 0x424e80: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x424E80u;
    {
        const bool branch_taken_0x424e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x424E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424E80u;
        // 0x424e84: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424e80) {
            ctx->pc = 0x424E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_424e70;
        }
    }
    ctx->pc = 0x424E88u;
    // 0x424e88: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x424e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x424e8c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x424e8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424e90: 0x2444e948  addiu       $a0, $v0, -0x16B8
    ctx->pc = 0x424e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961480));
    // 0x424e94: 0x0  nop
    ctx->pc = 0x424e94u;
    // NOP
label_424e98:
    // 0x424e98: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x424e98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x424e9c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x424e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x424ea0: 0x2c620014  sltiu       $v0, $v1, 0x14
    ctx->pc = 0x424ea0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x424ea4: 0x0  nop
    ctx->pc = 0x424ea4u;
    // NOP
    // 0x424ea8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x424EA8u;
    {
        const bool branch_taken_0x424ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x424EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424EA8u;
        // 0x424eac: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424ea8) {
            ctx->pc = 0x424E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_424e98;
        }
    }
    ctx->pc = 0x424EB0u;
    // 0x424eb0: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x424eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x424eb4: 0xc108e82  jal         func_423A08
    ctx->pc = 0x424EB4u;
    SET_GPR_U32(ctx, 31, 0x424EBCu);
    ctx->pc = 0x424EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x424EB4u;
    // 0x424eb8: 0x2484e998  addiu       $a0, $a0, -0x1668 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x423A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423A08u, 0x424EB4u, 0x424EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x424EBCu;
label_424ebc:
    // 0x424ebc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x424ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x424ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x424EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x424EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424EC0u;
        // 0x424ec4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x424EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x424EC8u;
}
