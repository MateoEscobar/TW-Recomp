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

// Function: sub_0030D188
// Address: 0x30d188 - 0x30d1c8
void sub_0030D188_0x30d188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D188_0x30d188");
#endif

    switch (ctx->pc) {
        case 0x30d188u: goto label_30d188;
        case 0x30d18cu: goto label_30d18c;
        case 0x30d190u: goto label_30d190;
        case 0x30d194u: goto label_30d194;
        case 0x30d198u: goto label_30d198;
        case 0x30d19cu: goto label_30d19c;
        case 0x30d1a0u: goto label_30d1a0;
        case 0x30d1a4u: goto label_30d1a4;
        case 0x30d1a8u: goto label_30d1a8;
        case 0x30d1acu: goto label_30d1ac;
        case 0x30d1b0u: goto label_30d1b0;
        case 0x30d1b4u: goto label_30d1b4;
        case 0x30d1b8u: goto label_30d1b8;
        case 0x30d1bcu: goto label_30d1bc;
        case 0x30d1c0u: goto label_30d1c0;
        case 0x30d1c4u: goto label_30d1c4;
        default: break;
    }

    ctx->pc = 0x30d188u;

label_30d188:
    // 0x30d188: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30d188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_30d18c:
    // 0x30d18c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30d18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_30d190:
    // 0x30d190: 0x24020062  addiu       $v0, $zero, 0x62
    ctx->pc = 0x30d190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
label_30d194:
    // 0x30d194: 0x8ca300cc  lw          $v1, 0xCC($a1)
    ctx->pc = 0x30d194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 204)));
label_30d198:
    // 0x30d198: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_30d19c:
    if (ctx->pc == 0x30D19Cu) {
        ctx->pc = 0x30D19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D198u;
        // 0x30d19c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D1A0u;
        goto label_30d1a0;
    }
    ctx->pc = 0x30D198u;
    {
        const bool branch_taken_0x30d198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30D19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D198u;
        // 0x30d19c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d198) {
            ctx->pc = 0x30D1B8u;
            goto label_30d1b8;
        }
    }
    ctx->pc = 0x30D1A0u;
label_30d1a0:
    // 0x30d1a0: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x30d1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_30d1a4:
    // 0x30d1a4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x30d1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_30d1a8:
    // 0x30d1a8: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x30d1a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_30d1ac:
    // 0x30d1ac: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x30d1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_30d1b0:
    // 0x30d1b0: 0x60f809  jalr        $v1
label_30d1b4:
    if (ctx->pc == 0x30D1B4u) {
        ctx->pc = 0x30D1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D1B0u;
        // 0x30d1b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D1B8u;
        goto label_30d1b8;
    }
    ctx->pc = 0x30D1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x30D1B8u);
        ctx->pc = 0x30D1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D1B0u;
        // 0x30d1b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D1B0u, 0x30D1B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30D1B8u;
label_30d1b8:
    // 0x30d1b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30d1b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30d1bc:
    // 0x30d1bc: 0x3e00008  jr          $ra
label_30d1c0:
    if (ctx->pc == 0x30D1C0u) {
        ctx->pc = 0x30D1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D1BCu;
        // 0x30d1c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D1C4u;
        goto label_30d1c4;
    }
    ctx->pc = 0x30D1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D1BCu;
        // 0x30d1c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D1BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D1C4u;
label_30d1c4:
    // 0x30d1c4: 0x0  nop
    ctx->pc = 0x30d1c4u;
    // NOP
    ctx->pc = 0x30d1c8u;
}
