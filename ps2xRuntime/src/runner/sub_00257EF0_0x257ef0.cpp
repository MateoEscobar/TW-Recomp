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

// Function: sub_00257EF0
// Address: 0x257ef0 - 0x257f38
void sub_00257EF0_0x257ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257EF0_0x257ef0");
#endif

    switch (ctx->pc) {
        case 0x257f18u: goto label_257f18;
        case 0x257f28u: goto label_257f28;
        default: break;
    }

    ctx->pc = 0x257ef0u;

    // 0x257ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x257ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x257ef4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x257ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x257ef8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x257ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x257efc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x257efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x257f00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x257f00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257f04: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x257f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x257f08: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x257F08u;
    {
        const bool branch_taken_0x257f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x257f08) {
            ctx->pc = 0x257F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257F08u;
            // 0x257f0c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257F2Cu;
            goto label_257f2c;
        }
    }
    ctx->pc = 0x257F10u;
    // 0x257f10: 0xc089f98  jal         func_227E60
    ctx->pc = 0x257F10u;
    SET_GPR_U32(ctx, 31, 0x257F18u);
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x257F10u, 0x257F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257F18u;
label_257f18:
    // 0x257f18: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x257F18u;
    {
        const bool branch_taken_0x257f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257f18) {
            ctx->pc = 0x257F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257F18u;
            // 0x257f1c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257F2Cu;
            goto label_257f2c;
        }
    }
    ctx->pc = 0x257F20u;
    // 0x257f20: 0xc0960cc  jal         func_258330
    ctx->pc = 0x257F20u;
    SET_GPR_U32(ctx, 31, 0x257F28u);
    ctx->pc = 0x257F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257F20u;
    // 0x257f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258330u, 0x257F20u, 0x257F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257F28u;
label_257f28:
    // 0x257f28: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x257f28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_257f2c:
    // 0x257f2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x257f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257f30: 0x3e00008  jr          $ra
    ctx->pc = 0x257F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257F30u;
        // 0x257f34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257F38u;
}
