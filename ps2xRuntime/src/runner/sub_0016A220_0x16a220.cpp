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

// Function: sub_0016A220
// Address: 0x16a220 - 0x16a260
void sub_0016A220_0x16a220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A220_0x16a220");
#endif

    switch (ctx->pc) {
        case 0x16a248u: goto label_16a248;
        default: break;
    }

    ctx->pc = 0x16a220u;

    // 0x16a220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16a220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16a224: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16a224u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16a228: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16a228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16a22c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16a22cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16a230: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16a230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16a234: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16a234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a238: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A238u;
    {
        const bool branch_taken_0x16a238 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16A23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A238u;
        // 0x16a23c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a238) {
            ctx->pc = 0x16A24Cu;
            goto label_16a24c;
        }
    }
    ctx->pc = 0x16A240u;
    // 0x16a240: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16A240u;
    SET_GPR_U32(ctx, 31, 0x16A248u);
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16A240u, 0x16A248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A248u;
label_16a248:
    // 0x16a248: 0xa05000d4  sb          $s0, 0xD4($v0)
    ctx->pc = 0x16a248u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 212), (uint8_t)GPR_U32(ctx, 16));
label_16a24c:
    // 0x16a24c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16a24cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a250: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16a250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a254: 0x3e00008  jr          $ra
    ctx->pc = 0x16A254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A254u;
        // 0x16a258: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A25Cu;
    // 0x16a25c: 0x0  nop
    ctx->pc = 0x16a25cu;
    // NOP
    ctx->pc = 0x16a260u;
}
