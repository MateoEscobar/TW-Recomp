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

// Function: sub_001A8FB8
// Address: 0x1a8fb8 - 0x1a90f8
void sub_001A8FB8_0x1a8fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8FB8_0x1a8fb8");
#endif

    switch (ctx->pc) {
        case 0x1a8fb8u: goto label_1a8fb8;
        case 0x1a8fbcu: goto label_1a8fbc;
        case 0x1a8fc0u: goto label_1a8fc0;
        case 0x1a8fc4u: goto label_1a8fc4;
        case 0x1a8fc8u: goto label_1a8fc8;
        case 0x1a8fccu: goto label_1a8fcc;
        case 0x1a8fd0u: goto label_1a8fd0;
        case 0x1a8fd4u: goto label_1a8fd4;
        case 0x1a8fd8u: goto label_1a8fd8;
        case 0x1a8fdcu: goto label_1a8fdc;
        case 0x1a8fe0u: goto label_1a8fe0;
        case 0x1a8fe4u: goto label_1a8fe4;
        case 0x1a8fe8u: goto label_1a8fe8;
        case 0x1a8fecu: goto label_1a8fec;
        case 0x1a8ff0u: goto label_1a8ff0;
        case 0x1a8ff4u: goto label_1a8ff4;
        case 0x1a8ff8u: goto label_1a8ff8;
        case 0x1a8ffcu: goto label_1a8ffc;
        case 0x1a9000u: goto label_1a9000;
        case 0x1a9004u: goto label_1a9004;
        case 0x1a9008u: goto label_1a9008;
        case 0x1a900cu: goto label_1a900c;
        case 0x1a9010u: goto label_1a9010;
        case 0x1a9014u: goto label_1a9014;
        case 0x1a9018u: goto label_1a9018;
        case 0x1a901cu: goto label_1a901c;
        case 0x1a9020u: goto label_1a9020;
        case 0x1a9024u: goto label_1a9024;
        case 0x1a9028u: goto label_1a9028;
        case 0x1a902cu: goto label_1a902c;
        case 0x1a9030u: goto label_1a9030;
        case 0x1a9034u: goto label_1a9034;
        case 0x1a9038u: goto label_1a9038;
        case 0x1a903cu: goto label_1a903c;
        case 0x1a9040u: goto label_1a9040;
        case 0x1a9044u: goto label_1a9044;
        case 0x1a9048u: goto label_1a9048;
        case 0x1a904cu: goto label_1a904c;
        case 0x1a9050u: goto label_1a9050;
        case 0x1a9054u: goto label_1a9054;
        case 0x1a9058u: goto label_1a9058;
        case 0x1a905cu: goto label_1a905c;
        case 0x1a9060u: goto label_1a9060;
        case 0x1a9064u: goto label_1a9064;
        case 0x1a9068u: goto label_1a9068;
        case 0x1a906cu: goto label_1a906c;
        case 0x1a9070u: goto label_1a9070;
        case 0x1a9074u: goto label_1a9074;
        case 0x1a9078u: goto label_1a9078;
        case 0x1a907cu: goto label_1a907c;
        case 0x1a9080u: goto label_1a9080;
        case 0x1a9084u: goto label_1a9084;
        case 0x1a9088u: goto label_1a9088;
        case 0x1a908cu: goto label_1a908c;
        case 0x1a9090u: goto label_1a9090;
        case 0x1a9094u: goto label_1a9094;
        case 0x1a9098u: goto label_1a9098;
        case 0x1a909cu: goto label_1a909c;
        case 0x1a90a0u: goto label_1a90a0;
        case 0x1a90a4u: goto label_1a90a4;
        case 0x1a90a8u: goto label_1a90a8;
        case 0x1a90acu: goto label_1a90ac;
        case 0x1a90b0u: goto label_1a90b0;
        case 0x1a90b4u: goto label_1a90b4;
        case 0x1a90b8u: goto label_1a90b8;
        case 0x1a90bcu: goto label_1a90bc;
        case 0x1a90c0u: goto label_1a90c0;
        case 0x1a90c4u: goto label_1a90c4;
        case 0x1a90c8u: goto label_1a90c8;
        case 0x1a90ccu: goto label_1a90cc;
        case 0x1a90d0u: goto label_1a90d0;
        case 0x1a90d4u: goto label_1a90d4;
        case 0x1a90d8u: goto label_1a90d8;
        case 0x1a90dcu: goto label_1a90dc;
        case 0x1a90e0u: goto label_1a90e0;
        case 0x1a90e4u: goto label_1a90e4;
        case 0x1a90e8u: goto label_1a90e8;
        case 0x1a90ecu: goto label_1a90ec;
        case 0x1a90f0u: goto label_1a90f0;
        case 0x1a90f4u: goto label_1a90f4;
        default: break;
    }

    ctx->pc = 0x1a8fb8u;

label_1a8fb8:
    // 0x1a8fb8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1a8fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1a8fbc:
    // 0x1a8fbc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a8fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a8fc0:
    // 0x1a8fc0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1a8fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_1a8fc4:
    // 0x1a8fc4: 0x308a00ff  andi        $t2, $a0, 0xFF
    ctx->pc = 0x1a8fc4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1a8fc8:
    // 0x1a8fc8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1a8fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_1a8fcc:
    // 0x1a8fcc: 0x39490004  xori        $t1, $t2, 0x4
    ctx->pc = 0x1a8fccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) ^ (uint64_t)(uint16_t)4);
label_1a8fd0:
    // 0x1a8fd0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1a8fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1a8fd4:
    // 0x1a8fd4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a8fd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a8fd8:
    // 0x1a8fd8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a8fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1a8fdc:
    // 0x1a8fdc: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x1a8fdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a8fe0:
    // 0x1a8fe0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1a8fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_1a8fe4:
    // 0x1a8fe4: 0x149980b  movn        $s3, $t2, $t1
    ctx->pc = 0x1a8fe4u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 10));
label_1a8fe8:
    // 0x1a8fe8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1a8fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_1a8fec:
    // 0x1a8fec: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1a8fecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a8ff0:
    // 0x1a8ff0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1a8ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_1a8ff4:
    // 0x1a8ff4: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x1a8ff4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
label_1a8ff8:
    // 0x1a8ff8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a8ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a8ffc:
    // 0x1a8ffc: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1a8ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1a9000:
    // 0x1a9000: 0x8c4b27e4  lw          $t3, 0x27E4($v0)
    ctx->pc = 0x1a9000u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1a9004:
    // 0x1a9004: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1a9004u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1a9008:
    // 0x1a9008: 0x8ec2d340  lw          $v0, -0x2CC0($s6)
    ctx->pc = 0x1a9008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294955840)));
label_1a900c:
    // 0x1a900c: 0x24a540a8  addiu       $a1, $a1, 0x40A8
    ctx->pc = 0x1a900cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16552));
label_1a9010:
    // 0x1a9010: 0x8d670000  lw          $a3, 0x0($t3)
    ctx->pc = 0x1a9010u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1a9014:
    // 0x1a9014: 0x250840b8  addiu       $t0, $t0, 0x40B8
    ctx->pc = 0x1a9014u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16568));
label_1a9018:
    // 0x1a9018: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1a9018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a901c:
    // 0x1a901c: 0x24090036  addiu       $t1, $zero, 0x36
    ctx->pc = 0x1a901cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_1a9020:
    // 0x1a9020: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1a9020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1a9024:
    // 0x1a9024: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a9024u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9028:
    // 0x1a9028: 0x84e40050  lh          $a0, 0x50($a3)
    ctx->pc = 0x1a9028u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 80)));
label_1a902c:
    // 0x1a902c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1a902cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1a9030:
    // 0x1a9030: 0x8ce20054  lw          $v0, 0x54($a3)
    ctx->pc = 0x1a9030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 84)));
label_1a9034:
    // 0x1a9034: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1a9034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_1a9038:
    // 0x1a9038: 0x3a083  sra         $s4, $v1, 2
    ctx->pc = 0x1a9038u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 3), 2));
label_1a903c:
    // 0x1a903c: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x1a903cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1a9040:
    // 0x1a9040: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1a9040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1a9044:
    // 0x1a9044: 0x40f809  jalr        $v0
label_1a9048:
    if (ctx->pc == 0x1A9048u) {
        ctx->pc = 0x1A9048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9044u;
        // 0x1a9048: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A904Cu;
        goto label_1a904c;
    }
    ctx->pc = 0x1A9044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A904Cu);
        ctx->pc = 0x1A9048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9044u;
        // 0x1a9048: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9044u, 0x1A904Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A904Cu;
label_1a904c:
    // 0x1a904c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a904cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a9050:
    // 0x1a9050: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
label_1a9054:
    if (ctx->pc == 0x1A9054u) {
        ctx->pc = 0x1A9054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9050u;
        // 0x1a9054: 0xafb20000  sw          $s2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9058u;
        goto label_1a9058;
    }
    ctx->pc = 0x1A9050u;
    {
        const bool branch_taken_0x1a9050 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9050u;
        // 0x1a9054: 0xafb20000  sw          $s2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9050) {
            ctx->pc = 0x1A9098u;
            goto label_1a9098;
        }
    }
    ctx->pc = 0x1A9058u;
label_1a9058:
    // 0x1a9058: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1a9058u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1a905c:
    // 0x1a905c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a905cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a9060:
    // 0x1a9060: 0xc0e1b42  jal         func_386D08
label_1a9064:
    if (ctx->pc == 0x1A9064u) {
        ctx->pc = 0x1A9064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9060u;
        // 0x1a9064: 0x8e04d33c  lw          $a0, -0x2CC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294955836)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9068u;
        goto label_1a9068;
    }
    ctx->pc = 0x1A9060u;
    SET_GPR_U32(ctx, 31, 0x1A9068u);
    ctx->pc = 0x1A9064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9060u;
    // 0x1a9064: 0x8e04d33c  lw          $a0, -0x2CC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294955836)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386D08u, 0x1A9060u, 0x1A9068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9068u;
label_1a9068:
    // 0x1a9068: 0x8e04d33c  lw          $a0, -0x2CC4($s0)
    ctx->pc = 0x1a9068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294955836)));
label_1a906c:
    // 0x1a906c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a906cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a9070:
    // 0x1a9070: 0xc0e1b42  jal         func_386D08
label_1a9074:
    if (ctx->pc == 0x1A9074u) {
        ctx->pc = 0x1A9074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9070u;
        // 0x1a9074: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9078u;
        goto label_1a9078;
    }
    ctx->pc = 0x1A9070u;
    SET_GPR_U32(ctx, 31, 0x1A9078u);
    ctx->pc = 0x1A9074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9070u;
    // 0x1a9074: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386D08u, 0x1A9070u, 0x1A9078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9078u;
label_1a9078:
    // 0x1a9078: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x1a9078u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
label_1a907c:
    // 0x1a907c: 0xae510004  sw          $s1, 0x4($s2)
    ctx->pc = 0x1a907cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
label_1a9080:
    // 0x1a9080: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1a9080u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_1a9084:
    // 0x1a9084: 0xae540014  sw          $s4, 0x14($s2)
    ctx->pc = 0x1a9084u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 20));
label_1a9088:
    // 0x1a9088: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1a9088u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_1a908c:
    // 0x1a908c: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x1a908cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_1a9090:
    // 0x1a9090: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x1a9090u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_1a9094:
    // 0x1a9094: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x1a9094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
label_1a9098:
    // 0x1a9098: 0x8ec4d340  lw          $a0, -0x2CC0($s6)
    ctx->pc = 0x1a9098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294955840)));
label_1a909c:
    // 0x1a909c: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1a909cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a90a0:
    // 0x1a90a0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1a90a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1a90a4:
    // 0x1a90a4: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
label_1a90a8:
    if (ctx->pc == 0x1A90A8u) {
        ctx->pc = 0x1A90ACu;
        goto label_1a90ac;
    }
    ctx->pc = 0x1A90A4u;
    {
        const bool branch_taken_0x1a90a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a90a4) {
            ctx->pc = 0x1A90C8u;
            goto label_1a90c8;
        }
    }
    ctx->pc = 0x1A90ACu;
label_1a90ac:
    // 0x1a90ac: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_1a90b0:
    if (ctx->pc == 0x1A90B0u) {
        ctx->pc = 0x1A90B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90ACu;
        // 0x1a90b0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A90B4u;
        goto label_1a90b4;
    }
    ctx->pc = 0x1A90ACu;
    {
        const bool branch_taken_0x1a90ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A90B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90ACu;
        // 0x1a90b0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a90ac) {
            ctx->pc = 0x1A90B8u;
            goto label_1a90b8;
        }
    }
    ctx->pc = 0x1A90B4u;
label_1a90b4:
    // 0x1a90b4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1a90b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1a90b8:
    // 0x1a90b8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1a90b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a90bc:
    // 0x1a90bc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a90bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1a90c0:
    // 0x1a90c0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a90c4:
    if (ctx->pc == 0x1A90C4u) {
        ctx->pc = 0x1A90C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90C0u;
        // 0x1a90c4: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A90C8u;
        goto label_1a90c8;
    }
    ctx->pc = 0x1A90C0u;
    {
        const bool branch_taken_0x1a90c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A90C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90C0u;
        // 0x1a90c4: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a90c0) {
            ctx->pc = 0x1A90D0u;
            goto label_1a90d0;
        }
    }
    ctx->pc = 0x1A90C8u;
label_1a90c8:
    // 0x1a90c8: 0xc1390d0  jal         func_4E4340
label_1a90cc:
    if (ctx->pc == 0x1A90CCu) {
        ctx->pc = 0x1A90CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90C8u;
        // 0x1a90cc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A90D0u;
        goto label_1a90d0;
    }
    ctx->pc = 0x1A90C8u;
    SET_GPR_U32(ctx, 31, 0x1A90D0u);
    ctx->pc = 0x1A90CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A90C8u;
    // 0x1a90cc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E4340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E4340u, 0x1A90C8u, 0x1A90D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A90D0u;
label_1a90d0:
    // 0x1a90d0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1a90d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1a90d4:
    // 0x1a90d4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1a90d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1a90d8:
    // 0x1a90d8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1a90d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a90dc:
    // 0x1a90dc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1a90dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a90e0:
    // 0x1a90e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a90e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a90e4:
    // 0x1a90e4: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1a90e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a90e8:
    // 0x1a90e8: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1a90e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a90ec:
    // 0x1a90ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a90ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a90f0:
    // 0x1a90f0: 0x3e00008  jr          $ra
label_1a90f4:
    if (ctx->pc == 0x1A90F4u) {
        ctx->pc = 0x1A90F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90F0u;
        // 0x1a90f4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A90F8u;
        goto label_fallthrough_0x1a90f0;
    }
    ctx->pc = 0x1A90F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A90F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90F0u;
        // 0x1a90f4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A90F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a90f0:
    ctx->pc = 0x1A90F8u;
}
