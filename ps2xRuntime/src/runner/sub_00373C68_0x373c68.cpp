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

// Function: sub_00373C68
// Address: 0x373c68 - 0x373ce0
void sub_00373C68_0x373c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373C68_0x373c68");
#endif

    switch (ctx->pc) {
        case 0x373c90u: goto label_373c90;
        case 0x373c98u: goto label_373c98;
        case 0x373cb0u: goto label_373cb0;
        case 0x373cb8u: goto label_373cb8;
        case 0x373cc4u: goto label_373cc4;
        default: break;
    }

    ctx->pc = 0x373c68u;

    // 0x373c68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x373c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x373c6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x373c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373c70: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x373c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x373c74: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x373c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x373c78: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x373c78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373c7c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x373c7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373c80: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x373c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x373c84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x373c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x373c88: 0xc102472  jal         func_4091C8
    ctx->pc = 0x373C88u;
    SET_GPR_U32(ctx, 31, 0x373C90u);
    ctx->pc = 0x373C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373C88u;
    // 0x373c8c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x373C88u, 0x373C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373C90u;
label_373c90:
    // 0x373c90: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x373C90u;
    SET_GPR_U32(ctx, 31, 0x373C98u);
    ctx->pc = 0x373C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373C90u;
    // 0x373c94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x373C90u, 0x373C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373C98u;
label_373c98:
    // 0x373c98: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x373c98u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x373c9c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x373c9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373ca0: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x373ca0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x373ca4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x373ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373ca8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x373CA8u;
    SET_GPR_U32(ctx, 31, 0x373CB0u);
    ctx->pc = 0x373CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373CA8u;
    // 0x373cac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x373CA8u, 0x373CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373CB0u;
label_373cb0:
    // 0x373cb0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x373CB0u;
    SET_GPR_U32(ctx, 31, 0x373CB8u);
    ctx->pc = 0x373CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373CB0u;
    // 0x373cb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x373CB0u, 0x373CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373CB8u;
label_373cb8:
    // 0x373cb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x373cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373cbc: 0xc05ab98  jal         func_16AE60
    ctx->pc = 0x373CBCu;
    SET_GPR_U32(ctx, 31, 0x373CC4u);
    ctx->pc = 0x373CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373CBCu;
    // 0x373cc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AE60u, 0x373CBCu, 0x373CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373CC4u;
label_373cc4:
    // 0x373cc4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x373cc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x373cc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x373cc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373ccc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x373cccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x373cd0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x373cd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373cd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x373CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373CD8u;
        // 0x373cdc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373CE0u;
}
