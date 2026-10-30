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

// Function: sub_003B3220
// Address: 0x3b3220 - 0x3b3250
void sub_003B3220_0x3b3220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B3220_0x3b3220");
#endif

    switch (ctx->pc) {
        case 0x3b3220u: goto label_3b3220;
        case 0x3b3224u: goto label_3b3224;
        case 0x3b3228u: goto label_3b3228;
        case 0x3b322cu: goto label_3b322c;
        case 0x3b3230u: goto label_3b3230;
        case 0x3b3234u: goto label_3b3234;
        case 0x3b3238u: goto label_3b3238;
        case 0x3b323cu: goto label_3b323c;
        case 0x3b3240u: goto label_3b3240;
        case 0x3b3244u: goto label_3b3244;
        case 0x3b3248u: goto label_3b3248;
        case 0x3b324cu: goto label_3b324c;
        default: break;
    }

    ctx->pc = 0x3b3220u;

label_3b3220:
    // 0x3b3220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b3220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3b3224:
    // 0x3b3224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b3224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3b3228:
    // 0x3b3228: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3b3228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b322c:
    // 0x3b322c: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3b322cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3b3230:
    // 0x3b3230: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3b3230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3b3234:
    // 0x3b3234: 0x40f809  jalr        $v0
label_3b3238:
    if (ctx->pc == 0x3B3238u) {
        ctx->pc = 0x3B3238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3234u;
        // 0x3b3238: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B323Cu;
        goto label_3b323c;
    }
    ctx->pc = 0x3B3234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B323Cu);
        ctx->pc = 0x3B3238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3234u;
        // 0x3b3238: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3234u, 0x3B323Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B323Cu;
label_3b323c:
    // 0x3b323c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3b323cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b3240:
    // 0x3b3240: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b3240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b3244:
    // 0x3b3244: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3b3244u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3b3248:
    // 0x3b3248: 0x3e00008  jr          $ra
label_3b324c:
    if (ctx->pc == 0x3B324Cu) {
        ctx->pc = 0x3B324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3248u;
        // 0x3b324c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3250u;
        goto label_fallthrough_0x3b3248;
    }
    ctx->pc = 0x3B3248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3248u;
        // 0x3b324c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b3248:
    ctx->pc = 0x3B3250u;
}
