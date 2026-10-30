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

// Function: sub_00105D08
// Address: 0x105d08 - 0x105d70
void sub_00105D08_0x105d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105D08_0x105d08");
#endif

    switch (ctx->pc) {
        case 0x105d30u: goto label_105d30;
        case 0x105d48u: goto label_105d48;
        case 0x105d5cu: goto label_105d5c;
        default: break;
    }

    ctx->pc = 0x105d08u;

    // 0x105d08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x105d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x105d0c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x105d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x105d10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x105d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x105d14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x105d14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105d18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x105d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x105d1c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x105d1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105d20: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x105d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x105d24: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x105d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x105d28: 0xc05d448  jal         func_175120
    ctx->pc = 0x105D28u;
    SET_GPR_U32(ctx, 31, 0x105D30u);
    ctx->pc = 0x105D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105D28u;
    // 0x105d2c: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175120u, 0x105D28u, 0x105D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105D30u;
label_105d30:
    // 0x105d30: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x105d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x105d34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x105d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105d38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x105d38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105d3c: 0xac510014  sw          $s1, 0x14($v0)
    ctx->pc = 0x105d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 17));
    // 0x105d40: 0xc05d420  jal         func_175080
    ctx->pc = 0x105D40u;
    SET_GPR_U32(ctx, 31, 0x105D48u);
    ctx->pc = 0x105D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105D40u;
    // 0x105d44: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175080u, 0x105D40u, 0x105D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105D48u;
label_105d48:
    // 0x105d48: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x105d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x105d4c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x105d4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105d50: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x105d50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x105d54: 0xc041164  jal         func_104590
    ctx->pc = 0x105D54u;
    SET_GPR_U32(ctx, 31, 0x105D5Cu);
    ctx->pc = 0x105D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105D54u;
    // 0x105d58: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104590u, 0x105D54u, 0x105D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105D5Cu;
label_105d5c:
    // 0x105d5c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x105d5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x105d60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x105d60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105d64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x105d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105d68: 0x3e00008  jr          $ra
    ctx->pc = 0x105D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105D68u;
        // 0x105d6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105D70u;
}
