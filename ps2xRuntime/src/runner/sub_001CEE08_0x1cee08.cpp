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

// Function: sub_001CEE08
// Address: 0x1cee08 - 0x1cee58
void sub_001CEE08_0x1cee08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CEE08_0x1cee08");
#endif

    switch (ctx->pc) {
        case 0x1cee1cu: goto label_1cee1c;
        case 0x1cee3cu: goto label_1cee3c;
        case 0x1cee44u: goto label_1cee44;
        default: break;
    }

    ctx->pc = 0x1cee08u;

    // 0x1cee08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cee08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cee0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cee0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1cee10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cee10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cee14: 0xc074612  jal         func_1D1848
    ctx->pc = 0x1CEE14u;
    SET_GPR_U32(ctx, 31, 0x1CEE1Cu);
    ctx->pc = 0x1CEE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEE14u;
    // 0x1cee18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1848u, 0x1CEE14u, 0x1CEE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEE1Cu;
label_1cee1c:
    // 0x1cee1c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1cee1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1cee20: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1cee20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1cee24: 0x2463b188  addiu       $v1, $v1, -0x4E78
    ctx->pc = 0x1cee24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947208));
    // 0x1cee28: 0x2442b1b0  addiu       $v0, $v0, -0x4E50
    ctx->pc = 0x1cee28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947248));
    // 0x1cee2c: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x1cee2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
    // 0x1cee30: 0x260407c0  addiu       $a0, $s0, 0x7C0
    ctx->pc = 0x1cee30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1984));
    // 0x1cee34: 0xc0733e2  jal         func_1CCF88
    ctx->pc = 0x1CEE34u;
    SET_GPR_U32(ctx, 31, 0x1CEE3Cu);
    ctx->pc = 0x1CEE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEE34u;
    // 0x1cee38: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1CEE34u, 0x1CEE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEE3Cu;
label_1cee3c:
    // 0x1cee3c: 0xc0733e2  jal         func_1CCF88
    ctx->pc = 0x1CEE3Cu;
    SET_GPR_U32(ctx, 31, 0x1CEE44u);
    ctx->pc = 0x1CEE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEE3Cu;
    // 0x1cee40: 0x26040890  addiu       $a0, $s0, 0x890 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1CEE3Cu, 0x1CEE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEE44u;
label_1cee44:
    // 0x1cee44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cee44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cee48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cee48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cee4c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cee4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cee50: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEE50u;
        // 0x1cee54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEE58u;
}
