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

// Function: sub_003068F8
// Address: 0x3068f8 - 0x306938
void sub_003068F8_0x3068f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003068F8_0x3068f8");
#endif

    switch (ctx->pc) {
        case 0x3068f8u: goto label_3068f8;
        case 0x3068fcu: goto label_3068fc;
        case 0x306900u: goto label_306900;
        case 0x306904u: goto label_306904;
        case 0x306908u: goto label_306908;
        case 0x30690cu: goto label_30690c;
        case 0x306910u: goto label_306910;
        case 0x306914u: goto label_306914;
        case 0x306918u: goto label_306918;
        case 0x30691cu: goto label_30691c;
        case 0x306920u: goto label_306920;
        case 0x306924u: goto label_306924;
        case 0x306928u: goto label_306928;
        case 0x30692cu: goto label_30692c;
        case 0x306930u: goto label_306930;
        case 0x306934u: goto label_306934;
        default: break;
    }

    ctx->pc = 0x3068f8u;

label_3068f8:
    // 0x3068f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3068f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3068fc:
    // 0x3068fc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3068fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_306900:
    // 0x306900: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x306900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_306904:
    // 0x306904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x306904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_306908:
    // 0x306908: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x306908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30690c:
    // 0x30690c: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x30690cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_306910:
    // 0x306910: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x306910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_306914:
    // 0x306914: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x306914u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_306918:
    // 0x306918: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x306918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_30691c:
    // 0x30691c: 0x40f809  jalr        $v0
label_306920:
    if (ctx->pc == 0x306920u) {
        ctx->pc = 0x306920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30691Cu;
        // 0x306920: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306924u;
        goto label_306924;
    }
    ctx->pc = 0x30691Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x306924u);
        ctx->pc = 0x306920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30691Cu;
        // 0x306920: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30691Cu, 0x306924u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x306924u;
label_306924:
    // 0x306924: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x306924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_306928:
    // 0x306928: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x306928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30692c:
    // 0x30692c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30692cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_306930:
    // 0x306930: 0x3e00008  jr          $ra
label_306934:
    if (ctx->pc == 0x306934u) {
        ctx->pc = 0x306934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306930u;
        // 0x306934: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306938u;
        goto label_fallthrough_0x306930;
    }
    ctx->pc = 0x306930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306930u;
        // 0x306934: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x306930:
    ctx->pc = 0x306938u;
}
