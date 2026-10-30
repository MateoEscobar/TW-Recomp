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

// Function: sub_00432510
// Address: 0x432510 - 0x4325e0
void sub_00432510_0x432510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00432510_0x432510");
#endif

    switch (ctx->pc) {
        case 0x43255cu: goto label_43255c;
        default: break;
    }

    ctx->pc = 0x432510u;

    // 0x432510: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x432510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x432514: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x432514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x432518: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x432518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x43251c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x43251cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432520: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x432520u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x432524: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x432524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x432528: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x432528u;
    {
        const bool branch_taken_0x432528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432528u;
        // 0x43252c: 0x26030043  addiu       $v1, $s0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 67));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432528) {
            ctx->pc = 0x432544u;
            goto label_432544;
        }
    }
    ctx->pc = 0x432530u;
    // 0x432530: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x432530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x432534: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x432534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x432538: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x432538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x43253c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x43253Cu;
    {
        const bool branch_taken_0x43253c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43253Cu;
        // 0x432540: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43253c) {
            ctx->pc = 0x4325C4u;
            goto label_4325c4;
        }
    }
    ctx->pc = 0x432544u;
label_432544:
    // 0x432544: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x432544u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x432548: 0x4a20014  bltzl       $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x432548u;
    {
        const bool branch_taken_0x432548 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x432548) {
            ctx->pc = 0x43254Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x432548u;
            // 0x43254c: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43259Cu;
            goto label_43259c;
        }
    }
    ctx->pc = 0x432550u;
    // 0x432550: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x432550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x432554: 0xc10ea54  jal         func_43A950
    ctx->pc = 0x432554u;
    SET_GPR_U32(ctx, 31, 0x43255Cu);
    ctx->pc = 0x432558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x432554u;
    // 0x432558: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43A950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43A950u, 0x432554u, 0x43255Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43255Cu;
label_43255c:
    // 0x43255c: 0x440000e  bltz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x43255Cu;
    {
        const bool branch_taken_0x43255c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x432560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43255Cu;
        // 0x432560: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43255c) {
            ctx->pc = 0x432598u;
            goto label_432598;
        }
    }
    ctx->pc = 0x432564u;
    // 0x432564: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x432564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x432568: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x432568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x43256c: 0x5443000b  bnel        $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x43256Cu;
    {
        const bool branch_taken_0x43256c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x43256c) {
            ctx->pc = 0x432570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43256Cu;
            // 0x432570: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43259Cu;
            goto label_43259c;
        }
    }
    ctx->pc = 0x432574u;
    // 0x432574: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x432574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x432578: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x432578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x43257c: 0x24422aa8  addiu       $v0, $v0, 0x2AA8
    ctx->pc = 0x43257cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10920));
    // 0x432580: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x432580u;
    {
        const bool branch_taken_0x432580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x432584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432580u;
        // 0x432584: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432580) {
            ctx->pc = 0x43259Cu;
            goto label_43259c;
        }
    }
    ctx->pc = 0x432588u;
    // 0x432588: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x432588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x43258c: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x43258cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x432590: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x432590u;
    {
        const bool branch_taken_0x432590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432590u;
        // 0x432594: 0x34420400  ori         $v0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x432590) {
            ctx->pc = 0x4325A0u;
            goto label_4325a0;
        }
    }
    ctx->pc = 0x432598u;
label_432598:
    // 0x432598: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x432598u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_43259c:
    // 0x43259c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x43259cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_4325a0:
    // 0x4325a0: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x4325a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4325a4: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x4325a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4325a8: 0x26040043  addiu       $a0, $s0, 0x43
    ctx->pc = 0x4325a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 67));
    // 0x4325ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4325acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4325b0: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x4325b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x4325b4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4325b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4325b8: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x4325b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x4325bc: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x4325bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4325c0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4325c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_4325c4:
    // 0x4325c4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4325c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4325c8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4325c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4325cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4325CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4325D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4325CCu;
        // 0x4325d0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4325CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4325D4u;
    // 0x4325d4: 0x0  nop
    ctx->pc = 0x4325d4u;
    // NOP
    // 0x4325d8: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x4325d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x4325dc: 0x0  nop
    ctx->pc = 0x4325dcu;
    // NOP
    ctx->pc = 0x4325e0u;
}
