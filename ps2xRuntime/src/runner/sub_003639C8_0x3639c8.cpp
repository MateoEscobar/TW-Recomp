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

// Function: sub_003639C8
// Address: 0x3639c8 - 0x363a68
void sub_003639C8_0x3639c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003639C8_0x3639c8");
#endif

    switch (ctx->pc) {
        case 0x3639f4u: goto label_3639f4;
        case 0x3639fcu: goto label_3639fc;
        case 0x363a10u: goto label_363a10;
        case 0x363a18u: goto label_363a18;
        case 0x363a2cu: goto label_363a2c;
        case 0x363a34u: goto label_363a34;
        case 0x363a44u: goto label_363a44;
        default: break;
    }

    ctx->pc = 0x3639c8u;

    // 0x3639c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3639c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3639cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3639ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3639d0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3639d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3639d4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3639d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3639d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3639d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3639dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3639dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3639e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3639e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3639e4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3639e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3639e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3639e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3639ec: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3639ECu;
    SET_GPR_U32(ctx, 31, 0x3639F4u);
    ctx->pc = 0x3639F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3639ECu;
    // 0x3639f0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3639ECu, 0x3639F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3639F4u;
label_3639f4:
    // 0x3639f4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3639F4u;
    SET_GPR_U32(ctx, 31, 0x3639FCu);
    ctx->pc = 0x3639F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3639F4u;
    // 0x3639f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3639F4u, 0x3639FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3639FCu;
label_3639fc:
    // 0x3639fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3639fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363a00: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x363a00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363a04: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x363a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x363a08: 0xc102472  jal         func_4091C8
    ctx->pc = 0x363A08u;
    SET_GPR_U32(ctx, 31, 0x363A10u);
    ctx->pc = 0x363A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363A08u;
    // 0x363a0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x363A08u, 0x363A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363A10u;
label_363a10:
    // 0x363a10: 0xc10b108  jal         func_42C420
    ctx->pc = 0x363A10u;
    SET_GPR_U32(ctx, 31, 0x363A18u);
    ctx->pc = 0x363A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363A10u;
    // 0x363a14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x363A10u, 0x363A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363A18u;
label_363a18:
    // 0x363a18: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x363a18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363a1c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x363a1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363a20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x363a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363a24: 0xc102472  jal         func_4091C8
    ctx->pc = 0x363A24u;
    SET_GPR_U32(ctx, 31, 0x363A2Cu);
    ctx->pc = 0x363A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363A24u;
    // 0x363a28: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x363A24u, 0x363A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363A2Cu;
label_363a2c:
    // 0x363a2c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x363A2Cu;
    SET_GPR_U32(ctx, 31, 0x363A34u);
    ctx->pc = 0x363A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363A2Cu;
    // 0x363a30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x363A2Cu, 0x363A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363A34u;
label_363a34:
    // 0x363a34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x363a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363a38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x363a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363a3c: 0xc0b61ec  jal         func_2D87B0
    ctx->pc = 0x363A3Cu;
    SET_GPR_U32(ctx, 31, 0x363A44u);
    ctx->pc = 0x363A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363A3Cu;
    // 0x363a40: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D87B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D87B0u, 0x363A3Cu, 0x363A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363A44u;
label_363a44:
    // 0x363a44: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x363a44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x363a48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x363a48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363a4c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x363a4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x363a50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x363a50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x363a54: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x363a54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x363a58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x363a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x363A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363A5Cu;
        // 0x363a60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363A64u;
    // 0x363a64: 0x0  nop
    ctx->pc = 0x363a64u;
    // NOP
    ctx->pc = 0x363a68u;
}
