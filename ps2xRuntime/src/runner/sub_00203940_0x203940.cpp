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

// Function: sub_00203940
// Address: 0x203940 - 0x203968
void sub_00203940_0x203940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203940_0x203940");
#endif

    switch (ctx->pc) {
        case 0x203940u: goto label_203940;
        case 0x203944u: goto label_203944;
        case 0x203948u: goto label_203948;
        case 0x20394cu: goto label_20394c;
        case 0x203950u: goto label_203950;
        case 0x203954u: goto label_203954;
        case 0x203958u: goto label_203958;
        case 0x20395cu: goto label_20395c;
        case 0x203960u: goto label_203960;
        case 0x203964u: goto label_203964;
        default: break;
    }

    ctx->pc = 0x203940u;

label_203940:
    // 0x203940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x203940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_203944:
    // 0x203944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x203944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_203948:
    // 0x203948: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x203948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20394c:
    // 0x20394c: 0x84430068  lh          $v1, 0x68($v0)
    ctx->pc = 0x20394cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_203950:
    // 0x203950: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x203950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_203954:
    // 0x203954: 0xa0f809  jalr        $a1
label_203958:
    if (ctx->pc == 0x203958u) {
        ctx->pc = 0x203958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203954u;
        // 0x203958: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20395Cu;
        goto label_20395c;
    }
    ctx->pc = 0x203954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x20395Cu);
        ctx->pc = 0x203958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203954u;
        // 0x203958: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203954u, 0x20395Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20395Cu;
label_20395c:
    // 0x20395c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20395cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_203960:
    // 0x203960: 0x3e00008  jr          $ra
label_203964:
    if (ctx->pc == 0x203964u) {
        ctx->pc = 0x203964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203960u;
        // 0x203964: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203968u;
        goto label_fallthrough_0x203960;
    }
    ctx->pc = 0x203960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203960u;
        // 0x203964: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x203960:
    ctx->pc = 0x203968u;
}
