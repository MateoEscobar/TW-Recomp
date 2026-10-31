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

// Function: sub_00225498
// Address: 0x225498 - 0x225500
void sub_00225498_0x225498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225498_0x225498");
#endif

    switch (ctx->pc) {
        case 0x2254bcu: goto label_2254bc;
        case 0x2254e0u: goto label_2254e0;
        default: break;
    }

    ctx->pc = 0x225498u;

    // 0x225498: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x225498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22549c: 0x3c05bff7  lui         $a1, 0xBFF7
    ctx->pc = 0x22549cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49143 << 16));
    // 0x2254a0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2254a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2254a4: 0x34a56fff  ori         $a1, $a1, 0x6FFF
    ctx->pc = 0x2254a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)28671);
    // 0x2254a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2254a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2254ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2254acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2254b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2254b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2254b4: 0xc089998  jal         func_226660
    ctx->pc = 0x2254B4u;
    SET_GPR_U32(ctx, 31, 0x2254BCu);
    ctx->pc = 0x2254B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2254B4u;
    // 0x2254b8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2254B4u, 0x2254BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2254BCu;
label_2254bc:
    // 0x2254bc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2254BCu;
    {
        const bool branch_taken_0x2254bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2254C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2254BCu;
        // 0x2254c0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2254bc) {
            ctx->pc = 0x2254E8u;
            goto label_2254e8;
        }
    }
    ctx->pc = 0x2254C4u;
    // 0x2254c4: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x2254c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
    // 0x2254c8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2254c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x2254cc: 0x34a5d0ef  ori         $a1, $a1, 0xD0EF
    ctx->pc = 0x2254ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53487);
    // 0x2254d0: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x2254d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x2254d4: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x2254d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
    // 0x2254d8: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x2254D8u;
    SET_GPR_U32(ctx, 31, 0x2254E0u);
    ctx->pc = 0x2254DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2254D8u;
    // 0x2254dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2254D8u, 0x2254E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2254E0u;
label_2254e0:
    // 0x2254e0: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x2254e0u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2254e4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2254e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2254e8:
    // 0x2254e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2254e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2254ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2254ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2254f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2254f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2254f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2254F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2254F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2254F4u;
        // 0x2254f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2254F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2254FCu;
    // 0x2254fc: 0x0  nop
    ctx->pc = 0x2254fcu;
    // NOP
    ctx->pc = 0x225500u;
}
