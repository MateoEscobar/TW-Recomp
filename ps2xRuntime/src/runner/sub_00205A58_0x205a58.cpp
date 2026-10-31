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

// Function: sub_00205A58
// Address: 0x205a58 - 0x205b38
void sub_00205A58_0x205a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205A58_0x205a58");
#endif

    switch (ctx->pc) {
        case 0x205a58u: goto label_205a58;
        case 0x205a5cu: goto label_205a5c;
        case 0x205a60u: goto label_205a60;
        case 0x205a64u: goto label_205a64;
        case 0x205a68u: goto label_205a68;
        case 0x205a6cu: goto label_205a6c;
        case 0x205a70u: goto label_205a70;
        case 0x205a74u: goto label_205a74;
        case 0x205a78u: goto label_205a78;
        case 0x205a7cu: goto label_205a7c;
        case 0x205a80u: goto label_205a80;
        case 0x205a84u: goto label_205a84;
        case 0x205a88u: goto label_205a88;
        case 0x205a8cu: goto label_205a8c;
        case 0x205a90u: goto label_205a90;
        case 0x205a94u: goto label_205a94;
        case 0x205a98u: goto label_205a98;
        case 0x205a9cu: goto label_205a9c;
        case 0x205aa0u: goto label_205aa0;
        case 0x205aa4u: goto label_205aa4;
        case 0x205aa8u: goto label_205aa8;
        case 0x205aacu: goto label_205aac;
        case 0x205ab0u: goto label_205ab0;
        case 0x205ab4u: goto label_205ab4;
        case 0x205ab8u: goto label_205ab8;
        case 0x205abcu: goto label_205abc;
        case 0x205ac0u: goto label_205ac0;
        case 0x205ac4u: goto label_205ac4;
        case 0x205ac8u: goto label_205ac8;
        case 0x205accu: goto label_205acc;
        case 0x205ad0u: goto label_205ad0;
        case 0x205ad4u: goto label_205ad4;
        case 0x205ad8u: goto label_205ad8;
        case 0x205adcu: goto label_205adc;
        case 0x205ae0u: goto label_205ae0;
        case 0x205ae4u: goto label_205ae4;
        case 0x205ae8u: goto label_205ae8;
        case 0x205aecu: goto label_205aec;
        case 0x205af0u: goto label_205af0;
        case 0x205af4u: goto label_205af4;
        case 0x205af8u: goto label_205af8;
        case 0x205afcu: goto label_205afc;
        case 0x205b00u: goto label_205b00;
        case 0x205b04u: goto label_205b04;
        case 0x205b08u: goto label_205b08;
        case 0x205b0cu: goto label_205b0c;
        case 0x205b10u: goto label_205b10;
        case 0x205b14u: goto label_205b14;
        case 0x205b18u: goto label_205b18;
        case 0x205b1cu: goto label_205b1c;
        case 0x205b20u: goto label_205b20;
        case 0x205b24u: goto label_205b24;
        case 0x205b28u: goto label_205b28;
        case 0x205b2cu: goto label_205b2c;
        case 0x205b30u: goto label_205b30;
        case 0x205b34u: goto label_205b34;
        default: break;
    }

    ctx->pc = 0x205a58u;

label_205a58:
    // 0x205a58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x205a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_205a5c:
    // 0x205a5c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x205a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_205a60:
    // 0x205a60: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x205a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_205a64:
    // 0x205a64: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x205a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_205a68:
    // 0x205a68: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x205a68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_205a6c:
    // 0x205a6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x205a6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_205a70:
    // 0x205a70: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x205a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_205a74:
    // 0x205a74: 0x2442dcf8  addiu       $v0, $v0, -0x2308
    ctx->pc = 0x205a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958328));
label_205a78:
    // 0x205a78: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x205a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_205a7c:
    // 0x205a7c: 0x2463dd20  addiu       $v1, $v1, -0x22E0
    ctx->pc = 0x205a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958368));
label_205a80:
    // 0x205a80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x205a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_205a84:
    // 0x205a84: 0x24c6dd50  addiu       $a2, $a2, -0x22B0
    ctx->pc = 0x205a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958416));
label_205a88:
    // 0x205a88: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x205a88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
label_205a8c:
    // 0x205a8c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x205a8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_205a90:
    // 0x205a90: 0xae230088  sw          $v1, 0x88($s1)
    ctx->pc = 0x205a90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 3));
label_205a94:
    // 0x205a94: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x205a94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_205a98:
    // 0x205a98: 0xc08183a  jal         func_2060E8
label_205a9c:
    if (ctx->pc == 0x205A9Cu) {
        ctx->pc = 0x205A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A98u;
        // 0x205a9c: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205AA0u;
        goto label_205aa0;
    }
    ctx->pc = 0x205A98u;
    SET_GPR_U32(ctx, 31, 0x205AA0u);
    ctx->pc = 0x205A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205A98u;
    // 0x205a9c: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2060E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2060E8u, 0x205A98u, 0x205AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205AA0u;
label_205aa0:
    // 0x205aa0: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x205aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_205aa4:
    // 0x205aa4: 0x2442cc88  addiu       $v0, $v0, -0x3378
    ctx->pc = 0x205aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954120));
label_205aa8:
    // 0x205aa8: 0xae220088  sw          $v0, 0x88($s1)
    ctx->pc = 0x205aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
label_205aac:
    // 0x205aac: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x205aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_205ab0:
    // 0x205ab0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_205ab4:
    if (ctx->pc == 0x205AB4u) {
        ctx->pc = 0x205AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AB0u;
        // 0x205ab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205AB8u;
        goto label_205ab8;
    }
    ctx->pc = 0x205AB0u;
    {
        const bool branch_taken_0x205ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x205AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AB0u;
        // 0x205ab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205ab0) {
            ctx->pc = 0x205AE0u;
            goto label_205ae0;
        }
    }
    ctx->pc = 0x205AB8u;
label_205ab8:
    // 0x205ab8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x205ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_205abc:
    // 0x205abc: 0xc1376d6  jal         func_4DDB58
label_205ac0:
    if (ctx->pc == 0x205AC0u) {
        ctx->pc = 0x205AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205ABCu;
        // 0x205ac0: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205AC4u;
        goto label_205ac4;
    }
    ctx->pc = 0x205ABCu;
    SET_GPR_U32(ctx, 31, 0x205AC4u);
    ctx->pc = 0x205AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205ABCu;
    // 0x205ac0: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DDB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DDB58u, 0x205ABCu, 0x205AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205AC4u;
label_205ac4:
    // 0x205ac4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x205ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_205ac8:
    // 0x205ac8: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x205ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_205acc:
    // 0x205acc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x205accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_205ad0:
    // 0x205ad0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x205ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_205ad4:
    // 0x205ad4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x205ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_205ad8:
    // 0x205ad8: 0xac42000c  sw          $v0, 0xC($v0)
    ctx->pc = 0x205ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 2));
label_205adc:
    // 0x205adc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x205adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_205ae0:
    // 0x205ae0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x205ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_205ae4:
    // 0x205ae4: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_205ae8:
    if (ctx->pc == 0x205AE8u) {
        ctx->pc = 0x205AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AE4u;
        // 0x205ae8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205AECu;
        goto label_205aec;
    }
    ctx->pc = 0x205AE4u;
    {
        const bool branch_taken_0x205ae4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x205AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AE4u;
        // 0x205ae8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205ae4) {
            ctx->pc = 0x205B10u;
            goto label_205b10;
        }
    }
    ctx->pc = 0x205AECu;
label_205aec:
    // 0x205aec: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x205aecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_205af0:
    // 0x205af0: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x205af0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_205af4:
    // 0x205af4: 0x24c687d8  addiu       $a2, $a2, -0x7828
    ctx->pc = 0x205af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936536));
label_205af8:
    // 0x205af8: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x205af8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_205afc:
    // 0x205afc: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x205afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_205b00:
    // 0x205b00: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x205b00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_205b04:
    // 0x205b04: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x205b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_205b08:
    // 0x205b08: 0x60f809  jalr        $v1
label_205b0c:
    if (ctx->pc == 0x205B0Cu) {
        ctx->pc = 0x205B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B08u;
        // 0x205b0c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205B10u;
        goto label_205b10;
    }
    ctx->pc = 0x205B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x205B10u);
        ctx->pc = 0x205B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B08u;
        // 0x205b0c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205B08u, 0x205B10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x205B10u;
label_205b10:
    // 0x205b10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x205b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_205b14:
    // 0x205b14: 0xc06a39e  jal         func_1A8E78
label_205b18:
    if (ctx->pc == 0x205B18u) {
        ctx->pc = 0x205B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B14u;
        // 0x205b18: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205B1Cu;
        goto label_205b1c;
    }
    ctx->pc = 0x205B14u;
    SET_GPR_U32(ctx, 31, 0x205B1Cu);
    ctx->pc = 0x205B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205B14u;
    // 0x205b18: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x205B14u, 0x205B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205B1Cu;
label_205b1c:
    // 0x205b1c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x205b1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_205b20:
    // 0x205b20: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x205b20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_205b24:
    // 0x205b24: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x205b24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_205b28:
    // 0x205b28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x205b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_205b2c:
    // 0x205b2c: 0x3e00008  jr          $ra
label_205b30:
    if (ctx->pc == 0x205B30u) {
        ctx->pc = 0x205B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B2Cu;
        // 0x205b30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205B34u;
        goto label_205b34;
    }
    ctx->pc = 0x205B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B2Cu;
        // 0x205b30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205B34u;
label_205b34:
    // 0x205b34: 0x0  nop
    ctx->pc = 0x205b34u;
    // NOP
    ctx->pc = 0x205b38u;
}
