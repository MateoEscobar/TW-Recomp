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

// Function: sub_00156D20
// Address: 0x156d20 - 0x156d88
void sub_00156D20_0x156d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156D20_0x156d20");
#endif

    switch (ctx->pc) {
        case 0x156d34u: goto label_156d34;
        case 0x156d4cu: goto label_156d4c;
        case 0x156d58u: goto label_156d58;
        default: break;
    }

    ctx->pc = 0x156d20u;

    // 0x156d20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x156d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x156d24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x156d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x156d28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x156d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x156d2c: 0xc0557b6  jal         func_155ED8
    ctx->pc = 0x156D2Cu;
    SET_GPR_U32(ctx, 31, 0x156D34u);
    ctx->pc = 0x156D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156D2Cu;
    // 0x156d30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155ED8u, 0x156D2Cu, 0x156D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156D34u;
label_156d34:
    // 0x156d34: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x156d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x156d38: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x156d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x156d3c: 0x246383f0  addiu       $v1, $v1, -0x7C10
    ctx->pc = 0x156d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935536));
    // 0x156d40: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x156d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x156d44: 0xc0705aa  jal         func_1C16A8
    ctx->pc = 0x156D44u;
    SET_GPR_U32(ctx, 31, 0x156D4Cu);
    ctx->pc = 0x156D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156D44u;
    // 0x156d48: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C16A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C16A8u, 0x156D44u, 0x156D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156D4Cu;
label_156d4c:
    // 0x156d4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x156d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156d50: 0x26030100  addiu       $v1, $s0, 0x100
    ctx->pc = 0x156d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x156d54: 0x0  nop
    ctx->pc = 0x156d54u;
    // NOP
label_156d58:
    // 0x156d58: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x156d58u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x156d5c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x156d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x156d60: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x156d60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x156d64: 0x0  nop
    ctx->pc = 0x156d64u;
    // NOP
    // 0x156d68: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x156D68u;
    {
        const bool branch_taken_0x156d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156D68u;
        // 0x156d6c: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156d68) {
            ctx->pc = 0x156D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156d58;
        }
    }
    ctx->pc = 0x156D70u;
    // 0x156d70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x156d70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156d74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x156d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156d78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x156d78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x156D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156D7Cu;
        // 0x156d80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156D84u;
    // 0x156d84: 0x0  nop
    ctx->pc = 0x156d84u;
    // NOP
    ctx->pc = 0x156d88u;
}
