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

// Function: sub_001848D0
// Address: 0x1848d0 - 0x184918
void sub_001848D0_0x1848d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001848D0_0x1848d0");
#endif

    switch (ctx->pc) {
        case 0x1848e4u: goto label_1848e4;
        default: break;
    }

    ctx->pc = 0x1848d0u;

    // 0x1848d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1848d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1848d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1848d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1848d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1848d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1848dc: 0xc0cd4c8  jal         func_335320
    ctx->pc = 0x1848DCu;
    SET_GPR_U32(ctx, 31, 0x1848E4u);
    ctx->pc = 0x1848E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1848DCu;
    // 0x1848e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335320u, 0x1848DCu, 0x1848E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1848E4u;
label_1848e4:
    // 0x1848e4: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1848e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1848e8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1848e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1848ec: 0x45202b  sltu        $a0, $v0, $a1
    ctx->pc = 0x1848ecu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1848f0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1848f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1848f4: 0x44180a  movz        $v1, $v0, $a0
    ctx->pc = 0x1848f4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x1848f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1848f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1848fc: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x1848fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x184900: 0x31823  negu        $v1, $v1
    ctx->pc = 0x184900u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x184904: 0x2031024  and         $v0, $s0, $v1
    ctx->pc = 0x184904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x184908: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x184908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18490c: 0x3e00008  jr          $ra
    ctx->pc = 0x18490Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18490Cu;
        // 0x184910: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18490Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184914u;
    // 0x184914: 0x0  nop
    ctx->pc = 0x184914u;
    // NOP
    ctx->pc = 0x184918u;
}
