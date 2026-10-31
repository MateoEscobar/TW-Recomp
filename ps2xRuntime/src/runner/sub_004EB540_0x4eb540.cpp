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

// Function: sub_004EB540
// Address: 0x4eb540 - 0x4eb5e0
void sub_004EB540_0x4eb540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EB540_0x4eb540");
#endif

    switch (ctx->pc) {
        case 0x4eb548u: goto label_4eb548;
        case 0x4eb570u: goto label_4eb570;
        case 0x4eb598u: goto label_4eb598;
        default: break;
    }

    ctx->pc = 0x4eb540u;

    // 0x4eb540: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4eb540u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb544: 0x0  nop
    ctx->pc = 0x4eb544u;
    // NOP
label_4eb548:
    // 0x4eb548: 0x90c30018  lbu         $v1, 0x18($a2)
    ctx->pc = 0x4eb548u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x4eb54c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x4eb54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4eb550: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x4eb550u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb554: 0x90820018  lbu         $v0, 0x18($a0)
    ctx->pc = 0x4eb554u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x4eb558: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4eb558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4eb55c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4eb55cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4eb560: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4EB560u;
    {
        const bool branch_taken_0x4eb560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB560u;
        // 0x4eb564: 0x24a5fffc  addiu       $a1, $a1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb560) {
            ctx->pc = 0x4EB588u;
            goto label_4eb588;
        }
    }
    ctx->pc = 0x4EB568u;
    // 0x4eb568: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4eb568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb56c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x4eb56cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_4eb570:
    // 0x4eb570: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4eb570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4eb574: 0x90620018  lbu         $v0, 0x18($v1)
    ctx->pc = 0x4eb574u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x4eb578: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4eb578u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4eb57c: 0x0  nop
    ctx->pc = 0x4eb57cu;
    // NOP
    // 0x4eb580: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4EB580u;
    {
        const bool branch_taken_0x4eb580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4eb580) {
            ctx->pc = 0x4EB584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EB580u;
            // 0x4eb584: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EB570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4eb570;
        }
    }
    ctx->pc = 0x4EB588u;
label_4eb588:
    // 0x4eb588: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4eb588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4eb58c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4EB58Cu;
    {
        const bool branch_taken_0x4eb58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB58Cu;
        // 0x4eb590: 0x310400ff  andi        $a0, $t0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb58c) {
            ctx->pc = 0x4EB59Cu;
            goto label_4eb59c;
        }
    }
    ctx->pc = 0x4EB594u;
    // 0x4eb594: 0x0  nop
    ctx->pc = 0x4eb594u;
    // NOP
label_4eb598:
    // 0x4eb598: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4eb598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4eb59c:
    // 0x4eb59c: 0x90620018  lbu         $v0, 0x18($v1)
    ctx->pc = 0x4eb59cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x4eb5a0: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x4eb5a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4eb5a4: 0x0  nop
    ctx->pc = 0x4eb5a4u;
    // NOP
    // 0x4eb5a8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4EB5A8u;
    {
        const bool branch_taken_0x4eb5a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4eb5a8) {
            ctx->pc = 0x4EB5ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EB5A8u;
            // 0x4eb5ac: 0x24a5fffc  addiu       $a1, $a1, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EB598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4eb598;
        }
    }
    ctx->pc = 0x4EB5B0u;
    // 0x4eb5b0: 0xe5102b  sltu        $v0, $a3, $a1
    ctx->pc = 0x4eb5b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x4eb5b4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4EB5B4u;
    {
        const bool branch_taken_0x4eb5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eb5b4) {
            ctx->pc = 0x4EB5D4u;
            goto label_4eb5d4;
        }
    }
    ctx->pc = 0x4EB5BCu;
    // 0x4eb5bc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4eb5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4eb5c0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4eb5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4eb5c4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4eb5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4eb5c8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4eb5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4eb5cc: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x4EB5CCu;
    {
        const bool branch_taken_0x4eb5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB5CCu;
        // 0x4eb5d0: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb5cc) {
            ctx->pc = 0x4EB548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4eb548;
        }
    }
    ctx->pc = 0x4EB5D4u;
label_4eb5d4:
    // 0x4eb5d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4EB5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EB5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB5D4u;
        // 0x4eb5d8: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EB5D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EB5DCu;
    // 0x4eb5dc: 0x0  nop
    ctx->pc = 0x4eb5dcu;
    // NOP
    ctx->pc = 0x4eb5e0u;
}
