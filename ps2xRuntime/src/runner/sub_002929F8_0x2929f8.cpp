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

// Function: sub_002929F8
// Address: 0x2929f8 - 0x292a60
void sub_002929F8_0x2929f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002929F8_0x2929f8");
#endif

    switch (ctx->pc) {
        case 0x292a1cu: goto label_292a1c;
        case 0x292a24u: goto label_292a24;
        case 0x292a34u: goto label_292a34;
        case 0x292a44u: goto label_292a44;
        default: break;
    }

    ctx->pc = 0x2929f8u;

    // 0x2929f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2929f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2929fc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2929fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x292a00: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x292a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x292a04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x292a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292a08: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x292a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x292a0c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x292a0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292a10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x292a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x292a14: 0xc0e4060  jal         func_390180
    ctx->pc = 0x292A14u;
    SET_GPR_U32(ctx, 31, 0x292A1Cu);
    ctx->pc = 0x292A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292A14u;
    // 0x292a18: 0x30d100ff  andi        $s1, $a2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x292A14u, 0x292A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292A1Cu;
label_292a1c:
    // 0x292a1c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x292A1Cu;
    SET_GPR_U32(ctx, 31, 0x292A24u);
    ctx->pc = 0x292A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292A1Cu;
    // 0x292a20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x292A1Cu, 0x292A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292A24u;
label_292a24:
    // 0x292a24: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x292A24u;
    {
        const bool branch_taken_0x292a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292a24) {
            ctx->pc = 0x292A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292A24u;
            // 0x292a28: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292A48u;
            goto label_292a48;
        }
    }
    ctx->pc = 0x292A2Cu;
    // 0x292a2c: 0xc087502  jal         func_21D408
    ctx->pc = 0x292A2Cu;
    SET_GPR_U32(ctx, 31, 0x292A34u);
    ctx->pc = 0x292A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292A2Cu;
    // 0x292a30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x292A2Cu, 0x292A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292A34u;
label_292a34:
    // 0x292a34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x292a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292a38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x292a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292a3c: 0xc0a447a  jal         func_2911E8
    ctx->pc = 0x292A3Cu;
    SET_GPR_U32(ctx, 31, 0x292A44u);
    ctx->pc = 0x292A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292A3Cu;
    // 0x292a40: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2911E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911E8u, 0x292A3Cu, 0x292A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292A44u;
label_292a44:
    // 0x292a44: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x292a44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_292a48:
    // 0x292a48: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x292a48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292a4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x292a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292a50: 0x3e00008  jr          $ra
    ctx->pc = 0x292A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292A50u;
        // 0x292a54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292A58u;
    // 0x292a58: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x292a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x292a5c: 0x0  nop
    ctx->pc = 0x292a5cu;
    // NOP
    ctx->pc = 0x292a60u;
}
