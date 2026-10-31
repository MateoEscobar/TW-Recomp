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

// Function: sub_003A53B8
// Address: 0x3a53b8 - 0x3a53f0
void sub_003A53B8_0x3a53b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A53B8_0x3a53b8");
#endif

    switch (ctx->pc) {
        case 0x3a53e0u: goto label_3a53e0;
        default: break;
    }

    ctx->pc = 0x3a53b8u;

    // 0x3a53b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3a53b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3a53bc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3a53bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3a53c0: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x3a53c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a53c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3a53c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a53c8: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3a53c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x3a53cc: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x3a53ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3a53d0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3a53d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3a53d4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3a53d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x3a53d8: 0xc0e94fc  jal         func_3A53F0
    ctx->pc = 0x3A53D8u;
    SET_GPR_U32(ctx, 31, 0x3A53E0u);
    ctx->pc = 0x3A53DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A53D8u;
    // 0x3a53dc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3A53D8u, 0x3A53E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A53E0u;
label_3a53e0:
    // 0x3a53e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3a53e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a53e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A53E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A53E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A53E4u;
        // 0x3a53e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A53E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A53ECu;
    // 0x3a53ec: 0x0  nop
    ctx->pc = 0x3a53ecu;
    // NOP
    ctx->pc = 0x3a53f0u;
}
