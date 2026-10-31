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

// Function: sub_002DDD08
// Address: 0x2ddd08 - 0x2ddd48
void sub_002DDD08_0x2ddd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDD08_0x2ddd08");
#endif

    switch (ctx->pc) {
        case 0x2ddd08u: goto label_2ddd08;
        case 0x2ddd0cu: goto label_2ddd0c;
        case 0x2ddd10u: goto label_2ddd10;
        case 0x2ddd14u: goto label_2ddd14;
        case 0x2ddd18u: goto label_2ddd18;
        case 0x2ddd1cu: goto label_2ddd1c;
        case 0x2ddd20u: goto label_2ddd20;
        case 0x2ddd24u: goto label_2ddd24;
        case 0x2ddd28u: goto label_2ddd28;
        case 0x2ddd2cu: goto label_2ddd2c;
        case 0x2ddd30u: goto label_2ddd30;
        case 0x2ddd34u: goto label_2ddd34;
        case 0x2ddd38u: goto label_2ddd38;
        case 0x2ddd3cu: goto label_2ddd3c;
        case 0x2ddd40u: goto label_2ddd40;
        case 0x2ddd44u: goto label_2ddd44;
        default: break;
    }

    ctx->pc = 0x2ddd08u;

label_2ddd08:
    // 0x2ddd08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ddd08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2ddd0c:
    // 0x2ddd0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ddd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2ddd10:
    // 0x2ddd10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ddd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ddd14:
    // 0x2ddd14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ddd14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ddd18:
    // 0x2ddd18: 0xc0a36c8  jal         func_28DB20
label_2ddd1c:
    if (ctx->pc == 0x2DDD1Cu) {
        ctx->pc = 0x2DDD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDD18u;
        // 0x2ddd1c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDD20u;
        goto label_2ddd20;
    }
    ctx->pc = 0x2DDD18u;
    SET_GPR_U32(ctx, 31, 0x2DDD20u);
    ctx->pc = 0x2DDD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDD18u;
    // 0x2ddd1c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2DDD18u, 0x2DDD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDD20u;
label_2ddd20:
    // 0x2ddd20: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2ddd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2ddd24:
    // 0x2ddd24: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x2ddd24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_2ddd28:
    // 0x2ddd28: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x2ddd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_2ddd2c:
    // 0x2ddd2c: 0x40f809  jalr        $v0
label_2ddd30:
    if (ctx->pc == 0x2DDD30u) {
        ctx->pc = 0x2DDD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDD2Cu;
        // 0x2ddd30: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDD34u;
        goto label_2ddd34;
    }
    ctx->pc = 0x2DDD2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DDD34u);
        ctx->pc = 0x2DDD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDD2Cu;
        // 0x2ddd30: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDD2Cu, 0x2DDD34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DDD34u;
label_2ddd34:
    // 0x2ddd34: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ddd34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ddd38:
    // 0x2ddd38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ddd38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ddd3c:
    // 0x2ddd3c: 0x3e00008  jr          $ra
label_2ddd40:
    if (ctx->pc == 0x2DDD40u) {
        ctx->pc = 0x2DDD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDD3Cu;
        // 0x2ddd40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDD44u;
        goto label_2ddd44;
    }
    ctx->pc = 0x2DDD3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDD3Cu;
        // 0x2ddd40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDD3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDD44u;
label_2ddd44:
    // 0x2ddd44: 0x0  nop
    ctx->pc = 0x2ddd44u;
    // NOP
    ctx->pc = 0x2ddd48u;
}
