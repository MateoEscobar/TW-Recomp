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

// Function: sub_00117190
// Address: 0x117190 - 0x1171d8
void sub_00117190_0x117190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117190_0x117190");
#endif

    switch (ctx->pc) {
        case 0x1171ccu: goto label_1171cc;
        default: break;
    }

    ctx->pc = 0x117190u;

    // 0x117190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x117190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x117194: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x117194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x117198: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x117198u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11719c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11719cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1171a0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1171a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1171a4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1171a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1171a8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1171a8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1171ac: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1171acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1171b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1171b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1171b4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1171b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1171b8: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x1171b8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x1171bc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1171bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1171c0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1171c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1171c4: 0xc043f74  jal         func_10FDD0
    ctx->pc = 0x1171C4u;
    SET_GPR_U32(ctx, 31, 0x1171CCu);
    ctx->pc = 0x1171C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1171C4u;
    // 0x1171c8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x1171C4u, 0x1171CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1171CCu;
label_1171cc:
    // 0x1171cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1171ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1171d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1171D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1171D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171D0u;
        // 0x1171d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1171D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1171D8u;
}
