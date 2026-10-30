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

// Function: sub_001C2228
// Address: 0x1c2228 - 0x1c2270
void sub_001C2228_0x1c2228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2228_0x1c2228");
#endif

    switch (ctx->pc) {
        case 0x1c224cu: goto label_1c224c;
        case 0x1c2260u: goto label_1c2260;
        default: break;
    }

    ctx->pc = 0x1c2228u;

    // 0x1c2228: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c2228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c222c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c222cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c2230: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c2234: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c2234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2238: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1c2238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c223c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C223Cu;
    {
        const bool branch_taken_0x1c223c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c223c) {
            ctx->pc = 0x1C2240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C223Cu;
            // 0x1c2240: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2264u;
            goto label_1c2264;
        }
    }
    ctx->pc = 0x1C2244u;
    // 0x1c2244: 0xc0687c4  jal         func_1A1F10
    ctx->pc = 0x1C2244u;
    SET_GPR_U32(ctx, 31, 0x1C224Cu);
    ctx->pc = 0x1C2248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2244u;
    // 0x1c2248: 0x260400b0  addiu       $a0, $s0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1C2244u, 0x1C224Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C224Cu;
label_1c224c:
    // 0x1c224c: 0x8e0203a0  lw          $v0, 0x3A0($s0)
    ctx->pc = 0x1c224cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 928)));
    // 0x1c2250: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2250u;
    {
        const bool branch_taken_0x1c2250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2250u;
        // 0x1c2254: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2250) {
            ctx->pc = 0x1C2260u;
            goto label_1c2260;
        }
    }
    ctx->pc = 0x1C2258u;
    // 0x1c2258: 0xc06e4a4  jal         func_1B9290
    ctx->pc = 0x1C2258u;
    SET_GPR_U32(ctx, 31, 0x1C2260u);
    ctx->pc = 0x1C225Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2258u;
    // 0x1c225c: 0x260401b0  addiu       $a0, $s0, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9290u, 0x1C2258u, 0x1C2260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2260u;
label_1c2260:
    // 0x1c2260: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c2260u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c2264:
    // 0x1c2264: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c2264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2268: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2268u;
        // 0x1c226c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2270u;
}
