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

// Function: sub_0030FE78
// Address: 0x30fe78 - 0x310100
void sub_0030FE78_0x30fe78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030FE78_0x30fe78");
#endif

    switch (ctx->pc) {
        case 0x30fed4u: goto label_30fed4;
        case 0x30fef8u: goto label_30fef8;
        case 0x30ff00u: goto label_30ff00;
        case 0x30ff08u: goto label_30ff08;
        case 0x30ff20u: goto label_30ff20;
        case 0x30ff34u: goto label_30ff34;
        case 0x30ff80u: goto label_30ff80;
        case 0x30ff98u: goto label_30ff98;
        case 0x30ffc8u: goto label_30ffc8;
        case 0x310004u: goto label_310004;
        case 0x310010u: goto label_310010;
        case 0x310018u: goto label_310018;
        case 0x310020u: goto label_310020;
        case 0x310044u: goto label_310044;
        case 0x310054u: goto label_310054;
        case 0x310068u: goto label_310068;
        case 0x310078u: goto label_310078;
        case 0x3100a8u: goto label_3100a8;
        case 0x3100b4u: goto label_3100b4;
        default: break;
    }

    ctx->pc = 0x30fe78u;

    // 0x30fe78: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x30fe78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x30fe7c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x30fe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x30fe80: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x30fe80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x30fe84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30fe84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fe88: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x30fe88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x30fe8c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x30fe8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x30fe90: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x30fe90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x30fe94: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x30fe94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x30fe98: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x30fe98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x30fe9c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x30fe9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x30fea0: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x30fea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x30fea4: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x30fea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x30fea8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30fea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30feac: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x30feacu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x30feb0: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x30feb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x30feb4: 0x8c930048  lw          $s3, 0x48($a0)
    ctx->pc = 0x30feb4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x30feb8: 0x73182b  sltu        $v1, $v1, $s3
    ctx->pc = 0x30feb8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x30febc: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x30FEBCu;
    {
        const bool branch_taken_0x30febc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FEBCu;
        // 0x30fec0: 0x26240014  addiu       $a0, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30febc) {
            ctx->pc = 0x30FF98u;
            goto label_30ff98;
        }
    }
    ctx->pc = 0x30FEC4u;
    // 0x30fec4: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x30fec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x30fec8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x30fec8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fecc: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x30FECCu;
    SET_GPR_U32(ctx, 31, 0x30FED4u);
    ctx->pc = 0x30FED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FECCu;
    // 0x30fed0: 0x240607d0  addiu       $a2, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x30FECCu, 0x30FED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FED4u;
label_30fed4:
    // 0x30fed4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x30fed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x30fed8: 0x92230028  lbu         $v1, 0x28($s1)
    ctx->pc = 0x30fed8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x30fedc: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x30FEDCu;
    {
        const bool branch_taken_0x30fedc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30FEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FEDCu;
        // 0x30fee0: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fedc) {
            ctx->pc = 0x30FF88u;
            goto label_30ff88;
        }
    }
    ctx->pc = 0x30FEE4u;
    // 0x30fee4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x30fee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30fee8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x30fee8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30feec: 0x24540048  addiu       $s4, $v0, 0x48
    ctx->pc = 0x30feecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x30fef0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30fef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fef4: 0x0  nop
    ctx->pc = 0x30fef4u;
    // NOP
label_30fef8:
    // 0x30fef8: 0xc137826  jal         func_4DE098
    ctx->pc = 0x30FEF8u;
    SET_GPR_U32(ctx, 31, 0x30FF00u);
    ctx->pc = 0x30FEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FEF8u;
    // 0x30fefc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x30FEF8u, 0x30FF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FF00u;
label_30ff00:
    // 0x30ff00: 0xc0e409a  jal         func_390268
    ctx->pc = 0x30FF00u;
    SET_GPR_U32(ctx, 31, 0x30FF08u);
    ctx->pc = 0x30FF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FF00u;
    // 0x30ff04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30FF00u, 0x30FF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FF08u;
label_30ff08:
    // 0x30ff08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30ff08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ff0c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x30FF0Cu;
    {
        const bool branch_taken_0x30ff0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FF0Cu;
        // 0x30ff10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ff0c) {
            ctx->pc = 0x30FF40u;
            goto label_30ff40;
        }
    }
    ctx->pc = 0x30FF14u;
    // 0x30ff14: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x30ff14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x30ff18: 0xc089998  jal         func_226660
    ctx->pc = 0x30FF18u;
    SET_GPR_U32(ctx, 31, 0x30FF20u);
    ctx->pc = 0x30FF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FF18u;
    // 0x30ff1c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x30FF18u, 0x30FF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FF20u;
label_30ff20:
    // 0x30ff20: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x30FF20u;
    {
        const bool branch_taken_0x30ff20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30ff20) {
            ctx->pc = 0x30FF24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30FF20u;
            // 0x30ff24: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30FF44u;
            goto label_30ff44;
        }
    }
    ctx->pc = 0x30FF28u;
    // 0x30ff28: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x30ff28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ff2c: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x30FF2Cu;
    SET_GPR_U32(ctx, 31, 0x30FF34u);
    ctx->pc = 0x30FF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FF2Cu;
    // 0x30ff30: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x30FF2Cu, 0x30FF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FF34u;
label_30ff34:
    // 0x30ff34: 0x2c420033  sltiu       $v0, $v0, 0x33
    ctx->pc = 0x30ff34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
    // 0x30ff38: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30FF38u;
    {
        const bool branch_taken_0x30ff38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30FF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FF38u;
        // 0x30ff3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ff38) {
            ctx->pc = 0x30FF58u;
            goto label_30ff58;
        }
    }
    ctx->pc = 0x30FF40u;
label_30ff40:
    // 0x30ff40: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x30ff40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_30ff44:
    // 0x30ff44: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x30ff44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x30ff48: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x30FF48u;
    {
        const bool branch_taken_0x30ff48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FF48u;
        // 0x30ff4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ff48) {
            ctx->pc = 0x30FEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30fef8;
        }
    }
    ctx->pc = 0x30FF50u;
    // 0x30ff50: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x30FF50u;
    {
        const bool branch_taken_0x30ff50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FF50u;
        // 0x30ff54: 0x92230028  lbu         $v1, 0x28($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ff50) {
            ctx->pc = 0x30FF9Cu;
            goto label_30ff9c;
        }
    }
    ctx->pc = 0x30FF58u;
label_30ff58:
    // 0x30ff58: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x30ff58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x30ff5c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x30ff5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x30ff60: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30ff60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30ff64: 0x2405025c  addiu       $a1, $zero, 0x25C
    ctx->pc = 0x30ff64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 604));
    // 0x30ff68: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x30ff68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30ff6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30ff6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ff70: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x30ff70u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x30ff74: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x30ff74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30ff78: 0xc0968f8  jal         func_25A3E0
    ctx->pc = 0x30FF78u;
    SET_GPR_U32(ctx, 31, 0x30FF80u);
    ctx->pc = 0x30FF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FF78u;
    // 0x30ff7c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3E0u, 0x30FF78u, 0x30FF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FF80u;
label_30ff80:
    // 0x30ff80: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30FF80u;
    {
        const bool branch_taken_0x30ff80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FF80u;
        // 0x30ff84: 0x92230028  lbu         $v1, 0x28($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ff80) {
            ctx->pc = 0x30FF9Cu;
            goto label_30ff9c;
        }
    }
    ctx->pc = 0x30FF88u;
label_30ff88:
    // 0x30ff88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30ff88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ff8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30ff8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ff90: 0xc0c3f12  jal         func_30FC48
    ctx->pc = 0x30FF90u;
    SET_GPR_U32(ctx, 31, 0x30FF98u);
    ctx->pc = 0x30FF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FF90u;
    // 0x30ff94: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FC48u, 0x30FF90u, 0x30FF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FF98u;
label_30ff98:
    // 0x30ff98: 0x92230028  lbu         $v1, 0x28($s1)
    ctx->pc = 0x30ff98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
label_30ff9c:
    // 0x30ff9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30ff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30ffa0: 0x1462004b  bne         $v1, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x30FFA0u;
    {
        const bool branch_taken_0x30ffa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30FFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FFA0u;
        // 0x30ffa4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ffa0) {
            ctx->pc = 0x3100D0u;
            goto label_3100d0;
        }
    }
    ctx->pc = 0x30FFA8u;
    // 0x30ffa8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x30ffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x30ffac: 0x53102b  sltu        $v0, $v0, $s3
    ctx->pc = 0x30ffacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x30ffb0: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x30FFB0u;
    {
        const bool branch_taken_0x30ffb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FFB0u;
        // 0x30ffb4: 0x266207d0  addiu       $v0, $s3, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ffb0) {
            ctx->pc = 0x3100D0u;
            goto label_3100d0;
        }
    }
    ctx->pc = 0x30FFB8u;
    // 0x30ffb8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30ffb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30ffbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30ffbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ffc0: 0xc059856  jal         func_166158
    ctx->pc = 0x30FFC0u;
    SET_GPR_U32(ctx, 31, 0x30FFC8u);
    ctx->pc = 0x30FFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FFC0u;
    // 0x30ffc4: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x30FFC0u, 0x30FFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FFC8u;
label_30ffc8:
    // 0x30ffc8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x30ffc8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ffcc: 0x9223002b  lbu         $v1, 0x2B($s1)
    ctx->pc = 0x30ffccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 43)));
    // 0x30ffd0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x30FFD0u;
    {
        const bool branch_taken_0x30ffd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ffd0) {
            ctx->pc = 0x30FFD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30FFD0u;
            // 0x30ffd4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30FFD8u;
            goto label_30ffd8;
        }
    }
    ctx->pc = 0x30FFD8u;
label_30ffd8:
    // 0x30ffd8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30ffd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30ffdc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30ffdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ffe0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x30ffe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30ffe4: 0x3c16006f  lui         $s6, 0x6F
    ctx->pc = 0x30ffe4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)111 << 16));
    // 0x30ffe8: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x30ffe8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x30ffec: 0x24920048  addiu       $s2, $a0, 0x48
    ctx->pc = 0x30ffecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x30fff0: 0x241e0004  addiu       $fp, $zero, 0x4
    ctx->pc = 0x30fff0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30fff4: 0x3c170051  lui         $s7, 0x51
    ctx->pc = 0x30fff4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
    // 0x30fff8: 0x2810  mfhi        $a1
    ctx->pc = 0x30fff8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x30fffc: 0xc05959e  jal         func_165678
    ctx->pc = 0x30FFFCu;
    SET_GPR_U32(ctx, 31, 0x310004u);
    ctx->pc = 0x310000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FFFCu;
    // 0x310000: 0xa225002b  sb          $a1, 0x2B($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 43), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x30FFFCu, 0x310004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310004u;
label_310004:
    // 0x310004: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x310004u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310008: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x310008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31000c: 0x0  nop
    ctx->pc = 0x31000cu;
    // NOP
label_310010:
    // 0x310010: 0xc137826  jal         func_4DE098
    ctx->pc = 0x310010u;
    SET_GPR_U32(ctx, 31, 0x310018u);
    ctx->pc = 0x310014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310010u;
    // 0x310014: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x310010u, 0x310018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310018u;
label_310018:
    // 0x310018: 0xc0e409a  jal         func_390268
    ctx->pc = 0x310018u;
    SET_GPR_U32(ctx, 31, 0x310020u);
    ctx->pc = 0x31001Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310018u;
    // 0x31001c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x310018u, 0x310020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310020u;
label_310020:
    // 0x310020: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x310020u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310024: 0x52600026  beql        $s3, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x310024u;
    {
        const bool branch_taken_0x310024 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x310024) {
            ctx->pc = 0x310028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310024u;
            // 0x310028: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3100C0u;
            goto label_3100c0;
        }
    }
    ctx->pc = 0x31002Cu;
    // 0x31002c: 0x9222002b  lbu         $v0, 0x2B($s1)
    ctx->pc = 0x31002cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 43)));
    // 0x310030: 0x56a20022  bnel        $s5, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x310030u;
    {
        const bool branch_taken_0x310030 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x310030) {
            ctx->pc = 0x310034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310030u;
            // 0x310034: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3100BCu;
            goto label_3100bc;
        }
    }
    ctx->pc = 0x310038u;
    // 0x310038: 0x26c4b8a0  addiu       $a0, $s6, -0x4760
    ctx->pc = 0x310038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949024));
    // 0x31003c: 0xc0cd526  jal         func_335498
    ctx->pc = 0x31003Cu;
    SET_GPR_U32(ctx, 31, 0x310044u);
    ctx->pc = 0x310040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31003Cu;
    // 0x310040: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x31003Cu, 0x310044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310044u;
label_310044:
    // 0x310044: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x310044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310048: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x310048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31004c: 0xc137826  jal         func_4DE098
    ctx->pc = 0x31004Cu;
    SET_GPR_U32(ctx, 31, 0x310054u);
    ctx->pc = 0x310050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31004Cu;
    // 0x310050: 0xa2220029  sb          $v0, 0x29($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x31004Cu, 0x310054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310054u;
label_310054:
    // 0x310054: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x310054u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x310058: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x310058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31005c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31005cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310060: 0xc08e1a4  jal         func_238690
    ctx->pc = 0x310060u;
    SET_GPR_U32(ctx, 31, 0x310068u);
    ctx->pc = 0x310064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310060u;
    // 0x310064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238690u, 0x310060u, 0x310068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310068u;
label_310068:
    // 0x310068: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x310068u;
    {
        const bool branch_taken_0x310068 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x31006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310068u;
        // 0x31006c: 0x26e313d0  addiu       $v1, $s7, 0x13D0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 5072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310068) {
            ctx->pc = 0x31008Cu;
            goto label_31008c;
        }
    }
    ctx->pc = 0x310070u;
    // 0x310070: 0xc087502  jal         func_21D408
    ctx->pc = 0x310070u;
    SET_GPR_U32(ctx, 31, 0x310078u);
    ctx->pc = 0x310074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310070u;
    // 0x310074: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x310070u, 0x310078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310078u;
label_310078:
    // 0x310078: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x310078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x31007c: 0x147e0003  bne         $v1, $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x31007Cu;
    {
        const bool branch_taken_0x31007c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 30));
        ctx->pc = 0x310080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31007Cu;
        // 0x310080: 0x26e313d0  addiu       $v1, $s7, 0x13D0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 5072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31007c) {
            ctx->pc = 0x31008Cu;
            goto label_31008c;
        }
    }
    ctx->pc = 0x310084u;
    // 0x310084: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x310084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x310088: 0x24431400  addiu       $v1, $v0, 0x1400
    ctx->pc = 0x310088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 5120));
label_31008c:
    // 0x31008c: 0x92220029  lbu         $v0, 0x29($s1)
    ctx->pc = 0x31008cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
    // 0x310090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x310090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310094: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x310094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310098: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x310098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31009c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31009cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3100a0: 0xc08e1a4  jal         func_238690
    ctx->pc = 0x3100A0u;
    SET_GPR_U32(ctx, 31, 0x3100A8u);
    ctx->pc = 0x3100A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3100A0u;
    // 0x3100a4: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238690u, 0x3100A0u, 0x3100A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3100A8u;
label_3100a8:
    // 0x3100a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3100a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3100ac: 0xc089974  jal         func_2265D0
    ctx->pc = 0x3100ACu;
    SET_GPR_U32(ctx, 31, 0x3100B4u);
    ctx->pc = 0x3100B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3100ACu;
    // 0x3100b0: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x3100ACu, 0x3100B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3100B4u;
label_3100b4:
    // 0x3100b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3100B4u;
    {
        const bool branch_taken_0x3100b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3100B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3100B4u;
        // 0x3100b8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3100b4) {
            ctx->pc = 0x3100D0u;
            goto label_3100d0;
        }
    }
    ctx->pc = 0x3100BCu;
label_3100bc:
    // 0x3100bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3100bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3100c0:
    // 0x3100c0: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x3100c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x3100c4: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x3100C4u;
    {
        const bool branch_taken_0x3100c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3100C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3100C4u;
        // 0x3100c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3100c4) {
            ctx->pc = 0x310010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310010;
        }
    }
    ctx->pc = 0x3100CCu;
    // 0x3100cc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3100ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3100d0:
    // 0x3100d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3100d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3100d4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3100d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3100d8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3100d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3100dc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3100dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3100e0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3100e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3100e4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3100e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3100e8: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3100e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3100ec: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x3100ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3100f0: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x3100f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3100f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3100f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3100f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3100F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3100FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3100F8u;
        // 0x3100fc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3100F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310100u;
}
