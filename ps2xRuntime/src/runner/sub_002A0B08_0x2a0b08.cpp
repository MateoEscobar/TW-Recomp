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

// Function: sub_002A0B08
// Address: 0x2a0b08 - 0x2a0b68
void sub_002A0B08_0x2a0b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0B08_0x2a0b08");
#endif

    switch (ctx->pc) {
        case 0x2a0b24u: goto label_2a0b24;
        case 0x2a0b2cu: goto label_2a0b2c;
        case 0x2a0b34u: goto label_2a0b34;
        case 0x2a0b48u: goto label_2a0b48;
        case 0x2a0b54u: goto label_2a0b54;
        default: break;
    }

    ctx->pc = 0x2a0b08u;

    // 0x2a0b08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a0b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a0b0c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2a0b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2a0b10: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2a0b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2a0b14: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a0b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a0b18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a0b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a0b1c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2A0B1Cu;
    SET_GPR_U32(ctx, 31, 0x2A0B24u);
    ctx->pc = 0x2A0B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0B1Cu;
    // 0x2a0b20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A0B1Cu, 0x2A0B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0B24u;
label_2a0b24:
    // 0x2a0b24: 0xc087502  jal         func_21D408
    ctx->pc = 0x2A0B24u;
    SET_GPR_U32(ctx, 31, 0x2A0B2Cu);
    ctx->pc = 0x2A0B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0B24u;
    // 0x2a0b28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2A0B24u, 0x2A0B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0B2Cu;
label_2a0b2c:
    // 0x2a0b2c: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2A0B2Cu;
    SET_GPR_U32(ctx, 31, 0x2A0B34u);
    ctx->pc = 0x2A0B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0B2Cu;
    // 0x2a0b30: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2A0B2Cu, 0x2A0B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0B34u;
label_2a0b34:
    // 0x2a0b34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a0b34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0b38: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0B38u;
    {
        const bool branch_taken_0x2a0b38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0B38u;
        // 0x2a0b3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0b38) {
            ctx->pc = 0x2A0B48u;
            goto label_2a0b48;
        }
    }
    ctx->pc = 0x2A0B40u;
    // 0x2a0b40: 0xc0a82da  jal         func_2A0B68
    ctx->pc = 0x2A0B40u;
    SET_GPR_U32(ctx, 31, 0x2A0B48u);
    ctx->pc = 0x2A0B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0B40u;
    // 0x2a0b44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B68u, 0x2A0B40u, 0x2A0B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0B48u;
label_2a0b48:
    // 0x2a0b48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a0b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0b4c: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2A0B4Cu;
    SET_GPR_U32(ctx, 31, 0x2A0B54u);
    ctx->pc = 0x2A0B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0B4Cu;
    // 0x2a0b50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2A0B4Cu, 0x2A0B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0B54u;
label_2a0b54:
    // 0x2a0b54: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2a0b54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a0b58: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a0b58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a0b5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a0b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a0b60: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0B60u;
        // 0x2a0b64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0B68u;
}
