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

// Function: sub_0017EC80
// Address: 0x17ec80 - 0x17ecc0
void sub_0017EC80_0x17ec80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017EC80_0x17ec80");
#endif

    switch (ctx->pc) {
        case 0x17ec9cu: goto label_17ec9c;
        case 0x17ecacu: goto label_17ecac;
        default: break;
    }

    ctx->pc = 0x17ec80u;

    // 0x17ec80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17ec80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17ec84: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17ec84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17ec88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17ec88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17ec8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17ec8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17ec90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17ec94: 0xc05fb1e  jal         func_17EC78
    ctx->pc = 0x17EC94u;
    SET_GPR_U32(ctx, 31, 0x17EC9Cu);
    ctx->pc = 0x17EC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EC94u;
    // 0x17ec98: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EC78u, 0x17EC94u, 0x17EC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EC9Cu;
label_17ec9c:
    // 0x17ec9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17ec9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eca0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17eca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eca4: 0xc05fb58  jal         func_17ED60
    ctx->pc = 0x17ECA4u;
    SET_GPR_U32(ctx, 31, 0x17ECACu);
    ctx->pc = 0x17ECA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ECA4u;
    // 0x17eca8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ED60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ED60u, 0x17ECA4u, 0x17ECACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ECACu;
label_17ecac:
    // 0x17ecac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17ecacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ecb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17ecb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ecb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ecb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ecb8: 0x3e00008  jr          $ra
    ctx->pc = 0x17ECB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17ECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ECB8u;
        // 0x17ecbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17ECB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17ECC0u;
}
