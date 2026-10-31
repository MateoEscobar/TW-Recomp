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

// Function: sub_00386450
// Address: 0x386450 - 0x386488
void sub_00386450_0x386450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386450_0x386450");
#endif

    switch (ctx->pc) {
        case 0x386450u: goto label_386450;
        case 0x386454u: goto label_386454;
        case 0x386458u: goto label_386458;
        case 0x38645cu: goto label_38645c;
        case 0x386460u: goto label_386460;
        case 0x386464u: goto label_386464;
        case 0x386468u: goto label_386468;
        case 0x38646cu: goto label_38646c;
        case 0x386470u: goto label_386470;
        case 0x386474u: goto label_386474;
        case 0x386478u: goto label_386478;
        case 0x38647cu: goto label_38647c;
        case 0x386480u: goto label_386480;
        case 0x386484u: goto label_386484;
        default: break;
    }

    ctx->pc = 0x386450u;

label_386450:
    // 0x386450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x386450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_386454:
    // 0x386454: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x386454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_386458:
    // 0x386458: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x386458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_38645c:
    // 0x38645c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x38645cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_386460:
    // 0x386460: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x386460u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_386464:
    // 0x386464: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x386464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_386468:
    // 0x386468: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x386468u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_38646c:
    // 0x38646c: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x38646cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_386470:
    // 0x386470: 0x60f809  jalr        $v1
label_386474:
    if (ctx->pc == 0x386474u) {
        ctx->pc = 0x386474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386470u;
        // 0x386474: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386478u;
        goto label_386478;
    }
    ctx->pc = 0x386470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x386478u);
        ctx->pc = 0x386474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386470u;
        // 0x386474: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386470u, 0x386478u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x386478u;
label_386478:
    // 0x386478: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x386478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38647c:
    // 0x38647c: 0x3e00008  jr          $ra
label_386480:
    if (ctx->pc == 0x386480u) {
        ctx->pc = 0x386480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38647Cu;
        // 0x386480: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386484u;
        goto label_386484;
    }
    ctx->pc = 0x38647Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38647Cu;
        // 0x386480: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38647Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x386484u;
label_386484:
    // 0x386484: 0x0  nop
    ctx->pc = 0x386484u;
    // NOP
    ctx->pc = 0x386488u;
}
