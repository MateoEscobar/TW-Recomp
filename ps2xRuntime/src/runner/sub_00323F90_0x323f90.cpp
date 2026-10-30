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

// Function: sub_00323F90
// Address: 0x323f90 - 0x324000
void sub_00323F90_0x323f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323F90_0x323f90");
#endif

    switch (ctx->pc) {
        case 0x323fccu: goto label_323fcc;
        default: break;
    }

    ctx->pc = 0x323f90u;

    // 0x323f90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x323f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x323f94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x323f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x323f98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x323f9c: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x323F9Cu;
    {
        const bool branch_taken_0x323f9c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x323FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323F9Cu;
        // 0x323fa0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323f9c) {
            ctx->pc = 0x323FB4u;
            goto label_323fb4;
        }
    }
    ctx->pc = 0x323FA4u;
    // 0x323fa4: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x323fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x323fa8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x323fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x323fac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x323FACu;
    {
        const bool branch_taken_0x323fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323FACu;
        // 0x323fb0: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323fac) {
            ctx->pc = 0x323FBCu;
            goto label_323fbc;
        }
    }
    ctx->pc = 0x323FB4u;
label_323fb4:
    // 0x323fb4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x323fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x323fb8: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x323fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_323fbc:
    // 0x323fbc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x323fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x323fc0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x323fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x323fc4: 0xc0cc8c6  jal         func_332318
    ctx->pc = 0x323FC4u;
    SET_GPR_U32(ctx, 31, 0x323FCCu);
    ctx->pc = 0x323FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323FC4u;
    // 0x323fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332318u, 0x323FC4u, 0x323FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323FCCu;
label_323fcc:
    // 0x323fcc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x323fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x323fd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323fd4: 0x24638000  addiu       $v1, $v1, -0x8000
    ctx->pc = 0x323fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x323fd8: 0xdc647ff0  ld          $a0, 0x7FF0($v1)
    ctx->pc = 0x323fd8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 32752)));
    // 0x323fdc: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x323fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x323fe0: 0xdc657ff8  ld          $a1, 0x7FF8($v1)
    ctx->pc = 0x323fe0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 32760)));
    // 0x323fe4: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x323fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x323fe8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x323fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x323fec: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x323fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x323ff0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x323ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x323ff4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x323ff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x323FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323FF8u;
        // 0x323ffc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324000u;
}
