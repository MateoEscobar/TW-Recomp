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

// Function: sub_0049ECD8
// Address: 0x49ecd8 - 0x49efc8
void sub_0049ECD8_0x49ecd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049ECD8_0x49ecd8");
#endif

    switch (ctx->pc) {
        case 0x49ed6cu: goto label_49ed6c;
        case 0x49ed78u: goto label_49ed78;
        case 0x49ed90u: goto label_49ed90;
        case 0x49ee74u: goto label_49ee74;
        case 0x49ee80u: goto label_49ee80;
        case 0x49ee94u: goto label_49ee94;
        case 0x49eec4u: goto label_49eec4;
        case 0x49eed0u: goto label_49eed0;
        case 0x49eee4u: goto label_49eee4;
        case 0x49ef1cu: goto label_49ef1c;
        case 0x49ef38u: goto label_49ef38;
        case 0x49ef48u: goto label_49ef48;
        case 0x49ef68u: goto label_49ef68;
        case 0x49ef84u: goto label_49ef84;
        case 0x49ef90u: goto label_49ef90;
        case 0x49ef98u: goto label_49ef98;
        default: break;
    }

    ctx->pc = 0x49ecd8u;

    // 0x49ecd8: 0x27bdbb80  addiu       $sp, $sp, -0x4480
    ctx->pc = 0x49ecd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294949760));
    // 0x49ecdc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x49ecdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x49ece0: 0x7fb14460  sq          $s1, 0x4460($sp)
    ctx->pc = 0x49ece0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17504), GPR_VEC(ctx, 17));
    // 0x49ece4: 0x7fb44430  sq          $s4, 0x4430($sp)
    ctx->pc = 0x49ece4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17456), GPR_VEC(ctx, 20));
    // 0x49ece8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x49ece8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ecec: 0x7fb54420  sq          $s5, 0x4420($sp)
    ctx->pc = 0x49ececu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17440), GPR_VEC(ctx, 21));
    // 0x49ecf0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x49ecf0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ecf4: 0x7fb04470  sq          $s0, 0x4470($sp)
    ctx->pc = 0x49ecf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17520), GPR_VEC(ctx, 16));
    // 0x49ecf8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x49ecf8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49ecfc: 0x7fb24450  sq          $s2, 0x4450($sp)
    ctx->pc = 0x49ecfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17488), GPR_VEC(ctx, 18));
    // 0x49ed00: 0x7fb34440  sq          $s3, 0x4440($sp)
    ctx->pc = 0x49ed00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17472), GPR_VEC(ctx, 19));
    // 0x49ed04: 0xffbf4410  sd          $ra, 0x4410($sp)
    ctx->pc = 0x49ed04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 17424), GPR_U64(ctx, 31));
    // 0x49ed08: 0x92820023  lbu         $v0, 0x23($s4)
    ctx->pc = 0x49ed08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 35)));
    // 0x49ed0c: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x49ed0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x49ed10: 0x30440060  andi        $a0, $v0, 0x60
    ctx->pc = 0x49ed10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x49ed14: 0x8e930004  lw          $s3, 0x4($s4)
    ctx->pc = 0x49ed14u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x49ed18: 0x10860046  beq         $a0, $a2, . + 4 + (0x46 << 2)
    ctx->pc = 0x49ED18u;
    {
        const bool branch_taken_0x49ed18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x49ED1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ED18u;
        // 0x49ed1c: 0x8e320014  lw          $s2, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ed18) {
            ctx->pc = 0x49EE34u;
            goto label_49ee34;
        }
    }
    ctx->pc = 0x49ED20u;
    // 0x49ed20: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x49ed20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x49ed24: 0x5482009d  bnel        $a0, $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x49ED24u;
    {
        const bool branch_taken_0x49ed24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x49ed24) {
            ctx->pc = 0x49ED28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49ED24u;
            // 0x49ed28: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49EF9Cu;
            goto label_49ef9c;
        }
    }
    ctx->pc = 0x49ED2Cu;
    // 0x49ed2c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x49ed2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x49ed30: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x49ed30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x49ed34: 0x10620039  beq         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x49ED34u;
    {
        const bool branch_taken_0x49ed34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x49ED38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ED34u;
        // 0x49ed38: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ed34) {
            ctx->pc = 0x49EE1Cu;
            goto label_49ee1c;
        }
    }
    ctx->pc = 0x49ED3Cu;
    // 0x49ed3c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x49ED3Cu;
    {
        const bool branch_taken_0x49ed3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49ED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ED3Cu;
        // 0x49ed40: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ed3c) {
            ctx->pc = 0x49ED54u;
            goto label_49ed54;
        }
    }
    ctx->pc = 0x49ED44u;
    // 0x49ed44: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x49ED44u;
    {
        const bool branch_taken_0x49ed44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x49ED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ED44u;
        // 0x49ed48: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ed44) {
            ctx->pc = 0x49ED64u;
            goto label_49ed64;
        }
    }
    ctx->pc = 0x49ED4Cu;
    // 0x49ed4c: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x49ED4Cu;
    {
        const bool branch_taken_0x49ed4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49ED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ED4Cu;
        // 0x49ed50: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ed4c) {
            ctx->pc = 0x49EF9Cu;
            goto label_49ef9c;
        }
    }
    ctx->pc = 0x49ED54u;
label_49ed54:
    // 0x49ed54: 0x10660031  beq         $v1, $a2, . + 4 + (0x31 << 2)
    ctx->pc = 0x49ED54u;
    {
        const bool branch_taken_0x49ed54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x49ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ED54u;
        // 0x49ed58: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ed54) {
            ctx->pc = 0x49EE1Cu;
            goto label_49ee1c;
        }
    }
    ctx->pc = 0x49ED5Cu;
    // 0x49ed5c: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x49ED5Cu;
    {
        const bool branch_taken_0x49ed5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49ED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ED5Cu;
        // 0x49ed60: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ed5c) {
            ctx->pc = 0x49EFA0u;
            goto label_49efa0;
        }
    }
    ctx->pc = 0x49ED64u;
label_49ed64:
    // 0x49ed64: 0xc127aa0  jal         func_49EA80
    ctx->pc = 0x49ED64u;
    SET_GPR_U32(ctx, 31, 0x49ED6Cu);
    ctx->pc = 0x49ED68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49ED64u;
    // 0x49ed68: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EA80u, 0x49ED64u, 0x49ED6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49ED6Cu;
label_49ed6c:
    // 0x49ed6c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x49ed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x49ed70: 0x1840008b  blez        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x49ED70u;
    {
        const bool branch_taken_0x49ed70 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x49ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ED70u;
        // 0x49ed74: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ed70) {
            ctx->pc = 0x49EFA0u;
            goto label_49efa0;
        }
    }
    ctx->pc = 0x49ED78u;
label_49ed78:
    // 0x49ed78: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x49ed78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x49ed7c: 0x26070001  addiu       $a3, $s0, 0x1
    ctx->pc = 0x49ed7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x49ed80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x49ed80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ed84: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x49ed84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ed88: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x49ED88u;
    {
        const bool branch_taken_0x49ed88 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x49ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ED88u;
        // 0x49ed8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ed88) {
            ctx->pc = 0x49EDF4u;
            goto label_49edf4;
        }
    }
    ctx->pc = 0x49ED90u;
label_49ed90:
    // 0x49ed90: 0x8682001c  lh          $v0, 0x1C($s4)
    ctx->pc = 0x49ed90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x49ed94: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x49ed94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x49ed98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x49ed98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x49ed9c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x49ED9Cu;
    {
        const bool branch_taken_0x49ed9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49EDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ED9Cu;
        // 0x49eda0: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ed9c) {
            ctx->pc = 0x49EDC8u;
            goto label_49edc8;
        }
    }
    ctx->pc = 0x49EDA4u;
    // 0x49eda4: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x49eda4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x49eda8: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x49eda8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x49edac: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x49edacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49edb0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x49edb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x49edb4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x49edb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x49edb8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x49edb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x49edbc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x49edbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x49edc0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x49EDC0u;
    {
        const bool branch_taken_0x49edc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49EDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EDC0u;
        // 0x49edc4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49edc0) {
            ctx->pc = 0x49EDE0u;
            goto label_49ede0;
        }
    }
    ctx->pc = 0x49EDC8u;
label_49edc8:
    // 0x49edc8: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x49edc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x49edcc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x49edccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x49edd0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x49edd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49edd4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x49edd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x49edd8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x49edd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x49eddc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x49eddcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_49ede0:
    // 0x49ede0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x49ede0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x49ede4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x49ede4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x49ede8: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x49ede8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x49edec: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x49EDECu;
    {
        const bool branch_taken_0x49edec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49EDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EDECu;
        // 0x49edf0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49edec) {
            ctx->pc = 0x49ED90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49ed90;
        }
    }
    ctx->pc = 0x49EDF4u;
label_49edf4:
    // 0x49edf4: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x49edf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x49edf8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x49edf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49edfc: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x49edfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x49ee00: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x49ee00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x49ee04: 0x2449021  addu        $s2, $s2, $a0
    ctx->pc = 0x49ee04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x49ee08: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x49ee08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x49ee0c: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x49EE0Cu;
    {
        const bool branch_taken_0x49ee0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49EE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EE0Cu;
        // 0x49ee10: 0x2639821  addu        $s3, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ee0c) {
            ctx->pc = 0x49ED78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49ed78;
        }
    }
    ctx->pc = 0x49EE14u;
    // 0x49ee14: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x49EE14u;
    {
        const bool branch_taken_0x49ee14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49EE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EE14u;
        // 0x49ee18: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ee14) {
            ctx->pc = 0x49EFA0u;
            goto label_49efa0;
        }
    }
    ctx->pc = 0x49EE1Cu;
label_49ee1c:
    // 0x49ee1c: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x49ee1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x49ee20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49ee20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49ee24: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x49ee24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ee28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x49ee28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ee2c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x49EE2Cu;
    {
        const bool branch_taken_0x49ee2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49EE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EE2Cu;
        // 0x49ee30: 0x628004  sllv        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ee2c) {
            ctx->pc = 0x49EF14u;
            goto label_49ef14;
        }
    }
    ctx->pc = 0x49EE34u;
label_49ee34:
    // 0x49ee34: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x49ee34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x49ee38: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x49ee38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x49ee3c: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x49EE3Cu;
    {
        const bool branch_taken_0x49ee3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x49EE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EE3Cu;
        // 0x49ee40: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ee3c) {
            ctx->pc = 0x49EEB8u;
            goto label_49eeb8;
        }
    }
    ctx->pc = 0x49EE44u;
    // 0x49ee44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x49EE44u;
    {
        const bool branch_taken_0x49ee44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49EE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EE44u;
        // 0x49ee48: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ee44) {
            ctx->pc = 0x49EE5Cu;
            goto label_49ee5c;
        }
    }
    ctx->pc = 0x49EE4Cu;
    // 0x49ee4c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x49EE4Cu;
    {
        const bool branch_taken_0x49ee4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x49EE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EE4Cu;
        // 0x49ee50: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ee4c) {
            ctx->pc = 0x49EE6Cu;
            goto label_49ee6c;
        }
    }
    ctx->pc = 0x49EE54u;
    // 0x49ee54: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x49EE54u;
    {
        const bool branch_taken_0x49ee54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49EE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EE54u;
        // 0x49ee58: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ee54) {
            ctx->pc = 0x49EF9Cu;
            goto label_49ef9c;
        }
    }
    ctx->pc = 0x49EE5Cu;
label_49ee5c:
    // 0x49ee5c: 0x5064002a  beql        $v1, $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x49EE5Cu;
    {
        const bool branch_taken_0x49ee5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x49ee5c) {
            ctx->pc = 0x49EE60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49EE5Cu;
            // 0x49ee60: 0x8e820014  lw          $v0, 0x14($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49EF08u;
            goto label_49ef08;
        }
    }
    ctx->pc = 0x49EE64u;
    // 0x49ee64: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x49EE64u;
    {
        const bool branch_taken_0x49ee64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49EE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EE64u;
        // 0x49ee68: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ee64) {
            ctx->pc = 0x49EF9Cu;
            goto label_49ef9c;
        }
    }
    ctx->pc = 0x49EE6Cu;
label_49ee6c:
    // 0x49ee6c: 0xc127aa0  jal         func_49EA80
    ctx->pc = 0x49EE6Cu;
    SET_GPR_U32(ctx, 31, 0x49EE74u);
    ctx->pc = 0x49EE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EE6Cu;
    // 0x49ee70: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EA80u, 0x49EE6Cu, 0x49EE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EE74u;
label_49ee74:
    // 0x49ee74: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x49ee74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x49ee78: 0x18400049  blez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x49EE78u;
    {
        const bool branch_taken_0x49ee78 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x49EE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EE78u;
        // 0x49ee7c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ee78) {
            ctx->pc = 0x49EFA0u;
            goto label_49efa0;
        }
    }
    ctx->pc = 0x49EE80u;
label_49ee80:
    // 0x49ee80: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x49ee80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x49ee84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x49ee84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ee88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x49ee88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ee8c: 0xc10c190  jal         func_430640
    ctx->pc = 0x49EE8Cu;
    SET_GPR_U32(ctx, 31, 0x49EE94u);
    ctx->pc = 0x49EE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EE8Cu;
    // 0x49ee90: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x49EE8Cu, 0x49EE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EE94u;
label_49ee94:
    // 0x49ee94: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x49ee94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x49ee98: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x49ee98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x49ee9c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x49ee9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x49eea0: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x49eea0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x49eea4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x49eea4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x49eea8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x49EEA8u;
    {
        const bool branch_taken_0x49eea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49EEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EEA8u;
        // 0x49eeac: 0x2649821  addu        $s3, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49eea8) {
            ctx->pc = 0x49EE80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49ee80;
        }
    }
    ctx->pc = 0x49EEB0u;
    // 0x49eeb0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x49EEB0u;
    {
        const bool branch_taken_0x49eeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49EEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EEB0u;
        // 0x49eeb4: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49eeb0) {
            ctx->pc = 0x49EFA0u;
            goto label_49efa0;
        }
    }
    ctx->pc = 0x49EEB8u;
label_49eeb8:
    // 0x49eeb8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x49eeb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49eebc: 0xc127aa0  jal         func_49EA80
    ctx->pc = 0x49EEBCu;
    SET_GPR_U32(ctx, 31, 0x49EEC4u);
    ctx->pc = 0x49EEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EEBCu;
    // 0x49eec0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EA80u, 0x49EEBCu, 0x49EEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EEC4u;
label_49eec4:
    // 0x49eec4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x49eec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x49eec8: 0x18400035  blez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x49EEC8u;
    {
        const bool branch_taken_0x49eec8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x49EECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EEC8u;
        // 0x49eecc: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49eec8) {
            ctx->pc = 0x49EFA0u;
            goto label_49efa0;
        }
    }
    ctx->pc = 0x49EED0u;
label_49eed0:
    // 0x49eed0: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x49eed0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x49eed4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x49eed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49eed8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x49eed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49eedc: 0xc10c190  jal         func_430640
    ctx->pc = 0x49EEDCu;
    SET_GPR_U32(ctx, 31, 0x49EEE4u);
    ctx->pc = 0x49EEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EEDCu;
    // 0x49eee0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x49EEDCu, 0x49EEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EEE4u;
label_49eee4:
    // 0x49eee4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x49eee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x49eee8: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x49eee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x49eeec: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x49eeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x49eef0: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x49eef0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x49eef4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x49eef4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x49eef8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x49EEF8u;
    {
        const bool branch_taken_0x49eef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49EEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EEF8u;
        // 0x49eefc: 0x2649821  addu        $s3, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49eef8) {
            ctx->pc = 0x49EED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49eed0;
        }
    }
    ctx->pc = 0x49EF00u;
    // 0x49ef00: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x49EF00u;
    {
        const bool branch_taken_0x49ef00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49EF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EF00u;
        // 0x49ef04: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ef00) {
            ctx->pc = 0x49EFA0u;
            goto label_49efa0;
        }
    }
    ctx->pc = 0x49EF08u;
label_49ef08:
    // 0x49ef08: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x49ef08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ef0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x49ef0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ef10: 0x558004  sllv        $s0, $s5, $v0
    ctx->pc = 0x49ef10u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 2) & 0x1F));
label_49ef14:
    // 0x49ef14: 0xc122c80  jal         func_48B200
    ctx->pc = 0x49EF14u;
    SET_GPR_U32(ctx, 31, 0x49EF1Cu);
    ctx->pc = 0x48B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B200u, 0x49EF14u, 0x49EF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EF1Cu;
label_49ef1c:
    // 0x49ef1c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x49EF1Cu;
    {
        const bool branch_taken_0x49ef1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49EF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EF1Cu;
        // 0x49ef20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ef1c) {
            ctx->pc = 0x49EF98u;
            goto label_49ef98;
        }
    }
    ctx->pc = 0x49EF24u;
    // 0x49ef24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x49ef24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x49ef28: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x49ef28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x49ef2c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x49ef2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ef30: 0xc122612  jal         func_489848
    ctx->pc = 0x49EF30u;
    SET_GPR_U32(ctx, 31, 0x49EF38u);
    ctx->pc = 0x49EF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EF30u;
    // 0x49ef34: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x489848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x489848u, 0x49EF30u, 0x49EF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EF38u;
label_49ef38:
    // 0x49ef38: 0x27a44010  addiu       $a0, $sp, 0x4010
    ctx->pc = 0x49ef38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16400));
    // 0x49ef3c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x49ef3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ef40: 0xc1229ba  jal         func_48A6E8
    ctx->pc = 0x49EF40u;
    SET_GPR_U32(ctx, 31, 0x49EF48u);
    ctx->pc = 0x49EF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EF40u;
    // 0x49ef44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48A6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48A6E8u, 0x49EF40u, 0x49EF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EF48u;
label_49ef48:
    // 0x49ef48: 0x8e900004  lw          $s0, 0x4($s4)
    ctx->pc = 0x49ef48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x49ef4c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x49ef4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ef50: 0x8e860014  lw          $a2, 0x14($s4)
    ctx->pc = 0x49ef50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x49ef54: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x49ef54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49ef58: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x49ef58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x49ef5c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x49ef5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ef60: 0xc122ae8  jal         func_48ABA0
    ctx->pc = 0x49EF60u;
    SET_GPR_U32(ctx, 31, 0x49EF68u);
    ctx->pc = 0x49EF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EF60u;
    // 0x49ef64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48ABA0u, 0x49EF60u, 0x49EF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EF68u;
label_49ef68:
    // 0x49ef68: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x49ef68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x49ef6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49ef6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ef70: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x49ef70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x49ef74: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x49ef74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x49ef78: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x49ef78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x49ef7c: 0xc10f644  jal         func_43D910
    ctx->pc = 0x49EF7Cu;
    SET_GPR_U32(ctx, 31, 0x49EF84u);
    ctx->pc = 0x49EF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EF7Cu;
    // 0x49ef80: 0x24a5007f  addiu       $a1, $a1, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D910u, 0x49EF7Cu, 0x49EF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EF84u;
label_49ef84:
    // 0x49ef84: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x49ef84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ef88: 0xc127aa0  jal         func_49EA80
    ctx->pc = 0x49EF88u;
    SET_GPR_U32(ctx, 31, 0x49EF90u);
    ctx->pc = 0x49EF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EF88u;
    // 0x49ef8c: 0x27a54010  addiu       $a1, $sp, 0x4010 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EA80u, 0x49EF88u, 0x49EF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EF90u;
label_49ef90:
    // 0x49ef90: 0xc122cc2  jal         func_48B308
    ctx->pc = 0x49EF90u;
    SET_GPR_U32(ctx, 31, 0x49EF98u);
    ctx->pc = 0x49EF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EF90u;
    // 0x49ef94: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B308u, 0x49EF90u, 0x49EF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EF98u;
label_49ef98:
    // 0x49ef98: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x49ef98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_49ef9c:
    // 0x49ef9c: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x49ef9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_49efa0:
    // 0x49efa0: 0x7bb04470  lq          $s0, 0x4470($sp)
    ctx->pc = 0x49efa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 17520)));
    // 0x49efa4: 0x7bb14460  lq          $s1, 0x4460($sp)
    ctx->pc = 0x49efa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 17504)));
    // 0x49efa8: 0x7bb24450  lq          $s2, 0x4450($sp)
    ctx->pc = 0x49efa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 17488)));
    // 0x49efac: 0x7bb34440  lq          $s3, 0x4440($sp)
    ctx->pc = 0x49efacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 17472)));
    // 0x49efb0: 0x7bb44430  lq          $s4, 0x4430($sp)
    ctx->pc = 0x49efb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 17456)));
    // 0x49efb4: 0x7bb54420  lq          $s5, 0x4420($sp)
    ctx->pc = 0x49efb4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 17440)));
    // 0x49efb8: 0xdfbf4410  ld          $ra, 0x4410($sp)
    ctx->pc = 0x49efb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 17424)));
    // 0x49efbc: 0x3e00008  jr          $ra
    ctx->pc = 0x49EFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49EFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EFBCu;
        // 0x49efc0: 0x27bd4480  addiu       $sp, $sp, 0x4480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 17536));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49EFBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49EFC4u;
    // 0x49efc4: 0x0  nop
    ctx->pc = 0x49efc4u;
    // NOP
    ctx->pc = 0x49efc8u;
}
