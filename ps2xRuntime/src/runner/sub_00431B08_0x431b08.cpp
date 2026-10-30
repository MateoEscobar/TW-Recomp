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

// Function: sub_00431B08
// Address: 0x431b08 - 0x431b58
void sub_00431B08_0x431b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00431B08_0x431b08");
#endif

    switch (ctx->pc) {
        case 0x431b24u: goto label_431b24;
        case 0x431b48u: goto label_431b48;
        default: break;
    }

    ctx->pc = 0x431b08u;

    // 0x431b08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x431b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x431b0c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x431b0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431b10: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x431b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x431b14: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x431b14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431b18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x431b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x431b1c: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x431B1Cu;
    SET_GPR_U32(ctx, 31, 0x431B24u);
    ctx->pc = 0x431B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431B1Cu;
    // 0x431b20: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x431B1Cu, 0x431B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431B24u;
label_431b24:
    // 0x431b24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x431b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x431b28: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x431b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x431b2c: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x431b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x431b30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x431b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431b34: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x431b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x431b38: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x431b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431b3c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x431b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x431b40: 0xc10c82c  jal         func_4320B0
    ctx->pc = 0x431B40u;
    SET_GPR_U32(ctx, 31, 0x431B48u);
    ctx->pc = 0x431B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431B40u;
    // 0x431b44: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4320B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4320B0u, 0x431B40u, 0x431B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431B48u;
label_431b48:
    // 0x431b48: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x431b48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x431b4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x431b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x431b50: 0x3e00008  jr          $ra
    ctx->pc = 0x431B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x431B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431B50u;
        // 0x431b54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x431B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x431B58u;
}
