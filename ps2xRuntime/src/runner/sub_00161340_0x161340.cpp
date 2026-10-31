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

// Function: sub_00161340
// Address: 0x161340 - 0x161378
void sub_00161340_0x161340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161340_0x161340");
#endif

    switch (ctx->pc) {
        case 0x161340u: goto label_161340;
        case 0x161344u: goto label_161344;
        case 0x161348u: goto label_161348;
        case 0x16134cu: goto label_16134c;
        case 0x161350u: goto label_161350;
        case 0x161354u: goto label_161354;
        case 0x161358u: goto label_161358;
        case 0x16135cu: goto label_16135c;
        case 0x161360u: goto label_161360;
        case 0x161364u: goto label_161364;
        case 0x161368u: goto label_161368;
        case 0x16136cu: goto label_16136c;
        case 0x161370u: goto label_161370;
        case 0x161374u: goto label_161374;
        default: break;
    }

    ctx->pc = 0x161340u;

label_161340:
    // 0x161340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x161340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_161344:
    // 0x161344: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x161344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_161348:
    // 0x161348: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x161348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16134c:
    // 0x16134c: 0x8c456dec  lw          $a1, 0x6DEC($v0)
    ctx->pc = 0x16134cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28140)));
label_161350:
    // 0x161350: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x161350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_161354:
    // 0x161354: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x161354u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_161358:
    // 0x161358: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x161358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_16135c:
    // 0x16135c: 0x40f809  jalr        $v0
label_161360:
    if (ctx->pc == 0x161360u) {
        ctx->pc = 0x161360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16135Cu;
        // 0x161360: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161364u;
        goto label_161364;
    }
    ctx->pc = 0x16135Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161364u);
        ctx->pc = 0x161360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16135Cu;
        // 0x161360: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16135Cu, 0x161364u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x161364u;
label_161364:
    // 0x161364: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_161368:
    // 0x161368: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16136c:
    // 0x16136c: 0x3e00008  jr          $ra
label_161370:
    if (ctx->pc == 0x161370u) {
        ctx->pc = 0x161370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16136Cu;
        // 0x161370: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161374u;
        goto label_161374;
    }
    ctx->pc = 0x16136Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16136Cu;
        // 0x161370: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16136Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161374u;
label_161374:
    // 0x161374: 0x0  nop
    ctx->pc = 0x161374u;
    // NOP
    ctx->pc = 0x161378u;
}
