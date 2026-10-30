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

// Function: sub_00423A08
// Address: 0x423a08 - 0x423a98
void sub_00423A08_0x423a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00423A08_0x423a08");
#endif

    switch (ctx->pc) {
        case 0x423a24u: goto label_423a24;
        case 0x423a38u: goto label_423a38;
        case 0x423a60u: goto label_423a60;
        default: break;
    }

    ctx->pc = 0x423a08u;

    // 0x423a08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x423a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x423a0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x423a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x423a10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x423a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x423a14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x423a14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x423a18: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x423a18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x423a1c: 0xc108ea6  jal         func_423A98
    ctx->pc = 0x423A1Cu;
    SET_GPR_U32(ctx, 31, 0x423A24u);
    ctx->pc = 0x423A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x423A1Cu;
    // 0x423a20: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x423A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423A98u, 0x423A1Cu, 0x423A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x423A24u;
label_423a24:
    // 0x423a24: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x423a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x423a28: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x423a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x423a2c: 0x2445e8f8  addiu       $a1, $v0, -0x1708
    ctx->pc = 0x423a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961400));
    // 0x423a30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x423a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x423a34: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x423a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_423a38:
    // 0x423a38: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x423a38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x423a3c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x423a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x423a40: 0x2c820014  sltiu       $v0, $a0, 0x14
    ctx->pc = 0x423a40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x423a44: 0x0  nop
    ctx->pc = 0x423a44u;
    // NOP
    // 0x423a48: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x423A48u;
    {
        const bool branch_taken_0x423a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x423A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423A48u;
        // 0x423a4c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423a48) {
            ctx->pc = 0x423A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_423a38;
        }
    }
    ctx->pc = 0x423A50u;
    // 0x423a50: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x423a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x423a54: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x423a54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x423a58: 0x2444e948  addiu       $a0, $v0, -0x16B8
    ctx->pc = 0x423a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961480));
    // 0x423a5c: 0x0  nop
    ctx->pc = 0x423a5cu;
    // NOP
label_423a60:
    // 0x423a60: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x423a60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x423a64: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x423a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x423a68: 0x2c620014  sltiu       $v0, $v1, 0x14
    ctx->pc = 0x423a68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x423a6c: 0x0  nop
    ctx->pc = 0x423a6cu;
    // NOP
    // 0x423a70: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x423A70u;
    {
        const bool branch_taken_0x423a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x423A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423A70u;
        // 0x423a74: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423a70) {
            ctx->pc = 0x423A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_423a60;
        }
    }
    ctx->pc = 0x423A78u;
    // 0x423a78: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x423a78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x423a7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x423a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x423a80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x423a80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x423a84: 0x3e00008  jr          $ra
    ctx->pc = 0x423A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x423A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423A84u;
        // 0x423a88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x423A8Cu;
    // 0x423a8c: 0x0  nop
    ctx->pc = 0x423a8cu;
    // NOP
    // 0x423a90: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x423a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x423a94: 0x0  nop
    ctx->pc = 0x423a94u;
    // NOP
    ctx->pc = 0x423a98u;
}
