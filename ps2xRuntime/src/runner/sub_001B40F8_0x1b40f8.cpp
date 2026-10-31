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

// Function: sub_001B40F8
// Address: 0x1b40f8 - 0x1b4168
void sub_001B40F8_0x1b40f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B40F8_0x1b40f8");
#endif

    switch (ctx->pc) {
        case 0x1b4140u: goto label_1b4140;
        default: break;
    }

    ctx->pc = 0x1b40f8u;

    // 0x1b40f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b40f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b40fc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1b40fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4100: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4104: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1b4104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1b4108: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x1b4108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    // 0x1b410c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b410cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4110: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1b4110u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b4114: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1b4114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1b4118: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1b4118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b411c: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1b411cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1b4120: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1b4120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1b4124: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1b4124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4128: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1b4128u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1b412c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1b412cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1b4130: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1b4130u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1b4134: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b4134u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4138: 0xc06ca64  jal         func_1B2990
    ctx->pc = 0x1B4138u;
    SET_GPR_U32(ctx, 31, 0x1B4140u);
    ctx->pc = 0x1B413Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4138u;
    // 0x1b413c: 0x34c600ff  ori         $a2, $a2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2990u, 0x1B4138u, 0x1B4140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4140u;
label_1b4140:
    // 0x1b4140: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4144: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4144u;
        // 0x1b4148: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B414Cu;
    // 0x1b414c: 0x0  nop
    ctx->pc = 0x1b414cu;
    // NOP
    // 0x1b4150: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1b4150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b4154: 0x0  nop
    ctx->pc = 0x1b4154u;
    // NOP
    // 0x1b4158: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1b4158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b415c: 0x0  nop
    ctx->pc = 0x1b415cu;
    // NOP
    // 0x1b4160: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1b4160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b4164: 0x0  nop
    ctx->pc = 0x1b4164u;
    // NOP
    ctx->pc = 0x1b4168u;
}
