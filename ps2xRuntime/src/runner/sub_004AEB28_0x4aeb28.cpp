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

// Function: sub_004AEB28
// Address: 0x4aeb28 - 0x4aeb58
void sub_004AEB28_0x4aeb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AEB28_0x4aeb28");
#endif

    switch (ctx->pc) {
        case 0x4aeb28u: goto label_4aeb28;
        case 0x4aeb2cu: goto label_4aeb2c;
        case 0x4aeb30u: goto label_4aeb30;
        case 0x4aeb34u: goto label_4aeb34;
        case 0x4aeb38u: goto label_4aeb38;
        case 0x4aeb3cu: goto label_4aeb3c;
        case 0x4aeb40u: goto label_4aeb40;
        case 0x4aeb44u: goto label_4aeb44;
        case 0x4aeb48u: goto label_4aeb48;
        case 0x4aeb4cu: goto label_4aeb4c;
        case 0x4aeb50u: goto label_4aeb50;
        case 0x4aeb54u: goto label_4aeb54;
        default: break;
    }

    ctx->pc = 0x4aeb28u;

label_4aeb28:
    // 0x4aeb28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4aeb28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4aeb2c:
    // 0x4aeb2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4aeb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4aeb30:
    // 0x4aeb30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4aeb30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4aeb34:
    // 0x4aeb34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4aeb34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4aeb38:
    // 0x4aeb38: 0xa0f809  jalr        $a1
label_4aeb3c:
    if (ctx->pc == 0x4AEB3Cu) {
        ctx->pc = 0x4AEB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEB38u;
        // 0x4aeb3c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AEB40u;
        goto label_4aeb40;
    }
    ctx->pc = 0x4AEB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x4AEB40u);
        ctx->pc = 0x4AEB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEB38u;
        // 0x4aeb3c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AEB38u, 0x4AEB40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4AEB40u;
label_4aeb40:
    // 0x4aeb40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4aeb40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4aeb44:
    // 0x4aeb44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4aeb44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4aeb48:
    // 0x4aeb48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4aeb48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4aeb4c:
    // 0x4aeb4c: 0x3e00008  jr          $ra
label_4aeb50:
    if (ctx->pc == 0x4AEB50u) {
        ctx->pc = 0x4AEB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEB4Cu;
        // 0x4aeb50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AEB54u;
        goto label_4aeb54;
    }
    ctx->pc = 0x4AEB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AEB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEB4Cu;
        // 0x4aeb50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AEB4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AEB54u;
label_4aeb54:
    // 0x4aeb54: 0x0  nop
    ctx->pc = 0x4aeb54u;
    // NOP
    ctx->pc = 0x4aeb58u;
}
