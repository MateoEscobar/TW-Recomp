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

// Function: sub_00196D18
// Address: 0x196d18 - 0x196d60
void sub_00196D18_0x196d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196D18_0x196d18");
#endif

    switch (ctx->pc) {
        case 0x196d2cu: goto label_196d2c;
        case 0x196d34u: goto label_196d34;
        case 0x196d40u: goto label_196d40;
        default: break;
    }

    ctx->pc = 0x196d18u;

    // 0x196d18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x196d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x196d1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x196d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x196d20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x196d24: 0xc060ab2  jal         func_182AC8
    ctx->pc = 0x196D24u;
    SET_GPR_U32(ctx, 31, 0x196D2Cu);
    ctx->pc = 0x196D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196D24u;
    // 0x196d28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182AC8u, 0x196D24u, 0x196D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196D2Cu;
label_196d2c:
    // 0x196d2c: 0xc12107a  jal         func_4841E8
    ctx->pc = 0x196D2Cu;
    SET_GPR_U32(ctx, 31, 0x196D34u);
    ctx->pc = 0x4841E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4841E8u, 0x196D2Cu, 0x196D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196D34u;
label_196d34:
    // 0x196d34: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x196d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x196d38: 0xc066196  jal         func_198658
    ctx->pc = 0x196D38u;
    SET_GPR_U32(ctx, 31, 0x196D40u);
    ctx->pc = 0x196D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196D38u;
    // 0x196d3c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198658u, 0x196D38u, 0x196D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196D40u;
label_196d40:
    // 0x196d40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x196d40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196d44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196d48: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x196d48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x196D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196D4Cu;
        // 0x196d50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196D54u;
    // 0x196d54: 0x0  nop
    ctx->pc = 0x196d54u;
    // NOP
    // 0x196d58: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x196d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x196d5c: 0x0  nop
    ctx->pc = 0x196d5cu;
    // NOP
    ctx->pc = 0x196d60u;
}
