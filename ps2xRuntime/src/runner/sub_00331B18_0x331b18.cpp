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

// Function: sub_00331B18
// Address: 0x331b18 - 0x331ba8
void sub_00331B18_0x331b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331B18_0x331b18");
#endif

    switch (ctx->pc) {
        case 0x331b40u: goto label_331b40;
        case 0x331b5cu: goto label_331b5c;
        case 0x331b68u: goto label_331b68;
        case 0x331b70u: goto label_331b70;
        default: break;
    }

    ctx->pc = 0x331b18u;

    // 0x331b18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x331b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x331b1c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x331b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x331b20: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x331b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x331b24: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x331b24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331b28: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x331b28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331b2c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x331b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331b30: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x331b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x331b34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x331b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x331b38: 0xc0cc6a0  jal         func_331A80
    ctx->pc = 0x331B38u;
    SET_GPR_U32(ctx, 31, 0x331B40u);
    ctx->pc = 0x331B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331B38u;
    // 0x331b3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331A80u, 0x331B38u, 0x331B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331B40u;
label_331b40:
    // 0x331b40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x331b40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331b44: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x331B44u;
    {
        const bool branch_taken_0x331b44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x331B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331B44u;
        // 0x331b48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331b44) {
            ctx->pc = 0x331B68u;
            goto label_331b68;
        }
    }
    ctx->pc = 0x331B4Cu;
    // 0x331b4c: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x331b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x331b50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x331b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331b54: 0xc0ca46e  jal         func_3291B8
    ctx->pc = 0x331B54u;
    SET_GPR_U32(ctx, 31, 0x331B5Cu);
    ctx->pc = 0x331B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331B54u;
    // 0x331b58: 0x24a56368  addiu       $a1, $a1, 0x6368 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3291B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291B8u, 0x331B54u, 0x331B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331B5Cu;
label_331b5c:
    // 0x331b5c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x331B5Cu;
    {
        const bool branch_taken_0x331b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331B5Cu;
        // 0x331b60: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331b5c) {
            ctx->pc = 0x331B88u;
            goto label_331b88;
        }
    }
    ctx->pc = 0x331B64u;
    // 0x331b64: 0x0  nop
    ctx->pc = 0x331b64u;
    // NOP
label_331b68:
    // 0x331b68: 0xc0cb224  jal         func_32C890
    ctx->pc = 0x331B68u;
    SET_GPR_U32(ctx, 31, 0x331B70u);
    ctx->pc = 0x331B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331B68u;
    // 0x331b6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C890u, 0x331B68u, 0x331B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331B70u;
label_331b70:
    // 0x331b70: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x331B70u;
    {
        const bool branch_taken_0x331b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x331B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331B70u;
        // 0x331b74: 0x26020010  addiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331b70) {
            ctx->pc = 0x331B8Cu;
            goto label_331b8c;
        }
    }
    ctx->pc = 0x331B78u;
    // 0x331b78: 0x8e100020  lw          $s0, 0x20($s0)
    ctx->pc = 0x331b78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x331b7c: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x331B7Cu;
    {
        const bool branch_taken_0x331b7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x331B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331B7Cu;
        // 0x331b80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331b7c) {
            ctx->pc = 0x331B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_331b68;
        }
    }
    ctx->pc = 0x331B84u;
    // 0x331b84: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x331b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_331b88:
    // 0x331b88: 0x24425af0  addiu       $v0, $v0, 0x5AF0
    ctx->pc = 0x331b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23280));
label_331b8c:
    // 0x331b8c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x331b8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x331b90: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x331b90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x331b94: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x331b94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x331b98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x331b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x331B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331B9Cu;
        // 0x331ba0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331BA4u;
    // 0x331ba4: 0x0  nop
    ctx->pc = 0x331ba4u;
    // NOP
    ctx->pc = 0x331ba8u;
}
