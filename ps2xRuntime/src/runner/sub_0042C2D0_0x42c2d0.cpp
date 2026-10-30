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

// Function: sub_0042C2D0
// Address: 0x42c2d0 - 0x42c388
void sub_0042C2D0_0x42c2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042C2D0_0x42c2d0");
#endif

    switch (ctx->pc) {
        case 0x42c350u: goto label_42c350;
        case 0x42c37cu: goto label_42c37c;
        default: break;
    }

    ctx->pc = 0x42c2d0u;

    // 0x42c2d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x42c2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x42c2d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x42c2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x42c2d8: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x42c2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x42c2dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x42c2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x42c2e0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x42c2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x42c2e4: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x42C2E4u;
    {
        const bool branch_taken_0x42c2e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x42C2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C2E4u;
        // 0x42c2e8: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c2e4) {
            ctx->pc = 0x42C2F8u;
            goto label_42c2f8;
        }
    }
    ctx->pc = 0x42C2ECu;
    // 0x42c2ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x42c2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x42c2f0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x42C2F0u;
    {
        const bool branch_taken_0x42c2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C2F0u;
        // 0x42c2f4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c2f0) {
            ctx->pc = 0x42C374u;
            goto label_42c374;
        }
    }
    ctx->pc = 0x42C2F8u;
label_42c2f8:
    // 0x42c2f8: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x42c2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x42c2fc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x42C2FCu;
    {
        const bool branch_taken_0x42c2fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C2FCu;
        // 0x42c300: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c2fc) {
            ctx->pc = 0x42C328u;
            goto label_42c328;
        }
    }
    ctx->pc = 0x42C304u;
    // 0x42c304: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x42c304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x42c308: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x42C308u;
    {
        const bool branch_taken_0x42c308 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x42C30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C308u;
        // 0x42c30c: 0x41023  negu        $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c308) {
            ctx->pc = 0x42C320u;
            goto label_42c320;
        }
    }
    ctx->pc = 0x42C310u;
    // 0x42c310: 0x3402c1e0  ori         $v0, $zero, 0xC1E0
    ctx->pc = 0x42c310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49632);
    // 0x42c314: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x42c314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x42c318: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x42C318u;
    {
        const bool branch_taken_0x42c318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C318u;
        // 0x42c31c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c318) {
            ctx->pc = 0x42C380u;
            goto label_42c380;
        }
    }
    ctx->pc = 0x42C320u;
label_42c320:
    // 0x42c320: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x42C320u;
    {
        const bool branch_taken_0x42c320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C320u;
        // 0x42c324: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c320) {
            ctx->pc = 0x42C32Cu;
            goto label_42c32c;
        }
    }
    ctx->pc = 0x42C328u;
label_42c328:
    // 0x42c328: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x42c328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
label_42c32c:
    // 0x42c32c: 0xdfa50010  ld          $a1, 0x10($sp)
    ctx->pc = 0x42c32cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42c330: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x42c330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x42c334: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x42c334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x42c338: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x42c338u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x42c33c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x42C33Cu;
    {
        const bool branch_taken_0x42c33c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42C340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C33Cu;
        // 0x42c340: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c33c) {
            ctx->pc = 0x42C374u;
            goto label_42c374;
        }
    }
    ctx->pc = 0x42C344u;
    // 0x42c344: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x42c344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x42c348: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x42c348u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
    // 0x42c34c: 0x0  nop
    ctx->pc = 0x42c34cu;
    // NOP
label_42c350:
    // 0x42c350: 0x51878  dsll        $v1, $a1, 1
    ctx->pc = 0x42c350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 1);
    // 0x42c354: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x42c354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x42c358: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x42c358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42c35c: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x42c35cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x42c360: 0x0  nop
    ctx->pc = 0x42c360u;
    // NOP
    // 0x42c364: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x42C364u;
    {
        const bool branch_taken_0x42c364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42c364) {
            ctx->pc = 0x42C350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42c350;
        }
    }
    ctx->pc = 0x42C36Cu;
    // 0x42c36c: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x42c36cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x42c370: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x42c370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_42c374:
    // 0x42c374: 0xc10ae22  jal         func_42B888
    ctx->pc = 0x42C374u;
    SET_GPR_U32(ctx, 31, 0x42C37Cu);
    ctx->pc = 0x42C378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42C374u;
    // 0x42c378: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B888u, 0x42C374u, 0x42C37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C37Cu;
label_42c37c:
    // 0x42c37c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x42c37cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_42c380:
    // 0x42c380: 0x3e00008  jr          $ra
    ctx->pc = 0x42C380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42C384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C380u;
        // 0x42c384: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42C380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42C388u;
}
