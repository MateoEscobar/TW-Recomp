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

// Function: sub_002FEF40
// Address: 0x2fef40 - 0x2ff198
void sub_002FEF40_0x2fef40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FEF40_0x2fef40");
#endif

    switch (ctx->pc) {
        case 0x2fef40u: goto label_2fef40;
        case 0x2fef44u: goto label_2fef44;
        case 0x2fef48u: goto label_2fef48;
        case 0x2fef4cu: goto label_2fef4c;
        case 0x2fef50u: goto label_2fef50;
        case 0x2fef54u: goto label_2fef54;
        case 0x2fef58u: goto label_2fef58;
        case 0x2fef5cu: goto label_2fef5c;
        case 0x2fef60u: goto label_2fef60;
        case 0x2fef64u: goto label_2fef64;
        case 0x2fef68u: goto label_2fef68;
        case 0x2fef6cu: goto label_2fef6c;
        case 0x2fef70u: goto label_2fef70;
        case 0x2fef74u: goto label_2fef74;
        case 0x2fef78u: goto label_2fef78;
        case 0x2fef7cu: goto label_2fef7c;
        case 0x2fef80u: goto label_2fef80;
        case 0x2fef84u: goto label_2fef84;
        case 0x2fef88u: goto label_2fef88;
        case 0x2fef8cu: goto label_2fef8c;
        case 0x2fef90u: goto label_2fef90;
        case 0x2fef94u: goto label_2fef94;
        case 0x2fef98u: goto label_2fef98;
        case 0x2fef9cu: goto label_2fef9c;
        case 0x2fefa0u: goto label_2fefa0;
        case 0x2fefa4u: goto label_2fefa4;
        case 0x2fefa8u: goto label_2fefa8;
        case 0x2fefacu: goto label_2fefac;
        case 0x2fefb0u: goto label_2fefb0;
        case 0x2fefb4u: goto label_2fefb4;
        case 0x2fefb8u: goto label_2fefb8;
        case 0x2fefbcu: goto label_2fefbc;
        case 0x2fefc0u: goto label_2fefc0;
        case 0x2fefc4u: goto label_2fefc4;
        case 0x2fefc8u: goto label_2fefc8;
        case 0x2fefccu: goto label_2fefcc;
        case 0x2fefd0u: goto label_2fefd0;
        case 0x2fefd4u: goto label_2fefd4;
        case 0x2fefd8u: goto label_2fefd8;
        case 0x2fefdcu: goto label_2fefdc;
        case 0x2fefe0u: goto label_2fefe0;
        case 0x2fefe4u: goto label_2fefe4;
        case 0x2fefe8u: goto label_2fefe8;
        case 0x2fefecu: goto label_2fefec;
        case 0x2feff0u: goto label_2feff0;
        case 0x2feff4u: goto label_2feff4;
        case 0x2feff8u: goto label_2feff8;
        case 0x2feffcu: goto label_2feffc;
        case 0x2ff000u: goto label_2ff000;
        case 0x2ff004u: goto label_2ff004;
        case 0x2ff008u: goto label_2ff008;
        case 0x2ff00cu: goto label_2ff00c;
        case 0x2ff010u: goto label_2ff010;
        case 0x2ff014u: goto label_2ff014;
        case 0x2ff018u: goto label_2ff018;
        case 0x2ff01cu: goto label_2ff01c;
        case 0x2ff020u: goto label_2ff020;
        case 0x2ff024u: goto label_2ff024;
        case 0x2ff028u: goto label_2ff028;
        case 0x2ff02cu: goto label_2ff02c;
        case 0x2ff030u: goto label_2ff030;
        case 0x2ff034u: goto label_2ff034;
        case 0x2ff038u: goto label_2ff038;
        case 0x2ff03cu: goto label_2ff03c;
        case 0x2ff040u: goto label_2ff040;
        case 0x2ff044u: goto label_2ff044;
        case 0x2ff048u: goto label_2ff048;
        case 0x2ff04cu: goto label_2ff04c;
        case 0x2ff050u: goto label_2ff050;
        case 0x2ff054u: goto label_2ff054;
        case 0x2ff058u: goto label_2ff058;
        case 0x2ff05cu: goto label_2ff05c;
        case 0x2ff060u: goto label_2ff060;
        case 0x2ff064u: goto label_2ff064;
        case 0x2ff068u: goto label_2ff068;
        case 0x2ff06cu: goto label_2ff06c;
        case 0x2ff070u: goto label_2ff070;
        case 0x2ff074u: goto label_2ff074;
        case 0x2ff078u: goto label_2ff078;
        case 0x2ff07cu: goto label_2ff07c;
        case 0x2ff080u: goto label_2ff080;
        case 0x2ff084u: goto label_2ff084;
        case 0x2ff088u: goto label_2ff088;
        case 0x2ff08cu: goto label_2ff08c;
        case 0x2ff090u: goto label_2ff090;
        case 0x2ff094u: goto label_2ff094;
        case 0x2ff098u: goto label_2ff098;
        case 0x2ff09cu: goto label_2ff09c;
        case 0x2ff0a0u: goto label_2ff0a0;
        case 0x2ff0a4u: goto label_2ff0a4;
        case 0x2ff0a8u: goto label_2ff0a8;
        case 0x2ff0acu: goto label_2ff0ac;
        case 0x2ff0b0u: goto label_2ff0b0;
        case 0x2ff0b4u: goto label_2ff0b4;
        case 0x2ff0b8u: goto label_2ff0b8;
        case 0x2ff0bcu: goto label_2ff0bc;
        case 0x2ff0c0u: goto label_2ff0c0;
        case 0x2ff0c4u: goto label_2ff0c4;
        case 0x2ff0c8u: goto label_2ff0c8;
        case 0x2ff0ccu: goto label_2ff0cc;
        case 0x2ff0d0u: goto label_2ff0d0;
        case 0x2ff0d4u: goto label_2ff0d4;
        case 0x2ff0d8u: goto label_2ff0d8;
        case 0x2ff0dcu: goto label_2ff0dc;
        case 0x2ff0e0u: goto label_2ff0e0;
        case 0x2ff0e4u: goto label_2ff0e4;
        case 0x2ff0e8u: goto label_2ff0e8;
        case 0x2ff0ecu: goto label_2ff0ec;
        case 0x2ff0f0u: goto label_2ff0f0;
        case 0x2ff0f4u: goto label_2ff0f4;
        case 0x2ff0f8u: goto label_2ff0f8;
        case 0x2ff0fcu: goto label_2ff0fc;
        case 0x2ff100u: goto label_2ff100;
        case 0x2ff104u: goto label_2ff104;
        case 0x2ff108u: goto label_2ff108;
        case 0x2ff10cu: goto label_2ff10c;
        case 0x2ff110u: goto label_2ff110;
        case 0x2ff114u: goto label_2ff114;
        case 0x2ff118u: goto label_2ff118;
        case 0x2ff11cu: goto label_2ff11c;
        case 0x2ff120u: goto label_2ff120;
        case 0x2ff124u: goto label_2ff124;
        case 0x2ff128u: goto label_2ff128;
        case 0x2ff12cu: goto label_2ff12c;
        case 0x2ff130u: goto label_2ff130;
        case 0x2ff134u: goto label_2ff134;
        case 0x2ff138u: goto label_2ff138;
        case 0x2ff13cu: goto label_2ff13c;
        case 0x2ff140u: goto label_2ff140;
        case 0x2ff144u: goto label_2ff144;
        case 0x2ff148u: goto label_2ff148;
        case 0x2ff14cu: goto label_2ff14c;
        case 0x2ff150u: goto label_2ff150;
        case 0x2ff154u: goto label_2ff154;
        case 0x2ff158u: goto label_2ff158;
        case 0x2ff15cu: goto label_2ff15c;
        case 0x2ff160u: goto label_2ff160;
        case 0x2ff164u: goto label_2ff164;
        case 0x2ff168u: goto label_2ff168;
        case 0x2ff16cu: goto label_2ff16c;
        case 0x2ff170u: goto label_2ff170;
        case 0x2ff174u: goto label_2ff174;
        case 0x2ff178u: goto label_2ff178;
        case 0x2ff17cu: goto label_2ff17c;
        case 0x2ff180u: goto label_2ff180;
        case 0x2ff184u: goto label_2ff184;
        case 0x2ff188u: goto label_2ff188;
        case 0x2ff18cu: goto label_2ff18c;
        case 0x2ff190u: goto label_2ff190;
        case 0x2ff194u: goto label_2ff194;
        default: break;
    }

    ctx->pc = 0x2fef40u;

label_2fef40:
    // 0x2fef40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2fef40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2fef44:
    // 0x2fef44: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2fef44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2fef48:
    // 0x2fef48: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2fef48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2fef4c:
    // 0x2fef4c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2fef4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2fef50:
    // 0x2fef50: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2fef50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2fef54:
    // 0x2fef54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fef54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2fef58:
    // 0x2fef58: 0xc0a3eba  jal         func_28FAE8
label_2fef5c:
    if (ctx->pc == 0x2FEF5Cu) {
        ctx->pc = 0x2FEF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEF58u;
        // 0x2fef5c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEF60u;
        goto label_2fef60;
    }
    ctx->pc = 0x2FEF58u;
    SET_GPR_U32(ctx, 31, 0x2FEF60u);
    ctx->pc = 0x2FEF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEF58u;
    // 0x2fef5c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FAE8u, 0x2FEF58u, 0x2FEF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEF60u;
label_2fef60:
    // 0x2fef60: 0x8e0502c8  lw          $a1, 0x2C8($s0)
    ctx->pc = 0x2fef60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_2fef64:
    // 0x2fef64: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_2fef68:
    if (ctx->pc == 0x2FEF68u) {
        ctx->pc = 0x2FEF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEF64u;
        // 0x2fef68: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEF6Cu;
        goto label_2fef6c;
    }
    ctx->pc = 0x2FEF64u;
    {
        const bool branch_taken_0x2fef64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEF64u;
        // 0x2fef68: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fef64) {
            ctx->pc = 0x2FEF88u;
            goto label_2fef88;
        }
    }
    ctx->pc = 0x2FEF6Cu;
label_2fef6c:
    // 0x2fef6c: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2fef6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2fef70:
    // 0x2fef70: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2fef70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2fef74:
    // 0x2fef74: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x2fef74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2fef78:
    // 0x2fef78: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2fef7c:
    if (ctx->pc == 0x2FEF7Cu) {
        ctx->pc = 0x2FEF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEF78u;
        // 0x2fef7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEF80u;
        goto label_2fef80;
    }
    ctx->pc = 0x2FEF78u;
    {
        const bool branch_taken_0x2fef78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEF78u;
        // 0x2fef7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fef78) {
            ctx->pc = 0x2FEF88u;
            goto label_2fef88;
        }
    }
    ctx->pc = 0x2FEF80u;
label_2fef80:
    // 0x2fef80: 0xc0a484c  jal         func_292130
label_2fef84:
    if (ctx->pc == 0x2FEF84u) {
        ctx->pc = 0x2FEF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEF80u;
        // 0x2fef84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEF88u;
        goto label_2fef88;
    }
    ctx->pc = 0x2FEF80u;
    SET_GPR_U32(ctx, 31, 0x2FEF88u);
    ctx->pc = 0x2FEF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEF80u;
    // 0x2fef84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292130u, 0x2FEF80u, 0x2FEF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEF88u;
label_2fef88:
    // 0x2fef88: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x2fef88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
label_2fef8c:
    // 0x2fef8c: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x2fef8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_2fef90:
    // 0x2fef90: 0x5460007a  bnel        $v1, $zero, . + 4 + (0x7A << 2)
label_2fef94:
    if (ctx->pc == 0x2FEF94u) {
        ctx->pc = 0x2FEF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEF90u;
        // 0x2fef94: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEF98u;
        goto label_2fef98;
    }
    ctx->pc = 0x2FEF90u;
    {
        const bool branch_taken_0x2fef90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fef90) {
            ctx->pc = 0x2FEF94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FEF90u;
            // 0x2fef94: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF17Cu;
            goto label_2ff17c;
        }
    }
    ctx->pc = 0x2FEF98u;
label_2fef98:
    // 0x2fef98: 0x8e02021c  lw          $v0, 0x21C($s0)
    ctx->pc = 0x2fef98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 540)));
label_2fef9c:
    // 0x2fef9c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2fefa0:
    if (ctx->pc == 0x2FEFA0u) {
        ctx->pc = 0x2FEFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEF9Cu;
        // 0x2fefa0: 0x92110228  lbu         $s1, 0x228($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEFA4u;
        goto label_2fefa4;
    }
    ctx->pc = 0x2FEF9Cu;
    {
        const bool branch_taken_0x2fef9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fef9c) {
            ctx->pc = 0x2FEFA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FEF9Cu;
            // 0x2fefa0: 0x92110228  lbu         $s1, 0x228($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FEFCCu;
            goto label_2fefcc;
        }
    }
    ctx->pc = 0x2FEFA4u;
label_2fefa4:
    // 0x2fefa4: 0xc0a40d2  jal         func_290348
label_2fefa8:
    if (ctx->pc == 0x2FEFA8u) {
        ctx->pc = 0x2FEFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEFA4u;
        // 0x2fefa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEFACu;
        goto label_2fefac;
    }
    ctx->pc = 0x2FEFA4u;
    SET_GPR_U32(ctx, 31, 0x2FEFACu);
    ctx->pc = 0x2FEFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEFA4u;
    // 0x2fefa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290348u, 0x2FEFA4u, 0x2FEFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEFACu;
label_2fefac:
    // 0x2fefac: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_2fefb0:
    if (ctx->pc == 0x2FEFB0u) {
        ctx->pc = 0x2FEFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEFACu;
        // 0x2fefb0: 0x92110228  lbu         $s1, 0x228($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEFB4u;
        goto label_2fefb4;
    }
    ctx->pc = 0x2FEFACu;
    {
        const bool branch_taken_0x2fefac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fefac) {
            ctx->pc = 0x2FEFB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FEFACu;
            // 0x2fefb0: 0x92110228  lbu         $s1, 0x228($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FEFCCu;
            goto label_2fefcc;
        }
    }
    ctx->pc = 0x2FEFB4u;
label_2fefb4:
    // 0x2fefb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fefb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fefb8:
    // 0x2fefb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fefb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fefbc:
    // 0x2fefbc: 0xc0a33f8  jal         func_28CFE0
label_2fefc0:
    if (ctx->pc == 0x2FEFC0u) {
        ctx->pc = 0x2FEFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEFBCu;
        // 0x2fefc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEFC4u;
        goto label_2fefc4;
    }
    ctx->pc = 0x2FEFBCu;
    SET_GPR_U32(ctx, 31, 0x2FEFC4u);
    ctx->pc = 0x2FEFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEFBCu;
    // 0x2fefc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2FEFBCu, 0x2FEFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEFC4u;
label_2fefc4:
    // 0x2fefc4: 0xae00021c  sw          $zero, 0x21C($s0)
    ctx->pc = 0x2fefc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 0));
label_2fefc8:
    // 0x2fefc8: 0x92110228  lbu         $s1, 0x228($s0)
    ctx->pc = 0x2fefc8u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 552)));
label_2fefcc:
    // 0x2fefcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fefccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fefd0:
    // 0x2fefd0: 0x5622006a  bnel        $s1, $v0, . + 4 + (0x6A << 2)
label_2fefd4:
    if (ctx->pc == 0x2FEFD4u) {
        ctx->pc = 0x2FEFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEFD0u;
        // 0x2fefd4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEFD8u;
        goto label_2fefd8;
    }
    ctx->pc = 0x2FEFD0u;
    {
        const bool branch_taken_0x2fefd0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2fefd0) {
            ctx->pc = 0x2FEFD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FEFD0u;
            // 0x2fefd4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF17Cu;
            goto label_2ff17c;
        }
    }
    ctx->pc = 0x2FEFD8u;
label_2fefd8:
    // 0x2fefd8: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x2fefd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_2fefdc:
    // 0x2fefdc: 0x54400067  bnel        $v0, $zero, . + 4 + (0x67 << 2)
label_2fefe0:
    if (ctx->pc == 0x2FEFE0u) {
        ctx->pc = 0x2FEFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEFDCu;
        // 0x2fefe0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEFE4u;
        goto label_2fefe4;
    }
    ctx->pc = 0x2FEFDCu;
    {
        const bool branch_taken_0x2fefdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fefdc) {
            ctx->pc = 0x2FEFE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FEFDCu;
            // 0x2fefe0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF17Cu;
            goto label_2ff17c;
        }
    }
    ctx->pc = 0x2FEFE4u;
label_2fefe4:
    // 0x2fefe4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2fefe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2fefe8:
    // 0x2fefe8: 0xc08a200  jal         func_228800
label_2fefec:
    if (ctx->pc == 0x2FEFECu) {
        ctx->pc = 0x2FEFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEFE8u;
        // 0x2fefec: 0x8c4400cc  lw          $a0, 0xCC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEFF0u;
        goto label_2feff0;
    }
    ctx->pc = 0x2FEFE8u;
    SET_GPR_U32(ctx, 31, 0x2FEFF0u);
    ctx->pc = 0x2FEFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEFE8u;
    // 0x2fefec: 0x8c4400cc  lw          $a0, 0xCC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x2FEFE8u, 0x2FEFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEFF0u;
label_2feff0:
    // 0x2feff0: 0x9043011b  lbu         $v1, 0x11B($v0)
    ctx->pc = 0x2feff0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
label_2feff4:
    // 0x2feff4: 0x38630006  xori        $v1, $v1, 0x6
    ctx->pc = 0x2feff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)6);
label_2feff8:
    // 0x2feff8: 0x50600060  beql        $v1, $zero, . + 4 + (0x60 << 2)
label_2feffc:
    if (ctx->pc == 0x2FEFFCu) {
        ctx->pc = 0x2FEFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEFF8u;
        // 0x2feffc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF000u;
        goto label_2ff000;
    }
    ctx->pc = 0x2FEFF8u;
    {
        const bool branch_taken_0x2feff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2feff8) {
            ctx->pc = 0x2FEFFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FEFF8u;
            // 0x2feffc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF17Cu;
            goto label_2ff17c;
        }
    }
    ctx->pc = 0x2FF000u;
label_2ff000:
    // 0x2ff000: 0xc0bfc66  jal         func_2FF198
label_2ff004:
    if (ctx->pc == 0x2FF004u) {
        ctx->pc = 0x2FF004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF000u;
        // 0x2ff004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF008u;
        goto label_2ff008;
    }
    ctx->pc = 0x2FF000u;
    SET_GPR_U32(ctx, 31, 0x2FF008u);
    ctx->pc = 0x2FF004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF000u;
    // 0x2ff004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF198u, 0x2FF000u, 0x2FF008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF008u;
label_2ff008:
    // 0x2ff008: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2ff008u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ff00c:
    // 0x2ff00c: 0x5671005b  bnel        $s3, $s1, . + 4 + (0x5B << 2)
label_2ff010:
    if (ctx->pc == 0x2FF010u) {
        ctx->pc = 0x2FF010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF00Cu;
        // 0x2ff010: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF014u;
        goto label_2ff014;
    }
    ctx->pc = 0x2FF00Cu;
    {
        const bool branch_taken_0x2ff00c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 17));
        if (branch_taken_0x2ff00c) {
            ctx->pc = 0x2FF010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF00Cu;
            // 0x2ff010: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF17Cu;
            goto label_2ff17c;
        }
    }
    ctx->pc = 0x2FF014u;
label_2ff014:
    // 0x2ff014: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2ff014u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ff018:
    // 0x2ff018: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2ff018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2ff01c:
    // 0x2ff01c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2ff01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2ff020:
    // 0x2ff020: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x2ff020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_2ff024:
    // 0x2ff024: 0x84c50092  lh          $a1, 0x92($a2)
    ctx->pc = 0x2ff024u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 146)));
label_2ff028:
    // 0x2ff028: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2ff028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2ff02c:
    // 0x2ff02c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2ff02cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ff030:
    // 0x2ff030: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2ff030u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2ff034:
    // 0x2ff034: 0xc1067b8  jal         func_419EE0
label_2ff038:
    if (ctx->pc == 0x2FF038u) {
        ctx->pc = 0x2FF038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF034u;
        // 0x2ff038: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF03Cu;
        goto label_2ff03c;
    }
    ctx->pc = 0x2FF034u;
    SET_GPR_U32(ctx, 31, 0x2FF03Cu);
    ctx->pc = 0x2FF038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF034u;
    // 0x2ff038: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EE0u, 0x2FF034u, 0x2FF03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF03Cu;
label_2ff03c:
    // 0x2ff03c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ff03cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ff040:
    // 0x2ff040: 0x5240004e  beql        $s2, $zero, . + 4 + (0x4E << 2)
label_2ff044:
    if (ctx->pc == 0x2FF044u) {
        ctx->pc = 0x2FF044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF040u;
        // 0x2ff044: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF048u;
        goto label_2ff048;
    }
    ctx->pc = 0x2FF040u;
    {
        const bool branch_taken_0x2ff040 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff040) {
            ctx->pc = 0x2FF044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF040u;
            // 0x2ff044: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF17Cu;
            goto label_2ff17c;
        }
    }
    ctx->pc = 0x2FF048u;
label_2ff048:
    // 0x2ff048: 0xc087502  jal         func_21D408
label_2ff04c:
    if (ctx->pc == 0x2FF04Cu) {
        ctx->pc = 0x2FF04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF048u;
        // 0x2ff04c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF050u;
        goto label_2ff050;
    }
    ctx->pc = 0x2FF048u;
    SET_GPR_U32(ctx, 31, 0x2FF050u);
    ctx->pc = 0x2FF04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF048u;
    // 0x2ff04c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2FF048u, 0x2FF050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF050u;
label_2ff050:
    // 0x2ff050: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ff050u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ff054:
    // 0x2ff054: 0x906202d5  lbu         $v0, 0x2D5($v1)
    ctx->pc = 0x2ff054u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 725)));
label_2ff058:
    // 0x2ff058: 0x54400048  bnel        $v0, $zero, . + 4 + (0x48 << 2)
label_2ff05c:
    if (ctx->pc == 0x2FF05Cu) {
        ctx->pc = 0x2FF05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF058u;
        // 0x2ff05c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF060u;
        goto label_2ff060;
    }
    ctx->pc = 0x2FF058u;
    {
        const bool branch_taken_0x2ff058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ff058) {
            ctx->pc = 0x2FF05Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF058u;
            // 0x2ff05c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF17Cu;
            goto label_2ff17c;
        }
    }
    ctx->pc = 0x2FF060u;
label_2ff060:
    // 0x2ff060: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2ff060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ff064:
    // 0x2ff064: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2ff064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_2ff068:
    // 0x2ff068: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ff068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ff06c:
    // 0x2ff06c: 0x0  nop
    ctx->pc = 0x2ff06cu;
    // NOP
label_2ff070:
    // 0x2ff070: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ff070u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ff074:
    // 0x2ff074: 0x0  nop
    ctx->pc = 0x2ff074u;
    // NOP
label_2ff078:
    // 0x2ff078: 0x45020040  bc1fl       . + 4 + (0x40 << 2)
label_2ff07c:
    if (ctx->pc == 0x2FF07Cu) {
        ctx->pc = 0x2FF07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF078u;
        // 0x2ff07c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF080u;
        goto label_2ff080;
    }
    ctx->pc = 0x2FF078u;
    {
        const bool branch_taken_0x2ff078 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ff078) {
            ctx->pc = 0x2FF07Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF078u;
            // 0x2ff07c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF17Cu;
            goto label_2ff17c;
        }
    }
    ctx->pc = 0x2FF080u;
label_2ff080:
    // 0x2ff080: 0xc05a596  jal         func_169658
label_2ff084:
    if (ctx->pc == 0x2FF084u) {
        ctx->pc = 0x2FF084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF080u;
        // 0x2ff084: 0x8c64020c  lw          $a0, 0x20C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF088u;
        goto label_2ff088;
    }
    ctx->pc = 0x2FF080u;
    SET_GPR_U32(ctx, 31, 0x2FF088u);
    ctx->pc = 0x2FF084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF080u;
    // 0x2ff084: 0x8c64020c  lw          $a0, 0x20C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169658u, 0x2FF080u, 0x2FF088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF088u;
label_2ff088:
    // 0x2ff088: 0x5440003c  bnel        $v0, $zero, . + 4 + (0x3C << 2)
label_2ff08c:
    if (ctx->pc == 0x2FF08Cu) {
        ctx->pc = 0x2FF08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF088u;
        // 0x2ff08c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF090u;
        goto label_2ff090;
    }
    ctx->pc = 0x2FF088u;
    {
        const bool branch_taken_0x2ff088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ff088) {
            ctx->pc = 0x2FF08Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF088u;
            // 0x2ff08c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF17Cu;
            goto label_2ff17c;
        }
    }
    ctx->pc = 0x2FF090u;
label_2ff090:
    // 0x2ff090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ff090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ff094:
    // 0x2ff094: 0xc0a3658  jal         func_28D960
label_2ff098:
    if (ctx->pc == 0x2FF098u) {
        ctx->pc = 0x2FF098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF094u;
        // 0x2ff098: 0x24050072  addiu       $a1, $zero, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF09Cu;
        goto label_2ff09c;
    }
    ctx->pc = 0x2FF094u;
    SET_GPR_U32(ctx, 31, 0x2FF09Cu);
    ctx->pc = 0x2FF098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF094u;
    // 0x2ff098: 0x24050072  addiu       $a1, $zero, 0x72 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x2FF094u, 0x2FF09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF09Cu;
label_2ff09c:
    // 0x2ff09c: 0x8203002d  lb          $v1, 0x2D($s0)
    ctx->pc = 0x2ff09cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
label_2ff0a0:
    // 0x2ff0a0: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x2ff0a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2ff0a4:
    // 0x2ff0a4: 0x54600035  bnel        $v1, $zero, . + 4 + (0x35 << 2)
label_2ff0a8:
    if (ctx->pc == 0x2FF0A8u) {
        ctx->pc = 0x2FF0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF0A4u;
        // 0x2ff0a8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF0ACu;
        goto label_2ff0ac;
    }
    ctx->pc = 0x2FF0A4u;
    {
        const bool branch_taken_0x2ff0a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ff0a4) {
            ctx->pc = 0x2FF0A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF0A4u;
            // 0x2ff0a8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF17Cu;
            goto label_2ff17c;
        }
    }
    ctx->pc = 0x2FF0ACu;
label_2ff0ac:
    // 0x2ff0ac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ff0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ff0b0:
    // 0x2ff0b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ff0b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ff0b4:
    // 0x2ff0b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ff0b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ff0b8:
    // 0x2ff0b8: 0xc0888a2  jal         func_222288
label_2ff0bc:
    if (ctx->pc == 0x2FF0BCu) {
        ctx->pc = 0x2FF0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF0B8u;
        // 0x2ff0bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF0C0u;
        goto label_2ff0c0;
    }
    ctx->pc = 0x2FF0B8u;
    SET_GPR_U32(ctx, 31, 0x2FF0C0u);
    ctx->pc = 0x2FF0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF0B8u;
    // 0x2ff0bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x2FF0B8u, 0x2FF0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF0C0u;
label_2ff0c0:
    // 0x2ff0c0: 0x5453002e  bnel        $v0, $s3, . + 4 + (0x2E << 2)
label_2ff0c4:
    if (ctx->pc == 0x2FF0C4u) {
        ctx->pc = 0x2FF0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF0C0u;
        // 0x2ff0c4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF0C8u;
        goto label_2ff0c8;
    }
    ctx->pc = 0x2FF0C0u;
    {
        const bool branch_taken_0x2ff0c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2ff0c0) {
            ctx->pc = 0x2FF0C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF0C0u;
            // 0x2ff0c4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF17Cu;
            goto label_2ff17c;
        }
    }
    ctx->pc = 0x2FF0C8u;
label_2ff0c8:
    // 0x2ff0c8: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x2ff0c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_2ff0cc:
    // 0x2ff0cc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2ff0d0:
    if (ctx->pc == 0x2FF0D0u) {
        ctx->pc = 0x2FF0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF0CCu;
        // 0x2ff0d0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF0D4u;
        goto label_2ff0d4;
    }
    ctx->pc = 0x2FF0CCu;
    {
        const bool branch_taken_0x2ff0cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2FF0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF0CCu;
        // 0x2ff0d0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff0cc) {
            ctx->pc = 0x2FF0E0u;
            goto label_2ff0e0;
        }
    }
    ctx->pc = 0x2FF0D4u;
label_2ff0d4:
    // 0x2ff0d4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2ff0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2ff0d8:
    // 0x2ff0d8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2ff0dc:
    if (ctx->pc == 0x2FF0DCu) {
        ctx->pc = 0x2FF0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF0D8u;
        // 0x2ff0dc: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF0E0u;
        goto label_2ff0e0;
    }
    ctx->pc = 0x2FF0D8u;
    {
        const bool branch_taken_0x2ff0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF0D8u;
        // 0x2ff0dc: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff0d8) {
            ctx->pc = 0x2FF0E4u;
            goto label_2ff0e4;
        }
    }
    ctx->pc = 0x2FF0E0u;
label_2ff0e0:
    // 0x2ff0e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ff0e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ff0e4:
    // 0x2ff0e4: 0x50a0000c  beql        $a1, $zero, . + 4 + (0xC << 2)
label_2ff0e8:
    if (ctx->pc == 0x2FF0E8u) {
        ctx->pc = 0x2FF0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF0E4u;
        // 0x2ff0e8: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF0ECu;
        goto label_2ff0ec;
    }
    ctx->pc = 0x2FF0E4u;
    {
        const bool branch_taken_0x2ff0e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff0e4) {
            ctx->pc = 0x2FF0E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF0E4u;
            // 0x2ff0e8: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF118u;
            goto label_2ff118;
        }
    }
    ctx->pc = 0x2FF0ECu;
label_2ff0ec:
    // 0x2ff0ec: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2ff0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2ff0f0:
    // 0x2ff0f0: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2ff0f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2ff0f4:
    // 0x2ff0f4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2ff0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2ff0f8:
    // 0x2ff0f8: 0x40f809  jalr        $v0
label_2ff0fc:
    if (ctx->pc == 0x2FF0FCu) {
        ctx->pc = 0x2FF0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF0F8u;
        // 0x2ff0fc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF100u;
        goto label_2ff100;
    }
    ctx->pc = 0x2FF0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FF100u);
        ctx->pc = 0x2FF0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF0F8u;
        // 0x2ff0fc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF0F8u, 0x2FF100u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FF100u;
label_2ff100:
    // 0x2ff100: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2ff100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2ff104:
    // 0x2ff104: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_2ff108:
    if (ctx->pc == 0x2FF108u) {
        ctx->pc = 0x2FF108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF104u;
        // 0x2ff108: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF10Cu;
        goto label_2ff10c;
    }
    ctx->pc = 0x2FF104u;
    {
        const bool branch_taken_0x2ff104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ff104) {
            ctx->pc = 0x2FF108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF104u;
            // 0x2ff108: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF118u;
            goto label_2ff118;
        }
    }
    ctx->pc = 0x2FF10Cu;
label_2ff10c:
    // 0x2ff10c: 0xc0a35f6  jal         func_28D7D8
label_2ff110:
    if (ctx->pc == 0x2FF110u) {
        ctx->pc = 0x2FF110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF10Cu;
        // 0x2ff110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF114u;
        goto label_2ff114;
    }
    ctx->pc = 0x2FF10Cu;
    SET_GPR_U32(ctx, 31, 0x2FF114u);
    ctx->pc = 0x2FF110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF10Cu;
    // 0x2ff110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x2FF10Cu, 0x2FF114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF114u;
label_2ff114:
    // 0x2ff114: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2ff114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ff118:
    // 0x2ff118: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2ff118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2ff11c:
    // 0x2ff11c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2ff11cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2ff120:
    // 0x2ff120: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ff120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ff124:
    // 0x2ff124: 0x40f809  jalr        $v0
label_2ff128:
    if (ctx->pc == 0x2FF128u) {
        ctx->pc = 0x2FF128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF124u;
        // 0x2ff128: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF12Cu;
        goto label_2ff12c;
    }
    ctx->pc = 0x2FF124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FF12Cu);
        ctx->pc = 0x2FF128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF124u;
        // 0x2ff128: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF124u, 0x2FF12Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FF12Cu;
label_2ff12c:
    // 0x2ff12c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2ff12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ff130:
    // 0x2ff130: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ff130u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ff134:
    // 0x2ff134: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2ff134u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2ff138:
    // 0x2ff138: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ff138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ff13c:
    // 0x2ff13c: 0x40f809  jalr        $v0
label_2ff140:
    if (ctx->pc == 0x2FF140u) {
        ctx->pc = 0x2FF140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF13Cu;
        // 0x2ff140: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF144u;
        goto label_2ff144;
    }
    ctx->pc = 0x2FF13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FF144u);
        ctx->pc = 0x2FF140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF13Cu;
        // 0x2ff140: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF13Cu, 0x2FF144u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FF144u;
label_2ff144:
    // 0x2ff144: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ff144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ff148:
    // 0x2ff148: 0x8e03026c  lw          $v1, 0x26C($s0)
    ctx->pc = 0x2ff148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
label_2ff14c:
    // 0x2ff14c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ff14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ff150:
    // 0x2ff150: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_2ff154:
    if (ctx->pc == 0x2FF154u) {
        ctx->pc = 0x2FF154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF150u;
        // 0x2ff154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF158u;
        goto label_2ff158;
    }
    ctx->pc = 0x2FF150u;
    {
        const bool branch_taken_0x2ff150 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FF154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF150u;
        // 0x2ff154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff150) {
            ctx->pc = 0x2FF170u;
            goto label_2ff170;
        }
    }
    ctx->pc = 0x2FF158u;
label_2ff158:
    // 0x2ff158: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2ff158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_2ff15c:
    // 0x2ff15c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ff15cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ff160:
    // 0x2ff160: 0xc0b5550  jal         func_2D5540
label_2ff164:
    if (ctx->pc == 0x2FF164u) {
        ctx->pc = 0x2FF164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF160u;
        // 0x2ff164: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF168u;
        goto label_2ff168;
    }
    ctx->pc = 0x2FF160u;
    SET_GPR_U32(ctx, 31, 0x2FF168u);
    ctx->pc = 0x2FF164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF160u;
    // 0x2ff164: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5540u, 0x2FF160u, 0x2FF168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF168u;
label_2ff168:
    // 0x2ff168: 0x10000004  b           . + 4 + (0x4 << 2)
label_2ff16c:
    if (ctx->pc == 0x2FF16Cu) {
        ctx->pc = 0x2FF16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF168u;
        // 0x2ff16c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF170u;
        goto label_2ff170;
    }
    ctx->pc = 0x2FF168u;
    {
        const bool branch_taken_0x2ff168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF168u;
        // 0x2ff16c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff168) {
            ctx->pc = 0x2FF17Cu;
            goto label_2ff17c;
        }
    }
    ctx->pc = 0x2FF170u;
label_2ff170:
    // 0x2ff170: 0xc0aa924  jal         func_2AA490
label_2ff174:
    if (ctx->pc == 0x2FF174u) {
        ctx->pc = 0x2FF174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF170u;
        // 0x2ff174: 0x240600af  addiu       $a2, $zero, 0xAF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF178u;
        goto label_2ff178;
    }
    ctx->pc = 0x2FF170u;
    SET_GPR_U32(ctx, 31, 0x2FF178u);
    ctx->pc = 0x2FF174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF170u;
    // 0x2ff174: 0x240600af  addiu       $a2, $zero, 0xAF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA490u, 0x2FF170u, 0x2FF178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF178u;
label_2ff178:
    // 0x2ff178: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2ff178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2ff17c:
    // 0x2ff17c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2ff17cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ff180:
    // 0x2ff180: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2ff180u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ff184:
    // 0x2ff184: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2ff184u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ff188:
    // 0x2ff188: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ff188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ff18c:
    // 0x2ff18c: 0x3e00008  jr          $ra
label_2ff190:
    if (ctx->pc == 0x2FF190u) {
        ctx->pc = 0x2FF190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF18Cu;
        // 0x2ff190: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF194u;
        goto label_2ff194;
    }
    ctx->pc = 0x2FF18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF18Cu;
        // 0x2ff190: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF194u;
label_2ff194:
    // 0x2ff194: 0x0  nop
    ctx->pc = 0x2ff194u;
    // NOP
    ctx->pc = 0x2ff198u;
}
