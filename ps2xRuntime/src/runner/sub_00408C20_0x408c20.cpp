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

// Function: sub_00408C20
// Address: 0x408c20 - 0x408ca0
void sub_00408C20_0x408c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00408C20_0x408c20");
#endif

    switch (ctx->pc) {
        case 0x408c3cu: goto label_408c3c;
        case 0x408c50u: goto label_408c50;
        case 0x408c64u: goto label_408c64;
        case 0x408c78u: goto label_408c78;
        case 0x408c88u: goto label_408c88;
        default: break;
    }

    ctx->pc = 0x408c20u;

    // 0x408c20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x408c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x408c24: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x408c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x408c28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x408c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x408c2c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x408c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x408c30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x408c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x408c34: 0xc10314e  jal         func_40C538
    ctx->pc = 0x408C34u;
    SET_GPR_U32(ctx, 31, 0x408C3Cu);
    ctx->pc = 0x408C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408C34u;
    // 0x408c38: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C538u, 0x408C34u, 0x408C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408C3Cu;
label_408c3c:
    // 0x408c3c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x408C3Cu;
    {
        const bool branch_taken_0x408c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x408C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408C3Cu;
        // 0x408c40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408c3c) {
            ctx->pc = 0x408C58u;
            goto label_408c58;
        }
    }
    ctx->pc = 0x408C44u;
    // 0x408c44: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x408c44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x408c48: 0xc10241a  jal         func_409068
    ctx->pc = 0x408C48u;
    SET_GPR_U32(ctx, 31, 0x408C50u);
    ctx->pc = 0x408C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408C48u;
    // 0x408c4c: 0x24a57e00  addiu       $a1, $a1, 0x7E00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409068u, 0x408C48u, 0x408C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408C50u;
label_408c50:
    // 0x408c50: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x408C50u;
    {
        const bool branch_taken_0x408c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x408C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408C50u;
        // 0x408c54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408c50) {
            ctx->pc = 0x408C8Cu;
            goto label_408c8c;
        }
    }
    ctx->pc = 0x408C58u;
label_408c58:
    // 0x408c58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x408c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x408c5c: 0xc1024b6  jal         func_4092D8
    ctx->pc = 0x408C5Cu;
    SET_GPR_U32(ctx, 31, 0x408C64u);
    ctx->pc = 0x408C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408C5Cu;
    // 0x408c60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4092D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4092D8u, 0x408C5Cu, 0x408C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408C64u;
label_408c64:
    // 0x408c64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x408c64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408c68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x408c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408c6c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x408c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x408c70: 0xc1024b6  jal         func_4092D8
    ctx->pc = 0x408C70u;
    SET_GPR_U32(ctx, 31, 0x408C78u);
    ctx->pc = 0x408C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408C70u;
    // 0x408c74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4092D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4092D8u, 0x408C70u, 0x408C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408C78u;
label_408c78:
    // 0x408c78: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x408c78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408c7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x408c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408c80: 0xc1025ec  jal         func_4097B0
    ctx->pc = 0x408C80u;
    SET_GPR_U32(ctx, 31, 0x408C88u);
    ctx->pc = 0x408C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408C80u;
    // 0x408c84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4097B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4097B0u, 0x408C80u, 0x408C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408C88u;
label_408c88:
    // 0x408c88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x408c88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_408c8c:
    // 0x408c8c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x408c8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x408c90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x408c90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x408c94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x408c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x408c98: 0x3e00008  jr          $ra
    ctx->pc = 0x408C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x408C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408C98u;
        // 0x408c9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x408C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x408CA0u;
}
