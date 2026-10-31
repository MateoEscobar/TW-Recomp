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

// Function: sub_00291D08
// Address: 0x291d08 - 0x291d48
void sub_00291D08_0x291d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291D08_0x291d08");
#endif

    switch (ctx->pc) {
        case 0x291d38u: goto label_291d38;
        default: break;
    }

    ctx->pc = 0x291d08u;

    // 0x291d08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x291d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x291d0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x291d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x291d10: 0x908202d5  lbu         $v0, 0x2D5($a0)
    ctx->pc = 0x291d10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 725)));
    // 0x291d14: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x291D14u;
    {
        const bool branch_taken_0x291d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291D14u;
        // 0x291d18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291d14) {
            ctx->pc = 0x291D3Cu;
            goto label_291d3c;
        }
    }
    ctx->pc = 0x291D1Cu;
    // 0x291d1c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x291d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x291d20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x291d20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291d24: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x291d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x291d28: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x291d28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x291d2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x291d2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291d30: 0xc0a4d90  jal         func_293640
    ctx->pc = 0x291D30u;
    SET_GPR_U32(ctx, 31, 0x291D38u);
    ctx->pc = 0x291D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291D30u;
    // 0x291d34: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293640u, 0x291D30u, 0x291D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291D38u;
label_291d38:
    // 0x291d38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x291d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_291d3c:
    // 0x291d3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x291d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291d40: 0x3e00008  jr          $ra
    ctx->pc = 0x291D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291D40u;
        // 0x291d44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291D48u;
}
