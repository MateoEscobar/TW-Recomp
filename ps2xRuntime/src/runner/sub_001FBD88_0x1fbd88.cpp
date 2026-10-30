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

// Function: sub_001FBD88
// Address: 0x1fbd88 - 0x1fbe68
void sub_001FBD88_0x1fbd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBD88_0x1fbd88");
#endif

    switch (ctx->pc) {
        case 0x1fbd88u: goto label_1fbd88;
        case 0x1fbd8cu: goto label_1fbd8c;
        case 0x1fbd90u: goto label_1fbd90;
        case 0x1fbd94u: goto label_1fbd94;
        case 0x1fbd98u: goto label_1fbd98;
        case 0x1fbd9cu: goto label_1fbd9c;
        case 0x1fbda0u: goto label_1fbda0;
        case 0x1fbda4u: goto label_1fbda4;
        case 0x1fbda8u: goto label_1fbda8;
        case 0x1fbdacu: goto label_1fbdac;
        case 0x1fbdb0u: goto label_1fbdb0;
        case 0x1fbdb4u: goto label_1fbdb4;
        case 0x1fbdb8u: goto label_1fbdb8;
        case 0x1fbdbcu: goto label_1fbdbc;
        case 0x1fbdc0u: goto label_1fbdc0;
        case 0x1fbdc4u: goto label_1fbdc4;
        case 0x1fbdc8u: goto label_1fbdc8;
        case 0x1fbdccu: goto label_1fbdcc;
        case 0x1fbdd0u: goto label_1fbdd0;
        case 0x1fbdd4u: goto label_1fbdd4;
        case 0x1fbdd8u: goto label_1fbdd8;
        case 0x1fbddcu: goto label_1fbddc;
        case 0x1fbde0u: goto label_1fbde0;
        case 0x1fbde4u: goto label_1fbde4;
        case 0x1fbde8u: goto label_1fbde8;
        case 0x1fbdecu: goto label_1fbdec;
        case 0x1fbdf0u: goto label_1fbdf0;
        case 0x1fbdf4u: goto label_1fbdf4;
        case 0x1fbdf8u: goto label_1fbdf8;
        case 0x1fbdfcu: goto label_1fbdfc;
        case 0x1fbe00u: goto label_1fbe00;
        case 0x1fbe04u: goto label_1fbe04;
        case 0x1fbe08u: goto label_1fbe08;
        case 0x1fbe0cu: goto label_1fbe0c;
        case 0x1fbe10u: goto label_1fbe10;
        case 0x1fbe14u: goto label_1fbe14;
        case 0x1fbe18u: goto label_1fbe18;
        case 0x1fbe1cu: goto label_1fbe1c;
        case 0x1fbe20u: goto label_1fbe20;
        case 0x1fbe24u: goto label_1fbe24;
        case 0x1fbe28u: goto label_1fbe28;
        case 0x1fbe2cu: goto label_1fbe2c;
        case 0x1fbe30u: goto label_1fbe30;
        case 0x1fbe34u: goto label_1fbe34;
        case 0x1fbe38u: goto label_1fbe38;
        case 0x1fbe3cu: goto label_1fbe3c;
        case 0x1fbe40u: goto label_1fbe40;
        case 0x1fbe44u: goto label_1fbe44;
        case 0x1fbe48u: goto label_1fbe48;
        case 0x1fbe4cu: goto label_1fbe4c;
        case 0x1fbe50u: goto label_1fbe50;
        case 0x1fbe54u: goto label_1fbe54;
        case 0x1fbe58u: goto label_1fbe58;
        case 0x1fbe5cu: goto label_1fbe5c;
        case 0x1fbe60u: goto label_1fbe60;
        case 0x1fbe64u: goto label_1fbe64;
        default: break;
    }

    ctx->pc = 0x1fbd88u;

label_1fbd88:
    // 0x1fbd88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fbd88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1fbd8c:
    // 0x1fbd8c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1fbd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1fbd90:
    // 0x1fbd90: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1fbd90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1fbd94:
    // 0x1fbd94: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1fbd94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1fbd98:
    // 0x1fbd98: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x1fbd98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_1fbd9c:
    // 0x1fbd9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fbd9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fbda0:
    // 0x1fbda0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1fbda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1fbda4:
    // 0x1fbda4: 0x2442d5e0  addiu       $v0, $v0, -0x2A20
    ctx->pc = 0x1fbda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956512));
label_1fbda8:
    // 0x1fbda8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1fbda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1fbdac:
    // 0x1fbdac: 0x2463d608  addiu       $v1, $v1, -0x29F8
    ctx->pc = 0x1fbdacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956552));
label_1fbdb0:
    // 0x1fbdb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fbdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fbdb4:
    // 0x1fbdb4: 0x24c6d638  addiu       $a2, $a2, -0x29C8
    ctx->pc = 0x1fbdb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956600));
label_1fbdb8:
    // 0x1fbdb8: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x1fbdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
label_1fbdbc:
    // 0x1fbdbc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1fbdbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fbdc0:
    // 0x1fbdc0: 0xae230088  sw          $v1, 0x88($s1)
    ctx->pc = 0x1fbdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 3));
label_1fbdc4:
    // 0x1fbdc4: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x1fbdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_1fbdc8:
    // 0x1fbdc8: 0xc07f01e  jal         func_1FC078
label_1fbdcc:
    if (ctx->pc == 0x1FBDCCu) {
        ctx->pc = 0x1FBDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBDC8u;
        // 0x1fbdcc: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBDD0u;
        goto label_1fbdd0;
    }
    ctx->pc = 0x1FBDC8u;
    SET_GPR_U32(ctx, 31, 0x1FBDD0u);
    ctx->pc = 0x1FBDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBDC8u;
    // 0x1fbdcc: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC078u, 0x1FBDC8u, 0x1FBDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBDD0u;
label_1fbdd0:
    // 0x1fbdd0: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1fbdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1fbdd4:
    // 0x1fbdd4: 0x2442cc88  addiu       $v0, $v0, -0x3378
    ctx->pc = 0x1fbdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954120));
label_1fbdd8:
    // 0x1fbdd8: 0xae220088  sw          $v0, 0x88($s1)
    ctx->pc = 0x1fbdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
label_1fbddc:
    // 0x1fbddc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1fbddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1fbde0:
    // 0x1fbde0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1fbde4:
    if (ctx->pc == 0x1FBDE4u) {
        ctx->pc = 0x1FBDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBDE0u;
        // 0x1fbde4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBDE8u;
        goto label_1fbde8;
    }
    ctx->pc = 0x1FBDE0u;
    {
        const bool branch_taken_0x1fbde0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBDE0u;
        // 0x1fbde4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbde0) {
            ctx->pc = 0x1FBE10u;
            goto label_1fbe10;
        }
    }
    ctx->pc = 0x1FBDE8u;
label_1fbde8:
    // 0x1fbde8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fbde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fbdec:
    // 0x1fbdec: 0xc1376d6  jal         func_4DDB58
label_1fbdf0:
    if (ctx->pc == 0x1FBDF0u) {
        ctx->pc = 0x1FBDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBDECu;
        // 0x1fbdf0: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBDF4u;
        goto label_1fbdf4;
    }
    ctx->pc = 0x1FBDECu;
    SET_GPR_U32(ctx, 31, 0x1FBDF4u);
    ctx->pc = 0x1FBDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBDECu;
    // 0x1fbdf0: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DDB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DDB58u, 0x1FBDECu, 0x1FBDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBDF4u;
label_1fbdf4:
    // 0x1fbdf4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fbdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fbdf8:
    // 0x1fbdf8: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x1fbdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_1fbdfc:
    // 0x1fbdfc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1fbdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fbe00:
    // 0x1fbe00: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1fbe00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1fbe04:
    // 0x1fbe04: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fbe04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fbe08:
    // 0x1fbe08: 0xac42000c  sw          $v0, 0xC($v0)
    ctx->pc = 0x1fbe08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 2));
label_1fbe0c:
    // 0x1fbe0c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1fbe0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1fbe10:
    // 0x1fbe10: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1fbe10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fbe14:
    // 0x1fbe14: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_1fbe18:
    if (ctx->pc == 0x1FBE18u) {
        ctx->pc = 0x1FBE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE14u;
        // 0x1fbe18: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBE1Cu;
        goto label_1fbe1c;
    }
    ctx->pc = 0x1FBE14u;
    {
        const bool branch_taken_0x1fbe14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE14u;
        // 0x1fbe18: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbe14) {
            ctx->pc = 0x1FBE40u;
            goto label_1fbe40;
        }
    }
    ctx->pc = 0x1FBE1Cu;
label_1fbe1c:
    // 0x1fbe1c: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1fbe1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1fbe20:
    // 0x1fbe20: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x1fbe20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1fbe24:
    // 0x1fbe24: 0x24c67dc0  addiu       $a2, $a2, 0x7DC0
    ctx->pc = 0x1fbe24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32192));
label_1fbe28:
    // 0x1fbe28: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x1fbe28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1fbe2c:
    // 0x1fbe2c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1fbe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1fbe30:
    // 0x1fbe30: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1fbe30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1fbe34:
    // 0x1fbe34: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1fbe34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1fbe38:
    // 0x1fbe38: 0x60f809  jalr        $v1
label_1fbe3c:
    if (ctx->pc == 0x1FBE3Cu) {
        ctx->pc = 0x1FBE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE38u;
        // 0x1fbe3c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBE40u;
        goto label_1fbe40;
    }
    ctx->pc = 0x1FBE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FBE40u);
        ctx->pc = 0x1FBE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE38u;
        // 0x1fbe3c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBE38u, 0x1FBE40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FBE40u;
label_1fbe40:
    // 0x1fbe40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fbe40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fbe44:
    // 0x1fbe44: 0xc06a39e  jal         func_1A8E78
label_1fbe48:
    if (ctx->pc == 0x1FBE48u) {
        ctx->pc = 0x1FBE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE44u;
        // 0x1fbe48: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBE4Cu;
        goto label_1fbe4c;
    }
    ctx->pc = 0x1FBE44u;
    SET_GPR_U32(ctx, 31, 0x1FBE4Cu);
    ctx->pc = 0x1FBE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBE44u;
    // 0x1fbe48: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x1FBE44u, 0x1FBE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBE4Cu;
label_1fbe4c:
    // 0x1fbe4c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1fbe4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fbe50:
    // 0x1fbe50: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fbe50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fbe54:
    // 0x1fbe54: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1fbe54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fbe58:
    // 0x1fbe58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fbe58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fbe5c:
    // 0x1fbe5c: 0x3e00008  jr          $ra
label_1fbe60:
    if (ctx->pc == 0x1FBE60u) {
        ctx->pc = 0x1FBE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE5Cu;
        // 0x1fbe60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBE64u;
        goto label_1fbe64;
    }
    ctx->pc = 0x1FBE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE5Cu;
        // 0x1fbe60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBE64u;
label_1fbe64:
    // 0x1fbe64: 0x0  nop
    ctx->pc = 0x1fbe64u;
    // NOP
    ctx->pc = 0x1fbe68u;
}
