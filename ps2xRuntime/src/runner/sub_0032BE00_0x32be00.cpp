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

// Function: sub_0032BE00
// Address: 0x32be00 - 0x32be60
void sub_0032BE00_0x32be00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032BE00_0x32be00");
#endif

    switch (ctx->pc) {
        case 0x32be18u: goto label_32be18;
        case 0x32be20u: goto label_32be20;
        case 0x32be28u: goto label_32be28;
        case 0x32be3cu: goto label_32be3c;
        case 0x32be48u: goto label_32be48;
        default: break;
    }

    ctx->pc = 0x32be00u;

    // 0x32be00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32be00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32be04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32be04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32be08: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32be08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32be0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32be0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32be10: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x32BE10u;
    SET_GPR_U32(ctx, 31, 0x32BE18u);
    ctx->pc = 0x32BE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BE10u;
    // 0x32be14: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x32BE10u, 0x32BE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BE18u;
label_32be18:
    // 0x32be18: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x32BE18u;
    SET_GPR_U32(ctx, 31, 0x32BE20u);
    ctx->pc = 0x32BE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BE18u;
    // 0x32be1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x32BE18u, 0x32BE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BE20u;
label_32be20:
    // 0x32be20: 0xc0cd5a8  jal         func_3356A0
    ctx->pc = 0x32BE20u;
    SET_GPR_U32(ctx, 31, 0x32BE28u);
    ctx->pc = 0x32BE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BE20u;
    // 0x32be24: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3356A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356A0u, 0x32BE20u, 0x32BE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BE28u;
label_32be28:
    // 0x32be28: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x32be28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x32be2c: 0x34212edf  ori         $at, $at, 0x2EDF
    ctx->pc = 0x32be2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)11999);
    // 0x32be30: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x32be30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x32be34: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x32BE34u;
    SET_GPR_U32(ctx, 31, 0x32BE3Cu);
    ctx->pc = 0x32BE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BE34u;
    // 0x32be38: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x32BE34u, 0x32BE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BE3Cu;
label_32be3c:
    // 0x32be3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32be3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32be40: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x32BE40u;
    SET_GPR_U32(ctx, 31, 0x32BE48u);
    ctx->pc = 0x32BE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BE40u;
    // 0x32be44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x32BE40u, 0x32BE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BE48u;
label_32be48:
    // 0x32be48: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32be48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32be4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32be4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32be50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32be50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32be54: 0x3e00008  jr          $ra
    ctx->pc = 0x32BE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BE54u;
        // 0x32be58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BE54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BE5Cu;
    // 0x32be5c: 0x0  nop
    ctx->pc = 0x32be5cu;
    // NOP
    ctx->pc = 0x32be60u;
}
