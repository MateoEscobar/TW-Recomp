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

// Function: sub_004402D8
// Address: 0x4402d8 - 0x440380
void sub_004402D8_0x4402d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004402D8_0x4402d8");
#endif

    switch (ctx->pc) {
        case 0x4402f0u: goto label_4402f0;
        case 0x440308u: goto label_440308;
        case 0x44034cu: goto label_44034c;
        case 0x440368u: goto label_440368;
        default: break;
    }

    ctx->pc = 0x4402d8u;

    // 0x4402d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4402d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4402dc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4402dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4402e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4402e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4402e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4402e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4402e8: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x4402E8u;
    SET_GPR_U32(ctx, 31, 0x4402F0u);
    ctx->pc = 0x4402ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4402E8u;
    // 0x4402ec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x4402E8u, 0x4402F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4402F0u;
label_4402f0:
    // 0x4402f0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4402f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4402f4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4402f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4402f8: 0x18800019  blez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x4402F8u;
    {
        const bool branch_taken_0x4402f8 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x4402FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4402F8u;
        // 0x4402fc: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4402f8) {
            ctx->pc = 0x440360u;
            goto label_440360;
        }
    }
    ctx->pc = 0x440300u;
    // 0x440300: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x440300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x440304: 0x0  nop
    ctx->pc = 0x440304u;
    // NOP
label_440308:
    // 0x440308: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x440308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x44030c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x44030cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x440310: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x440310u;
    {
        const bool branch_taken_0x440310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x440310) {
            ctx->pc = 0x440314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x440310u;
            // 0x440314: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x440354u;
            goto label_440354;
        }
    }
    ctx->pc = 0x440318u;
    // 0x440318: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x440318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x44031c: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x44031cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x440320: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x440320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x440324: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x440324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x440328: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x440328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x44032c: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x44032Cu;
    {
        const bool branch_taken_0x44032c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x440330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44032Cu;
        // 0x440330: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44032c) {
            ctx->pc = 0x440340u;
            goto label_440340;
        }
    }
    ctx->pc = 0x440334u;
    // 0x440334: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x440334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x440338: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x440338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44033c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x44033cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_440340:
    // 0x440340: 0xae100014  sw          $s0, 0x14($s0)
    ctx->pc = 0x440340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
    // 0x440344: 0xc110cc4  jal         func_443310
    ctx->pc = 0x440344u;
    SET_GPR_U32(ctx, 31, 0x44034Cu);
    ctx->pc = 0x440348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x440344u;
    // 0x440348: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x440344u, 0x44034Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44034Cu;
label_44034c:
    // 0x44034c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x44034Cu;
    {
        const bool branch_taken_0x44034c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x440350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44034Cu;
        // 0x440350: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44034c) {
            ctx->pc = 0x44036Cu;
            goto label_44036c;
        }
    }
    ctx->pc = 0x440354u;
label_440354:
    // 0x440354: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x440354u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x440358: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x440358u;
    {
        const bool branch_taken_0x440358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440358u;
        // 0x44035c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440358) {
            ctx->pc = 0x440308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_440308;
        }
    }
    ctx->pc = 0x440360u;
label_440360:
    // 0x440360: 0xc110cc4  jal         func_443310
    ctx->pc = 0x440360u;
    SET_GPR_U32(ctx, 31, 0x440368u);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x440360u, 0x440368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x440368u;
label_440368:
    // 0x440368: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x440368u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44036c:
    // 0x44036c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x44036cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x440370: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x440370u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x440374: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x440374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x440378: 0x3e00008  jr          $ra
    ctx->pc = 0x440378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44037Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440378u;
        // 0x44037c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x440378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x440380u;
}
