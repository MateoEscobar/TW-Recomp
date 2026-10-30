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

// Function: sub_0014CAB8
// Address: 0x14cab8 - 0x14caf8
void sub_0014CAB8_0x14cab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014CAB8_0x14cab8");
#endif

    switch (ctx->pc) {
        case 0x14caccu: goto label_14cacc;
        default: break;
    }

    ctx->pc = 0x14cab8u;

    // 0x14cab8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14cab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14cabc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x14cabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cac0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x14cac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x14cac4: 0xc05420e  jal         func_150838
    ctx->pc = 0x14CAC4u;
    SET_GPR_U32(ctx, 31, 0x14CACCu);
    ctx->pc = 0x14CAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CAC4u;
    // 0x14cac8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150838u, 0x14CAC4u, 0x14CACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CACCu;
label_14cacc:
    // 0x14cacc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14caccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14cad0: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x14cad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x14cad4: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x14cad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x14cad8: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x14cad8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x14cadc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14cadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14cae0: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x14cae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x14cae4: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x14cae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x14cae8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x14cae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14caec: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x14caecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x14caf0: 0x3e00008  jr          $ra
    ctx->pc = 0x14CAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CAF0u;
        // 0x14caf4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CAF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14CAF8u;
}
