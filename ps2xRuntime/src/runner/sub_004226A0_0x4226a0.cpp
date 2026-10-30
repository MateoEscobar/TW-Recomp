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

// Function: sub_004226A0
// Address: 0x4226a0 - 0x4226f8
void sub_004226A0_0x4226a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004226A0_0x4226a0");
#endif

    switch (ctx->pc) {
        case 0x4226bcu: goto label_4226bc;
        case 0x4226c4u: goto label_4226c4;
        case 0x4226dcu: goto label_4226dc;
        default: break;
    }

    ctx->pc = 0x4226a0u;

    // 0x4226a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4226a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4226a4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x4226a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x4226a8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4226a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4226ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4226acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4226b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4226b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4226b4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x4226B4u;
    SET_GPR_U32(ctx, 31, 0x4226BCu);
    ctx->pc = 0x4226B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4226B4u;
    // 0x4226b8: 0x30b0ffff  andi        $s0, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x4226B4u, 0x4226BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4226BCu;
label_4226bc:
    // 0x4226bc: 0xc08a61a  jal         func_229868
    ctx->pc = 0x4226BCu;
    SET_GPR_U32(ctx, 31, 0x4226C4u);
    ctx->pc = 0x4226C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4226BCu;
    // 0x4226c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x4226BCu, 0x4226C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4226C4u;
label_4226c4:
    // 0x4226c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4226C4u;
    {
        const bool branch_taken_0x4226c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4226C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4226C4u;
        // 0x4226c8: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4226c4) {
            ctx->pc = 0x4226E4u;
            goto label_4226e4;
        }
    }
    ctx->pc = 0x4226CCu;
    // 0x4226cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4226ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4226d0: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x4226d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x4226d4: 0xc108aa4  jal         func_422A90
    ctx->pc = 0x4226D4u;
    SET_GPR_U32(ctx, 31, 0x4226DCu);
    ctx->pc = 0x4226D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4226D4u;
    // 0x4226d8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x422A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x422A90u, 0x4226D4u, 0x4226DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4226DCu;
label_4226dc:
    // 0x4226dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4226DCu;
    {
        const bool branch_taken_0x4226dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4226E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4226DCu;
        // 0x4226e0: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4226dc) {
            ctx->pc = 0x4226E8u;
            goto label_4226e8;
        }
    }
    ctx->pc = 0x4226E4u;
label_4226e4:
    // 0x4226e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4226e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4226e8:
    // 0x4226e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4226e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4226ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4226ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4226f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4226F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4226F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4226F0u;
        // 0x4226f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4226F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4226F8u;
}
