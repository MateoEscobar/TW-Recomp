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

// Function: sub_0021B100
// Address: 0x21b100 - 0x21b148
void sub_0021B100_0x21b100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B100_0x21b100");
#endif

    switch (ctx->pc) {
        case 0x21b138u: goto label_21b138;
        default: break;
    }

    ctx->pc = 0x21b100u;

    // 0x21b100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21b100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21b104: 0x24870090  addiu       $a3, $a0, 0x90
    ctx->pc = 0x21b104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x21b108: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21b108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21b10c: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x21b10cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
    // 0x21b110: 0x24c64b00  addiu       $a2, $a2, 0x4B00
    ctx->pc = 0x21b110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
    // 0x21b114: 0x84e20002  lh          $v0, 0x2($a3)
    ctx->pc = 0x21b114u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x21b118: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x21b118u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21b11c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x21b11cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x21b120: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x21b120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x21b124: 0x7c430010  sq          $v1, 0x10($v0)
    ctx->pc = 0x21b124u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 3));
    // 0x21b128: 0x84e50002  lh          $a1, 0x2($a3)
    ctx->pc = 0x21b128u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x21b12c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x21b12cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x21b130: 0xc0e8662  jal         func_3A1988
    ctx->pc = 0x21B130u;
    SET_GPR_U32(ctx, 31, 0x21B138u);
    ctx->pc = 0x21B134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B130u;
    // 0x21b134: 0xa62821  addu        $a1, $a1, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1988u, 0x21B130u, 0x21B138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B138u;
label_21b138:
    // 0x21b138: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21b138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b13c: 0x3e00008  jr          $ra
    ctx->pc = 0x21B13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B13Cu;
        // 0x21b140: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B13Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B144u;
    // 0x21b144: 0x0  nop
    ctx->pc = 0x21b144u;
    // NOP
    ctx->pc = 0x21b148u;
}
