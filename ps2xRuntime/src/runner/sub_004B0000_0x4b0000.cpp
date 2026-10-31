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

// Function: sub_004B0000
// Address: 0x4b0000 - 0x4b00d0
void sub_004B0000_0x4b0000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B0000_0x4b0000");
#endif

    switch (ctx->pc) {
        case 0x4b002cu: goto label_4b002c;
        case 0x4b005cu: goto label_4b005c;
        case 0x4b00acu: goto label_4b00ac;
        default: break;
    }

    ctx->pc = 0x4b0000u;

    // 0x4b0000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b0000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b0004: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b0004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b0008: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b0008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4b000c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b000cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0010: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4b0010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4b0014: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x4b0014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4b0018: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x4b0018u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4b001c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4B001Cu;
    {
        const bool branch_taken_0x4b001c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B0020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B001Cu;
        // 0x4b0020: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b001c) {
            ctx->pc = 0x4B0048u;
            goto label_4b0048;
        }
    }
    ctx->pc = 0x4B0024u;
    // 0x4b0024: 0xc12c326  jal         func_4B0C98
    ctx->pc = 0x4B0024u;
    SET_GPR_U32(ctx, 31, 0x4B002Cu);
    ctx->pc = 0x4B0028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0024u;
    // 0x4b0028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0C98u, 0x4B0024u, 0x4B002Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B002Cu;
label_4b002c:
    // 0x4b002c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4b002cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4b0030: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B0030u;
    {
        const bool branch_taken_0x4b0030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4b0030) {
            ctx->pc = 0x4B0034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B0030u;
            // 0x4b0034: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B0040u;
            goto label_4b0040;
        }
    }
    ctx->pc = 0x4B0038u;
    // 0x4b0038: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4B0038u;
    {
        const bool branch_taken_0x4b0038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0038u;
        // 0x4b003c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0038) {
            ctx->pc = 0x4B0070u;
            goto label_4b0070;
        }
    }
    ctx->pc = 0x4B0040u;
label_4b0040:
    // 0x4b0040: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x4b0040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4b0044: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x4b0044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4b0048:
    // 0x4b0048: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x4b0048u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4b004c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B004Cu;
    {
        const bool branch_taken_0x4b004c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B0050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B004Cu;
        // 0x4b0050: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b004c) {
            ctx->pc = 0x4B0068u;
            goto label_4b0068;
        }
    }
    ctx->pc = 0x4B0054u;
    // 0x4b0054: 0xc12c326  jal         func_4B0C98
    ctx->pc = 0x4B0054u;
    SET_GPR_U32(ctx, 31, 0x4B005Cu);
    ctx->pc = 0x4B0058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0054u;
    // 0x4b0058: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0C98u, 0x4B0054u, 0x4B005Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B005Cu;
label_4b005c:
    // 0x4b005c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4b005cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4b0060: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B0060u;
    {
        const bool branch_taken_0x4b0060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b0060) {
            ctx->pc = 0x4B0064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B0060u;
            // 0x4b0064: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B0070u;
            goto label_4b0070;
        }
    }
    ctx->pc = 0x4B0068u;
label_4b0068:
    // 0x4b0068: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4b0068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4b006c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x4b006cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4b0070:
    // 0x4b0070: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b0070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b0074: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b0074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b0078: 0x3e00008  jr          $ra
    ctx->pc = 0x4B0078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0078u;
        // 0x4b007c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0080u;
    // 0x4b0080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b0080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b0084: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b0084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b0088: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b0088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4b008c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b008cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0090: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4b0090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4b0094: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4b0094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4b0098: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x4b0098u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4b009c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B009Cu;
    {
        const bool branch_taken_0x4b009c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b009c) {
            ctx->pc = 0x4B00A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B009Cu;
            // 0x4b00a0: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B00C0u;
            goto label_4b00c0;
        }
    }
    ctx->pc = 0x4B00A4u;
    // 0x4b00a4: 0xc12c326  jal         func_4B0C98
    ctx->pc = 0x4B00A4u;
    SET_GPR_U32(ctx, 31, 0x4B00ACu);
    ctx->pc = 0x4B0C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0C98u, 0x4B00A4u, 0x4B00ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B00ACu;
label_4b00ac:
    // 0x4b00ac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4b00acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4b00b0: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B00B0u;
    {
        const bool branch_taken_0x4b00b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4B00B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B00B0u;
        // 0x4b00b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b00b0) {
            ctx->pc = 0x4B00C0u;
            goto label_4b00c0;
        }
    }
    ctx->pc = 0x4B00B8u;
    // 0x4b00b8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4b00b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4b00bc: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4b00bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_4b00c0:
    // 0x4b00c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b00c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b00c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b00c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b00c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4B00C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B00CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B00C8u;
        // 0x4b00cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B00C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B00D0u;
}
