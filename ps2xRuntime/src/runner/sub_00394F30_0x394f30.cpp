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

// Function: sub_00394F30
// Address: 0x394f30 - 0x395020
void sub_00394F30_0x394f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00394F30_0x394f30");
#endif

    switch (ctx->pc) {
        case 0x394f30u: goto label_394f30;
        case 0x394f34u: goto label_394f34;
        case 0x394f38u: goto label_394f38;
        case 0x394f3cu: goto label_394f3c;
        case 0x394f40u: goto label_394f40;
        case 0x394f44u: goto label_394f44;
        case 0x394f48u: goto label_394f48;
        case 0x394f4cu: goto label_394f4c;
        case 0x394f50u: goto label_394f50;
        case 0x394f54u: goto label_394f54;
        case 0x394f58u: goto label_394f58;
        case 0x394f5cu: goto label_394f5c;
        case 0x394f60u: goto label_394f60;
        case 0x394f64u: goto label_394f64;
        case 0x394f68u: goto label_394f68;
        case 0x394f6cu: goto label_394f6c;
        case 0x394f70u: goto label_394f70;
        case 0x394f74u: goto label_394f74;
        case 0x394f78u: goto label_394f78;
        case 0x394f7cu: goto label_394f7c;
        case 0x394f80u: goto label_394f80;
        case 0x394f84u: goto label_394f84;
        case 0x394f88u: goto label_394f88;
        case 0x394f8cu: goto label_394f8c;
        case 0x394f90u: goto label_394f90;
        case 0x394f94u: goto label_394f94;
        case 0x394f98u: goto label_394f98;
        case 0x394f9cu: goto label_394f9c;
        case 0x394fa0u: goto label_394fa0;
        case 0x394fa4u: goto label_394fa4;
        case 0x394fa8u: goto label_394fa8;
        case 0x394facu: goto label_394fac;
        case 0x394fb0u: goto label_394fb0;
        case 0x394fb4u: goto label_394fb4;
        case 0x394fb8u: goto label_394fb8;
        case 0x394fbcu: goto label_394fbc;
        case 0x394fc0u: goto label_394fc0;
        case 0x394fc4u: goto label_394fc4;
        case 0x394fc8u: goto label_394fc8;
        case 0x394fccu: goto label_394fcc;
        case 0x394fd0u: goto label_394fd0;
        case 0x394fd4u: goto label_394fd4;
        case 0x394fd8u: goto label_394fd8;
        case 0x394fdcu: goto label_394fdc;
        case 0x394fe0u: goto label_394fe0;
        case 0x394fe4u: goto label_394fe4;
        case 0x394fe8u: goto label_394fe8;
        case 0x394fecu: goto label_394fec;
        case 0x394ff0u: goto label_394ff0;
        case 0x394ff4u: goto label_394ff4;
        case 0x394ff8u: goto label_394ff8;
        case 0x394ffcu: goto label_394ffc;
        case 0x395000u: goto label_395000;
        case 0x395004u: goto label_395004;
        case 0x395008u: goto label_395008;
        case 0x39500cu: goto label_39500c;
        case 0x395010u: goto label_395010;
        case 0x395014u: goto label_395014;
        case 0x395018u: goto label_395018;
        case 0x39501cu: goto label_39501c;
        default: break;
    }

    ctx->pc = 0x394f30u;

label_394f30:
    // 0x394f30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x394f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_394f34:
    // 0x394f34: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x394f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_394f38:
    // 0x394f38: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x394f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_394f3c:
    // 0x394f3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x394f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_394f40:
    // 0x394f40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x394f40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_394f44:
    // 0x394f44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x394f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_394f48:
    // 0x394f48: 0x8c442c04  lw          $a0, 0x2C04($v0)
    ctx->pc = 0x394f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
label_394f4c:
    // 0x394f4c: 0xc0e44cc  jal         func_391330
label_394f50:
    if (ctx->pc == 0x394F50u) {
        ctx->pc = 0x394F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F4Cu;
        // 0x394f50: 0x96050112  lhu         $a1, 0x112($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394F54u;
        goto label_394f54;
    }
    ctx->pc = 0x394F4Cu;
    SET_GPR_U32(ctx, 31, 0x394F54u);
    ctx->pc = 0x394F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394F4Cu;
    // 0x394f50: 0x96050112  lhu         $a1, 0x112($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x394F4Cu, 0x394F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394F54u;
label_394f54:
    // 0x394f54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x394f54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_394f58:
    // 0x394f58: 0x8222005a  lb          $v0, 0x5A($s1)
    ctx->pc = 0x394f58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
label_394f5c:
    // 0x394f5c: 0x5c400008  bgtzl       $v0, . + 4 + (0x8 << 2)
label_394f60:
    if (ctx->pc == 0x394F60u) {
        ctx->pc = 0x394F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F5Cu;
        // 0x394f60: 0x82230086  lb          $v1, 0x86($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 134)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394F64u;
        goto label_394f64;
    }
    ctx->pc = 0x394F5Cu;
    {
        const bool branch_taken_0x394f5c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x394f5c) {
            ctx->pc = 0x394F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394F5Cu;
            // 0x394f60: 0x82230086  lb          $v1, 0x86($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 134)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394F80u;
            goto label_394f80;
        }
    }
    ctx->pc = 0x394F64u;
label_394f64:
    // 0x394f64: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x394f64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_394f68:
    // 0x394f68: 0x26240043  addiu       $a0, $s1, 0x43
    ctx->pc = 0x394f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 67));
label_394f6c:
    // 0x394f6c: 0xc10c313  jal         func_430C4C
label_394f70:
    if (ctx->pc == 0x394F70u) {
        ctx->pc = 0x394F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F6Cu;
        // 0x394f70: 0x24a50f28  addiu       $a1, $a1, 0xF28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394F74u;
        goto label_394f74;
    }
    ctx->pc = 0x394F6Cu;
    SET_GPR_U32(ctx, 31, 0x394F74u);
    ctx->pc = 0x394F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394F6Cu;
    // 0x394f70: 0x24a50f28  addiu       $a1, $a1, 0xF28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x394F6Cu, 0x394F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394F74u;
label_394f74:
    // 0x394f74: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_394f78:
    if (ctx->pc == 0x394F78u) {
        ctx->pc = 0x394F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F74u;
        // 0x394f78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394F7Cu;
        goto label_394f7c;
    }
    ctx->pc = 0x394F74u;
    {
        const bool branch_taken_0x394f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x394F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F74u;
        // 0x394f78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394f74) {
            ctx->pc = 0x395008u;
            goto label_395008;
        }
    }
    ctx->pc = 0x394F7Cu;
label_394f7c:
    // 0x394f7c: 0x82230086  lb          $v1, 0x86($s1)
    ctx->pc = 0x394f7cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 134)));
label_394f80:
    // 0x394f80: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x394f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_394f84:
    // 0x394f84: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
label_394f88:
    if (ctx->pc == 0x394F88u) {
        ctx->pc = 0x394F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F84u;
        // 0x394f88: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394F8Cu;
        goto label_394f8c;
    }
    ctx->pc = 0x394F84u;
    {
        const bool branch_taken_0x394f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x394F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F84u;
        // 0x394f88: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394f84) {
            ctx->pc = 0x395004u;
            goto label_395004;
        }
    }
    ctx->pc = 0x394F8Cu;
label_394f8c:
    // 0x394f8c: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
label_394f90:
    if (ctx->pc == 0x394F90u) {
        ctx->pc = 0x394F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F8Cu;
        // 0x394f90: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394F94u;
        goto label_394f94;
    }
    ctx->pc = 0x394F8Cu;
    {
        const bool branch_taken_0x394f8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x394F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F8Cu;
        // 0x394f90: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394f8c) {
            ctx->pc = 0x395004u;
            goto label_395004;
        }
    }
    ctx->pc = 0x394F94u;
label_394f94:
    // 0x394f94: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
label_394f98:
    if (ctx->pc == 0x394F98u) {
        ctx->pc = 0x394F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F94u;
        // 0x394f98: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394F9Cu;
        goto label_394f9c;
    }
    ctx->pc = 0x394F94u;
    {
        const bool branch_taken_0x394f94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x394F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F94u;
        // 0x394f98: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394f94) {
            ctx->pc = 0x395004u;
            goto label_395004;
        }
    }
    ctx->pc = 0x394F9Cu;
label_394f9c:
    // 0x394f9c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x394f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_394fa0:
    // 0x394fa0: 0x844448bc  lh          $a0, 0x48BC($v0)
    ctx->pc = 0x394fa0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 18620)));
label_394fa4:
    // 0x394fa4: 0x50830005  beql        $a0, $v1, . + 4 + (0x5 << 2)
label_394fa8:
    if (ctx->pc == 0x394FA8u) {
        ctx->pc = 0x394FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394FA4u;
        // 0x394fa8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394FACu;
        goto label_394fac;
    }
    ctx->pc = 0x394FA4u;
    {
        const bool branch_taken_0x394fa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x394fa4) {
            ctx->pc = 0x394FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394FA4u;
            // 0x394fa8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394FBCu;
            goto label_394fbc;
        }
    }
    ctx->pc = 0x394FACu;
label_394fac:
    // 0x394fac: 0x86020114  lh          $v0, 0x114($s0)
    ctx->pc = 0x394facu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 276)));
label_394fb0:
    // 0x394fb0: 0x10440015  beq         $v0, $a0, . + 4 + (0x15 << 2)
label_394fb4:
    if (ctx->pc == 0x394FB4u) {
        ctx->pc = 0x394FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394FB0u;
        // 0x394fb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394FB8u;
        goto label_394fb8;
    }
    ctx->pc = 0x394FB0u;
    {
        const bool branch_taken_0x394fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x394FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394FB0u;
        // 0x394fb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394fb0) {
            ctx->pc = 0x395008u;
            goto label_395008;
        }
    }
    ctx->pc = 0x394FB8u;
label_394fb8:
    // 0x394fb8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x394fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_394fbc:
    // 0x394fbc: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x394fbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_394fc0:
    // 0x394fc0: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x394fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_394fc4:
    // 0x394fc4: 0x40f809  jalr        $v0
label_394fc8:
    if (ctx->pc == 0x394FC8u) {
        ctx->pc = 0x394FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394FC4u;
        // 0x394fc8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394FCCu;
        goto label_394fcc;
    }
    ctx->pc = 0x394FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x394FCCu);
        ctx->pc = 0x394FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394FC4u;
        // 0x394fc8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394FC4u, 0x394FCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x394FCCu;
label_394fcc:
    // 0x394fcc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_394fd0:
    if (ctx->pc == 0x394FD0u) {
        ctx->pc = 0x394FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394FCCu;
        // 0x394fd0: 0x82240087  lb          $a0, 0x87($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 135)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394FD4u;
        goto label_394fd4;
    }
    ctx->pc = 0x394FCCu;
    {
        const bool branch_taken_0x394fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x394fcc) {
            ctx->pc = 0x394FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394FCCu;
            // 0x394fd0: 0x82240087  lb          $a0, 0x87($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 135)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394FE8u;
            goto label_394fe8;
        }
    }
    ctx->pc = 0x394FD4u;
label_394fd4:
    // 0x394fd4: 0x90420040  lbu         $v0, 0x40($v0)
    ctx->pc = 0x394fd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 64)));
label_394fd8:
    // 0x394fd8: 0x30420030  andi        $v0, $v0, 0x30
    ctx->pc = 0x394fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)48);
label_394fdc:
    // 0x394fdc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_394fe0:
    if (ctx->pc == 0x394FE0u) {
        ctx->pc = 0x394FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394FDCu;
        // 0x394fe0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394FE4u;
        goto label_394fe4;
    }
    ctx->pc = 0x394FDCu;
    {
        const bool branch_taken_0x394fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x394FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394FDCu;
        // 0x394fe0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394fdc) {
            ctx->pc = 0x395008u;
            goto label_395008;
        }
    }
    ctx->pc = 0x394FE4u;
label_394fe4:
    // 0x394fe4: 0x82240087  lb          $a0, 0x87($s1)
    ctx->pc = 0x394fe4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 135)));
label_394fe8:
    // 0x394fe8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x394fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_394fec:
    // 0x394fec: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_394ff0:
    if (ctx->pc == 0x394FF0u) {
        ctx->pc = 0x394FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394FECu;
        // 0x394ff0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394FF4u;
        goto label_394ff4;
    }
    ctx->pc = 0x394FECu;
    {
        const bool branch_taken_0x394fec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x394FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394FECu;
        // 0x394ff0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394fec) {
            ctx->pc = 0x394FFCu;
            goto label_394ffc;
        }
    }
    ctx->pc = 0x394FF4u;
label_394ff4:
    // 0x394ff4: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
label_394ff8:
    if (ctx->pc == 0x394FF8u) {
        ctx->pc = 0x394FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394FF4u;
        // 0x394ff8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394FFCu;
        goto label_394ffc;
    }
    ctx->pc = 0x394FF4u;
    {
        const bool branch_taken_0x394ff4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x394FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394FF4u;
        // 0x394ff8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394ff4) {
            ctx->pc = 0x395008u;
            goto label_395008;
        }
    }
    ctx->pc = 0x394FFCu;
label_394ffc:
    // 0x394ffc: 0x10000002  b           . + 4 + (0x2 << 2)
label_395000:
    if (ctx->pc == 0x395000u) {
        ctx->pc = 0x395000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394FFCu;
        // 0x395000: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395004u;
        goto label_395004;
    }
    ctx->pc = 0x394FFCu;
    {
        const bool branch_taken_0x394ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394FFCu;
        // 0x395000: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394ffc) {
            ctx->pc = 0x395008u;
            goto label_395008;
        }
    }
    ctx->pc = 0x395004u;
label_395004:
    // 0x395004: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x395004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_395008:
    // 0x395008: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x395008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39500c:
    // 0x39500c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39500cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_395010:
    // 0x395010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x395010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_395014:
    // 0x395014: 0x3e00008  jr          $ra
label_395018:
    if (ctx->pc == 0x395018u) {
        ctx->pc = 0x395018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395014u;
        // 0x395018: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39501Cu;
        goto label_39501c;
    }
    ctx->pc = 0x395014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395014u;
        // 0x395018: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39501Cu;
label_39501c:
    // 0x39501c: 0x0  nop
    ctx->pc = 0x39501cu;
    // NOP
    ctx->pc = 0x395020u;
}
