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

// Function: sub_001FE968
// Address: 0x1fe968 - 0x1fea48
void sub_001FE968_0x1fe968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE968_0x1fe968");
#endif

    switch (ctx->pc) {
        case 0x1fe968u: goto label_1fe968;
        case 0x1fe96cu: goto label_1fe96c;
        case 0x1fe970u: goto label_1fe970;
        case 0x1fe974u: goto label_1fe974;
        case 0x1fe978u: goto label_1fe978;
        case 0x1fe97cu: goto label_1fe97c;
        case 0x1fe980u: goto label_1fe980;
        case 0x1fe984u: goto label_1fe984;
        case 0x1fe988u: goto label_1fe988;
        case 0x1fe98cu: goto label_1fe98c;
        case 0x1fe990u: goto label_1fe990;
        case 0x1fe994u: goto label_1fe994;
        case 0x1fe998u: goto label_1fe998;
        case 0x1fe99cu: goto label_1fe99c;
        case 0x1fe9a0u: goto label_1fe9a0;
        case 0x1fe9a4u: goto label_1fe9a4;
        case 0x1fe9a8u: goto label_1fe9a8;
        case 0x1fe9acu: goto label_1fe9ac;
        case 0x1fe9b0u: goto label_1fe9b0;
        case 0x1fe9b4u: goto label_1fe9b4;
        case 0x1fe9b8u: goto label_1fe9b8;
        case 0x1fe9bcu: goto label_1fe9bc;
        case 0x1fe9c0u: goto label_1fe9c0;
        case 0x1fe9c4u: goto label_1fe9c4;
        case 0x1fe9c8u: goto label_1fe9c8;
        case 0x1fe9ccu: goto label_1fe9cc;
        case 0x1fe9d0u: goto label_1fe9d0;
        case 0x1fe9d4u: goto label_1fe9d4;
        case 0x1fe9d8u: goto label_1fe9d8;
        case 0x1fe9dcu: goto label_1fe9dc;
        case 0x1fe9e0u: goto label_1fe9e0;
        case 0x1fe9e4u: goto label_1fe9e4;
        case 0x1fe9e8u: goto label_1fe9e8;
        case 0x1fe9ecu: goto label_1fe9ec;
        case 0x1fe9f0u: goto label_1fe9f0;
        case 0x1fe9f4u: goto label_1fe9f4;
        case 0x1fe9f8u: goto label_1fe9f8;
        case 0x1fe9fcu: goto label_1fe9fc;
        case 0x1fea00u: goto label_1fea00;
        case 0x1fea04u: goto label_1fea04;
        case 0x1fea08u: goto label_1fea08;
        case 0x1fea0cu: goto label_1fea0c;
        case 0x1fea10u: goto label_1fea10;
        case 0x1fea14u: goto label_1fea14;
        case 0x1fea18u: goto label_1fea18;
        case 0x1fea1cu: goto label_1fea1c;
        case 0x1fea20u: goto label_1fea20;
        case 0x1fea24u: goto label_1fea24;
        case 0x1fea28u: goto label_1fea28;
        case 0x1fea2cu: goto label_1fea2c;
        case 0x1fea30u: goto label_1fea30;
        case 0x1fea34u: goto label_1fea34;
        case 0x1fea38u: goto label_1fea38;
        case 0x1fea3cu: goto label_1fea3c;
        case 0x1fea40u: goto label_1fea40;
        case 0x1fea44u: goto label_1fea44;
        default: break;
    }

    ctx->pc = 0x1fe968u;

label_1fe968:
    // 0x1fe968: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fe968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1fe96c:
    // 0x1fe96c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1fe96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1fe970:
    // 0x1fe970: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1fe970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1fe974:
    // 0x1fe974: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1fe974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1fe978:
    // 0x1fe978: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x1fe978u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_1fe97c:
    // 0x1fe97c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fe97cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fe980:
    // 0x1fe980: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1fe980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1fe984:
    // 0x1fe984: 0x2442d7f0  addiu       $v0, $v0, -0x2810
    ctx->pc = 0x1fe984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957040));
label_1fe988:
    // 0x1fe988: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1fe988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1fe98c:
    // 0x1fe98c: 0x2463d818  addiu       $v1, $v1, -0x27E8
    ctx->pc = 0x1fe98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957080));
label_1fe990:
    // 0x1fe990: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fe994:
    // 0x1fe994: 0x24c6d848  addiu       $a2, $a2, -0x27B8
    ctx->pc = 0x1fe994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957128));
label_1fe998:
    // 0x1fe998: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x1fe998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
label_1fe99c:
    // 0x1fe99c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1fe99cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fe9a0:
    // 0x1fe9a0: 0xae230088  sw          $v1, 0x88($s1)
    ctx->pc = 0x1fe9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 3));
label_1fe9a4:
    // 0x1fe9a4: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x1fe9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_1fe9a8:
    // 0x1fe9a8: 0xc0803ea  jal         func_200FA8
label_1fe9ac:
    if (ctx->pc == 0x1FE9ACu) {
        ctx->pc = 0x1FE9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9A8u;
        // 0x1fe9ac: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE9B0u;
        goto label_1fe9b0;
    }
    ctx->pc = 0x1FE9A8u;
    SET_GPR_U32(ctx, 31, 0x1FE9B0u);
    ctx->pc = 0x1FE9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE9A8u;
    // 0x1fe9ac: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200FA8u, 0x1FE9A8u, 0x1FE9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE9B0u;
label_1fe9b0:
    // 0x1fe9b0: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1fe9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1fe9b4:
    // 0x1fe9b4: 0x2442cc88  addiu       $v0, $v0, -0x3378
    ctx->pc = 0x1fe9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954120));
label_1fe9b8:
    // 0x1fe9b8: 0xae220088  sw          $v0, 0x88($s1)
    ctx->pc = 0x1fe9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
label_1fe9bc:
    // 0x1fe9bc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1fe9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1fe9c0:
    // 0x1fe9c0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1fe9c4:
    if (ctx->pc == 0x1FE9C4u) {
        ctx->pc = 0x1FE9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9C0u;
        // 0x1fe9c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE9C8u;
        goto label_1fe9c8;
    }
    ctx->pc = 0x1FE9C0u;
    {
        const bool branch_taken_0x1fe9c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9C0u;
        // 0x1fe9c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe9c0) {
            ctx->pc = 0x1FE9F0u;
            goto label_1fe9f0;
        }
    }
    ctx->pc = 0x1FE9C8u;
label_1fe9c8:
    // 0x1fe9c8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fe9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fe9cc:
    // 0x1fe9cc: 0xc1376d6  jal         func_4DDB58
label_1fe9d0:
    if (ctx->pc == 0x1FE9D0u) {
        ctx->pc = 0x1FE9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9CCu;
        // 0x1fe9d0: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE9D4u;
        goto label_1fe9d4;
    }
    ctx->pc = 0x1FE9CCu;
    SET_GPR_U32(ctx, 31, 0x1FE9D4u);
    ctx->pc = 0x1FE9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE9CCu;
    // 0x1fe9d0: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DDB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DDB58u, 0x1FE9CCu, 0x1FE9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE9D4u;
label_1fe9d4:
    // 0x1fe9d4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fe9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fe9d8:
    // 0x1fe9d8: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x1fe9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_1fe9dc:
    // 0x1fe9dc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1fe9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fe9e0:
    // 0x1fe9e0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1fe9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1fe9e4:
    // 0x1fe9e4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fe9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fe9e8:
    // 0x1fe9e8: 0xac42000c  sw          $v0, 0xC($v0)
    ctx->pc = 0x1fe9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 2));
label_1fe9ec:
    // 0x1fe9ec: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1fe9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1fe9f0:
    // 0x1fe9f0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1fe9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fe9f4:
    // 0x1fe9f4: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_1fe9f8:
    if (ctx->pc == 0x1FE9F8u) {
        ctx->pc = 0x1FE9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9F4u;
        // 0x1fe9f8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE9FCu;
        goto label_1fe9fc;
    }
    ctx->pc = 0x1FE9F4u;
    {
        const bool branch_taken_0x1fe9f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9F4u;
        // 0x1fe9f8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe9f4) {
            ctx->pc = 0x1FEA20u;
            goto label_1fea20;
        }
    }
    ctx->pc = 0x1FE9FCu;
label_1fe9fc:
    // 0x1fe9fc: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x1fe9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_1fea00:
    // 0x1fea00: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x1fea00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1fea04:
    // 0x1fea04: 0x24c681a0  addiu       $a2, $a2, -0x7E60
    ctx->pc = 0x1fea04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934944));
label_1fea08:
    // 0x1fea08: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x1fea08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1fea0c:
    // 0x1fea0c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1fea0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1fea10:
    // 0x1fea10: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1fea10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1fea14:
    // 0x1fea14: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1fea14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1fea18:
    // 0x1fea18: 0x60f809  jalr        $v1
label_1fea1c:
    if (ctx->pc == 0x1FEA1Cu) {
        ctx->pc = 0x1FEA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA18u;
        // 0x1fea1c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEA20u;
        goto label_1fea20;
    }
    ctx->pc = 0x1FEA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FEA20u);
        ctx->pc = 0x1FEA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA18u;
        // 0x1fea1c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEA18u, 0x1FEA20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FEA20u;
label_1fea20:
    // 0x1fea20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fea20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fea24:
    // 0x1fea24: 0xc06a39e  jal         func_1A8E78
label_1fea28:
    if (ctx->pc == 0x1FEA28u) {
        ctx->pc = 0x1FEA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA24u;
        // 0x1fea28: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEA2Cu;
        goto label_1fea2c;
    }
    ctx->pc = 0x1FEA24u;
    SET_GPR_U32(ctx, 31, 0x1FEA2Cu);
    ctx->pc = 0x1FEA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEA24u;
    // 0x1fea28: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x1FEA24u, 0x1FEA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEA2Cu;
label_1fea2c:
    // 0x1fea2c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1fea2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fea30:
    // 0x1fea30: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fea30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fea34:
    // 0x1fea34: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1fea34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fea38:
    // 0x1fea38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fea38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fea3c:
    // 0x1fea3c: 0x3e00008  jr          $ra
label_1fea40:
    if (ctx->pc == 0x1FEA40u) {
        ctx->pc = 0x1FEA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA3Cu;
        // 0x1fea40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEA44u;
        goto label_1fea44;
    }
    ctx->pc = 0x1FEA3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA3Cu;
        // 0x1fea40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEA3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEA44u;
label_1fea44:
    // 0x1fea44: 0x0  nop
    ctx->pc = 0x1fea44u;
    // NOP
    ctx->pc = 0x1fea48u;
}
