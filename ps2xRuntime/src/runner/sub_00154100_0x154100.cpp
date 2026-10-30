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

// Function: sub_00154100
// Address: 0x154100 - 0x154130
void sub_00154100_0x154100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154100_0x154100");
#endif

    switch (ctx->pc) {
        case 0x154100u: goto label_154100;
        case 0x154104u: goto label_154104;
        case 0x154108u: goto label_154108;
        case 0x15410cu: goto label_15410c;
        case 0x154110u: goto label_154110;
        case 0x154114u: goto label_154114;
        case 0x154118u: goto label_154118;
        case 0x15411cu: goto label_15411c;
        case 0x154120u: goto label_154120;
        case 0x154124u: goto label_154124;
        case 0x154128u: goto label_154128;
        case 0x15412cu: goto label_15412c;
        default: break;
    }

    ctx->pc = 0x154100u;

label_154100:
    // 0x154100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x154100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_154104:
    // 0x154104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x154104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_154108:
    // 0x154108: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x154108u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_15410c:
    // 0x15410c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x15410cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_154110:
    // 0x154110: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x154110u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_154114:
    // 0x154114: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x154114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_154118:
    // 0x154118: 0x40f809  jalr        $v0
label_15411c:
    if (ctx->pc == 0x15411Cu) {
        ctx->pc = 0x15411Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154118u;
        // 0x15411c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154120u;
        goto label_154120;
    }
    ctx->pc = 0x154118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x154120u);
        ctx->pc = 0x15411Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154118u;
        // 0x15411c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154118u, 0x154120u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x154120u;
label_154120:
    // 0x154120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x154120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_154124:
    // 0x154124: 0x3e00008  jr          $ra
label_154128:
    if (ctx->pc == 0x154128u) {
        ctx->pc = 0x154128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154124u;
        // 0x154128: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15412Cu;
        goto label_15412c;
    }
    ctx->pc = 0x154124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154124u;
        // 0x154128: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15412Cu;
label_15412c:
    // 0x15412c: 0x0  nop
    ctx->pc = 0x15412cu;
    // NOP
    ctx->pc = 0x154130u;
}
