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

// Function: sub_004B0F90
// Address: 0x4b0f90 - 0x4b10c8
void sub_004B0F90_0x4b0f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B0F90_0x4b0f90");
#endif

    switch (ctx->pc) {
        case 0x4b0fd0u: goto label_4b0fd0;
        case 0x4b101cu: goto label_4b101c;
        case 0x4b1050u: goto label_4b1050;
        case 0x4b1094u: goto label_4b1094;
        default: break;
    }

    ctx->pc = 0x4b0f90u;

    // 0x4b0f90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4b0f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4b0f94: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4b0f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x4b0f98: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x4b0f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x4b0f9c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x4b0f9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0fa0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4b0fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4b0fa4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4b0fa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0fa8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4b0fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4b0fac: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x4b0facu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0fb0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4b0fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x4b0fb4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4b0fb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0fb8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x4b0fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x4b0fbc: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B0FBCu;
    {
        const bool branch_taken_0x4b0fbc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B0FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0FBCu;
        // 0x4b0fc0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0fbc) {
            ctx->pc = 0x4B0FCCu;
            goto label_4b0fcc;
        }
    }
    ctx->pc = 0x4B0FC4u;
    // 0x4b0fc4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x4B0FC4u;
    {
        const bool branch_taken_0x4b0fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0FC4u;
        // 0x4b0fc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0fc4) {
            ctx->pc = 0x4B10A0u;
            goto label_4b10a0;
        }
    }
    ctx->pc = 0x4B0FCCu;
label_4b0fcc:
    // 0x4b0fcc: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x4b0fccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b0fd0:
    // 0x4b0fd0: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x4b0fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x4b0fd4: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x4b0fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x4b0fd8: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x4b0fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4b0fdc: 0x18600028  blez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x4B0FDCu;
    {
        const bool branch_taken_0x4b0fdc = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x4b0fdc) {
            ctx->pc = 0x4B1080u;
            goto label_4b1080;
        }
    }
    ctx->pc = 0x4B0FE4u;
    // 0x4b0fe4: 0x3803c  dsll32      $s0, $v1, 0
    ctx->pc = 0x4b0fe4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4b0fe8: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x4b0fe8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x4b0fec: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4b0fecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x4b0ff0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4B0FF0u;
    {
        const bool branch_taken_0x4b0ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0FF0u;
        // 0x4b0ff4: 0x12103c  dsll32      $v0, $s2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0ff0) {
            ctx->pc = 0x4B0FFCu;
            goto label_4b0ffc;
        }
    }
    ctx->pc = 0x4B0FF8u;
    // 0x4b0ff8: 0x2183e  dsrl32      $v1, $v0, 0
    ctx->pc = 0x4b0ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 0));
label_4b0ffc:
    // 0x4b0ffc: 0x28620015  slti        $v0, $v1, 0x15
    ctx->pc = 0x4b0ffcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x4b1000: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4B1000u;
    {
        const bool branch_taken_0x4b1000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B1004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1000u;
        // 0x4b1004: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1000) {
            ctx->pc = 0x4B102Cu;
            goto label_4b102c;
        }
    }
    ctx->pc = 0x4B1008u;
    // 0x4b1008: 0x3803c  dsll32      $s0, $v1, 0
    ctx->pc = 0x4b1008u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4b100c: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x4b100cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x4b1010: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4b1010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1014: 0xc10c190  jal         func_430640
    ctx->pc = 0x4B1014u;
    SET_GPR_U32(ctx, 31, 0x4B101Cu);
    ctx->pc = 0x4B1018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1014u;
    // 0x4b1018: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x4B1014u, 0x4B101Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B101Cu;
label_4b101c:
    // 0x4b101c: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x4b101cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x4b1020: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4b1020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4b1024: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x4B1024u;
    {
        const bool branch_taken_0x4b1024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1024u;
        // 0x4b1028: 0xae620014  sw          $v0, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1024) {
            ctx->pc = 0x4B107Cu;
            goto label_4b107c;
        }
    }
    ctx->pc = 0x4B102Cu;
label_4b102c:
    // 0x4b102c: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B102Cu;
    {
        const bool branch_taken_0x4b102c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x4B1030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B102Cu;
        // 0x4b1030: 0x6465ffff  daddiu      $a1, $v1, -0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)4294967295);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b102c) {
            ctx->pc = 0x4B103Cu;
            goto label_4b103c;
        }
    }
    ctx->pc = 0x4B1034u;
    // 0x4b1034: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4B1034u;
    {
        const bool branch_taken_0x4b1034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1034u;
        // 0x4b1038: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1034) {
            ctx->pc = 0x4B107Cu;
            goto label_4b107c;
        }
    }
    ctx->pc = 0x4B103Cu;
label_4b103c:
    // 0x4b103c: 0x4a2000d  bltzl       $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x4B103Cu;
    {
        const bool branch_taken_0x4b103c = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x4b103c) {
            ctx->pc = 0x4B1040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B103Cu;
            // 0x4b1040: 0xae640014  sw          $a0, 0x14($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B1074u;
            goto label_4b1074;
        }
    }
    ctx->pc = 0x4B1044u;
    // 0x4b1044: 0x3803c  dsll32      $s0, $v1, 0
    ctx->pc = 0x4b1044u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4b1048: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x4b1048u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x4b104c: 0x0  nop
    ctx->pc = 0x4b104cu;
    // NOP
label_4b1050:
    // 0x4b1050: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x4b1050u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b1054: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x4b1054u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
    // 0x4b1058: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4b1058u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4b105c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x4b105cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4b1060: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4b1060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4b1064: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4B1064u;
    {
        const bool branch_taken_0x4b1064 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x4b1064) {
            ctx->pc = 0x4B1050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b1050;
        }
    }
    ctx->pc = 0x4B106Cu;
    // 0x4b106c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4B106Cu;
    {
        const bool branch_taken_0x4b106c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B106Cu;
        // 0x4b1070: 0xae640014  sw          $a0, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b106c) {
            ctx->pc = 0x4B107Cu;
            goto label_4b107c;
        }
    }
    ctx->pc = 0x4B1074u;
label_4b1074:
    // 0x4b1074: 0x3803c  dsll32      $s0, $v1, 0
    ctx->pc = 0x4b1074u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4b1078: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x4b1078u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_4b107c:
    // 0x4b107c: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x4b107cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_4b1080:
    // 0x4b1080: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B1080u;
    {
        const bool branch_taken_0x4b1080 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1080u;
        // 0x4b1084: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1080) {
            ctx->pc = 0x4B109Cu;
            goto label_4b109c;
        }
    }
    ctx->pc = 0x4B1088u;
    // 0x4b1088: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x4b1088u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b108c: 0xc12c2b4  jal         func_4B0AD0
    ctx->pc = 0x4B108Cu;
    SET_GPR_U32(ctx, 31, 0x4B1094u);
    ctx->pc = 0x4B1090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B108Cu;
    // 0x4b1090: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0AD0u, 0x4B108Cu, 0x4B1094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1094u;
label_4b1094:
    // 0x4b1094: 0x5455ffce  bnel        $v0, $s5, . + 4 + (-0x32 << 2)
    ctx->pc = 0x4B1094u;
    {
        const bool branch_taken_0x4b1094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x4b1094) {
            ctx->pc = 0x4B1098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B1094u;
            // 0x4b1098: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B0FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b0fd0;
        }
    }
    ctx->pc = 0x4B109Cu;
label_4b109c:
    // 0x4b109c: 0x2921023  subu        $v0, $s4, $s2
    ctx->pc = 0x4b109cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_4b10a0:
    // 0x4b10a0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4b10a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4b10a4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x4b10a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b10a8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4b10a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b10ac: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x4b10acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b10b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4b10b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b10b4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4b10b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b10b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b10b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b10bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4B10BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B10C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B10BCu;
        // 0x4b10c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B10BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B10C4u;
    // 0x4b10c4: 0x0  nop
    ctx->pc = 0x4b10c4u;
    // NOP
    ctx->pc = 0x4b10c8u;
}
