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

// Function: sub_00281188
// Address: 0x281188 - 0x2811f0
void sub_00281188_0x281188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281188_0x281188");
#endif

    switch (ctx->pc) {
        case 0x2811a4u: goto label_2811a4;
        case 0x2811c8u: goto label_2811c8;
        case 0x2811d8u: goto label_2811d8;
        default: break;
    }

    ctx->pc = 0x281188u;

    // 0x281188: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x281188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28118c: 0x3c052fef  lui         $a1, 0x2FEF
    ctx->pc = 0x28118cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12271 << 16));
    // 0x281190: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x281190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x281194: 0x34a5efff  ori         $a1, $a1, 0xEFFF
    ctx->pc = 0x281194u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61439);
    // 0x281198: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x281198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28119c: 0xc089998  jal         func_226660
    ctx->pc = 0x28119Cu;
    SET_GPR_U32(ctx, 31, 0x2811A4u);
    ctx->pc = 0x2811A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28119Cu;
    // 0x2811a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x28119Cu, 0x2811A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2811A4u;
label_2811a4:
    // 0x2811a4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2811A4u;
    {
        const bool branch_taken_0x2811a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2811A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2811A4u;
        // 0x2811a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2811a4) {
            ctx->pc = 0x2811DCu;
            goto label_2811dc;
        }
    }
    ctx->pc = 0x2811ACu;
    // 0x2811ac: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x2811acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
    // 0x2811b0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2811b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x2811b4: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x2811b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
    // 0x2811b8: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x2811b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x2811bc: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x2811bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
    // 0x2811c0: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x2811C0u;
    SET_GPR_U32(ctx, 31, 0x2811C8u);
    ctx->pc = 0x2811C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2811C0u;
    // 0x2811c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2811C0u, 0x2811C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2811C8u;
label_2811c8:
    // 0x2811c8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2811C8u;
    {
        const bool branch_taken_0x2811c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2811c8) {
            ctx->pc = 0x2811CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2811C8u;
            // 0x2811cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2811DCu;
            goto label_2811dc;
        }
    }
    ctx->pc = 0x2811D0u;
    // 0x2811d0: 0xc093604  jal         func_24D810
    ctx->pc = 0x2811D0u;
    SET_GPR_U32(ctx, 31, 0x2811D8u);
    ctx->pc = 0x2811D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2811D0u;
    // 0x2811d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D810u, 0x2811D0u, 0x2811D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2811D8u;
label_2811d8:
    // 0x2811d8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2811d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2811dc:
    // 0x2811dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2811dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2811e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2811e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2811e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2811E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2811E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2811E4u;
        // 0x2811e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2811E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2811ECu;
    // 0x2811ec: 0x0  nop
    ctx->pc = 0x2811ecu;
    // NOP
    ctx->pc = 0x2811f0u;
}
