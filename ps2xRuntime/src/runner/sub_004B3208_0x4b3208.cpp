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

// Function: sub_004B3208
// Address: 0x4b3208 - 0x4b3258
void sub_004B3208_0x4b3208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B3208_0x4b3208");
#endif

    switch (ctx->pc) {
        case 0x4b3230u: goto label_4b3230;
        default: break;
    }

    ctx->pc = 0x4b3208u;

    // 0x4b3208: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b3208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b320c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b320cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b3210: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x4b3210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x4b3214: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x4b3214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x4b3218: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x4b3218u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4b321c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B321Cu;
    {
        const bool branch_taken_0x4b321c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B3220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B321Cu;
        // 0x4b3220: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b321c) {
            ctx->pc = 0x4B3238u;
            goto label_4b3238;
        }
    }
    ctx->pc = 0x4B3224u;
    // 0x4b3224: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4b3224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3228: 0xc12c2b4  jal         func_4B0AD0
    ctx->pc = 0x4B3228u;
    SET_GPR_U32(ctx, 31, 0x4B3230u);
    ctx->pc = 0x4B322Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3228u;
    // 0x4b322c: 0x30c500ff  andi        $a1, $a2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0AD0u, 0x4B3228u, 0x4B3230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3230u;
label_4b3230:
    // 0x4b3230: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4B3230u;
    {
        const bool branch_taken_0x4b3230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3230u;
        // 0x4b3234: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3230) {
            ctx->pc = 0x4B324Cu;
            goto label_4b324c;
        }
    }
    ctx->pc = 0x4B3238u;
label_4b3238:
    // 0x4b3238: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x4b3238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4b323c: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x4b323cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x4b3240: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x4b3240u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
    // 0x4b3244: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x4b3244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x4b3248: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b3248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b324c:
    // 0x4b324c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B324Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B324Cu;
        // 0x4b3250: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B324Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3254u;
    // 0x4b3254: 0x0  nop
    ctx->pc = 0x4b3254u;
    // NOP
    ctx->pc = 0x4b3258u;
}
