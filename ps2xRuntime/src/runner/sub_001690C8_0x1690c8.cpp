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

// Function: sub_001690C8
// Address: 0x1690c8 - 0x169130
void sub_001690C8_0x1690c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001690C8_0x1690c8");
#endif

    switch (ctx->pc) {
        case 0x169100u: goto label_169100;
        case 0x169118u: goto label_169118;
        default: break;
    }

    ctx->pc = 0x1690c8u;

    // 0x1690c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1690c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1690cc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1690ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1690d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1690d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1690d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1690d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1690d8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1690d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1690dc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1690dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1690e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1690e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1690e4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1690e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1690e8: 0x86450030  lh          $a1, 0x30($s2)
    ctx->pc = 0x1690e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1690ec: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1690ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1690f0: 0xb12804  sllv        $a1, $s1, $a1
    ctx->pc = 0x1690f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 5) & 0x1F));
    // 0x1690f4: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x1690f4u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x1690f8: 0xc05a3cc  jal         func_168F30
    ctx->pc = 0x1690F8u;
    SET_GPR_U32(ctx, 31, 0x169100u);
    ctx->pc = 0x1690FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1690F8u;
    // 0x1690fc: 0x452824  and         $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168F30u, 0x1690F8u, 0x169100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169100u;
label_169100:
    // 0x169100: 0x86420030  lh          $v0, 0x30($s2)
    ctx->pc = 0x169100u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x169104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169108: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x169108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x16910c: 0x518804  sllv        $s1, $s1, $v0
    ctx->pc = 0x16910cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 2) & 0x1F));
    // 0x169110: 0xc05a3c2  jal         func_168F08
    ctx->pc = 0x169110u;
    SET_GPR_U32(ctx, 31, 0x169118u);
    ctx->pc = 0x169114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169110u;
    // 0x169114: 0xb12825  or          $a1, $a1, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168F08u, 0x169110u, 0x169118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169118u;
label_169118:
    // 0x169118: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x169118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16911c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16911cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169120: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x169120u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169124: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169128: 0x3e00008  jr          $ra
    ctx->pc = 0x169128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16912Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169128u;
        // 0x16912c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169130u;
}
