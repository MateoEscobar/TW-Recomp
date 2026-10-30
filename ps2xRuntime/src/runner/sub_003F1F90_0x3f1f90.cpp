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

// Function: sub_003F1F90
// Address: 0x3f1f90 - 0x3f1fe0
void sub_003F1F90_0x3f1f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F1F90_0x3f1f90");
#endif

    switch (ctx->pc) {
        case 0x3f1fa8u: goto label_3f1fa8;
        default: break;
    }

    ctx->pc = 0x3f1f90u;

    // 0x3f1f90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f1f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3f1f94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3f1f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3f1f98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f1f98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1f9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f1f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f1fa0: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x3F1FA0u;
    SET_GPR_U32(ctx, 31, 0x3F1FA8u);
    ctx->pc = 0x3F1FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1FA0u;
    // 0x3f1fa4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3F1FA0u, 0x3F1FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1FA8u;
label_3f1fa8:
    // 0x3f1fa8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F1FA8u;
    {
        const bool branch_taken_0x3f1fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f1fa8) {
            ctx->pc = 0x3F1FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F1FA8u;
            // 0x3f1fac: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F1FC8u;
            goto label_3f1fc8;
        }
    }
    ctx->pc = 0x3F1FB0u;
    // 0x3f1fb0: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x3f1fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3f1fb4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3f1fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3f1fb8: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x3f1fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x3f1fbc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3f1fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3f1fc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F1FC0u;
    {
        const bool branch_taken_0x3f1fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1FC0u;
        // 0x3f1fc4: 0xae030054  sw          $v1, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1fc0) {
            ctx->pc = 0x3F1FD0u;
            goto label_3f1fd0;
        }
    }
    ctx->pc = 0x3F1FC8u;
label_3f1fc8:
    // 0x3f1fc8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3f1fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3f1fcc: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3f1fccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3f1fd0:
    // 0x3f1fd0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3f1fd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f1fd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f1fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f1fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x3F1FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F1FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1FD8u;
        // 0x3f1fdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F1FE0u;
}
