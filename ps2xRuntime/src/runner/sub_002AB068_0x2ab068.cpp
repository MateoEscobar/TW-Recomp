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

// Function: sub_002AB068
// Address: 0x2ab068 - 0x2ab0a8
void sub_002AB068_0x2ab068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB068_0x2ab068");
#endif

    switch (ctx->pc) {
        case 0x2ab08cu: goto label_2ab08c;
        default: break;
    }

    ctx->pc = 0x2ab068u;

    // 0x2ab068: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ab068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ab06c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ab06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ab070: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ab070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ab074: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ab074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab078: 0x92020072  lbu         $v0, 0x72($s0)
    ctx->pc = 0x2ab078u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 114)));
    // 0x2ab07c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AB07Cu;
    {
        const bool branch_taken_0x2ab07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ab07c) {
            ctx->pc = 0x2AB080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AB07Cu;
            // 0x2ab080: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AB090u;
            goto label_2ab090;
        }
    }
    ctx->pc = 0x2AB084u;
    // 0x2ab084: 0xc0aac7a  jal         func_2AB1E8
    ctx->pc = 0x2AB084u;
    SET_GPR_U32(ctx, 31, 0x2AB08Cu);
    ctx->pc = 0x2AB1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB1E8u, 0x2AB084u, 0x2AB08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB08Cu;
label_2ab08c:
    // 0x2ab08c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ab08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ab090:
    // 0x2ab090: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2ab090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2ab094: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ab094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ab098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab09c: 0xa46200f4  sh          $v0, 0xF4($v1)
    ctx->pc = 0x2ab09cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 244), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ab0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB0A0u;
        // 0x2ab0a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB0A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB0A8u;
}
