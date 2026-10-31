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

// Function: sub_00110C70
// Address: 0x110c70 - 0x110cc0
void sub_00110C70_0x110c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110C70_0x110c70");
#endif

    switch (ctx->pc) {
        case 0x110c90u: goto label_110c90;
        case 0x110cacu: goto label_110cac;
        default: break;
    }

    ctx->pc = 0x110c70u;

    // 0x110c70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x110c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x110c74: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x110c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x110c78: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x110c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x110c7c: 0x34424274  ori         $v0, $v0, 0x4274
    ctx->pc = 0x110c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17012);
    // 0x110c80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x110c80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110c88: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x110C88u;
    SET_GPR_U32(ctx, 31, 0x110C90u);
    ctx->pc = 0x110C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110C88u;
    // 0x110c8c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x110C88u, 0x110C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110C90u;
label_110c90:
    // 0x110c90: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x110C90u;
    {
        const bool branch_taken_0x110c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110C90u;
        // 0x110c94: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110c90) {
            ctx->pc = 0x110CACu;
            goto label_110cac;
        }
    }
    ctx->pc = 0x110C98u;
    // 0x110c98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c9c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x110c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x110ca0: 0x240607d0  addiu       $a2, $zero, 0x7D0
    ctx->pc = 0x110ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x110ca4: 0xc0440dc  jal         func_110370
    ctx->pc = 0x110CA4u;
    SET_GPR_U32(ctx, 31, 0x110CACu);
    ctx->pc = 0x110CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110CA4u;
    // 0x110ca8: 0x8c454274  lw          $a1, 0x4274($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17012)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110370u, 0x110CA4u, 0x110CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110CACu;
label_110cac:
    // 0x110cac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x110cacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110cb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x110CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110CB4u;
        // 0x110cb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110CBCu;
    // 0x110cbc: 0x0  nop
    ctx->pc = 0x110cbcu;
    // NOP
    ctx->pc = 0x110cc0u;
}
