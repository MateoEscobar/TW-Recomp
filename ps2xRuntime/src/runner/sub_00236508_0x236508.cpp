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

// Function: sub_00236508
// Address: 0x236508 - 0x236548
void sub_00236508_0x236508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236508_0x236508");
#endif

    switch (ctx->pc) {
        case 0x236508u: goto label_236508;
        case 0x23650cu: goto label_23650c;
        case 0x236510u: goto label_236510;
        case 0x236514u: goto label_236514;
        case 0x236518u: goto label_236518;
        case 0x23651cu: goto label_23651c;
        case 0x236520u: goto label_236520;
        case 0x236524u: goto label_236524;
        case 0x236528u: goto label_236528;
        case 0x23652cu: goto label_23652c;
        case 0x236530u: goto label_236530;
        case 0x236534u: goto label_236534;
        case 0x236538u: goto label_236538;
        case 0x23653cu: goto label_23653c;
        case 0x236540u: goto label_236540;
        case 0x236544u: goto label_236544;
        default: break;
    }

    ctx->pc = 0x236508u;

label_236508:
    // 0x236508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23650c:
    // 0x23650c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23650cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_236510:
    // 0x236510: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x236510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_236514:
    // 0x236514: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x236514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_236518:
    // 0x236518: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x236518u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_23651c:
    // 0x23651c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x23651cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_236520:
    // 0x236520: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x236520u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_236524:
    // 0x236524: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x236524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_236528:
    // 0x236528: 0x40f809  jalr        $v0
label_23652c:
    if (ctx->pc == 0x23652Cu) {
        ctx->pc = 0x23652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236528u;
        // 0x23652c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236530u;
        goto label_236530;
    }
    ctx->pc = 0x236528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x236530u);
        ctx->pc = 0x23652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236528u;
        // 0x23652c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236528u, 0x236530u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236530u;
label_236530:
    // 0x236530: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x236530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_236534:
    // 0x236534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x236534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236538:
    // 0x236538: 0xac62027c  sw          $v0, 0x27C($v1)
    ctx->pc = 0x236538u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 636), GPR_U32(ctx, 2));
label_23653c:
    // 0x23653c: 0x3e00008  jr          $ra
label_236540:
    if (ctx->pc == 0x236540u) {
        ctx->pc = 0x236540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23653Cu;
        // 0x236540: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236544u;
        goto label_236544;
    }
    ctx->pc = 0x23653Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23653Cu;
        // 0x236540: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23653Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236544u;
label_236544:
    // 0x236544: 0x0  nop
    ctx->pc = 0x236544u;
    // NOP
    ctx->pc = 0x236548u;
}
