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

// Function: sub_00358C90
// Address: 0x358c90 - 0x358d08
void sub_00358C90_0x358c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358C90_0x358c90");
#endif

    switch (ctx->pc) {
        case 0x358cb8u: goto label_358cb8;
        case 0x358cc0u: goto label_358cc0;
        case 0x358cd4u: goto label_358cd4;
        case 0x358cdcu: goto label_358cdc;
        case 0x358ce8u: goto label_358ce8;
        default: break;
    }

    ctx->pc = 0x358c90u;

    // 0x358c90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x358c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x358c94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x358c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358c98: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x358c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x358c9c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x358c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x358ca0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x358ca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358ca4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x358ca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358ca8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x358ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x358cac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358cb0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x358CB0u;
    SET_GPR_U32(ctx, 31, 0x358CB8u);
    ctx->pc = 0x358CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358CB0u;
    // 0x358cb4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x358CB0u, 0x358CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358CB8u;
label_358cb8:
    // 0x358cb8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x358CB8u;
    SET_GPR_U32(ctx, 31, 0x358CC0u);
    ctx->pc = 0x358CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358CB8u;
    // 0x358cbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x358CB8u, 0x358CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358CC0u;
label_358cc0:
    // 0x358cc0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x358cc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358cc4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x358cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x358cc8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x358cc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358ccc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x358CCCu;
    SET_GPR_U32(ctx, 31, 0x358CD4u);
    ctx->pc = 0x358CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358CCCu;
    // 0x358cd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x358CCCu, 0x358CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358CD4u;
label_358cd4:
    // 0x358cd4: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x358CD4u;
    SET_GPR_U32(ctx, 31, 0x358CDCu);
    ctx->pc = 0x358CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358CD4u;
    // 0x358cd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x358CD4u, 0x358CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358CDCu;
label_358cdc:
    // 0x358cdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x358cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358ce0: 0xc08ec38  jal         func_23B0E0
    ctx->pc = 0x358CE0u;
    SET_GPR_U32(ctx, 31, 0x358CE8u);
    ctx->pc = 0x358CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358CE0u;
    // 0x358ce4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B0E0u, 0x358CE0u, 0x358CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358CE8u;
label_358ce8:
    // 0x358ce8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x358ce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x358cec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x358cecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358cf0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x358cf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x358cf4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x358cf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358cf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x358CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358CFCu;
        // 0x358d00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358D04u;
    // 0x358d04: 0x0  nop
    ctx->pc = 0x358d04u;
    // NOP
    ctx->pc = 0x358d08u;
}
