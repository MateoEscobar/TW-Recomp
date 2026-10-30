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

// Function: sub_0030D108
// Address: 0x30d108 - 0x30d148
void sub_0030D108_0x30d108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D108_0x30d108");
#endif

    switch (ctx->pc) {
        case 0x30d108u: goto label_30d108;
        case 0x30d10cu: goto label_30d10c;
        case 0x30d110u: goto label_30d110;
        case 0x30d114u: goto label_30d114;
        case 0x30d118u: goto label_30d118;
        case 0x30d11cu: goto label_30d11c;
        case 0x30d120u: goto label_30d120;
        case 0x30d124u: goto label_30d124;
        case 0x30d128u: goto label_30d128;
        case 0x30d12cu: goto label_30d12c;
        case 0x30d130u: goto label_30d130;
        case 0x30d134u: goto label_30d134;
        case 0x30d138u: goto label_30d138;
        case 0x30d13cu: goto label_30d13c;
        case 0x30d140u: goto label_30d140;
        case 0x30d144u: goto label_30d144;
        default: break;
    }

    ctx->pc = 0x30d108u;

label_30d108:
    // 0x30d108: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30d108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_30d10c:
    // 0x30d10c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30d10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_30d110:
    // 0x30d110: 0x24020062  addiu       $v0, $zero, 0x62
    ctx->pc = 0x30d110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
label_30d114:
    // 0x30d114: 0x8ca300cc  lw          $v1, 0xCC($a1)
    ctx->pc = 0x30d114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 204)));
label_30d118:
    // 0x30d118: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_30d11c:
    if (ctx->pc == 0x30D11Cu) {
        ctx->pc = 0x30D11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D118u;
        // 0x30d11c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D120u;
        goto label_30d120;
    }
    ctx->pc = 0x30D118u;
    {
        const bool branch_taken_0x30d118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30D11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D118u;
        // 0x30d11c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d118) {
            ctx->pc = 0x30D138u;
            goto label_30d138;
        }
    }
    ctx->pc = 0x30D120u;
label_30d120:
    // 0x30d120: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x30d120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_30d124:
    // 0x30d124: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x30d124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_30d128:
    // 0x30d128: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x30d128u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_30d12c:
    // 0x30d12c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x30d12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_30d130:
    // 0x30d130: 0x60f809  jalr        $v1
label_30d134:
    if (ctx->pc == 0x30D134u) {
        ctx->pc = 0x30D134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D130u;
        // 0x30d134: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D138u;
        goto label_30d138;
    }
    ctx->pc = 0x30D130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x30D138u);
        ctx->pc = 0x30D134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D130u;
        // 0x30d134: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D130u, 0x30D138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30D138u;
label_30d138:
    // 0x30d138: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30d138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30d13c:
    // 0x30d13c: 0x3e00008  jr          $ra
label_30d140:
    if (ctx->pc == 0x30D140u) {
        ctx->pc = 0x30D140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D13Cu;
        // 0x30d140: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D144u;
        goto label_30d144;
    }
    ctx->pc = 0x30D13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D13Cu;
        // 0x30d140: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D13Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D144u;
label_30d144:
    // 0x30d144: 0x0  nop
    ctx->pc = 0x30d144u;
    // NOP
    ctx->pc = 0x30d148u;
}
