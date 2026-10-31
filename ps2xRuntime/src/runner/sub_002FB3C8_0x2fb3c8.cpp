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

// Function: sub_002FB3C8
// Address: 0x2fb3c8 - 0x2fb418
void sub_002FB3C8_0x2fb3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB3C8_0x2fb3c8");
#endif

    switch (ctx->pc) {
        case 0x2fb3e8u: goto label_2fb3e8;
        default: break;
    }

    ctx->pc = 0x2fb3c8u;

    // 0x2fb3c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fb3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fb3cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fb3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fb3d0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2fb3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2fb3d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FB3D4u;
    {
        const bool branch_taken_0x2fb3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3D4u;
        // 0x2fb3d8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb3d4) {
            ctx->pc = 0x2FB3F8u;
            goto label_2fb3f8;
        }
    }
    ctx->pc = 0x2FB3DCu;
    // 0x2fb3dc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2fb3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fb3e0: 0xc08a014  jal         func_228050
    ctx->pc = 0x2FB3E0u;
    SET_GPR_U32(ctx, 31, 0x2FB3E8u);
    ctx->pc = 0x2FB3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB3E0u;
    // 0x2fb3e4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228050u, 0x2FB3E0u, 0x2FB3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB3E8u;
label_2fb3e8:
    // 0x2fb3e8: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x2fb3e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2fb3ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fb3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fb3f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB3F0u;
    {
        const bool branch_taken_0x2fb3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3F0u;
        // 0x2fb3f4: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb3f0) {
            ctx->pc = 0x2FB400u;
            goto label_2fb400;
        }
    }
    ctx->pc = 0x2FB3F8u;
label_2fb3f8:
    // 0x2fb3f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fb3f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb3fc: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2fb3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_2fb400:
    // 0x2fb400: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fb400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fb404: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB404u;
        // 0x2fb408: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB40Cu;
    // 0x2fb40c: 0x0  nop
    ctx->pc = 0x2fb40cu;
    // NOP
    // 0x2fb410: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2fb410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fb414: 0x0  nop
    ctx->pc = 0x2fb414u;
    // NOP
    ctx->pc = 0x2fb418u;
}
