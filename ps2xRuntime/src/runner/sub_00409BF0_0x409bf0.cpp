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

// Function: sub_00409BF0
// Address: 0x409bf0 - 0x409c78
void sub_00409BF0_0x409bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00409BF0_0x409bf0");
#endif

    switch (ctx->pc) {
        case 0x409c10u: goto label_409c10;
        case 0x409c20u: goto label_409c20;
        case 0x409c2cu: goto label_409c2c;
        case 0x409c3cu: goto label_409c3c;
        case 0x409c4cu: goto label_409c4c;
        case 0x409c60u: goto label_409c60;
        default: break;
    }

    ctx->pc = 0x409bf0u;

    // 0x409bf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x409bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x409bf4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x409bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x409bf8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x409bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x409bfc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x409bfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409c00: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x409c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x409c04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x409c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x409c08: 0xc1030ea  jal         func_40C3A8
    ctx->pc = 0x409C08u;
    SET_GPR_U32(ctx, 31, 0x409C10u);
    ctx->pc = 0x409C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409C08u;
    // 0x409c0c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C3A8u, 0x409C08u, 0x409C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409C10u;
label_409c10:
    // 0x409c10: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x409C10u;
    {
        const bool branch_taken_0x409c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x409C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409C10u;
        // 0x409c14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409c10) {
            ctx->pc = 0x409C54u;
            goto label_409c54;
        }
    }
    ctx->pc = 0x409C18u;
    // 0x409c18: 0xc0c9056  jal         func_324158
    ctx->pc = 0x409C18u;
    SET_GPR_U32(ctx, 31, 0x409C20u);
    ctx->pc = 0x409C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409C18u;
    // 0x409c1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324158u, 0x409C18u, 0x409C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409C20u;
label_409c20:
    // 0x409c20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x409c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409c24: 0xc0c8e00  jal         func_323800
    ctx->pc = 0x409C24u;
    SET_GPR_U32(ctx, 31, 0x409C2Cu);
    ctx->pc = 0x409C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409C24u;
    // 0x409c28: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323800u, 0x409C24u, 0x409C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409C2Cu;
label_409c2c:
    // 0x409c2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x409c2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409c30: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x409c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409c34: 0xc0c8d78  jal         func_3235E0
    ctx->pc = 0x409C34u;
    SET_GPR_U32(ctx, 31, 0x409C3Cu);
    ctx->pc = 0x409C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409C34u;
    // 0x409c38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3235E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3235E0u, 0x409C34u, 0x409C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409C3Cu;
label_409c3c:
    // 0x409c3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x409c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409c40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x409c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409c44: 0xc102944  jal         func_40A510
    ctx->pc = 0x409C44u;
    SET_GPR_U32(ctx, 31, 0x409C4Cu);
    ctx->pc = 0x409C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409C44u;
    // 0x409c48: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A510u, 0x409C44u, 0x409C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409C4Cu;
label_409c4c:
    // 0x409c4c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x409C4Cu;
    {
        const bool branch_taken_0x409c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x409C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409C4Cu;
        // 0x409c50: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409c4c) {
            ctx->pc = 0x409C64u;
            goto label_409c64;
        }
    }
    ctx->pc = 0x409C54u;
label_409c54:
    // 0x409c54: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x409c54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x409c58: 0xc10241a  jal         func_409068
    ctx->pc = 0x409C58u;
    SET_GPR_U32(ctx, 31, 0x409C60u);
    ctx->pc = 0x409C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409C58u;
    // 0x409c5c: 0x24a58008  addiu       $a1, $a1, -0x7FF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409068u, 0x409C58u, 0x409C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409C60u;
label_409c60:
    // 0x409c60: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x409c60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_409c64:
    // 0x409c64: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x409c64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x409c68: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x409c68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x409c6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x409c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x409c70: 0x3e00008  jr          $ra
    ctx->pc = 0x409C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x409C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409C70u;
        // 0x409c74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x409C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x409C78u;
}
