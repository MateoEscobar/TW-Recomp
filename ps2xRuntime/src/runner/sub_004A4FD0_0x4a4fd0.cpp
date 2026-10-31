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

// Function: sub_004A4FD0
// Address: 0x4a4fd0 - 0x4a5130
void sub_004A4FD0_0x4a4fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A4FD0_0x4a4fd0");
#endif

    switch (ctx->pc) {
        case 0x4a5004u: goto label_4a5004;
        case 0x4a510cu: goto label_4a510c;
        case 0x4a5118u: goto label_4a5118;
        default: break;
    }

    ctx->pc = 0x4a4fd0u;

    // 0x4a4fd0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4a4fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4a4fd4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a4fd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a4fd8: 0x8f868a80  lw          $a2, -0x7580($gp)
    ctx->pc = 0x4a4fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a4fdc: 0x2444ad18  addiu       $a0, $v0, -0x52E8
    ctx->pc = 0x4a4fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x4a4fe0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a4fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a4fe4: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x4a4fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x4a4fe8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x4a4fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x4a4fec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A4FECu;
    {
        const bool branch_taken_0x4a4fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4FECu;
        // 0x4a4ff0: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4fec) {
            ctx->pc = 0x4A500Cu;
            goto label_4a500c;
        }
    }
    ctx->pc = 0x4A4FF4u;
    // 0x4a4ff4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a4ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4ff8: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x4a4ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x4a4ffc: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x4A4FFCu;
    SET_GPR_U32(ctx, 31, 0x4A5004u);
    ctx->pc = 0x4A5000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4FFCu;
    // 0x4a5000: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x4A4FFCu, 0x4A5004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5004u;
label_4a5004:
    // 0x4a5004: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4A5004u;
    {
        const bool branch_taken_0x4a5004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5004u;
        // 0x4a5008: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5004) {
            ctx->pc = 0x4A5010u;
            goto label_4a5010;
        }
    }
    ctx->pc = 0x4A500Cu;
label_4a500c:
    // 0x4a500c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a500cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a5010:
    // 0x4a5010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a5010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a5014: 0x3e00008  jr          $ra
    ctx->pc = 0x4A5014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A5018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5014u;
        // 0x4a5018: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A5014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A501Cu;
    // 0x4a501c: 0x0  nop
    ctx->pc = 0x4a501cu;
    // NOP
    // 0x4a5020: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x4a5020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x4a5024: 0x0  nop
    ctx->pc = 0x4a5024u;
    // NOP
    // 0x4a5028: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x4a5028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x4a502c: 0x0  nop
    ctx->pc = 0x4a502cu;
    // NOP
    // 0x4a5030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a5030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4a5034: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x4a5034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x4a5038: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4a5038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4a503c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x4a503cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x4a5040: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a5040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4a5044: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x4A5044u;
    {
        const bool branch_taken_0x4a5044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5044u;
        // 0x4a5048: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5044) {
            ctx->pc = 0x4A50F8u;
            goto label_4a50f8;
        }
    }
    ctx->pc = 0x4A504Cu;
    // 0x4a504c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4a504cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4a5050: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4a5050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4a5054: 0x24420110  addiu       $v0, $v0, 0x110
    ctx->pc = 0x4a5054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x4a5058: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a5058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a505c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4a505cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a5060: 0x800008  jr          $a0
    ctx->pc = 0x4A5060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4A5068u: goto label_4a5068;
            case 0x4A5080u: goto label_4a5080;
            case 0x4A5098u: goto label_4a5098;
            case 0x4A50B0u: goto label_4a50b0;
            case 0x4A50C8u: goto label_4a50c8;
            case 0x4A50E0u: goto label_4a50e0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A5060u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4A5068u;
label_4a5068:
    // 0x4a5068: 0x8f838a80  lw          $v1, -0x7580($gp)
    ctx->pc = 0x4a5068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a506c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4a506cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4a5070: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x4a5070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x4a5074: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a5074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a5078: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x4A5078u;
    {
        const bool branch_taken_0x4a5078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5078u;
        // 0x4a507c: 0x8c700004  lw          $s0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5078) {
            ctx->pc = 0x4A5118u;
            goto label_4a5118;
        }
    }
    ctx->pc = 0x4A5080u;
label_4a5080:
    // 0x4a5080: 0x8f838a80  lw          $v1, -0x7580($gp)
    ctx->pc = 0x4a5080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a5084: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4a5084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4a5088: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x4a5088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x4a508c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a508cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a5090: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x4A5090u;
    {
        const bool branch_taken_0x4a5090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5090u;
        // 0x4a5094: 0x8c700008  lw          $s0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5090) {
            ctx->pc = 0x4A5118u;
            goto label_4a5118;
        }
    }
    ctx->pc = 0x4A5098u;
label_4a5098:
    // 0x4a5098: 0x8f838a80  lw          $v1, -0x7580($gp)
    ctx->pc = 0x4a5098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a509c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4a509cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4a50a0: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x4a50a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x4a50a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a50a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a50a8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x4A50A8u;
    {
        const bool branch_taken_0x4a50a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A50ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A50A8u;
        // 0x4a50ac: 0x8c70000c  lw          $s0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a50a8) {
            ctx->pc = 0x4A5118u;
            goto label_4a5118;
        }
    }
    ctx->pc = 0x4A50B0u;
label_4a50b0:
    // 0x4a50b0: 0x8f838a80  lw          $v1, -0x7580($gp)
    ctx->pc = 0x4a50b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a50b4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4a50b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4a50b8: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x4a50b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x4a50bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a50bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a50c0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x4A50C0u;
    {
        const bool branch_taken_0x4a50c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A50C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A50C0u;
        // 0x4a50c4: 0x8c700010  lw          $s0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a50c0) {
            ctx->pc = 0x4A5118u;
            goto label_4a5118;
        }
    }
    ctx->pc = 0x4A50C8u;
label_4a50c8:
    // 0x4a50c8: 0x8f838a80  lw          $v1, -0x7580($gp)
    ctx->pc = 0x4a50c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a50cc: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4a50ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4a50d0: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x4a50d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x4a50d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a50d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a50d8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4A50D8u;
    {
        const bool branch_taken_0x4a50d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A50DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A50D8u;
        // 0x4a50dc: 0x8c700014  lw          $s0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a50d8) {
            ctx->pc = 0x4A5118u;
            goto label_4a5118;
        }
    }
    ctx->pc = 0x4A50E0u;
label_4a50e0:
    // 0x4a50e0: 0x8f838a80  lw          $v1, -0x7580($gp)
    ctx->pc = 0x4a50e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a50e4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4a50e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4a50e8: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x4a50e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x4a50ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a50ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a50f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4A50F0u;
    {
        const bool branch_taken_0x4a50f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A50F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A50F0u;
        // 0x4a50f4: 0x8c700018  lw          $s0, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a50f0) {
            ctx->pc = 0x4A5118u;
            goto label_4a5118;
        }
    }
    ctx->pc = 0x4A50F8u;
label_4a50f8:
    // 0x4a50f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a50f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a50fc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4a50fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5100: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x4a5100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x4a5104: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x4A5104u;
    SET_GPR_U32(ctx, 31, 0x4A510Cu);
    ctx->pc = 0x4A5108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5104u;
    // 0x4a5108: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4A5104u, 0x4A510Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A510Cu;
label_4a510c:
    // 0x4a510c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a510cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5110: 0xc11f024  jal         func_47C090
    ctx->pc = 0x4A5110u;
    SET_GPR_U32(ctx, 31, 0x4A5118u);
    ctx->pc = 0x4A5114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5110u;
    // 0x4a5114: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4A5110u, 0x4A5118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5118u;
label_4a5118:
    // 0x4a5118: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4a5118u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a511c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a511cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a5120: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4a5120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a5124: 0x3e00008  jr          $ra
    ctx->pc = 0x4A5124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A5128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5124u;
        // 0x4a5128: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A5124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A512Cu;
    // 0x4a512c: 0x0  nop
    ctx->pc = 0x4a512cu;
    // NOP
    ctx->pc = 0x4a5130u;
}
