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

// Function: sub_004E1038
// Address: 0x4e1038 - 0x4e1190
void sub_004E1038_0x4e1038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E1038_0x4e1038");
#endif

    switch (ctx->pc) {
        case 0x4e1068u: goto label_4e1068;
        case 0x4e10a4u: goto label_4e10a4;
        case 0x4e10f8u: goto label_4e10f8;
        case 0x4e1128u: goto label_4e1128;
        case 0x4e1160u: goto label_4e1160;
        default: break;
    }

    ctx->pc = 0x4e1038u;

    // 0x4e1038: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e1038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4e103c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4e103cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e1040: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4e1040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4e1044: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e1044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e1048: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4e1048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4e104c: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x4e104cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e1050: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x4e1050u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4e1054: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x4E1054u;
    {
        const bool branch_taken_0x4e1054 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1054u;
        // 0x4e1058: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1054) {
            ctx->pc = 0x4E1084u;
            goto label_4e1084;
        }
    }
    ctx->pc = 0x4E105Cu;
    // 0x4e105c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4e105cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e1060: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x4e1060u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e1064: 0x0  nop
    ctx->pc = 0x4e1064u;
    // NOP
label_4e1068:
    // 0x4e1068: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x4e1068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4e106c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x4e106cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4e1070: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4E1070u;
    {
        const bool branch_taken_0x4e1070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1070) {
            ctx->pc = 0x4E1074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1070u;
            // 0x4e1074: 0x8ce6000c  lw          $a2, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E107Cu;
            goto label_4e107c;
        }
    }
    ctx->pc = 0x4E1078u;
    // 0x4e1078: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x4e1078u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_4e107c:
    // 0x4e107c: 0x54c0fffa  bnel        $a2, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4E107Cu;
    {
        const bool branch_taken_0x4e107c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e107c) {
            ctx->pc = 0x4E1080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E107Cu;
            // 0x4e1080: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e1068;
        }
    }
    ctx->pc = 0x4E1084u;
label_4e1084:
    // 0x4e1084: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x4E1084u;
    {
        const bool branch_taken_0x4e1084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1084u;
        // 0x4e1088: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1084) {
            ctx->pc = 0x4E1140u;
            goto label_4e1140;
        }
    }
    ctx->pc = 0x4E108Cu;
    // 0x4e108c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4e108cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e1090: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4e1090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4e1094: 0x14e30005  bne         $a3, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E1094u;
    {
        const bool branch_taken_0x4e1094 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x4E1098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1094u;
        // 0x4e1098: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1094) {
            ctx->pc = 0x4E10ACu;
            goto label_4e10ac;
        }
    }
    ctx->pc = 0x4E109Cu;
    // 0x4e109c: 0xc13831a  jal         func_4E0C68
    ctx->pc = 0x4E109Cu;
    SET_GPR_U32(ctx, 31, 0x4E10A4u);
    ctx->pc = 0x4E10A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E109Cu;
    // 0x4e10a0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E0C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E0C68u, 0x4E109Cu, 0x4E10A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E10A4u;
label_4e10a4:
    // 0x4e10a4: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x4E10A4u;
    {
        const bool branch_taken_0x4e10a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E10A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E10A4u;
        // 0x4e10a8: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e10a4) {
            ctx->pc = 0x4E1164u;
            goto label_4e1164;
        }
    }
    ctx->pc = 0x4E10ACu;
label_4e10ac:
    // 0x4e10ac: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4e10acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e10b0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E10B0u;
    {
        const bool branch_taken_0x4e10b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E10B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E10B0u;
        // 0x4e10b4: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e10b0) {
            ctx->pc = 0x4E10D4u;
            goto label_4e10d4;
        }
    }
    ctx->pc = 0x4E10B8u;
    // 0x4e10b8: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x4e10b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4e10bc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4e10bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4e10c0: 0x54670005  bnel        $v1, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E10C0u;
    {
        const bool branch_taken_0x4e10c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x4e10c0) {
            ctx->pc = 0x4E10C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E10C0u;
            // 0x4e10c4: 0x8d230000  lw          $v1, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E10D8u;
            goto label_4e10d8;
        }
    }
    ctx->pc = 0x4E10C8u;
    // 0x4e10c8: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x4e10c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4e10cc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x4E10CCu;
    {
        const bool branch_taken_0x4e10cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E10D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E10CCu;
        // 0x4e10d0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e10cc) {
            ctx->pc = 0x4E1140u;
            goto label_4e1140;
        }
    }
    ctx->pc = 0x4E10D4u;
label_4e10d4:
    // 0x4e10d4: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4e10d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4e10d8:
    // 0x4e10d8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e10d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4e10dc: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x4E10DCu;
    {
        const bool branch_taken_0x4e10dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e10dc) {
            ctx->pc = 0x4E10E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E10DCu;
            // 0x4e10e0: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1118u;
            goto label_4e1118;
        }
    }
    ctx->pc = 0x4E10E4u;
    // 0x4e10e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4e10e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e10e8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e10e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e10ec: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x4E10ECu;
    {
        const bool branch_taken_0x4e10ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e10ec) {
            ctx->pc = 0x4E10F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E10ECu;
            // 0x4e10f0: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1140u;
            goto label_4e1140;
        }
    }
    ctx->pc = 0x4E10F4u;
    // 0x4e10f4: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x4e10f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4e10f8:
    // 0x4e10f8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e10f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e10fc: 0x0  nop
    ctx->pc = 0x4e10fcu;
    // NOP
    // 0x4e1100: 0x0  nop
    ctx->pc = 0x4e1100u;
    // NOP
    // 0x4e1104: 0x0  nop
    ctx->pc = 0x4e1104u;
    // NOP
    // 0x4e1108: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4E1108u;
    {
        const bool branch_taken_0x4e1108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e1108) {
            ctx->pc = 0x4E110Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1108u;
            // 0x4e110c: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E10F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e10f8;
        }
    }
    ctx->pc = 0x4E1110u;
    // 0x4e1110: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4E1110u;
    {
        const bool branch_taken_0x4e1110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1110u;
        // 0x4e1114: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1110) {
            ctx->pc = 0x4E1140u;
            goto label_4e1140;
        }
    }
    ctx->pc = 0x4E1118u;
label_4e1118:
    // 0x4e1118: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e1118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e111c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E111Cu;
    {
        const bool branch_taken_0x4e111c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E1120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E111Cu;
        // 0x4e1120: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e111c) {
            ctx->pc = 0x4E1140u;
            goto label_4e1140;
        }
    }
    ctx->pc = 0x4E1124u;
    // 0x4e1124: 0x0  nop
    ctx->pc = 0x4e1124u;
    // NOP
label_4e1128:
    // 0x4e1128: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4e1128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4e112c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4e112cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e1130: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e1130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e1134: 0x0  nop
    ctx->pc = 0x4e1134u;
    // NOP
    // 0x4e1138: 0x1062fffb  beq         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4E1138u;
    {
        const bool branch_taken_0x4e1138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1138u;
        // 0x4e113c: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1138) {
            ctx->pc = 0x4E1128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e1128;
        }
    }
    ctx->pc = 0x4E1140u;
label_4e1140:
    // 0x4e1140: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4e1140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e1144: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4e1144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e1148: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x4e1148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4e114c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e114cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4e1150: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E1150u;
    {
        const bool branch_taken_0x4e1150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1150) {
            ctx->pc = 0x4E1154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1150u;
            // 0x4e1154: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1174u;
            goto label_4e1174;
        }
    }
    ctx->pc = 0x4E1158u;
    // 0x4e1158: 0xc13831a  jal         func_4E0C68
    ctx->pc = 0x4E1158u;
    SET_GPR_U32(ctx, 31, 0x4E1160u);
    ctx->pc = 0x4E115Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E1158u;
    // 0x4e115c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E0C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E0C68u, 0x4E1158u, 0x4E1160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E1160u;
label_4e1160:
    // 0x4e1160: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4e1160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4e1164:
    // 0x4e1164: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e1164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e1168: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4e1168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x4e116c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4E116Cu;
    {
        const bool branch_taken_0x4e116c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E1170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E116Cu;
        // 0x4e1170: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e116c) {
            ctx->pc = 0x4E1178u;
            goto label_4e1178;
        }
    }
    ctx->pc = 0x4E1174u;
label_4e1174:
    // 0x4e1174: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4e1174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4e1178:
    // 0x4e1178: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e1178u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e117c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4e117cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e1180: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4e1180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e1184: 0x3e00008  jr          $ra
    ctx->pc = 0x4E1184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E1188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1184u;
        // 0x4e1188: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E1184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E118Cu;
    // 0x4e118c: 0x0  nop
    ctx->pc = 0x4e118cu;
    // NOP
    ctx->pc = 0x4e1190u;
}
