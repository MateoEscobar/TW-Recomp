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

// Function: sub_002EA9F0
// Address: 0x2ea9f0 - 0x2eab08
void sub_002EA9F0_0x2ea9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA9F0_0x2ea9f0");
#endif

    switch (ctx->pc) {
        case 0x2ea9f0u: goto label_2ea9f0;
        case 0x2ea9f4u: goto label_2ea9f4;
        case 0x2ea9f8u: goto label_2ea9f8;
        case 0x2ea9fcu: goto label_2ea9fc;
        case 0x2eaa00u: goto label_2eaa00;
        case 0x2eaa04u: goto label_2eaa04;
        case 0x2eaa08u: goto label_2eaa08;
        case 0x2eaa0cu: goto label_2eaa0c;
        case 0x2eaa10u: goto label_2eaa10;
        case 0x2eaa14u: goto label_2eaa14;
        case 0x2eaa18u: goto label_2eaa18;
        case 0x2eaa1cu: goto label_2eaa1c;
        case 0x2eaa20u: goto label_2eaa20;
        case 0x2eaa24u: goto label_2eaa24;
        case 0x2eaa28u: goto label_2eaa28;
        case 0x2eaa2cu: goto label_2eaa2c;
        case 0x2eaa30u: goto label_2eaa30;
        case 0x2eaa34u: goto label_2eaa34;
        case 0x2eaa38u: goto label_2eaa38;
        case 0x2eaa3cu: goto label_2eaa3c;
        case 0x2eaa40u: goto label_2eaa40;
        case 0x2eaa44u: goto label_2eaa44;
        case 0x2eaa48u: goto label_2eaa48;
        case 0x2eaa4cu: goto label_2eaa4c;
        case 0x2eaa50u: goto label_2eaa50;
        case 0x2eaa54u: goto label_2eaa54;
        case 0x2eaa58u: goto label_2eaa58;
        case 0x2eaa5cu: goto label_2eaa5c;
        case 0x2eaa60u: goto label_2eaa60;
        case 0x2eaa64u: goto label_2eaa64;
        case 0x2eaa68u: goto label_2eaa68;
        case 0x2eaa6cu: goto label_2eaa6c;
        case 0x2eaa70u: goto label_2eaa70;
        case 0x2eaa74u: goto label_2eaa74;
        case 0x2eaa78u: goto label_2eaa78;
        case 0x2eaa7cu: goto label_2eaa7c;
        case 0x2eaa80u: goto label_2eaa80;
        case 0x2eaa84u: goto label_2eaa84;
        case 0x2eaa88u: goto label_2eaa88;
        case 0x2eaa8cu: goto label_2eaa8c;
        case 0x2eaa90u: goto label_2eaa90;
        case 0x2eaa94u: goto label_2eaa94;
        case 0x2eaa98u: goto label_2eaa98;
        case 0x2eaa9cu: goto label_2eaa9c;
        case 0x2eaaa0u: goto label_2eaaa0;
        case 0x2eaaa4u: goto label_2eaaa4;
        case 0x2eaaa8u: goto label_2eaaa8;
        case 0x2eaaacu: goto label_2eaaac;
        case 0x2eaab0u: goto label_2eaab0;
        case 0x2eaab4u: goto label_2eaab4;
        case 0x2eaab8u: goto label_2eaab8;
        case 0x2eaabcu: goto label_2eaabc;
        case 0x2eaac0u: goto label_2eaac0;
        case 0x2eaac4u: goto label_2eaac4;
        case 0x2eaac8u: goto label_2eaac8;
        case 0x2eaaccu: goto label_2eaacc;
        case 0x2eaad0u: goto label_2eaad0;
        case 0x2eaad4u: goto label_2eaad4;
        case 0x2eaad8u: goto label_2eaad8;
        case 0x2eaadcu: goto label_2eaadc;
        case 0x2eaae0u: goto label_2eaae0;
        case 0x2eaae4u: goto label_2eaae4;
        case 0x2eaae8u: goto label_2eaae8;
        case 0x2eaaecu: goto label_2eaaec;
        case 0x2eaaf0u: goto label_2eaaf0;
        case 0x2eaaf4u: goto label_2eaaf4;
        case 0x2eaaf8u: goto label_2eaaf8;
        case 0x2eaafcu: goto label_2eaafc;
        case 0x2eab00u: goto label_2eab00;
        case 0x2eab04u: goto label_2eab04;
        default: break;
    }

    ctx->pc = 0x2ea9f0u;

label_2ea9f0:
    // 0x2ea9f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ea9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2ea9f4:
    // 0x2ea9f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ea9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2ea9f8:
    // 0x2ea9f8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2ea9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_2ea9fc:
    // 0x2ea9fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ea9fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2eaa00:
    // 0x2eaa00: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2eaa00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2eaa04:
    // 0x2eaa04: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2eaa04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eaa08:
    // 0x2eaa08: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2eaa08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2eaa0c:
    // 0x2eaa0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2eaa0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2eaa10:
    // 0x2eaa10: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2eaa10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2eaa14:
    // 0x2eaa14: 0xc0a36c8  jal         func_28DB20
label_2eaa18:
    if (ctx->pc == 0x2EAA18u) {
        ctx->pc = 0x2EAA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA14u;
        // 0x2eaa18: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAA1Cu;
        goto label_2eaa1c;
    }
    ctx->pc = 0x2EAA14u;
    SET_GPR_U32(ctx, 31, 0x2EAA1Cu);
    ctx->pc = 0x2EAA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAA14u;
    // 0x2eaa18: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2EAA14u, 0x2EAA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAA1Cu;
label_2eaa1c:
    // 0x2eaa1c: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x2eaa1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
label_2eaa20:
    // 0x2eaa20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eaa20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2eaa24:
    // 0x2eaa24: 0xc089998  jal         func_226660
label_2eaa28:
    if (ctx->pc == 0x2EAA28u) {
        ctx->pc = 0x2EAA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA24u;
        // 0x2eaa28: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAA2Cu;
        goto label_2eaa2c;
    }
    ctx->pc = 0x2EAA24u;
    SET_GPR_U32(ctx, 31, 0x2EAA2Cu);
    ctx->pc = 0x2EAA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAA24u;
    // 0x2eaa28: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2EAA24u, 0x2EAA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAA2Cu;
label_2eaa2c:
    // 0x2eaa2c: 0x1453000c  bne         $v0, $s3, . + 4 + (0xC << 2)
label_2eaa30:
    if (ctx->pc == 0x2EAA30u) {
        ctx->pc = 0x2EAA34u;
        goto label_2eaa34;
    }
    ctx->pc = 0x2EAA2Cu;
    {
        const bool branch_taken_0x2eaa2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2eaa2c) {
            ctx->pc = 0x2EAA60u;
            goto label_2eaa60;
        }
    }
    ctx->pc = 0x2EAA34u;
label_2eaa34:
    // 0x2eaa34: 0x8e3000d8  lw          $s0, 0xD8($s1)
    ctx->pc = 0x2eaa34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_2eaa38:
    // 0x2eaa38: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2eaa38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2eaa3c:
    // 0x2eaa3c: 0xc05dc0e  jal         func_177038
label_2eaa40:
    if (ctx->pc == 0x2EAA40u) {
        ctx->pc = 0x2EAA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA3Cu;
        // 0x2eaa40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAA44u;
        goto label_2eaa44;
    }
    ctx->pc = 0x2EAA3Cu;
    SET_GPR_U32(ctx, 31, 0x2EAA44u);
    ctx->pc = 0x2EAA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAA3Cu;
    // 0x2eaa40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177038u, 0x2EAA3Cu, 0x2EAA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAA44u;
label_2eaa44:
    // 0x2eaa44: 0xc05d484  jal         func_175210
label_2eaa48:
    if (ctx->pc == 0x2EAA48u) {
        ctx->pc = 0x2EAA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA44u;
        // 0x2eaa48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAA4Cu;
        goto label_2eaa4c;
    }
    ctx->pc = 0x2EAA44u;
    SET_GPR_U32(ctx, 31, 0x2EAA4Cu);
    ctx->pc = 0x2EAA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAA44u;
    // 0x2eaa48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x2EAA44u, 0x2EAA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAA4Cu;
label_2eaa4c:
    // 0x2eaa4c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2eaa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2eaa50:
    // 0x2eaa50: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x2eaa50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_2eaa54:
    // 0x2eaa54: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x2eaa54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2eaa58:
    // 0x2eaa58: 0xa0f809  jalr        $a1
label_2eaa5c:
    if (ctx->pc == 0x2EAA5Cu) {
        ctx->pc = 0x2EAA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA58u;
        // 0x2eaa5c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAA60u;
        goto label_2eaa60;
    }
    ctx->pc = 0x2EAA58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2EAA60u);
        ctx->pc = 0x2EAA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA58u;
        // 0x2eaa5c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EAA58u, 0x2EAA60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EAA60u;
label_2eaa60:
    // 0x2eaa60: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x2eaa60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
label_2eaa64:
    // 0x2eaa64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eaa64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2eaa68:
    // 0x2eaa68: 0xc089998  jal         func_226660
label_2eaa6c:
    if (ctx->pc == 0x2EAA6Cu) {
        ctx->pc = 0x2EAA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA68u;
        // 0x2eaa6c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAA70u;
        goto label_2eaa70;
    }
    ctx->pc = 0x2EAA68u;
    SET_GPR_U32(ctx, 31, 0x2EAA70u);
    ctx->pc = 0x2EAA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAA68u;
    // 0x2eaa6c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2EAA68u, 0x2EAA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAA70u;
label_2eaa70:
    // 0x2eaa70: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_2eaa74:
    if (ctx->pc == 0x2EAA74u) {
        ctx->pc = 0x2EAA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA70u;
        // 0x2eaa74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAA78u;
        goto label_2eaa78;
    }
    ctx->pc = 0x2EAA70u;
    {
        const bool branch_taken_0x2eaa70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EAA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA70u;
        // 0x2eaa74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaa70) {
            ctx->pc = 0x2EAAE8u;
            goto label_2eaae8;
        }
    }
    ctx->pc = 0x2EAA78u;
label_2eaa78:
    // 0x2eaa78: 0xc088ef0  jal         func_223BC0
label_2eaa7c:
    if (ctx->pc == 0x2EAA7Cu) {
        ctx->pc = 0x2EAA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA78u;
        // 0x2eaa7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAA80u;
        goto label_2eaa80;
    }
    ctx->pc = 0x2EAA78u;
    SET_GPR_U32(ctx, 31, 0x2EAA80u);
    ctx->pc = 0x2EAA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAA78u;
    // 0x2eaa7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223BC0u, 0x2EAA78u, 0x2EAA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAA80u;
label_2eaa80:
    // 0x2eaa80: 0x14530003  bne         $v0, $s3, . + 4 + (0x3 << 2)
label_2eaa84:
    if (ctx->pc == 0x2EAA84u) {
        ctx->pc = 0x2EAA88u;
        goto label_2eaa88;
    }
    ctx->pc = 0x2EAA80u;
    {
        const bool branch_taken_0x2eaa80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2eaa80) {
            ctx->pc = 0x2EAA90u;
            goto label_2eaa90;
        }
    }
    ctx->pc = 0x2EAA88u;
label_2eaa88:
    // 0x2eaa88: 0xc08be36  jal         func_22F8D8
label_2eaa8c:
    if (ctx->pc == 0x2EAA8Cu) {
        ctx->pc = 0x2EAA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA88u;
        // 0x2eaa8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAA90u;
        goto label_2eaa90;
    }
    ctx->pc = 0x2EAA88u;
    SET_GPR_U32(ctx, 31, 0x2EAA90u);
    ctx->pc = 0x2EAA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAA88u;
    // 0x2eaa8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F8D8u, 0x2EAA88u, 0x2EAA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAA90u;
label_2eaa90:
    // 0x2eaa90: 0xc08bfbc  jal         func_22FEF0
label_2eaa94:
    if (ctx->pc == 0x2EAA94u) {
        ctx->pc = 0x2EAA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA90u;
        // 0x2eaa94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAA98u;
        goto label_2eaa98;
    }
    ctx->pc = 0x2EAA90u;
    SET_GPR_U32(ctx, 31, 0x2EAA98u);
    ctx->pc = 0x2EAA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAA90u;
    // 0x2eaa94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2EAA90u, 0x2EAA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAA98u;
label_2eaa98:
    // 0x2eaa98: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x2eaa98u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_2eaa9c:
    // 0x2eaa9c: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x2eaa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
label_2eaaa0:
    // 0x2eaaa0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2eaaa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2eaaa4:
    // 0x2eaaa4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2eaaa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2eaaa8:
    // 0x2eaaa8: 0xfe2200e0  sd          $v0, 0xE0($s1)
    ctx->pc = 0x2eaaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
label_2eaaac:
    // 0x2eaaac: 0xc0a367c  jal         func_28D9F0
label_2eaab0:
    if (ctx->pc == 0x2EAAB0u) {
        ctx->pc = 0x2EAAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAAACu;
        // 0x2eaab0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAAB4u;
        goto label_2eaab4;
    }
    ctx->pc = 0x2EAAACu;
    SET_GPR_U32(ctx, 31, 0x2EAAB4u);
    ctx->pc = 0x2EAAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAAACu;
    // 0x2eaab0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2EAAACu, 0x2EAAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAAB4u;
label_2eaab4:
    // 0x2eaab4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2eaab8:
    if (ctx->pc == 0x2EAAB8u) {
        ctx->pc = 0x2EAAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAAB4u;
        // 0x2eaab8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAABCu;
        goto label_2eaabc;
    }
    ctx->pc = 0x2EAAB4u;
    {
        const bool branch_taken_0x2eaab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAAB4u;
        // 0x2eaab8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaab4) {
            ctx->pc = 0x2EAAE4u;
            goto label_2eaae4;
        }
    }
    ctx->pc = 0x2EAABCu;
label_2eaabc:
    // 0x2eaabc: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2eaabcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_2eaac0:
    // 0x2eaac0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2eaac0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2eaac4:
    // 0x2eaac4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2eaac4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2eaac8:
    // 0x2eaac8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2eaac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2eaacc:
    // 0x2eaacc: 0x2406029c  addiu       $a2, $zero, 0x29C
    ctx->pc = 0x2eaaccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2eaad0:
    // 0x2eaad0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2eaad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eaad4:
    // 0x2eaad4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2eaad4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2eaad8:
    // 0x2eaad8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2eaad8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eaadc:
    // 0x2eaadc: 0xc0be968  jal         func_2FA5A0
label_2eaae0:
    if (ctx->pc == 0x2EAAE0u) {
        ctx->pc = 0x2EAAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAADCu;
        // 0x2eaae0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAAE4u;
        goto label_2eaae4;
    }
    ctx->pc = 0x2EAADCu;
    SET_GPR_U32(ctx, 31, 0x2EAAE4u);
    ctx->pc = 0x2EAAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAADCu;
    // 0x2eaae0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2EAADCu, 0x2EAAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAAE4u;
label_2eaae4:
    // 0x2eaae4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2eaae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eaae8:
    // 0x2eaae8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2eaae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2eaaec:
    // 0x2eaaec: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2eaaecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2eaaf0:
    // 0x2eaaf0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2eaaf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2eaaf4:
    // 0x2eaaf4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2eaaf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2eaaf8:
    // 0x2eaaf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2eaaf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2eaafc:
    // 0x2eaafc: 0x3e00008  jr          $ra
label_2eab00:
    if (ctx->pc == 0x2EAB00u) {
        ctx->pc = 0x2EAB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAAFCu;
        // 0x2eab00: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAB04u;
        goto label_2eab04;
    }
    ctx->pc = 0x2EAAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EAB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAAFCu;
        // 0x2eab00: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EAAFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EAB04u;
label_2eab04:
    // 0x2eab04: 0x0  nop
    ctx->pc = 0x2eab04u;
    // NOP
    ctx->pc = 0x2eab08u;
}
