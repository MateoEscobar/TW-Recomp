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

// Function: sub_001E9330
// Address: 0x1e9330 - 0x1e9368
void sub_001E9330_0x1e9330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9330_0x1e9330");
#endif

    switch (ctx->pc) {
        case 0x1e9330u: goto label_1e9330;
        case 0x1e9334u: goto label_1e9334;
        case 0x1e9338u: goto label_1e9338;
        case 0x1e933cu: goto label_1e933c;
        case 0x1e9340u: goto label_1e9340;
        case 0x1e9344u: goto label_1e9344;
        case 0x1e9348u: goto label_1e9348;
        case 0x1e934cu: goto label_1e934c;
        case 0x1e9350u: goto label_1e9350;
        case 0x1e9354u: goto label_1e9354;
        case 0x1e9358u: goto label_1e9358;
        case 0x1e935cu: goto label_1e935c;
        case 0x1e9360u: goto label_1e9360;
        case 0x1e9364u: goto label_1e9364;
        default: break;
    }

    ctx->pc = 0x1e9330u;

label_1e9330:
    // 0x1e9330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e9330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e9334:
    // 0x1e9334: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e9334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e9338:
    // 0x1e9338: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1e9338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_1e933c:
    // 0x1e933c: 0x8c860050  lw          $a2, 0x50($a0)
    ctx->pc = 0x1e933cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_1e9340:
    // 0x1e9340: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_1e9344:
    if (ctx->pc == 0x1E9344u) {
        ctx->pc = 0x1E9344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9340u;
        // 0x1e9344: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9348u;
        goto label_1e9348;
    }
    ctx->pc = 0x1E9340u;
    {
        const bool branch_taken_0x1e9340 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9340u;
        // 0x1e9344: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9340) {
            ctx->pc = 0x1E935Cu;
            goto label_1e935c;
        }
    }
    ctx->pc = 0x1E9348u;
label_1e9348:
    // 0x1e9348: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1e9348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1e934c:
    // 0x1e934c: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1e934cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_1e9350:
    // 0x1e9350: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x1e9350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_1e9354:
    // 0x1e9354: 0x60f809  jalr        $v1
label_1e9358:
    if (ctx->pc == 0x1E9358u) {
        ctx->pc = 0x1E9358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9354u;
        // 0x1e9358: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E935Cu;
        goto label_1e935c;
    }
    ctx->pc = 0x1E9354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E935Cu);
        ctx->pc = 0x1E9358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9354u;
        // 0x1e9358: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9354u, 0x1E935Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E935Cu;
label_1e935c:
    // 0x1e935c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e935cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e9360:
    // 0x1e9360: 0x3e00008  jr          $ra
label_1e9364:
    if (ctx->pc == 0x1E9364u) {
        ctx->pc = 0x1E9364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9360u;
        // 0x1e9364: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9368u;
        goto label_fallthrough_0x1e9360;
    }
    ctx->pc = 0x1E9360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9360u;
        // 0x1e9364: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e9360:
    ctx->pc = 0x1E9368u;
}
