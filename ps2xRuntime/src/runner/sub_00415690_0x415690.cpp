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

// Function: sub_00415690
// Address: 0x415690 - 0x4156d0
void sub_00415690_0x415690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00415690_0x415690");
#endif

    switch (ctx->pc) {
        case 0x4156bcu: goto label_4156bc;
        default: break;
    }

    ctx->pc = 0x415690u;

    // 0x415690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x415690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x415694: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x415694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x415698: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x415698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x41569c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x41569cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x4156a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4156a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4156a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4156a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4156a8: 0xa6000032  sh          $zero, 0x32($s0)
    ctx->pc = 0x4156a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 0));
    // 0x4156ac: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x4156acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x4156b0: 0x24a59348  addiu       $a1, $a1, -0x6CB8
    ctx->pc = 0x4156b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939464));
    // 0x4156b4: 0xc1055be  jal         func_4156F8
    ctx->pc = 0x4156B4u;
    SET_GPR_U32(ctx, 31, 0x4156BCu);
    ctx->pc = 0x4156B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4156B4u;
    // 0x4156b8: 0xa6020030  sh          $v0, 0x30($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4156F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4156F8u, 0x4156B4u, 0x4156BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4156BCu;
label_4156bc:
    // 0x4156bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4156bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4156c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4156c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4156c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4156c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4156c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4156C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4156CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4156C8u;
        // 0x4156cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4156C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4156D0u;
}
