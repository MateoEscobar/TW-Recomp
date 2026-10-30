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

// Function: sub_001C2588
// Address: 0x1c2588 - 0x1c25e8
void sub_001C2588_0x1c2588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2588_0x1c2588");
#endif

    switch (ctx->pc) {
        case 0x1c25acu: goto label_1c25ac;
        default: break;
    }

    ctx->pc = 0x1c2588u;

    // 0x1c2588: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c2588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c258c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c258cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c2590: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c2590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c2594: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x1c2594u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1c2598: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c2598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c259c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c259cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c25a0: 0x262400b0  addiu       $a0, $s1, 0xB0
    ctx->pc = 0x1c25a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x1c25a4: 0xc06898e  jal         func_1A2638
    ctx->pc = 0x1C25A4u;
    SET_GPR_U32(ctx, 31, 0x1C25ACu);
    ctx->pc = 0x1C25A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C25A4u;
    // 0x1c25a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2638u, 0x1C25A4u, 0x1C25ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C25ACu;
label_1c25ac:
    // 0x1c25ac: 0x262301b0  addiu       $v1, $s1, 0x1B0
    ctx->pc = 0x1c25acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
    // 0x1c25b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c25b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c25b4: 0xa07001b1  sb          $s0, 0x1B1($v1)
    ctx->pc = 0x1c25b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 433), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c25b8: 0xac6201b4  sw          $v0, 0x1B4($v1)
    ctx->pc = 0x1c25b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 436), GPR_U32(ctx, 2));
    // 0x1c25bc: 0xa2300073  sb          $s0, 0x73($s1)
    ctx->pc = 0x1c25bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 115), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c25c0: 0xa2300063  sb          $s0, 0x63($s1)
    ctx->pc = 0x1c25c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 99), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c25c4: 0xa230006b  sb          $s0, 0x6B($s1)
    ctx->pc = 0x1c25c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 107), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c25c8: 0xa2300077  sb          $s0, 0x77($s1)
    ctx->pc = 0x1c25c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 119), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c25cc: 0xa2300067  sb          $s0, 0x67($s1)
    ctx->pc = 0x1c25ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 103), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c25d0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c25d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c25d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c25d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c25d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c25d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c25dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C25DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C25E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C25DCu;
        // 0x1c25e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C25DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C25E4u;
    // 0x1c25e4: 0x0  nop
    ctx->pc = 0x1c25e4u;
    // NOP
    ctx->pc = 0x1c25e8u;
}
