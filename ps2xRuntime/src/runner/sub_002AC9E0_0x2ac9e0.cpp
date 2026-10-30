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

// Function: sub_002AC9E0
// Address: 0x2ac9e0 - 0x2acaf8
void sub_002AC9E0_0x2ac9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC9E0_0x2ac9e0");
#endif

    switch (ctx->pc) {
        case 0x2ac9e0u: goto label_2ac9e0;
        case 0x2ac9e4u: goto label_2ac9e4;
        case 0x2ac9e8u: goto label_2ac9e8;
        case 0x2ac9ecu: goto label_2ac9ec;
        case 0x2ac9f0u: goto label_2ac9f0;
        case 0x2ac9f4u: goto label_2ac9f4;
        case 0x2ac9f8u: goto label_2ac9f8;
        case 0x2ac9fcu: goto label_2ac9fc;
        case 0x2aca00u: goto label_2aca00;
        case 0x2aca04u: goto label_2aca04;
        case 0x2aca08u: goto label_2aca08;
        case 0x2aca0cu: goto label_2aca0c;
        case 0x2aca10u: goto label_2aca10;
        case 0x2aca14u: goto label_2aca14;
        case 0x2aca18u: goto label_2aca18;
        case 0x2aca1cu: goto label_2aca1c;
        case 0x2aca20u: goto label_2aca20;
        case 0x2aca24u: goto label_2aca24;
        case 0x2aca28u: goto label_2aca28;
        case 0x2aca2cu: goto label_2aca2c;
        case 0x2aca30u: goto label_2aca30;
        case 0x2aca34u: goto label_2aca34;
        case 0x2aca38u: goto label_2aca38;
        case 0x2aca3cu: goto label_2aca3c;
        case 0x2aca40u: goto label_2aca40;
        case 0x2aca44u: goto label_2aca44;
        case 0x2aca48u: goto label_2aca48;
        case 0x2aca4cu: goto label_2aca4c;
        case 0x2aca50u: goto label_2aca50;
        case 0x2aca54u: goto label_2aca54;
        case 0x2aca58u: goto label_2aca58;
        case 0x2aca5cu: goto label_2aca5c;
        case 0x2aca60u: goto label_2aca60;
        case 0x2aca64u: goto label_2aca64;
        case 0x2aca68u: goto label_2aca68;
        case 0x2aca6cu: goto label_2aca6c;
        case 0x2aca70u: goto label_2aca70;
        case 0x2aca74u: goto label_2aca74;
        case 0x2aca78u: goto label_2aca78;
        case 0x2aca7cu: goto label_2aca7c;
        case 0x2aca80u: goto label_2aca80;
        case 0x2aca84u: goto label_2aca84;
        case 0x2aca88u: goto label_2aca88;
        case 0x2aca8cu: goto label_2aca8c;
        case 0x2aca90u: goto label_2aca90;
        case 0x2aca94u: goto label_2aca94;
        case 0x2aca98u: goto label_2aca98;
        case 0x2aca9cu: goto label_2aca9c;
        case 0x2acaa0u: goto label_2acaa0;
        case 0x2acaa4u: goto label_2acaa4;
        case 0x2acaa8u: goto label_2acaa8;
        case 0x2acaacu: goto label_2acaac;
        case 0x2acab0u: goto label_2acab0;
        case 0x2acab4u: goto label_2acab4;
        case 0x2acab8u: goto label_2acab8;
        case 0x2acabcu: goto label_2acabc;
        case 0x2acac0u: goto label_2acac0;
        case 0x2acac4u: goto label_2acac4;
        case 0x2acac8u: goto label_2acac8;
        case 0x2acaccu: goto label_2acacc;
        case 0x2acad0u: goto label_2acad0;
        case 0x2acad4u: goto label_2acad4;
        case 0x2acad8u: goto label_2acad8;
        case 0x2acadcu: goto label_2acadc;
        case 0x2acae0u: goto label_2acae0;
        case 0x2acae4u: goto label_2acae4;
        case 0x2acae8u: goto label_2acae8;
        case 0x2acaecu: goto label_2acaec;
        case 0x2acaf0u: goto label_2acaf0;
        case 0x2acaf4u: goto label_2acaf4;
        default: break;
    }

    ctx->pc = 0x2ac9e0u;

label_2ac9e0:
    // 0x2ac9e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ac9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2ac9e4:
    // 0x2ac9e4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2ac9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_2ac9e8:
    // 0x2ac9e8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2ac9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2ac9ec:
    // 0x2ac9ec: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2ac9ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ac9f0:
    // 0x2ac9f0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2ac9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2ac9f4:
    // 0x2ac9f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ac9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2ac9f8:
    // 0x2ac9f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ac9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ac9fc:
    // 0x2ac9fc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2ac9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2aca00:
    // 0x2aca00: 0x92630031  lbu         $v1, 0x31($s3)
    ctx->pc = 0x2aca00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 49)));
label_2aca04:
    // 0x2aca04: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_2aca08:
    if (ctx->pc == 0x2ACA08u) {
        ctx->pc = 0x2ACA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACA04u;
        // 0x2aca08: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACA0Cu;
        goto label_2aca0c;
    }
    ctx->pc = 0x2ACA04u;
    {
        const bool branch_taken_0x2aca04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ACA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACA04u;
        // 0x2aca08: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aca04) {
            ctx->pc = 0x2ACA48u;
            goto label_2aca48;
        }
    }
    ctx->pc = 0x2ACA0Cu;
label_2aca0c:
    // 0x2aca0c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2aca0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2aca10:
    // 0x2aca10: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2aca10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2aca14:
    // 0x2aca14: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2aca14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2aca18:
    // 0x2aca18: 0x40f809  jalr        $v0
label_2aca1c:
    if (ctx->pc == 0x2ACA1Cu) {
        ctx->pc = 0x2ACA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACA18u;
        // 0x2aca1c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACA20u;
        goto label_2aca20;
    }
    ctx->pc = 0x2ACA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2ACA20u);
        ctx->pc = 0x2ACA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACA18u;
        // 0x2aca1c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACA18u, 0x2ACA20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ACA20u;
label_2aca20:
    // 0x2aca20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aca20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aca24:
    // 0x2aca24: 0xc08ddc0  jal         func_237700
label_2aca28:
    if (ctx->pc == 0x2ACA28u) {
        ctx->pc = 0x2ACA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACA24u;
        // 0x2aca28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACA2Cu;
        goto label_2aca2c;
    }
    ctx->pc = 0x2ACA24u;
    SET_GPR_U32(ctx, 31, 0x2ACA2Cu);
    ctx->pc = 0x2ACA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACA24u;
    // 0x2aca28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237700u, 0x2ACA24u, 0x2ACA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACA2Cu;
label_2aca2c:
    // 0x2aca2c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2aca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2aca30:
    // 0x2aca30: 0x84440128  lh          $a0, 0x128($v0)
    ctx->pc = 0x2aca30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 296)));
label_2aca34:
    // 0x2aca34: 0x8c43012c  lw          $v1, 0x12C($v0)
    ctx->pc = 0x2aca34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_2aca38:
    // 0x2aca38: 0x60f809  jalr        $v1
label_2aca3c:
    if (ctx->pc == 0x2ACA3Cu) {
        ctx->pc = 0x2ACA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACA38u;
        // 0x2aca3c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACA40u;
        goto label_2aca40;
    }
    ctx->pc = 0x2ACA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2ACA40u);
        ctx->pc = 0x2ACA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACA38u;
        // 0x2aca3c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACA38u, 0x2ACA40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ACA40u;
label_2aca40:
    // 0x2aca40: 0x1000000a  b           . + 4 + (0xA << 2)
label_2aca44:
    if (ctx->pc == 0x2ACA44u) {
        ctx->pc = 0x2ACA48u;
        goto label_2aca48;
    }
    ctx->pc = 0x2ACA40u;
    {
        const bool branch_taken_0x2aca40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aca40) {
            ctx->pc = 0x2ACA6Cu;
            goto label_2aca6c;
        }
    }
    ctx->pc = 0x2ACA48u;
label_2aca48:
    // 0x2aca48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aca48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aca4c:
    // 0x2aca4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2aca4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2aca50:
    // 0x2aca50: 0xc08bc40  jal         func_22F100
label_2aca54:
    if (ctx->pc == 0x2ACA54u) {
        ctx->pc = 0x2ACA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACA50u;
        // 0x2aca54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACA58u;
        goto label_2aca58;
    }
    ctx->pc = 0x2ACA50u;
    SET_GPR_U32(ctx, 31, 0x2ACA58u);
    ctx->pc = 0x2ACA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACA50u;
    // 0x2aca54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F100u, 0x2ACA50u, 0x2ACA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACA58u;
label_2aca58:
    // 0x2aca58: 0xc08a0e2  jal         func_228388
label_2aca5c:
    if (ctx->pc == 0x2ACA5Cu) {
        ctx->pc = 0x2ACA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACA58u;
        // 0x2aca5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACA60u;
        goto label_2aca60;
    }
    ctx->pc = 0x2ACA58u;
    SET_GPR_U32(ctx, 31, 0x2ACA60u);
    ctx->pc = 0x2ACA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACA58u;
    // 0x2aca5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228388u, 0x2ACA58u, 0x2ACA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACA60u;
label_2aca60:
    // 0x2aca60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2aca60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2aca64:
    // 0x2aca64: 0xc089974  jal         func_2265D0
label_2aca68:
    if (ctx->pc == 0x2ACA68u) {
        ctx->pc = 0x2ACA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACA64u;
        // 0x2aca68: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACA6Cu;
        goto label_2aca6c;
    }
    ctx->pc = 0x2ACA64u;
    SET_GPR_U32(ctx, 31, 0x2ACA6Cu);
    ctx->pc = 0x2ACA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACA64u;
    // 0x2aca68: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x2ACA64u, 0x2ACA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACA6Cu;
label_2aca6c:
    // 0x2aca6c: 0xc0ab000  jal         func_2AC000
label_2aca70:
    if (ctx->pc == 0x2ACA70u) {
        ctx->pc = 0x2ACA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACA6Cu;
        // 0x2aca70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACA74u;
        goto label_2aca74;
    }
    ctx->pc = 0x2ACA6Cu;
    SET_GPR_U32(ctx, 31, 0x2ACA74u);
    ctx->pc = 0x2ACA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACA6Cu;
    // 0x2aca70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC000u, 0x2ACA6Cu, 0x2ACA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACA74u;
label_2aca74:
    // 0x2aca74: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2aca74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2aca78:
    // 0x2aca78: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2aca78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2aca7c:
    // 0x2aca7c: 0xac40021c  sw          $zero, 0x21C($v0)
    ctx->pc = 0x2aca7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 0));
label_2aca80:
    // 0x2aca80: 0x92630031  lbu         $v1, 0x31($s3)
    ctx->pc = 0x2aca80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 49)));
label_2aca84:
    // 0x2aca84: 0x54640014  bnel        $v1, $a0, . + 4 + (0x14 << 2)
label_2aca88:
    if (ctx->pc == 0x2ACA88u) {
        ctx->pc = 0x2ACA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACA84u;
        // 0x2aca88: 0xa2600035  sb          $zero, 0x35($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 53), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACA8Cu;
        goto label_2aca8c;
    }
    ctx->pc = 0x2ACA84u;
    {
        const bool branch_taken_0x2aca84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2aca84) {
            ctx->pc = 0x2ACA88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ACA84u;
            // 0x2aca88: 0xa2600035  sb          $zero, 0x35($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 53), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ACAD8u;
            goto label_2acad8;
        }
    }
    ctx->pc = 0x2ACA8Cu;
label_2aca8c:
    // 0x2aca8c: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2aca8cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2aca90:
    // 0x2aca90: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2aca90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_2aca94:
    // 0x2aca94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2aca94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aca98:
    // 0x2aca98: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2aca98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2aca9c:
    // 0x2aca9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2aca9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2acaa0:
    // 0x2acaa0: 0xa24401b2  sb          $a0, 0x1B2($s2)
    ctx->pc = 0x2acaa0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 434), (uint8_t)GPR_U32(ctx, 4));
label_2acaa4:
    // 0x2acaa4: 0xfe4200e0  sd          $v0, 0xE0($s2)
    ctx->pc = 0x2acaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
label_2acaa8:
    // 0x2acaa8: 0x24b10120  addiu       $s1, $a1, 0x120
    ctx->pc = 0x2acaa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_2acaac:
    // 0x2acaac: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2acaacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2acab0:
    // 0x2acab0: 0x84b00120  lh          $s0, 0x120($a1)
    ctx->pc = 0x2acab0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 288)));
label_2acab4:
    // 0x2acab4: 0xc067b9c  jal         func_19EE70
label_2acab8:
    if (ctx->pc == 0x2ACAB8u) {
        ctx->pc = 0x2ACAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACAB4u;
        // 0x2acab8: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACABCu;
        goto label_2acabc;
    }
    ctx->pc = 0x2ACAB4u;
    SET_GPR_U32(ctx, 31, 0x2ACABCu);
    ctx->pc = 0x2ACAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACAB4u;
    // 0x2acab8: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x2ACAB4u, 0x2ACABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACABCu;
label_2acabc:
    // 0x2acabc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2acabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2acac0:
    // 0x2acac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2acac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2acac4:
    // 0x2acac4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2acac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2acac8:
    // 0x2acac8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2acac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2acacc:
    // 0x2acacc: 0x60f809  jalr        $v1
label_2acad0:
    if (ctx->pc == 0x2ACAD0u) {
        ctx->pc = 0x2ACAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACACCu;
        // 0x2acad0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACAD4u;
        goto label_2acad4;
    }
    ctx->pc = 0x2ACACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2ACAD4u);
        ctx->pc = 0x2ACAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACACCu;
        // 0x2acad0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACACCu, 0x2ACAD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ACAD4u;
label_2acad4:
    // 0x2acad4: 0xa2600035  sb          $zero, 0x35($s3)
    ctx->pc = 0x2acad4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 53), (uint8_t)GPR_U32(ctx, 0));
label_2acad8:
    // 0x2acad8: 0xa2600034  sb          $zero, 0x34($s3)
    ctx->pc = 0x2acad8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 52), (uint8_t)GPR_U32(ctx, 0));
label_2acadc:
    // 0x2acadc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2acadcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2acae0:
    // 0x2acae0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2acae0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2acae4:
    // 0x2acae4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2acae4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2acae8:
    // 0x2acae8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2acae8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2acaec:
    // 0x2acaec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2acaecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2acaf0:
    // 0x2acaf0: 0x3e00008  jr          $ra
label_2acaf4:
    if (ctx->pc == 0x2ACAF4u) {
        ctx->pc = 0x2ACAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACAF0u;
        // 0x2acaf4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACAF8u;
        goto label_fallthrough_0x2acaf0;
    }
    ctx->pc = 0x2ACAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACAF0u;
        // 0x2acaf4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACAF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2acaf0:
    ctx->pc = 0x2ACAF8u;
}
