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

// Function: sub_00226910
// Address: 0x226910 - 0x226950
void sub_00226910_0x226910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226910_0x226910");
#endif

    switch (ctx->pc) {
        case 0x226910u: goto label_226910;
        case 0x226914u: goto label_226914;
        case 0x226918u: goto label_226918;
        case 0x22691cu: goto label_22691c;
        case 0x226920u: goto label_226920;
        case 0x226924u: goto label_226924;
        case 0x226928u: goto label_226928;
        case 0x22692cu: goto label_22692c;
        case 0x226930u: goto label_226930;
        case 0x226934u: goto label_226934;
        case 0x226938u: goto label_226938;
        case 0x22693cu: goto label_22693c;
        case 0x226940u: goto label_226940;
        case 0x226944u: goto label_226944;
        case 0x226948u: goto label_226948;
        case 0x22694cu: goto label_22694c;
        default: break;
    }

    ctx->pc = 0x226910u;

label_226910:
    // 0x226910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x226910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_226914:
    // 0x226914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_226918:
    // 0x226918: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x226918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_22691c:
    // 0x22691c: 0x8c9000d4  lw          $s0, 0xD4($a0)
    ctx->pc = 0x22691cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
label_226920:
    // 0x226920: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
label_226924:
    if (ctx->pc == 0x226924u) {
        ctx->pc = 0x226924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226920u;
        // 0x226924: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226928u;
        goto label_226928;
    }
    ctx->pc = 0x226920u;
    {
        const bool branch_taken_0x226920 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x226920) {
            ctx->pc = 0x226924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226920u;
            // 0x226924: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226944u;
            goto label_226944;
        }
    }
    ctx->pc = 0x226928u;
label_226928:
    // 0x226928: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x226928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_22692c:
    // 0x22692c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x22692cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_226930:
    // 0x226930: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x226930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_226934:
    // 0x226934: 0x40f809  jalr        $v0
label_226938:
    if (ctx->pc == 0x226938u) {
        ctx->pc = 0x226938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226934u;
        // 0x226938: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22693Cu;
        goto label_22693c;
    }
    ctx->pc = 0x226934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22693Cu);
        ctx->pc = 0x226938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226934u;
        // 0x226938: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226934u, 0x22693Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22693Cu;
label_22693c:
    // 0x22693c: 0xae0200c8  sw          $v0, 0xC8($s0)
    ctx->pc = 0x22693cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
label_226940:
    // 0x226940: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x226940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_226944:
    // 0x226944: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_226948:
    // 0x226948: 0x3e00008  jr          $ra
label_22694c:
    if (ctx->pc == 0x22694Cu) {
        ctx->pc = 0x22694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226948u;
        // 0x22694c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226950u;
        goto label_fallthrough_0x226948;
    }
    ctx->pc = 0x226948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226948u;
        // 0x22694c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x226948:
    ctx->pc = 0x226950u;
}
