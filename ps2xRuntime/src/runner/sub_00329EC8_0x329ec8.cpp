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

// Function: sub_00329EC8
// Address: 0x329ec8 - 0x329f28
void sub_00329EC8_0x329ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329EC8_0x329ec8");
#endif

    switch (ctx->pc) {
        case 0x329f10u: goto label_329f10;
        default: break;
    }

    ctx->pc = 0x329ec8u;

    // 0x329ec8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x329ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x329ecc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x329eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x329ed0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x329ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x329ed4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x329ed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329ed8: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x329ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x329edc: 0x2c820201  sltiu       $v0, $a0, 0x201
    ctx->pc = 0x329edcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)513) ? 1 : 0);
    // 0x329ee0: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x329EE0u;
    {
        const bool branch_taken_0x329ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x329ee0) {
            ctx->pc = 0x329EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329EE0u;
            // 0x329ee4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329F18u;
            goto label_329f18;
        }
    }
    ctx->pc = 0x329EE8u;
    // 0x329ee8: 0x41042  srl         $v0, $a0, 1
    ctx->pc = 0x329ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x329eec: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x329eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x329ef0: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x329ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x329ef4: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x329ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x329ef8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x329ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x329efc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x329efcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329f00: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x329f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x329f04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x329f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329f08: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x329F08u;
    SET_GPR_U32(ctx, 31, 0x329F10u);
    ctx->pc = 0x329F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329F08u;
    // 0x329f0c: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x329F08u, 0x329F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329F10u;
label_329f10:
    // 0x329f10: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x329f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x329f14: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x329f14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_329f18:
    // 0x329f18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x329f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x329F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329F1Cu;
        // 0x329f20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329F24u;
    // 0x329f24: 0x0  nop
    ctx->pc = 0x329f24u;
    // NOP
    ctx->pc = 0x329f28u;
}
