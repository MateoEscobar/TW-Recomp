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

// Function: sub_00126488
// Address: 0x126488 - 0x126520
void sub_00126488_0x126488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126488_0x126488");
#endif

    switch (ctx->pc) {
        case 0x1264b8u: goto label_1264b8;
        default: break;
    }

    ctx->pc = 0x126488u;

    // 0x126488: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x126488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x12648c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12648cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126490: 0x8c45b238  lw          $a1, -0x4DC8($v0)
    ctx->pc = 0x126490u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50B238u));
    // 0x126494: 0x10a00020  beqz        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x126494u;
    {
        const bool branch_taken_0x126494 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x126498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126494u;
        // 0x126498: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126494) {
            ctx->pc = 0x126518u;
            goto label_126518;
        }
    }
    ctx->pc = 0x12649Cu;
    // 0x12649c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x12649cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x1264a0: 0x8c625280  lw          $v0, 0x5280($v1)
    ctx->pc = 0x1264a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x715280u));
    // 0x1264a4: 0x1044000a  beq         $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1264A4u;
    {
        const bool branch_taken_0x1264a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1264A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1264A4u;
        // 0x1264a8: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1264a4) {
            ctx->pc = 0x1264D0u;
            goto label_1264d0;
        }
    }
    ctx->pc = 0x1264ACu;
    // 0x1264ac: 0x24e35280  addiu       $v1, $a3, 0x5280
    ctx->pc = 0x1264acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 21120));
    // 0x1264b0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1264b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1264b4: 0x0  nop
    ctx->pc = 0x1264b4u;
    // NOP
label_1264b8:
    // 0x1264b8: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x1264b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1264bc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1264BCu;
    {
        const bool branch_taken_0x1264bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1264C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1264BCu;
        // 0x1264c0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1264bc) {
            ctx->pc = 0x126518u;
            goto label_126518;
        }
    }
    ctx->pc = 0x1264C4u;
    // 0x1264c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1264c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1264c8: 0x5444fffb  bnel        $v0, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1264C8u;
    {
        const bool branch_taken_0x1264c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1264c8) {
            ctx->pc = 0x1264CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1264C8u;
            // 0x1264cc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1264B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1264b8;
        }
    }
    ctx->pc = 0x1264D0u;
label_1264d0:
    // 0x1264d0: 0x8d03b238  lw          $v1, -0x4DC8($t0)
    ctx->pc = 0x1264d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294947384)));
    // 0x1264d4: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x1264d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1264d8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1264D8u;
    {
        const bool branch_taken_0x1264d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1264DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1264D8u;
        // 0x1264dc: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1264d8) {
            ctx->pc = 0x126518u;
            goto label_126518;
        }
    }
    ctx->pc = 0x1264E0u;
    // 0x1264e0: 0x10c30008  beq         $a2, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1264E0u;
    {
        const bool branch_taken_0x1264e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1264E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1264E0u;
        // 0x1264e4: 0xad03b238  sw          $v1, -0x4DC8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294947384), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1264e0) {
            ctx->pc = 0x126504u;
            goto label_126504;
        }
    }
    ctx->pc = 0x1264E8u;
    // 0x1264e8: 0x24e55280  addiu       $a1, $a3, 0x5280
    ctx->pc = 0x1264e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 21120));
    // 0x1264ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1264ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1264f0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1264f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1264f4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1264f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1264f8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1264f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1264fc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1264fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x126500: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x126500u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_126504:
    // 0x126504: 0x8d02b238  lw          $v0, -0x4DC8($t0)
    ctx->pc = 0x126504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294947384)));
    // 0x126508: 0x24e35280  addiu       $v1, $a3, 0x5280
    ctx->pc = 0x126508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 21120));
    // 0x12650c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12650cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x126510: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x126510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x126514: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x126514u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_126518:
    // 0x126518: 0x3e00008  jr          $ra
    ctx->pc = 0x126518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126520u;
}
