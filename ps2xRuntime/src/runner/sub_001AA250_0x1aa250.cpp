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

// Function: sub_001AA250
// Address: 0x1aa250 - 0x1aa290
void sub_001AA250_0x1aa250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA250_0x1aa250");
#endif

    switch (ctx->pc) {
        case 0x1aa268u: goto label_1aa268;
        default: break;
    }

    ctx->pc = 0x1aa250u;

    // 0x1aa250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aa250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aa254: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1aa254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1aa258: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aa258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa25c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aa25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aa260: 0xc0e1938  jal         func_3864E0
    ctx->pc = 0x1AA260u;
    SET_GPR_U32(ctx, 31, 0x1AA268u);
    ctx->pc = 0x1AA264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA260u;
    // 0x1aa264: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3864E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3864E0u, 0x1AA260u, 0x1AA268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA268u;
label_1aa268:
    // 0x1aa268: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1aa268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1aa26c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1aa26cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1aa270: 0x246307f8  addiu       $v1, $v1, 0x7F8
    ctx->pc = 0x1aa270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2040));
    // 0x1aa274: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aa274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa278: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x1aa278u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1aa27c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1aa27cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1aa280: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1aa280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa284: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA284u;
        // 0x1aa288: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA28Cu;
    // 0x1aa28c: 0x0  nop
    ctx->pc = 0x1aa28cu;
    // NOP
    ctx->pc = 0x1aa290u;
}
