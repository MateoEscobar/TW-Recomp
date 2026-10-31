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

// Function: sub_0019F8B8
// Address: 0x19f8b8 - 0x19f928
void sub_0019F8B8_0x19f8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F8B8_0x19f8b8");
#endif

    switch (ctx->pc) {
        case 0x19f910u: goto label_19f910;
        default: break;
    }

    ctx->pc = 0x19f8b8u;

    // 0x19f8b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19f8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19f8bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19f8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19f8c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19f8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19f8c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19f8c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f8c8: 0x8e020584  lw          $v0, 0x584($s0)
    ctx->pc = 0x19f8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1412)));
    // 0x19f8cc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x19F8CCu;
    {
        const bool branch_taken_0x19f8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F8CCu;
        // 0x19f8d0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f8cc) {
            ctx->pc = 0x19F914u;
            goto label_19f914;
        }
    }
    ctx->pc = 0x19F8D4u;
    // 0x19f8d4: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x19f8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x19f8d8: 0x84830224  lh          $v1, 0x224($a0)
    ctx->pc = 0x19f8d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x19f8dc: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x19f8dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x19f8e0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x19f8e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x19f8e4: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x19F8E4u;
    {
        const bool branch_taken_0x19f8e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f8e4) {
            ctx->pc = 0x19F8E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F8E4u;
            // 0x19f8e8: 0x8e02045c  lw          $v0, 0x45C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F900u;
            goto label_19f900;
        }
    }
    ctx->pc = 0x19F8ECu;
    // 0x19f8ec: 0x8e030468  lw          $v1, 0x468($s0)
    ctx->pc = 0x19f8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1128)));
    // 0x19f8f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f8f4: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19F8F4u;
    {
        const bool branch_taken_0x19f8f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19f8f4) {
            ctx->pc = 0x19F8F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F8F4u;
            // 0x19f8f8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F918u;
            goto label_19f918;
        }
    }
    ctx->pc = 0x19F8FCu;
    // 0x19f8fc: 0x8e02045c  lw          $v0, 0x45C($s0)
    ctx->pc = 0x19f8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1116)));
label_19f900:
    // 0x19f900: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F900u;
    {
        const bool branch_taken_0x19f900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f900) {
            ctx->pc = 0x19F904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F900u;
            // 0x19f904: 0xae000584  sw          $zero, 0x584($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1412), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F914u;
            goto label_19f914;
        }
    }
    ctx->pc = 0x19F908u;
    // 0x19f908: 0xc068998  jal         func_1A2660
    ctx->pc = 0x19F908u;
    SET_GPR_U32(ctx, 31, 0x19F910u);
    ctx->pc = 0x19F90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F908u;
    // 0x19f90c: 0x26040480  addiu       $a0, $s0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x19F908u, 0x19F910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F910u;
label_19f910:
    // 0x19f910: 0xae000584  sw          $zero, 0x584($s0)
    ctx->pc = 0x19f910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1412), GPR_U32(ctx, 0));
label_19f914:
    // 0x19f914: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19f914u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19f918:
    // 0x19f918: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19f918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f91c: 0x3e00008  jr          $ra
    ctx->pc = 0x19F91Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F91Cu;
        // 0x19f920: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F91Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F924u;
    // 0x19f924: 0x0  nop
    ctx->pc = 0x19f924u;
    // NOP
    ctx->pc = 0x19f928u;
}
