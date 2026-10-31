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

// Function: sub_003DA9E0
// Address: 0x3da9e0 - 0x3daab0
void sub_003DA9E0_0x3da9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA9E0_0x3da9e0");
#endif

    switch (ctx->pc) {
        case 0x3da9e0u: goto label_3da9e0;
        case 0x3da9e4u: goto label_3da9e4;
        case 0x3da9e8u: goto label_3da9e8;
        case 0x3da9ecu: goto label_3da9ec;
        case 0x3da9f0u: goto label_3da9f0;
        case 0x3da9f4u: goto label_3da9f4;
        case 0x3da9f8u: goto label_3da9f8;
        case 0x3da9fcu: goto label_3da9fc;
        case 0x3daa00u: goto label_3daa00;
        case 0x3daa04u: goto label_3daa04;
        case 0x3daa08u: goto label_3daa08;
        case 0x3daa0cu: goto label_3daa0c;
        case 0x3daa10u: goto label_3daa10;
        case 0x3daa14u: goto label_3daa14;
        case 0x3daa18u: goto label_3daa18;
        case 0x3daa1cu: goto label_3daa1c;
        case 0x3daa20u: goto label_3daa20;
        case 0x3daa24u: goto label_3daa24;
        case 0x3daa28u: goto label_3daa28;
        case 0x3daa2cu: goto label_3daa2c;
        case 0x3daa30u: goto label_3daa30;
        case 0x3daa34u: goto label_3daa34;
        case 0x3daa38u: goto label_3daa38;
        case 0x3daa3cu: goto label_3daa3c;
        case 0x3daa40u: goto label_3daa40;
        case 0x3daa44u: goto label_3daa44;
        case 0x3daa48u: goto label_3daa48;
        case 0x3daa4cu: goto label_3daa4c;
        case 0x3daa50u: goto label_3daa50;
        case 0x3daa54u: goto label_3daa54;
        case 0x3daa58u: goto label_3daa58;
        case 0x3daa5cu: goto label_3daa5c;
        case 0x3daa60u: goto label_3daa60;
        case 0x3daa64u: goto label_3daa64;
        case 0x3daa68u: goto label_3daa68;
        case 0x3daa6cu: goto label_3daa6c;
        case 0x3daa70u: goto label_3daa70;
        case 0x3daa74u: goto label_3daa74;
        case 0x3daa78u: goto label_3daa78;
        case 0x3daa7cu: goto label_3daa7c;
        case 0x3daa80u: goto label_3daa80;
        case 0x3daa84u: goto label_3daa84;
        case 0x3daa88u: goto label_3daa88;
        case 0x3daa8cu: goto label_3daa8c;
        case 0x3daa90u: goto label_3daa90;
        case 0x3daa94u: goto label_3daa94;
        case 0x3daa98u: goto label_3daa98;
        case 0x3daa9cu: goto label_3daa9c;
        case 0x3daaa0u: goto label_3daaa0;
        case 0x3daaa4u: goto label_3daaa4;
        case 0x3daaa8u: goto label_3daaa8;
        case 0x3daaacu: goto label_3daaac;
        default: break;
    }

    ctx->pc = 0x3da9e0u;

label_3da9e0:
    // 0x3da9e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3da9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3da9e4:
    // 0x3da9e4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3da9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3da9e8:
    // 0x3da9e8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3da9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3da9ec:
    // 0x3da9ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3da9ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3da9f0:
    // 0x3da9f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3da9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3da9f4:
    // 0x3da9f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3da9f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3da9f8:
    // 0x3da9f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3da9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3da9fc:
    // 0x3da9fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3da9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3daa00:
    // 0x3daa00: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3daa00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3daa04:
    // 0x3daa04: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3daa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3daa08:
    // 0x3daa08: 0x40f809  jalr        $v0
label_3daa0c:
    if (ctx->pc == 0x3DAA0Cu) {
        ctx->pc = 0x3DAA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAA08u;
        // 0x3daa0c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAA10u;
        goto label_3daa10;
    }
    ctx->pc = 0x3DAA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DAA10u);
        ctx->pc = 0x3DAA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAA08u;
        // 0x3daa0c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DAA08u, 0x3DAA10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DAA10u;
label_3daa10:
    // 0x3daa10: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3daa10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3daa14:
    // 0x3daa14: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x3daa14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3daa18:
    // 0x3daa18: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
label_3daa1c:
    if (ctx->pc == 0x3DAA1Cu) {
        ctx->pc = 0x3DAA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAA18u;
        // 0x3daa1c: 0x2e220013  sltiu       $v0, $s1, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAA20u;
        goto label_3daa20;
    }
    ctx->pc = 0x3DAA18u;
    {
        const bool branch_taken_0x3daa18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DAA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAA18u;
        // 0x3daa1c: 0x2e220013  sltiu       $v0, $s1, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3daa18) {
            ctx->pc = 0x3DAA38u;
            goto label_3daa38;
        }
    }
    ctx->pc = 0x3DAA20u;
label_3daa20:
    // 0x3daa20: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_3daa24:
    if (ctx->pc == 0x3DAA24u) {
        ctx->pc = 0x3DAA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAA20u;
        // 0x3daa24: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAA28u;
        goto label_3daa28;
    }
    ctx->pc = 0x3DAA20u;
    {
        const bool branch_taken_0x3daa20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAA20u;
        // 0x3daa24: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3daa20) {
            ctx->pc = 0x3DAA98u;
            goto label_3daa98;
        }
    }
    ctx->pc = 0x3DAA28u;
label_3daa28:
    // 0x3daa28: 0x1222000e  beq         $s1, $v0, . + 4 + (0xE << 2)
label_3daa2c:
    if (ctx->pc == 0x3DAA2Cu) {
        ctx->pc = 0x3DAA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAA28u;
        // 0x3daa2c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAA30u;
        goto label_3daa30;
    }
    ctx->pc = 0x3DAA28u;
    {
        const bool branch_taken_0x3daa28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DAA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAA28u;
        // 0x3daa2c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3daa28) {
            ctx->pc = 0x3DAA64u;
            goto label_3daa64;
        }
    }
    ctx->pc = 0x3DAA30u;
label_3daa30:
    // 0x3daa30: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3daa34:
    if (ctx->pc == 0x3DAA34u) {
        ctx->pc = 0x3DAA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAA30u;
        // 0x3daa34: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAA38u;
        goto label_3daa38;
    }
    ctx->pc = 0x3DAA30u;
    {
        const bool branch_taken_0x3daa30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAA30u;
        // 0x3daa34: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3daa30) {
            ctx->pc = 0x3DAA9Cu;
            goto label_3daa9c;
        }
    }
    ctx->pc = 0x3DAA38u;
label_3daa38:
    // 0x3daa38: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3daa38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3daa3c:
    // 0x3daa3c: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_3daa40:
    if (ctx->pc == 0x3DAA40u) {
        ctx->pc = 0x3DAA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAA3Cu;
        // 0x3daa40: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAA44u;
        goto label_3daa44;
    }
    ctx->pc = 0x3DAA3Cu;
    {
        const bool branch_taken_0x3daa3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3daa3c) {
            ctx->pc = 0x3DAA40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DAA3Cu;
            // 0x3daa40: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DAA9Cu;
            goto label_3daa9c;
        }
    }
    ctx->pc = 0x3DAA44u;
label_3daa44:
    // 0x3daa44: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x3daa44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3daa48:
    // 0x3daa48: 0x3c043260  lui         $a0, 0x3260
    ctx->pc = 0x3daa48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12896 << 16));
label_3daa4c:
    // 0x3daa4c: 0x348471de  ori         $a0, $a0, 0x71DE
    ctx->pc = 0x3daa4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)29150);
label_3daa50:
    // 0x3daa50: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3daa50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3daa54:
    // 0x3daa54: 0xc045c64  jal         func_117190
label_3daa58:
    if (ctx->pc == 0x3DAA58u) {
        ctx->pc = 0x3DAA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAA54u;
        // 0x3daa58: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAA5Cu;
        goto label_3daa5c;
    }
    ctx->pc = 0x3DAA54u;
    SET_GPR_U32(ctx, 31, 0x3DAA5Cu);
    ctx->pc = 0x3DAA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAA54u;
    // 0x3daa58: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117190u, 0x3DAA54u, 0x3DAA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAA5Cu;
label_3daa5c:
    // 0x3daa5c: 0x1000000e  b           . + 4 + (0xE << 2)
label_3daa60:
    if (ctx->pc == 0x3DAA60u) {
        ctx->pc = 0x3DAA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAA5Cu;
        // 0x3daa60: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAA64u;
        goto label_3daa64;
    }
    ctx->pc = 0x3DAA5Cu;
    {
        const bool branch_taken_0x3daa5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAA5Cu;
        // 0x3daa60: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3daa5c) {
            ctx->pc = 0x3DAA98u;
            goto label_3daa98;
        }
    }
    ctx->pc = 0x3DAA64u;
label_3daa64:
    // 0x3daa64: 0xc0e90ca  jal         func_3A4328
label_3daa68:
    if (ctx->pc == 0x3DAA68u) {
        ctx->pc = 0x3DAA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAA64u;
        // 0x3daa68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAA6Cu;
        goto label_3daa6c;
    }
    ctx->pc = 0x3DAA64u;
    SET_GPR_U32(ctx, 31, 0x3DAA6Cu);
    ctx->pc = 0x3DAA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAA64u;
    // 0x3daa68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3DAA64u, 0x3DAA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAA6Cu;
label_3daa6c:
    // 0x3daa6c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3daa6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3daa70:
    // 0x3daa70: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3daa70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3daa74:
    // 0x3daa74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3daa74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3daa78:
    // 0x3daa78: 0xc0e911e  jal         func_3A4478
label_3daa7c:
    if (ctx->pc == 0x3DAA7Cu) {
        ctx->pc = 0x3DAA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAA78u;
        // 0x3daa7c: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAA80u;
        goto label_3daa80;
    }
    ctx->pc = 0x3DAA78u;
    SET_GPR_U32(ctx, 31, 0x3DAA80u);
    ctx->pc = 0x3DAA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAA78u;
    // 0x3daa7c: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3DAA78u, 0x3DAA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAA80u;
label_3daa80:
    // 0x3daa80: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3daa80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3daa84:
    // 0x3daa84: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3daa84u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3daa88:
    // 0x3daa88: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x3daa88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_3daa8c:
    // 0x3daa8c: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x3daa8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
label_3daa90:
    // 0x3daa90: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x3daa90u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
label_3daa94:
    // 0x3daa94: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3daa94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3daa98:
    // 0x3daa98: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3daa98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3daa9c:
    // 0x3daa9c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3daa9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3daaa0:
    // 0x3daaa0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3daaa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3daaa4:
    // 0x3daaa4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3daaa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3daaa8:
    // 0x3daaa8: 0x3e00008  jr          $ra
label_3daaac:
    if (ctx->pc == 0x3DAAACu) {
        ctx->pc = 0x3DAAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAAA8u;
        // 0x3daaac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAAB0u;
        goto label_fallthrough_0x3daaa8;
    }
    ctx->pc = 0x3DAAA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DAAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAAA8u;
        // 0x3daaac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DAAA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3daaa8:
    ctx->pc = 0x3DAAB0u;
}
