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

// Function: sub_004DB988
// Address: 0x4db988 - 0x4db9d0
void sub_004DB988_0x4db988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DB988_0x4db988");
#endif

    switch (ctx->pc) {
        case 0x4db99cu: goto label_4db99c;
        default: break;
    }

    ctx->pc = 0x4db988u;

    // 0x4db988: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4db988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4db98c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4db98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4db990: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4db990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4db994: 0xc136e3e  jal         func_4DB8F8
    ctx->pc = 0x4DB994u;
    SET_GPR_U32(ctx, 31, 0x4DB99Cu);
    ctx->pc = 0x4DB998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB994u;
    // 0x4db998: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB8F8u, 0x4DB994u, 0x4DB99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DB99Cu;
label_4db99c:
    // 0x4db99c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4db99cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4db9a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4db9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4db9a4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4DB9A4u;
    {
        const bool branch_taken_0x4db9a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4DB9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB9A4u;
        // 0x4db9a8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4db9a4) {
            ctx->pc = 0x4DB9BCu;
            goto label_4db9bc;
        }
    }
    ctx->pc = 0x4DB9ACu;
    // 0x4db9ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4db9acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4db9b0: 0x8c44bd30  lw          $a0, -0x42D0($v0)
    ctx->pc = 0x4db9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x4db9b4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4db9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x4db9b8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x4db9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_4db9bc:
    // 0x4db9bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4db9bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4db9c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4db9c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4db9c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4DB9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DB9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB9C4u;
        // 0x4db9c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DB9C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DB9CCu;
    // 0x4db9cc: 0x0  nop
    ctx->pc = 0x4db9ccu;
    // NOP
    ctx->pc = 0x4db9d0u;
}
