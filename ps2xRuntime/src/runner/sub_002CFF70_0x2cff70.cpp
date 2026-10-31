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

// Function: sub_002CFF70
// Address: 0x2cff70 - 0x2d0100
void sub_002CFF70_0x2cff70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CFF70_0x2cff70");
#endif

    switch (ctx->pc) {
        case 0x2cffc0u: goto label_2cffc0;
        case 0x2cffd0u: goto label_2cffd0;
        case 0x2cffe4u: goto label_2cffe4;
        case 0x2d0000u: goto label_2d0000;
        case 0x2d0024u: goto label_2d0024;
        case 0x2d0034u: goto label_2d0034;
        case 0x2d005cu: goto label_2d005c;
        case 0x2d0080u: goto label_2d0080;
        case 0x2d0090u: goto label_2d0090;
        case 0x2d0098u: goto label_2d0098;
        case 0x2d00b4u: goto label_2d00b4;
        case 0x2d00d8u: goto label_2d00d8;
        default: break;
    }

    ctx->pc = 0x2cff70u;

    // 0x2cff70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cff70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cff74: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2cff74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2cff78: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2cff78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2cff7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cff7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cff80: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2cff80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2cff84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cff84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cff88: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2cff88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2cff8c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2cff8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cff90: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2cff90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2cff94: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2cff94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2cff98: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2CFF98u;
    {
        const bool branch_taken_0x2cff98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFF98u;
        // 0x2cff9c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cff98) {
            ctx->pc = 0x2D0088u;
            goto label_2d0088;
        }
    }
    ctx->pc = 0x2CFFA0u;
    // 0x2cffa0: 0x14a40009  bne         $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CFFA0u;
    {
        const bool branch_taken_0x2cffa0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x2CFFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFFA0u;
        // 0x2cffa4: 0x2412029e  addiu       $s2, $zero, 0x29E (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 670));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cffa0) {
            ctx->pc = 0x2CFFC8u;
            goto label_2cffc8;
        }
    }
    ctx->pc = 0x2CFFA8u;
    // 0x2cffa8: 0x8c64020c  lw          $a0, 0x20C($v1)
    ctx->pc = 0x2cffa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x2cffac: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x2cffacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x2cffb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cffb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cffb4: 0x2412029c  addiu       $s2, $zero, 0x29C
    ctx->pc = 0x2cffb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x2cffb8: 0xc058ff0  jal         func_163FC0
    ctx->pc = 0x2CFFB8u;
    SET_GPR_U32(ctx, 31, 0x2CFFC0u);
    ctx->pc = 0x2CFFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFFB8u;
    // 0x2cffbc: 0x248401b0  addiu       $a0, $a0, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FC0u, 0x2CFFB8u, 0x2CFFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFFC0u;
label_2cffc0:
    // 0x2cffc0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CFFC0u;
    {
        const bool branch_taken_0x2cffc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cffc0) {
            ctx->pc = 0x2CFFC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFFC0u;
            // 0x2cffc4: 0x2412029e  addiu       $s2, $zero, 0x29E (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 670));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFFC8u;
            goto label_2cffc8;
        }
    }
    ctx->pc = 0x2CFFC8u;
label_2cffc8:
    // 0x2cffc8: 0xc0b3fc6  jal         func_2CFF18
    ctx->pc = 0x2CFFC8u;
    SET_GPR_U32(ctx, 31, 0x2CFFD0u);
    ctx->pc = 0x2CFFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFFC8u;
    // 0x2cffcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF18u, 0x2CFFC8u, 0x2CFFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFFD0u;
label_2cffd0:
    // 0x2cffd0: 0x2402029c  addiu       $v0, $zero, 0x29C
    ctx->pc = 0x2cffd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x2cffd4: 0x16420015  bne         $s2, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CFFD4u;
    {
        const bool branch_taken_0x2cffd4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cffd4) {
            ctx->pc = 0x2D002Cu;
            goto label_2d002c;
        }
    }
    ctx->pc = 0x2CFFDCu;
    // 0x2cffdc: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2CFFDCu;
    SET_GPR_U32(ctx, 31, 0x2CFFE4u);
    ctx->pc = 0x2CFFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFFDCu;
    // 0x2cffe0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CFFDCu, 0x2CFFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFFE4u;
label_2cffe4:
    // 0x2cffe4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cffe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cffe8: 0x1220003b  beqz        $s1, . + 4 + (0x3B << 2)
    ctx->pc = 0x2CFFE8u;
    {
        const bool branch_taken_0x2cffe8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFFE8u;
        // 0x2cffec: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cffe8) {
            ctx->pc = 0x2D00D8u;
            goto label_2d00d8;
        }
    }
    ctx->pc = 0x2CFFF0u;
    // 0x2cfff0: 0x240501f4  addiu       $a1, $zero, 0x1F4
    ctx->pc = 0x2cfff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x2cfff4: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2cfff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2cfff8: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x2CFFF8u;
    SET_GPR_U32(ctx, 31, 0x2D0000u);
    ctx->pc = 0x2CFFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFFF8u;
    // 0x2cfffc: 0x240602ee  addiu       $a2, $zero, 0x2EE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 750));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2CFFF8u, 0x2D0000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0000u;
label_2d0000:
    // 0x2d0000: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d0000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d0004: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d0004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0008: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2d0008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2d000c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d000cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2d0010: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d0010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d0014: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2d0014u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0018: 0x2406029c  addiu       $a2, $zero, 0x29C
    ctx->pc = 0x2d0018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x2d001c: 0xc0be8c0  jal         func_2FA300
    ctx->pc = 0x2D001Cu;
    SET_GPR_U32(ctx, 31, 0x2D0024u);
    ctx->pc = 0x2D0020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D001Cu;
    // 0x2d0020: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2D001Cu, 0x2D0024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0024u;
label_2d0024:
    // 0x2d0024: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2D0024u;
    {
        const bool branch_taken_0x2d0024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0024u;
        // 0x2d0028: 0x92020035  lbu         $v0, 0x35($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 53)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0024) {
            ctx->pc = 0x2D00DCu;
            goto label_2d00dc;
        }
    }
    ctx->pc = 0x2D002Cu;
label_2d002c:
    // 0x2d002c: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2D002Cu;
    SET_GPR_U32(ctx, 31, 0x2D0034u);
    ctx->pc = 0x2D0030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D002Cu;
    // 0x2d0030: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D002Cu, 0x2D0034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0034u;
label_2d0034:
    // 0x2d0034: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d0034u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0038: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2D0038u;
    {
        const bool branch_taken_0x2d0038 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0038u;
        // 0x2d003c: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0038) {
            ctx->pc = 0x2D00D8u;
            goto label_2d00d8;
        }
    }
    ctx->pc = 0x2D0040u;
    // 0x2d0040: 0x240501f4  addiu       $a1, $zero, 0x1F4
    ctx->pc = 0x2d0040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x2d0044: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2d0044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2d0048: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2d0048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2d004c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d004cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2d0050: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2d0050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2d0054: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x2D0054u;
    SET_GPR_U32(ctx, 31, 0x2D005Cu);
    ctx->pc = 0x2D0058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0054u;
    // 0x2d0058: 0x240602ee  addiu       $a2, $zero, 0x2EE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 750));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2D0054u, 0x2D005Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D005Cu;
label_2d005c:
    // 0x2d005c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d005cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d0060: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d0060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0064: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d0064u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2d0068: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2d0068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d006c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2d006cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0070: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2d0070u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2d0074: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d0074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0078: 0xc0be968  jal         func_2FA5A0
    ctx->pc = 0x2D0078u;
    SET_GPR_U32(ctx, 31, 0x2D0080u);
    ctx->pc = 0x2D007Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0078u;
    // 0x2d007c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2D0078u, 0x2D0080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0080u;
label_2d0080:
    // 0x2d0080: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2D0080u;
    {
        const bool branch_taken_0x2d0080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0080u;
        // 0x2d0084: 0x92020035  lbu         $v0, 0x35($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 53)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0080) {
            ctx->pc = 0x2D00DCu;
            goto label_2d00dc;
        }
    }
    ctx->pc = 0x2D0088u;
label_2d0088:
    // 0x2d0088: 0xc0b3fc6  jal         func_2CFF18
    ctx->pc = 0x2D0088u;
    SET_GPR_U32(ctx, 31, 0x2D0090u);
    ctx->pc = 0x2D008Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0088u;
    // 0x2d008c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF18u, 0x2D0088u, 0x2D0090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0090u;
label_2d0090:
    // 0x2d0090: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2D0090u;
    SET_GPR_U32(ctx, 31, 0x2D0098u);
    ctx->pc = 0x2D0094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0090u;
    // 0x2d0094: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D0090u, 0x2D0098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0098u;
label_2d0098:
    // 0x2d0098: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d0098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d009c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x2D009Cu;
    {
        const bool branch_taken_0x2d009c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D00A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D009Cu;
        // 0x2d00a0: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d009c) {
            ctx->pc = 0x2D00D8u;
            goto label_2d00d8;
        }
    }
    ctx->pc = 0x2D00A4u;
    // 0x2d00a4: 0x240501f4  addiu       $a1, $zero, 0x1F4
    ctx->pc = 0x2d00a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x2d00a8: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2d00a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2d00ac: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x2D00ACu;
    SET_GPR_U32(ctx, 31, 0x2D00B4u);
    ctx->pc = 0x2D00B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D00ACu;
    // 0x2d00b0: 0x240602ee  addiu       $a2, $zero, 0x2EE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 750));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2D00ACu, 0x2D00B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D00B4u;
label_2d00b4:
    // 0x2d00b4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d00b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d00b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d00b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d00bc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2d00bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2d00c0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d00c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2d00c4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d00c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d00c8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2d00c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d00cc: 0x2406029c  addiu       $a2, $zero, 0x29C
    ctx->pc = 0x2d00ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x2d00d0: 0xc0be8c0  jal         func_2FA300
    ctx->pc = 0x2D00D0u;
    SET_GPR_U32(ctx, 31, 0x2D00D8u);
    ctx->pc = 0x2D00D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D00D0u;
    // 0x2d00d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2D00D0u, 0x2D00D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D00D8u;
label_2d00d8:
    // 0x2d00d8: 0x92020035  lbu         $v0, 0x35($s0)
    ctx->pc = 0x2d00d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 53)));
label_2d00dc:
    // 0x2d00dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d00dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d00e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d00e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d00e4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2d00e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d00e8: 0xa2020035  sb          $v0, 0x35($s0)
    ctx->pc = 0x2d00e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 53), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d00ec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d00ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d00f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d00f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d00f4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2d00f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d00f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D00F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D00FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D00F8u;
        // 0x2d00fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D00F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0100u;
}
