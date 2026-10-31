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

// Function: sub_004DCA28
// Address: 0x4dca28 - 0x4dca60
void sub_004DCA28_0x4dca28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DCA28_0x4dca28");
#endif

    switch (ctx->pc) {
        case 0x4dca28u: goto label_4dca28;
        case 0x4dca2cu: goto label_4dca2c;
        case 0x4dca30u: goto label_4dca30;
        case 0x4dca34u: goto label_4dca34;
        case 0x4dca38u: goto label_4dca38;
        case 0x4dca3cu: goto label_4dca3c;
        case 0x4dca40u: goto label_4dca40;
        case 0x4dca44u: goto label_4dca44;
        case 0x4dca48u: goto label_4dca48;
        case 0x4dca4cu: goto label_4dca4c;
        case 0x4dca50u: goto label_4dca50;
        case 0x4dca54u: goto label_4dca54;
        case 0x4dca58u: goto label_4dca58;
        case 0x4dca5cu: goto label_4dca5c;
        default: break;
    }

    ctx->pc = 0x4dca28u;

label_4dca28:
    // 0x4dca28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4dca28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4dca2c:
    // 0x4dca2c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4dca2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4dca30:
    // 0x4dca30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dca30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4dca34:
    // 0x4dca34: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4dca34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4dca38:
    // 0x4dca38: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4dca38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4dca3c:
    // 0x4dca3c: 0x84650028  lh          $a1, 0x28($v1)
    ctx->pc = 0x4dca3cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_4dca40:
    // 0x4dca40: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x4dca40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_4dca44:
    // 0x4dca44: 0x40f809  jalr        $v0
label_4dca48:
    if (ctx->pc == 0x4DCA48u) {
        ctx->pc = 0x4DCA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCA44u;
        // 0x4dca48: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DCA4Cu;
        goto label_4dca4c;
    }
    ctx->pc = 0x4DCA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4DCA4Cu);
        ctx->pc = 0x4DCA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCA44u;
        // 0x4dca48: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DCA44u, 0x4DCA4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DCA4Cu;
label_4dca4c:
    // 0x4dca4c: 0x50102f  dsubu       $v0, $v0, $s0
    ctx->pc = 0x4dca4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 16));
label_4dca50:
    // 0x4dca50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dca50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4dca54:
    // 0x4dca54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4dca54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dca58:
    // 0x4dca58: 0x3e00008  jr          $ra
label_4dca5c:
    if (ctx->pc == 0x4DCA5Cu) {
        ctx->pc = 0x4DCA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCA58u;
        // 0x4dca5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DCA60u;
        goto label_fallthrough_0x4dca58;
    }
    ctx->pc = 0x4DCA58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DCA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCA58u;
        // 0x4dca5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DCA58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4dca58:
    ctx->pc = 0x4DCA60u;
}
