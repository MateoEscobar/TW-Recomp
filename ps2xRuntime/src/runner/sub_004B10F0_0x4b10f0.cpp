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

// Function: sub_004B10F0
// Address: 0x4b10f0 - 0x4b1208
void sub_004B10F0_0x4b10f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B10F0_0x4b10f0");
#endif

    switch (ctx->pc) {
        case 0x4b1128u: goto label_4b1128;
        case 0x4b1170u: goto label_4b1170;
        case 0x4b11a0u: goto label_4b11a0;
        case 0x4b11d4u: goto label_4b11d4;
        default: break;
    }

    ctx->pc = 0x4b10f0u;

    // 0x4b10f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4b10f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4b10f4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4b10f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x4b10f8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x4b10f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x4b10fc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x4b10fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1100: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x4b1100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x4b1104: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x4b1104u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4b1108: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4b1108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4b110c: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x4b110cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1110: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4b1110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4b1114: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4b1114u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1118: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4b1118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x4b111c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4b111cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1120: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b1120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b1124: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x4b1124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4b1128:
    // 0x4b1128: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x4b1128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4b112c: 0x453023  subu        $a2, $v0, $a1
    ctx->pc = 0x4b112cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4b1130: 0x18c00024  blez        $a2, . + 4 + (0x24 << 2)
    ctx->pc = 0x4B1130u;
    {
        const bool branch_taken_0x4b1130 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x4b1130) {
            ctx->pc = 0x4B11C4u;
            goto label_4b11c4;
        }
    }
    ctx->pc = 0x4B1138u;
    // 0x4b1138: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x4b1138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x4b113c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4b113cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4b1140: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x4b1140u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4b1144: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4B1144u;
    {
        const bool branch_taken_0x4b1144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1144u;
        // 0x4b1148: 0x13103c  dsll32      $v0, $s3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1144) {
            ctx->pc = 0x4B1150u;
            goto label_4b1150;
        }
    }
    ctx->pc = 0x4B114Cu;
    // 0x4b114c: 0x2303e  dsrl32      $a2, $v0, 0
    ctx->pc = 0x4b114cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 0));
label_4b1150:
    // 0x4b1150: 0x28c20015  slti        $v0, $a2, 0x15
    ctx->pc = 0x4b1150u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x4b1154: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4B1154u;
    {
        const bool branch_taken_0x4b1154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B1158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1154u;
        // 0x4b1158: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1154) {
            ctx->pc = 0x4B1180u;
            goto label_4b1180;
        }
    }
    ctx->pc = 0x4B115Cu;
    // 0x4b115c: 0x6803c  dsll32      $s0, $a2, 0
    ctx->pc = 0x4b115cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) << (32 + 0));
    // 0x4b1160: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x4b1160u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x4b1164: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4b1164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1168: 0xc10c190  jal         func_430640
    ctx->pc = 0x4B1168u;
    SET_GPR_U32(ctx, 31, 0x4B1170u);
    ctx->pc = 0x4B116Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1168u;
    // 0x4b116c: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x4B1168u, 0x4B1170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1170u;
label_4b1170:
    // 0x4b1170: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4b1170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4b1174: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4b1174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4b1178: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4B1178u;
    {
        const bool branch_taken_0x4b1178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B117Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1178u;
        // 0x4b117c: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1178) {
            ctx->pc = 0x4B11C0u;
            goto label_4b11c0;
        }
    }
    ctx->pc = 0x4B1180u;
label_4b1180:
    // 0x4b1180: 0x18c0000f  blez        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x4B1180u;
    {
        const bool branch_taken_0x4b1180 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x4B1184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1180u;
        // 0x4b1184: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1180) {
            ctx->pc = 0x4B11C0u;
            goto label_4b11c0;
        }
    }
    ctx->pc = 0x4B1188u;
    // 0x4b1188: 0x6803c  dsll32      $s0, $a2, 0
    ctx->pc = 0x4b1188u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) << (32 + 0));
    // 0x4b118c: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x4b118cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x4b1190: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x4b1190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x4b1194: 0x462000a  bltzl       $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4B1194u;
    {
        const bool branch_taken_0x4b1194 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x4b1194) {
            ctx->pc = 0x4B1198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B1194u;
            // 0x4b1198: 0xae450004  sw          $a1, 0x4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B11C0u;
            goto label_4b11c0;
        }
    }
    ctx->pc = 0x4B119Cu;
    // 0x4b119c: 0x0  nop
    ctx->pc = 0x4b119cu;
    // NOP
label_4b11a0:
    // 0x4b11a0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x4b11a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b11a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4b11a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4b11a8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4b11a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4b11ac: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x4b11acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4b11b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4b11b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4b11b4: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4B11B4u;
    {
        const bool branch_taken_0x4b11b4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x4b11b4) {
            ctx->pc = 0x4B11A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b11a0;
        }
    }
    ctx->pc = 0x4B11BCu;
    // 0x4b11bc: 0xae450004  sw          $a1, 0x4($s2)
    ctx->pc = 0x4b11bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 5));
label_4b11c0:
    // 0x4b11c0: 0x2709823  subu        $s3, $s3, $s0
    ctx->pc = 0x4b11c0u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_4b11c4:
    // 0x4b11c4: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B11C4u;
    {
        const bool branch_taken_0x4b11c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B11C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B11C4u;
        // 0x4b11c8: 0x2931023  subu        $v0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b11c4) {
            ctx->pc = 0x4B11E0u;
            goto label_4b11e0;
        }
    }
    ctx->pc = 0x4B11CCu;
    // 0x4b11cc: 0xc12c326  jal         func_4B0C98
    ctx->pc = 0x4B11CCu;
    SET_GPR_U32(ctx, 31, 0x4B11D4u);
    ctx->pc = 0x4B11D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B11CCu;
    // 0x4b11d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0C98u, 0x4B11CCu, 0x4B11D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B11D4u;
label_4b11d4:
    // 0x4b11d4: 0x5455ffd4  bnel        $v0, $s5, . + 4 + (-0x2C << 2)
    ctx->pc = 0x4B11D4u;
    {
        const bool branch_taken_0x4b11d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x4b11d4) {
            ctx->pc = 0x4B11D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B11D4u;
            // 0x4b11d8: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B1128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b1128;
        }
    }
    ctx->pc = 0x4B11DCu;
    // 0x4b11dc: 0x2931023  subu        $v0, $s4, $s3
    ctx->pc = 0x4b11dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_4b11e0:
    // 0x4b11e0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4b11e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4b11e4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x4b11e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b11e8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4b11e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b11ec: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x4b11ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b11f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4b11f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b11f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4b11f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b11f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b11f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b11fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4B11FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B11FCu;
        // 0x4b1200: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B11FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1204u;
    // 0x4b1204: 0x0  nop
    ctx->pc = 0x4b1204u;
    // NOP
    ctx->pc = 0x4b1208u;
}
