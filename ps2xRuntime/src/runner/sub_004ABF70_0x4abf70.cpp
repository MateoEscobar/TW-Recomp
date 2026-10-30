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

// Function: sub_004ABF70
// Address: 0x4abf70 - 0x4ac198
void sub_004ABF70_0x4abf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ABF70_0x4abf70");
#endif

    switch (ctx->pc) {
        case 0x4abf70u: goto label_4abf70;
        case 0x4abf74u: goto label_4abf74;
        case 0x4abf78u: goto label_4abf78;
        case 0x4abf7cu: goto label_4abf7c;
        case 0x4abf80u: goto label_4abf80;
        case 0x4abf84u: goto label_4abf84;
        case 0x4abf88u: goto label_4abf88;
        case 0x4abf8cu: goto label_4abf8c;
        case 0x4abf90u: goto label_4abf90;
        case 0x4abf94u: goto label_4abf94;
        case 0x4abf98u: goto label_4abf98;
        case 0x4abf9cu: goto label_4abf9c;
        case 0x4abfa0u: goto label_4abfa0;
        case 0x4abfa4u: goto label_4abfa4;
        case 0x4abfa8u: goto label_4abfa8;
        case 0x4abfacu: goto label_4abfac;
        case 0x4abfb0u: goto label_4abfb0;
        case 0x4abfb4u: goto label_4abfb4;
        case 0x4abfb8u: goto label_4abfb8;
        case 0x4abfbcu: goto label_4abfbc;
        case 0x4abfc0u: goto label_4abfc0;
        case 0x4abfc4u: goto label_4abfc4;
        case 0x4abfc8u: goto label_4abfc8;
        case 0x4abfccu: goto label_4abfcc;
        case 0x4abfd0u: goto label_4abfd0;
        case 0x4abfd4u: goto label_4abfd4;
        case 0x4abfd8u: goto label_4abfd8;
        case 0x4abfdcu: goto label_4abfdc;
        case 0x4abfe0u: goto label_4abfe0;
        case 0x4abfe4u: goto label_4abfe4;
        case 0x4abfe8u: goto label_4abfe8;
        case 0x4abfecu: goto label_4abfec;
        case 0x4abff0u: goto label_4abff0;
        case 0x4abff4u: goto label_4abff4;
        case 0x4abff8u: goto label_4abff8;
        case 0x4abffcu: goto label_4abffc;
        case 0x4ac000u: goto label_4ac000;
        case 0x4ac004u: goto label_4ac004;
        case 0x4ac008u: goto label_4ac008;
        case 0x4ac00cu: goto label_4ac00c;
        case 0x4ac010u: goto label_4ac010;
        case 0x4ac014u: goto label_4ac014;
        case 0x4ac018u: goto label_4ac018;
        case 0x4ac01cu: goto label_4ac01c;
        case 0x4ac020u: goto label_4ac020;
        case 0x4ac024u: goto label_4ac024;
        case 0x4ac028u: goto label_4ac028;
        case 0x4ac02cu: goto label_4ac02c;
        case 0x4ac030u: goto label_4ac030;
        case 0x4ac034u: goto label_4ac034;
        case 0x4ac038u: goto label_4ac038;
        case 0x4ac03cu: goto label_4ac03c;
        case 0x4ac040u: goto label_4ac040;
        case 0x4ac044u: goto label_4ac044;
        case 0x4ac048u: goto label_4ac048;
        case 0x4ac04cu: goto label_4ac04c;
        case 0x4ac050u: goto label_4ac050;
        case 0x4ac054u: goto label_4ac054;
        case 0x4ac058u: goto label_4ac058;
        case 0x4ac05cu: goto label_4ac05c;
        case 0x4ac060u: goto label_4ac060;
        case 0x4ac064u: goto label_4ac064;
        case 0x4ac068u: goto label_4ac068;
        case 0x4ac06cu: goto label_4ac06c;
        case 0x4ac070u: goto label_4ac070;
        case 0x4ac074u: goto label_4ac074;
        case 0x4ac078u: goto label_4ac078;
        case 0x4ac07cu: goto label_4ac07c;
        case 0x4ac080u: goto label_4ac080;
        case 0x4ac084u: goto label_4ac084;
        case 0x4ac088u: goto label_4ac088;
        case 0x4ac08cu: goto label_4ac08c;
        case 0x4ac090u: goto label_4ac090;
        case 0x4ac094u: goto label_4ac094;
        case 0x4ac098u: goto label_4ac098;
        case 0x4ac09cu: goto label_4ac09c;
        case 0x4ac0a0u: goto label_4ac0a0;
        case 0x4ac0a4u: goto label_4ac0a4;
        case 0x4ac0a8u: goto label_4ac0a8;
        case 0x4ac0acu: goto label_4ac0ac;
        case 0x4ac0b0u: goto label_4ac0b0;
        case 0x4ac0b4u: goto label_4ac0b4;
        case 0x4ac0b8u: goto label_4ac0b8;
        case 0x4ac0bcu: goto label_4ac0bc;
        case 0x4ac0c0u: goto label_4ac0c0;
        case 0x4ac0c4u: goto label_4ac0c4;
        case 0x4ac0c8u: goto label_4ac0c8;
        case 0x4ac0ccu: goto label_4ac0cc;
        case 0x4ac0d0u: goto label_4ac0d0;
        case 0x4ac0d4u: goto label_4ac0d4;
        case 0x4ac0d8u: goto label_4ac0d8;
        case 0x4ac0dcu: goto label_4ac0dc;
        case 0x4ac0e0u: goto label_4ac0e0;
        case 0x4ac0e4u: goto label_4ac0e4;
        case 0x4ac0e8u: goto label_4ac0e8;
        case 0x4ac0ecu: goto label_4ac0ec;
        case 0x4ac0f0u: goto label_4ac0f0;
        case 0x4ac0f4u: goto label_4ac0f4;
        case 0x4ac0f8u: goto label_4ac0f8;
        case 0x4ac0fcu: goto label_4ac0fc;
        case 0x4ac100u: goto label_4ac100;
        case 0x4ac104u: goto label_4ac104;
        case 0x4ac108u: goto label_4ac108;
        case 0x4ac10cu: goto label_4ac10c;
        case 0x4ac110u: goto label_4ac110;
        case 0x4ac114u: goto label_4ac114;
        case 0x4ac118u: goto label_4ac118;
        case 0x4ac11cu: goto label_4ac11c;
        case 0x4ac120u: goto label_4ac120;
        case 0x4ac124u: goto label_4ac124;
        case 0x4ac128u: goto label_4ac128;
        case 0x4ac12cu: goto label_4ac12c;
        case 0x4ac130u: goto label_4ac130;
        case 0x4ac134u: goto label_4ac134;
        case 0x4ac138u: goto label_4ac138;
        case 0x4ac13cu: goto label_4ac13c;
        case 0x4ac140u: goto label_4ac140;
        case 0x4ac144u: goto label_4ac144;
        case 0x4ac148u: goto label_4ac148;
        case 0x4ac14cu: goto label_4ac14c;
        case 0x4ac150u: goto label_4ac150;
        case 0x4ac154u: goto label_4ac154;
        case 0x4ac158u: goto label_4ac158;
        case 0x4ac15cu: goto label_4ac15c;
        case 0x4ac160u: goto label_4ac160;
        case 0x4ac164u: goto label_4ac164;
        case 0x4ac168u: goto label_4ac168;
        case 0x4ac16cu: goto label_4ac16c;
        case 0x4ac170u: goto label_4ac170;
        case 0x4ac174u: goto label_4ac174;
        case 0x4ac178u: goto label_4ac178;
        case 0x4ac17cu: goto label_4ac17c;
        case 0x4ac180u: goto label_4ac180;
        case 0x4ac184u: goto label_4ac184;
        case 0x4ac188u: goto label_4ac188;
        case 0x4ac18cu: goto label_4ac18c;
        case 0x4ac190u: goto label_4ac190;
        case 0x4ac194u: goto label_4ac194;
        default: break;
    }

    ctx->pc = 0x4abf70u;

label_4abf70:
    // 0x4abf70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4abf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4abf74:
    // 0x4abf74: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4abf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_4abf78:
    // 0x4abf78: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4abf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_4abf7c:
    // 0x4abf7c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4abf7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4abf80:
    // 0x4abf80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4abf80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4abf84:
    // 0x4abf84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4abf84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4abf88:
    // 0x4abf88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4abf88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4abf8c:
    // 0x4abf8c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4abf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4abf90:
    // 0x4abf90: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4abf90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
label_4abf94:
    // 0x4abf94: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4abf98:
    if (ctx->pc == 0x4ABF98u) {
        ctx->pc = 0x4ABF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABF94u;
        // 0x4abf98: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ABF9Cu;
        goto label_4abf9c;
    }
    ctx->pc = 0x4ABF94u;
    {
        const bool branch_taken_0x4abf94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABF94u;
        // 0x4abf98: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abf94) {
            ctx->pc = 0x4ABFACu;
            goto label_4abfac;
        }
    }
    ctx->pc = 0x4ABF9Cu;
label_4abf9c:
    // 0x4abf9c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4abf9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_4abfa0:
    // 0x4abfa0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4abfa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4abfa4:
    // 0x4abfa4: 0x1000000c  b           . + 4 + (0xC << 2)
label_4abfa8:
    if (ctx->pc == 0x4ABFA8u) {
        ctx->pc = 0x4ABFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABFA4u;
        // 0x4abfa8: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ABFACu;
        goto label_4abfac;
    }
    ctx->pc = 0x4ABFA4u;
    {
        const bool branch_taken_0x4abfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABFA4u;
        // 0x4abfa8: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abfa4) {
            ctx->pc = 0x4ABFD8u;
            goto label_4abfd8;
        }
    }
    ctx->pc = 0x4ABFACu;
label_4abfac:
    // 0x4abfac: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x4abfacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4abfb0:
    // 0x4abfb0: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_4abfb4:
    if (ctx->pc == 0x4ABFB4u) {
        ctx->pc = 0x4ABFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABFB0u;
        // 0x4abfb4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ABFB8u;
        goto label_4abfb8;
    }
    ctx->pc = 0x4ABFB0u;
    {
        const bool branch_taken_0x4abfb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABFB0u;
        // 0x4abfb4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abfb0) {
            ctx->pc = 0x4ABFD8u;
            goto label_4abfd8;
        }
    }
    ctx->pc = 0x4ABFB8u;
label_4abfb8:
    // 0x4abfb8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4abfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4abfbc:
    // 0x4abfbc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4abfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4abfc0:
    // 0x4abfc0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4abfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4abfc4:
    // 0x4abfc4: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_4abfc8:
    if (ctx->pc == 0x4ABFC8u) {
        ctx->pc = 0x4ABFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABFC4u;
        // 0x4abfc8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ABFCCu;
        goto label_4abfcc;
    }
    ctx->pc = 0x4ABFC4u;
    {
        const bool branch_taken_0x4abfc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x4ABFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABFC4u;
        // 0x4abfc8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abfc4) {
            ctx->pc = 0x4ABFD8u;
            goto label_4abfd8;
        }
    }
    ctx->pc = 0x4ABFCCu;
label_4abfcc:
    // 0x4abfcc: 0xc12b652  jal         func_4AD948
label_4abfd0:
    if (ctx->pc == 0x4ABFD0u) {
        ctx->pc = 0x4ABFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABFCCu;
        // 0x4abfd0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ABFD4u;
        goto label_4abfd4;
    }
    ctx->pc = 0x4ABFCCu;
    SET_GPR_U32(ctx, 31, 0x4ABFD4u);
    ctx->pc = 0x4ABFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ABFCCu;
    // 0x4abfd0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD948u, 0x4ABFCCu, 0x4ABFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ABFD4u;
label_4abfd4:
    // 0x4abfd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4abfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4abfd8:
    // 0x4abfd8: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_4abfdc:
    if (ctx->pc == 0x4ABFDCu) {
        ctx->pc = 0x4ABFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABFD8u;
        // 0x4abfdc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ABFE0u;
        goto label_4abfe0;
    }
    ctx->pc = 0x4ABFD8u;
    {
        const bool branch_taken_0x4abfd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABFD8u;
        // 0x4abfdc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abfd8) {
            ctx->pc = 0x4AC018u;
            goto label_4ac018;
        }
    }
    ctx->pc = 0x4ABFE0u;
label_4abfe0:
    // 0x4abfe0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4abfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4abfe4:
    // 0x4abfe4: 0x11303c  dsll32      $a2, $s1, 0
    ctx->pc = 0x4abfe4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 0));
label_4abfe8:
    // 0x4abfe8: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x4abfe8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_4abfec:
    // 0x4abfec: 0xc12c432  jal         func_4B10C8
label_4abff0:
    if (ctx->pc == 0x4ABFF0u) {
        ctx->pc = 0x4ABFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABFECu;
        // 0x4abff0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ABFF4u;
        goto label_4abff4;
    }
    ctx->pc = 0x4ABFECu;
    SET_GPR_U32(ctx, 31, 0x4ABFF4u);
    ctx->pc = 0x4ABFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ABFECu;
    // 0x4abff0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B10C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B10C8u, 0x4ABFECu, 0x4ABFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ABFF4u;
label_4abff4:
    // 0x4abff4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4abff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_4abff8:
    // 0x4abff8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4abff8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_4abffc:
    // 0x4abffc: 0x10510007  beq         $v0, $s1, . + 4 + (0x7 << 2)
label_4ac000:
    if (ctx->pc == 0x4AC000u) {
        ctx->pc = 0x4AC000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABFFCu;
        // 0x4ac000: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AC004u;
        goto label_4ac004;
    }
    ctx->pc = 0x4ABFFCu;
    {
        const bool branch_taken_0x4abffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x4AC000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABFFCu;
        // 0x4ac000: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abffc) {
            ctx->pc = 0x4AC01Cu;
            goto label_4ac01c;
        }
    }
    ctx->pc = 0x4AC004u;
label_4ac004:
    // 0x4ac004: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ac004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ac008:
    // 0x4ac008: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4ac008u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
label_4ac00c:
    // 0x4ac00c: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x4ac00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_4ac010:
    // 0x4ac010: 0x10000002  b           . + 4 + (0x2 << 2)
label_4ac014:
    if (ctx->pc == 0x4AC014u) {
        ctx->pc = 0x4AC014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC010u;
        // 0x4ac014: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AC018u;
        goto label_4ac018;
    }
    ctx->pc = 0x4AC010u;
    {
        const bool branch_taken_0x4ac010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC010u;
        // 0x4ac014: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac010) {
            ctx->pc = 0x4AC01Cu;
            goto label_4ac01c;
        }
    }
    ctx->pc = 0x4AC018u;
label_4ac018:
    // 0x4ac018: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4ac018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4ac01c:
    // 0x4ac01c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ac01cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ac020:
    // 0x4ac020: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4ac020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4ac024:
    // 0x4ac024: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4ac024u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4ac028:
    // 0x4ac028: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4ac028u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4ac02c:
    // 0x4ac02c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ac02cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ac030:
    // 0x4ac030: 0x3e00008  jr          $ra
label_4ac034:
    if (ctx->pc == 0x4AC034u) {
        ctx->pc = 0x4AC034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC030u;
        // 0x4ac034: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AC038u;
        goto label_4ac038;
    }
    ctx->pc = 0x4AC030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC030u;
        // 0x4ac034: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC038u;
label_4ac038:
    // 0x4ac038: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ac038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4ac03c:
    // 0x4ac03c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ac03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4ac040:
    // 0x4ac040: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ac040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4ac044:
    // 0x4ac044: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ac044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ac048:
    // 0x4ac048: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ac048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ac04c:
    // 0x4ac04c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4ac04cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4ac050:
    // 0x4ac050: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
label_4ac054:
    if (ctx->pc == 0x4AC054u) {
        ctx->pc = 0x4AC054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC050u;
        // 0x4ac054: 0x8ca30050  lw          $v1, 0x50($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AC058u;
        goto label_4ac058;
    }
    ctx->pc = 0x4AC050u;
    {
        const bool branch_taken_0x4ac050 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ac050) {
            ctx->pc = 0x4AC054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AC050u;
            // 0x4ac054: 0x8ca30050  lw          $v1, 0x50($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AC060u;
            goto label_4ac060;
        }
    }
    ctx->pc = 0x4AC058u;
label_4ac058:
    // 0x4ac058: 0x1000000d  b           . + 4 + (0xD << 2)
label_4ac05c:
    if (ctx->pc == 0x4AC05Cu) {
        ctx->pc = 0x4AC05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC058u;
        // 0x4ac05c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AC060u;
        goto label_4ac060;
    }
    ctx->pc = 0x4AC058u;
    {
        const bool branch_taken_0x4ac058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC058u;
        // 0x4ac05c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac058) {
            ctx->pc = 0x4AC090u;
            goto label_4ac090;
        }
    }
    ctx->pc = 0x4AC060u;
label_4ac060:
    // 0x4ac060: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x4ac060u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_4ac064:
    // 0x4ac064: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x4ac064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_4ac068:
    // 0x4ac068: 0x40f809  jalr        $v0
label_4ac06c:
    if (ctx->pc == 0x4AC06Cu) {
        ctx->pc = 0x4AC06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC068u;
        // 0x4ac06c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AC070u;
        goto label_4ac070;
    }
    ctx->pc = 0x4AC068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4AC070u);
        ctx->pc = 0x4AC06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC068u;
        // 0x4ac06c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC068u, 0x4AC070u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4AC070u;
label_4ac070:
    // 0x4ac070: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4ac074:
    if (ctx->pc == 0x4AC074u) {
        ctx->pc = 0x4AC074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC070u;
        // 0x4ac074: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AC078u;
        goto label_4ac078;
    }
    ctx->pc = 0x4AC070u;
    {
        const bool branch_taken_0x4ac070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC070u;
        // 0x4ac074: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac070) {
            ctx->pc = 0x4AC08Cu;
            goto label_4ac08c;
        }
    }
    ctx->pc = 0x4AC078u;
label_4ac078:
    // 0x4ac078: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4ac078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ac07c:
    // 0x4ac07c: 0x9083001a  lbu         $v1, 0x1A($a0)
    ctx->pc = 0x4ac07cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
label_4ac080:
    // 0x4ac080: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x4ac080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_4ac084:
    // 0x4ac084: 0x10000002  b           . + 4 + (0x2 << 2)
label_4ac088:
    if (ctx->pc == 0x4AC088u) {
        ctx->pc = 0x4AC088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC084u;
        // 0x4ac088: 0xa083001a  sb          $v1, 0x1A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AC08Cu;
        goto label_4ac08c;
    }
    ctx->pc = 0x4AC084u;
    {
        const bool branch_taken_0x4ac084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC084u;
        // 0x4ac088: 0xa083001a  sb          $v1, 0x1A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac084) {
            ctx->pc = 0x4AC090u;
            goto label_4ac090;
        }
    }
    ctx->pc = 0x4AC08Cu;
label_4ac08c:
    // 0x4ac08c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4ac08cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ac090:
    // 0x4ac090: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ac090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4ac094:
    // 0x4ac094: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ac094u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ac098:
    // 0x4ac098: 0x3e00008  jr          $ra
label_4ac09c:
    if (ctx->pc == 0x4AC09Cu) {
        ctx->pc = 0x4AC09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC098u;
        // 0x4ac09c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AC0A0u;
        goto label_4ac0a0;
    }
    ctx->pc = 0x4AC098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC098u;
        // 0x4ac09c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC0A0u;
label_4ac0a0:
    // 0x4ac0a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ac0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4ac0a4:
    // 0x4ac0a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4ac0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ac0a8:
    // 0x4ac0a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ac0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4ac0ac:
    // 0x4ac0ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ac0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4ac0b0:
    // 0x4ac0b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ac0b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ac0b4:
    // 0x4ac0b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ac0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ac0b8:
    // 0x4ac0b8: 0xc12cadc  jal         func_4B2B70
label_4ac0bc:
    if (ctx->pc == 0x4AC0BCu) {
        ctx->pc = 0x4AC0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC0B8u;
        // 0x4ac0bc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AC0C0u;
        goto label_4ac0c0;
    }
    ctx->pc = 0x4AC0B8u;
    SET_GPR_U32(ctx, 31, 0x4AC0C0u);
    ctx->pc = 0x4AC0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC0B8u;
    // 0x4ac0bc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B2B70u, 0x4AC0B8u, 0x4AC0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC0C0u;
label_4ac0c0:
    // 0x4ac0c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4ac0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4ac0c4:
    // 0x4ac0c4: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_4ac0c8:
    if (ctx->pc == 0x4AC0C8u) {
        ctx->pc = 0x4AC0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC0C4u;
        // 0x4ac0c8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AC0CCu;
        goto label_4ac0cc;
    }
    ctx->pc = 0x4AC0C4u;
    {
        const bool branch_taken_0x4ac0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4AC0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC0C4u;
        // 0x4ac0c8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac0c4) {
            ctx->pc = 0x4AC0E0u;
            goto label_4ac0e0;
        }
    }
    ctx->pc = 0x4AC0CCu;
label_4ac0cc:
    // 0x4ac0cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ac0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ac0d0:
    // 0x4ac0d0: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4ac0d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
label_4ac0d4:
    // 0x4ac0d4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4ac0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_4ac0d8:
    // 0x4ac0d8: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x4ac0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
label_4ac0dc:
    // 0x4ac0dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ac0dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ac0e0:
    // 0x4ac0e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ac0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4ac0e4:
    // 0x4ac0e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ac0e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ac0e8:
    // 0x4ac0e8: 0x3e00008  jr          $ra
label_4ac0ec:
    if (ctx->pc == 0x4AC0ECu) {
        ctx->pc = 0x4AC0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC0E8u;
        // 0x4ac0ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AC0F0u;
        goto label_4ac0f0;
    }
    ctx->pc = 0x4AC0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC0E8u;
        // 0x4ac0ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC0E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC0F0u;
label_4ac0f0:
    // 0x4ac0f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ac0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4ac0f4:
    // 0x4ac0f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4ac0f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ac0f8:
    // 0x4ac0f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ac0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4ac0fc:
    // 0x4ac0fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ac0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4ac100:
    // 0x4ac100: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ac100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ac104:
    // 0x4ac104: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ac104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ac108:
    // 0x4ac108: 0xc12cab4  jal         func_4B2AD0
label_4ac10c:
    if (ctx->pc == 0x4AC10Cu) {
        ctx->pc = 0x4AC10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC108u;
        // 0x4ac10c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AC110u;
        goto label_4ac110;
    }
    ctx->pc = 0x4AC108u;
    SET_GPR_U32(ctx, 31, 0x4AC110u);
    ctx->pc = 0x4AC10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC108u;
    // 0x4ac10c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B2AD0u, 0x4AC108u, 0x4AC110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC110u;
label_4ac110:
    // 0x4ac110: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4ac110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4ac114:
    // 0x4ac114: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_4ac118:
    if (ctx->pc == 0x4AC118u) {
        ctx->pc = 0x4AC118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC114u;
        // 0x4ac118: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AC11Cu;
        goto label_4ac11c;
    }
    ctx->pc = 0x4AC114u;
    {
        const bool branch_taken_0x4ac114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4AC118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC114u;
        // 0x4ac118: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac114) {
            ctx->pc = 0x4AC130u;
            goto label_4ac130;
        }
    }
    ctx->pc = 0x4AC11Cu;
label_4ac11c:
    // 0x4ac11c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ac11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ac120:
    // 0x4ac120: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4ac120u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
label_4ac124:
    // 0x4ac124: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4ac124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_4ac128:
    // 0x4ac128: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x4ac128u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
label_4ac12c:
    // 0x4ac12c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ac12cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ac130:
    // 0x4ac130: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ac130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4ac134:
    // 0x4ac134: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ac134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ac138:
    // 0x4ac138: 0x3e00008  jr          $ra
label_4ac13c:
    if (ctx->pc == 0x4AC13Cu) {
        ctx->pc = 0x4AC13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC138u;
        // 0x4ac13c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AC140u;
        goto label_4ac140;
    }
    ctx->pc = 0x4AC138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC138u;
        // 0x4ac13c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC140u;
label_4ac140:
    // 0x4ac140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ac140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4ac144:
    // 0x4ac144: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ac144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ac148:
    // 0x4ac148: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ac148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4ac14c:
    // 0x4ac14c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4ac14cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ac150:
    // 0x4ac150: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ac150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4ac154:
    // 0x4ac154: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ac154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ac158:
    // 0x4ac158: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4ac158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ac15c:
    // 0x4ac15c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ac15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ac160:
    // 0x4ac160: 0xc12cab4  jal         func_4B2AD0
label_4ac164:
    if (ctx->pc == 0x4AC164u) {
        ctx->pc = 0x4AC164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC160u;
        // 0x4ac164: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AC168u;
        goto label_4ac168;
    }
    ctx->pc = 0x4AC160u;
    SET_GPR_U32(ctx, 31, 0x4AC168u);
    ctx->pc = 0x4AC164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC160u;
    // 0x4ac164: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B2AD0u, 0x4AC160u, 0x4AC168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC168u;
label_4ac168:
    // 0x4ac168: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ac168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ac16c:
    // 0x4ac16c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4ac16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4ac170:
    // 0x4ac170: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_4ac174:
    if (ctx->pc == 0x4AC174u) {
        ctx->pc = 0x4AC174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC170u;
        // 0x4ac174: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AC178u;
        goto label_4ac178;
    }
    ctx->pc = 0x4AC170u;
    {
        const bool branch_taken_0x4ac170 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x4AC174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC170u;
        // 0x4ac174: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac170) {
            ctx->pc = 0x4AC188u;
            goto label_4ac188;
        }
    }
    ctx->pc = 0x4AC178u;
label_4ac178:
    // 0x4ac178: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ac178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ac17c:
    // 0x4ac17c: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4ac17cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
label_4ac180:
    // 0x4ac180: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4ac180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_4ac184:
    // 0x4ac184: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x4ac184u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
label_4ac188:
    // 0x4ac188: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4ac188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ac18c:
    // 0x4ac18c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ac18cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ac190:
    // 0x4ac190: 0x3e00008  jr          $ra
label_4ac194:
    if (ctx->pc == 0x4AC194u) {
        ctx->pc = 0x4AC194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC190u;
        // 0x4ac194: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AC198u;
        goto label_fallthrough_0x4ac190;
    }
    ctx->pc = 0x4AC190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC190u;
        // 0x4ac194: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4ac190:
    ctx->pc = 0x4AC198u;
}
