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

// Function: sub_003DACF0
// Address: 0x3dacf0 - 0x3dadb8
void sub_003DACF0_0x3dacf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DACF0_0x3dacf0");
#endif

    switch (ctx->pc) {
        case 0x3dacf0u: goto label_3dacf0;
        case 0x3dacf4u: goto label_3dacf4;
        case 0x3dacf8u: goto label_3dacf8;
        case 0x3dacfcu: goto label_3dacfc;
        case 0x3dad00u: goto label_3dad00;
        case 0x3dad04u: goto label_3dad04;
        case 0x3dad08u: goto label_3dad08;
        case 0x3dad0cu: goto label_3dad0c;
        case 0x3dad10u: goto label_3dad10;
        case 0x3dad14u: goto label_3dad14;
        case 0x3dad18u: goto label_3dad18;
        case 0x3dad1cu: goto label_3dad1c;
        case 0x3dad20u: goto label_3dad20;
        case 0x3dad24u: goto label_3dad24;
        case 0x3dad28u: goto label_3dad28;
        case 0x3dad2cu: goto label_3dad2c;
        case 0x3dad30u: goto label_3dad30;
        case 0x3dad34u: goto label_3dad34;
        case 0x3dad38u: goto label_3dad38;
        case 0x3dad3cu: goto label_3dad3c;
        case 0x3dad40u: goto label_3dad40;
        case 0x3dad44u: goto label_3dad44;
        case 0x3dad48u: goto label_3dad48;
        case 0x3dad4cu: goto label_3dad4c;
        case 0x3dad50u: goto label_3dad50;
        case 0x3dad54u: goto label_3dad54;
        case 0x3dad58u: goto label_3dad58;
        case 0x3dad5cu: goto label_3dad5c;
        case 0x3dad60u: goto label_3dad60;
        case 0x3dad64u: goto label_3dad64;
        case 0x3dad68u: goto label_3dad68;
        case 0x3dad6cu: goto label_3dad6c;
        case 0x3dad70u: goto label_3dad70;
        case 0x3dad74u: goto label_3dad74;
        case 0x3dad78u: goto label_3dad78;
        case 0x3dad7cu: goto label_3dad7c;
        case 0x3dad80u: goto label_3dad80;
        case 0x3dad84u: goto label_3dad84;
        case 0x3dad88u: goto label_3dad88;
        case 0x3dad8cu: goto label_3dad8c;
        case 0x3dad90u: goto label_3dad90;
        case 0x3dad94u: goto label_3dad94;
        case 0x3dad98u: goto label_3dad98;
        case 0x3dad9cu: goto label_3dad9c;
        case 0x3dada0u: goto label_3dada0;
        case 0x3dada4u: goto label_3dada4;
        case 0x3dada8u: goto label_3dada8;
        case 0x3dadacu: goto label_3dadac;
        case 0x3dadb0u: goto label_3dadb0;
        case 0x3dadb4u: goto label_3dadb4;
        default: break;
    }

    ctx->pc = 0x3dacf0u;

label_3dacf0:
    // 0x3dacf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3dacf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3dacf4:
    // 0x3dacf4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3dacf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3dacf8:
    // 0x3dacf8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3dacf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3dacfc:
    // 0x3dacfc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3dacfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3dad00:
    // 0x3dad00: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3dad00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3dad04:
    // 0x3dad04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dad04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dad08:
    // 0x3dad08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dad08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3dad0c:
    // 0x3dad0c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3dad0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3dad10:
    // 0x3dad10: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3dad10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3dad14:
    // 0x3dad14: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3dad14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3dad18:
    // 0x3dad18: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3dad18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3dad1c:
    // 0x3dad1c: 0x40f809  jalr        $v0
label_3dad20:
    if (ctx->pc == 0x3DAD20u) {
        ctx->pc = 0x3DAD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAD1Cu;
        // 0x3dad20: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAD24u;
        goto label_3dad24;
    }
    ctx->pc = 0x3DAD1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DAD24u);
        ctx->pc = 0x3DAD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAD1Cu;
        // 0x3dad20: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DAD1Cu, 0x3DAD24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DAD24u;
label_3dad24:
    // 0x3dad24: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x3dad24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3dad28:
    // 0x3dad28: 0x1203001d  beq         $s0, $v1, . + 4 + (0x1D << 2)
label_3dad2c:
    if (ctx->pc == 0x3DAD2Cu) {
        ctx->pc = 0x3DAD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAD28u;
        // 0x3dad2c: 0x2e020014  sltiu       $v0, $s0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAD30u;
        goto label_3dad30;
    }
    ctx->pc = 0x3DAD28u;
    {
        const bool branch_taken_0x3dad28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DAD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAD28u;
        // 0x3dad2c: 0x2e020014  sltiu       $v0, $s0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dad28) {
            ctx->pc = 0x3DADA0u;
            goto label_3dada0;
        }
    }
    ctx->pc = 0x3DAD30u;
label_3dad30:
    // 0x3dad30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3dad34:
    if (ctx->pc == 0x3DAD34u) {
        ctx->pc = 0x3DAD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAD30u;
        // 0x3dad34: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAD38u;
        goto label_3dad38;
    }
    ctx->pc = 0x3DAD30u;
    {
        const bool branch_taken_0x3dad30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAD30u;
        // 0x3dad34: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dad30) {
            ctx->pc = 0x3DAD48u;
            goto label_3dad48;
        }
    }
    ctx->pc = 0x3DAD38u;
label_3dad38:
    // 0x3dad38: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_3dad3c:
    if (ctx->pc == 0x3DAD3Cu) {
        ctx->pc = 0x3DAD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAD38u;
        // 0x3dad3c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAD40u;
        goto label_3dad40;
    }
    ctx->pc = 0x3DAD38u;
    {
        const bool branch_taken_0x3dad38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DAD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAD38u;
        // 0x3dad3c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dad38) {
            ctx->pc = 0x3DAD5Cu;
            goto label_3dad5c;
        }
    }
    ctx->pc = 0x3DAD40u;
label_3dad40:
    // 0x3dad40: 0x10000019  b           . + 4 + (0x19 << 2)
label_3dad44:
    if (ctx->pc == 0x3DAD44u) {
        ctx->pc = 0x3DAD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAD40u;
        // 0x3dad44: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAD48u;
        goto label_3dad48;
    }
    ctx->pc = 0x3DAD40u;
    {
        const bool branch_taken_0x3dad40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAD40u;
        // 0x3dad44: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dad40) {
            ctx->pc = 0x3DADA8u;
            goto label_3dada8;
        }
    }
    ctx->pc = 0x3DAD48u;
label_3dad48:
    // 0x3dad48: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x3dad48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3dad4c:
    // 0x3dad4c: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
label_3dad50:
    if (ctx->pc == 0x3DAD50u) {
        ctx->pc = 0x3DAD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAD4Cu;
        // 0x3dad50: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAD54u;
        goto label_3dad54;
    }
    ctx->pc = 0x3DAD4Cu;
    {
        const bool branch_taken_0x3dad4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DAD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAD4Cu;
        // 0x3dad50: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dad4c) {
            ctx->pc = 0x3DAD7Cu;
            goto label_3dad7c;
        }
    }
    ctx->pc = 0x3DAD54u;
label_3dad54:
    // 0x3dad54: 0x10000014  b           . + 4 + (0x14 << 2)
label_3dad58:
    if (ctx->pc == 0x3DAD58u) {
        ctx->pc = 0x3DAD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAD54u;
        // 0x3dad58: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAD5Cu;
        goto label_3dad5c;
    }
    ctx->pc = 0x3DAD54u;
    {
        const bool branch_taken_0x3dad54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAD54u;
        // 0x3dad58: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dad54) {
            ctx->pc = 0x3DADA8u;
            goto label_3dada8;
        }
    }
    ctx->pc = 0x3DAD5Cu;
label_3dad5c:
    // 0x3dad5c: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x3dad5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_3dad60:
    // 0x3dad60: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x3dad60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_3dad64:
    // 0x3dad64: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3dad64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3dad68:
    // 0x3dad68: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x3dad68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3dad6c:
    // 0x3dad6c: 0xc0f15f6  jal         func_3C57D8
label_3dad70:
    if (ctx->pc == 0x3DAD70u) {
        ctx->pc = 0x3DAD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAD6Cu;
        // 0x3dad70: 0x34a56994  ori         $a1, $a1, 0x6994 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27028);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAD74u;
        goto label_3dad74;
    }
    ctx->pc = 0x3DAD6Cu;
    SET_GPR_U32(ctx, 31, 0x3DAD74u);
    ctx->pc = 0x3DAD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAD6Cu;
    // 0x3dad70: 0x34a56994  ori         $a1, $a1, 0x6994 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27028);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3DAD6Cu, 0x3DAD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAD74u;
label_3dad74:
    // 0x3dad74: 0x1000000b  b           . + 4 + (0xB << 2)
label_3dad78:
    if (ctx->pc == 0x3DAD78u) {
        ctx->pc = 0x3DAD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAD74u;
        // 0x3dad78: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAD7Cu;
        goto label_3dad7c;
    }
    ctx->pc = 0x3DAD74u;
    {
        const bool branch_taken_0x3dad74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAD74u;
        // 0x3dad78: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dad74) {
            ctx->pc = 0x3DADA4u;
            goto label_3dada4;
        }
    }
    ctx->pc = 0x3DAD7Cu;
label_3dad7c:
    // 0x3dad7c: 0xc0ea146  jal         func_3A8518
label_3dad80:
    if (ctx->pc == 0x3DAD80u) {
        ctx->pc = 0x3DAD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAD7Cu;
        // 0x3dad80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAD84u;
        goto label_3dad84;
    }
    ctx->pc = 0x3DAD7Cu;
    SET_GPR_U32(ctx, 31, 0x3DAD84u);
    ctx->pc = 0x3DAD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAD7Cu;
    // 0x3dad80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3DAD7Cu, 0x3DAD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAD84u;
label_3dad84:
    // 0x3dad84: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3dad84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3dad88:
    // 0x3dad88: 0x0  nop
    ctx->pc = 0x3dad88u;
    // NOP
label_3dad8c:
    // 0x3dad8c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x3dad8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_3dad90:
    // 0x3dad90: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x3dad90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_3dad94:
    // 0x3dad94: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x3dad94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3dad98:
    // 0x3dad98: 0xc0f15f6  jal         func_3C57D8
label_3dad9c:
    if (ctx->pc == 0x3DAD9Cu) {
        ctx->pc = 0x3DAD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAD98u;
        // 0x3dad9c: 0x34a56994  ori         $a1, $a1, 0x6994 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27028);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DADA0u;
        goto label_3dada0;
    }
    ctx->pc = 0x3DAD98u;
    SET_GPR_U32(ctx, 31, 0x3DADA0u);
    ctx->pc = 0x3DAD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAD98u;
    // 0x3dad9c: 0x34a56994  ori         $a1, $a1, 0x6994 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27028);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3DAD98u, 0x3DADA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DADA0u;
label_3dada0:
    // 0x3dada0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3dada0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3dada4:
    // 0x3dada4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3dada4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dada8:
    // 0x3dada8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3dada8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3dadac:
    // 0x3dadac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dadacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3dadb0:
    // 0x3dadb0: 0x3e00008  jr          $ra
label_3dadb4:
    if (ctx->pc == 0x3DADB4u) {
        ctx->pc = 0x3DADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DADB0u;
        // 0x3dadb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DADB8u;
        goto label_fallthrough_0x3dadb0;
    }
    ctx->pc = 0x3DADB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DADB0u;
        // 0x3dadb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DADB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3dadb0:
    ctx->pc = 0x3DADB8u;
}
