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

// Function: sub_001758D0
// Address: 0x1758d0 - 0x175928
void sub_001758D0_0x1758d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001758D0_0x1758d0");
#endif

    switch (ctx->pc) {
        case 0x1758e4u: goto label_1758e4;
        default: break;
    }

    ctx->pc = 0x1758d0u;

    // 0x1758d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1758d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1758d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1758d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1758d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1758d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1758dc: 0xc05d610  jal         func_175840
    ctx->pc = 0x1758DCu;
    SET_GPR_U32(ctx, 31, 0x1758E4u);
    ctx->pc = 0x1758E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1758DCu;
    // 0x1758e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175840u, 0x1758DCu, 0x1758E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1758E4u;
label_1758e4:
    // 0x1758e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1758e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1758e8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1758e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1758ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1758ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1758f0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1758f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1758f4: 0x8c440304  lw          $a0, 0x304($v0)
    ctx->pc = 0x1758f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 772)));
    // 0x1758f8: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1758f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1758fc: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1758FCu;
    {
        const bool branch_taken_0x1758fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x175900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1758FCu;
        // 0x175900: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1758fc) {
            ctx->pc = 0x175908u;
            goto label_175908;
        }
    }
    ctx->pc = 0x175904u;
    // 0x175904: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x175904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_175908:
    // 0x175908: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x175908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17590c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17590cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175910: 0x3e00008  jr          $ra
    ctx->pc = 0x175910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175910u;
        // 0x175914: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175918u;
    // 0x175918: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x175918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17591c: 0x0  nop
    ctx->pc = 0x17591cu;
    // NOP
    // 0x175920: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x175920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x175924: 0x0  nop
    ctx->pc = 0x175924u;
    // NOP
    ctx->pc = 0x175928u;
}
