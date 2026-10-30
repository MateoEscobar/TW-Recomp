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

// Function: sub_004F0108
// Address: 0x4f0108 - 0x4f0138
void sub_004F0108_0x4f0108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F0108_0x4f0108");
#endif

    switch (ctx->pc) {
        case 0x4f0108u: goto label_4f0108;
        case 0x4f010cu: goto label_4f010c;
        case 0x4f0110u: goto label_4f0110;
        case 0x4f0114u: goto label_4f0114;
        case 0x4f0118u: goto label_4f0118;
        case 0x4f011cu: goto label_4f011c;
        case 0x4f0120u: goto label_4f0120;
        case 0x4f0124u: goto label_4f0124;
        case 0x4f0128u: goto label_4f0128;
        case 0x4f012cu: goto label_4f012c;
        case 0x4f0130u: goto label_4f0130;
        case 0x4f0134u: goto label_4f0134;
        default: break;
    }

    ctx->pc = 0x4f0108u;

label_4f0108:
    // 0x4f0108: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f0108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4f010c:
    // 0x4f010c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f010cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f0110:
    // 0x4f0110: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4f0110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4f0114:
    // 0x4f0114: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x4f0114u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_4f0118:
    // 0x4f0118: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4f0118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4f011c:
    // 0x4f011c: 0x40f809  jalr        $v0
label_4f0120:
    if (ctx->pc == 0x4F0120u) {
        ctx->pc = 0x4F0120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F011Cu;
        // 0x4f0120: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0124u;
        goto label_4f0124;
    }
    ctx->pc = 0x4F011Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F0124u);
        ctx->pc = 0x4F0120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F011Cu;
        // 0x4f0120: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F011Cu, 0x4F0124u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F0124u;
label_4f0124:
    // 0x4f0124: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f0124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f0128:
    // 0x4f0128: 0x28420012  slti        $v0, $v0, 0x12
    ctx->pc = 0x4f0128u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
label_4f012c:
    // 0x4f012c: 0x3e00008  jr          $ra
label_4f0130:
    if (ctx->pc == 0x4F0130u) {
        ctx->pc = 0x4F0130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F012Cu;
        // 0x4f0130: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0134u;
        goto label_4f0134;
    }
    ctx->pc = 0x4F012Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F0130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F012Cu;
        // 0x4f0130: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F012Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F0134u;
label_4f0134:
    // 0x4f0134: 0x0  nop
    ctx->pc = 0x4f0134u;
    // NOP
    ctx->pc = 0x4f0138u;
}
