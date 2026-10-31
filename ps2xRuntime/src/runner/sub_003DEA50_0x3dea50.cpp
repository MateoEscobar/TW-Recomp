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

// Function: sub_003DEA50
// Address: 0x3dea50 - 0x3deb88
void sub_003DEA50_0x3dea50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DEA50_0x3dea50");
#endif

    switch (ctx->pc) {
        case 0x3dea50u: goto label_3dea50;
        case 0x3dea54u: goto label_3dea54;
        case 0x3dea58u: goto label_3dea58;
        case 0x3dea5cu: goto label_3dea5c;
        case 0x3dea60u: goto label_3dea60;
        case 0x3dea64u: goto label_3dea64;
        case 0x3dea68u: goto label_3dea68;
        case 0x3dea6cu: goto label_3dea6c;
        case 0x3dea70u: goto label_3dea70;
        case 0x3dea74u: goto label_3dea74;
        case 0x3dea78u: goto label_3dea78;
        case 0x3dea7cu: goto label_3dea7c;
        case 0x3dea80u: goto label_3dea80;
        case 0x3dea84u: goto label_3dea84;
        case 0x3dea88u: goto label_3dea88;
        case 0x3dea8cu: goto label_3dea8c;
        case 0x3dea90u: goto label_3dea90;
        case 0x3dea94u: goto label_3dea94;
        case 0x3dea98u: goto label_3dea98;
        case 0x3dea9cu: goto label_3dea9c;
        case 0x3deaa0u: goto label_3deaa0;
        case 0x3deaa4u: goto label_3deaa4;
        case 0x3deaa8u: goto label_3deaa8;
        case 0x3deaacu: goto label_3deaac;
        case 0x3deab0u: goto label_3deab0;
        case 0x3deab4u: goto label_3deab4;
        case 0x3deab8u: goto label_3deab8;
        case 0x3deabcu: goto label_3deabc;
        case 0x3deac0u: goto label_3deac0;
        case 0x3deac4u: goto label_3deac4;
        case 0x3deac8u: goto label_3deac8;
        case 0x3deaccu: goto label_3deacc;
        case 0x3dead0u: goto label_3dead0;
        case 0x3dead4u: goto label_3dead4;
        case 0x3dead8u: goto label_3dead8;
        case 0x3deadcu: goto label_3deadc;
        case 0x3deae0u: goto label_3deae0;
        case 0x3deae4u: goto label_3deae4;
        case 0x3deae8u: goto label_3deae8;
        case 0x3deaecu: goto label_3deaec;
        case 0x3deaf0u: goto label_3deaf0;
        case 0x3deaf4u: goto label_3deaf4;
        case 0x3deaf8u: goto label_3deaf8;
        case 0x3deafcu: goto label_3deafc;
        case 0x3deb00u: goto label_3deb00;
        case 0x3deb04u: goto label_3deb04;
        case 0x3deb08u: goto label_3deb08;
        case 0x3deb0cu: goto label_3deb0c;
        case 0x3deb10u: goto label_3deb10;
        case 0x3deb14u: goto label_3deb14;
        case 0x3deb18u: goto label_3deb18;
        case 0x3deb1cu: goto label_3deb1c;
        case 0x3deb20u: goto label_3deb20;
        case 0x3deb24u: goto label_3deb24;
        case 0x3deb28u: goto label_3deb28;
        case 0x3deb2cu: goto label_3deb2c;
        case 0x3deb30u: goto label_3deb30;
        case 0x3deb34u: goto label_3deb34;
        case 0x3deb38u: goto label_3deb38;
        case 0x3deb3cu: goto label_3deb3c;
        case 0x3deb40u: goto label_3deb40;
        case 0x3deb44u: goto label_3deb44;
        case 0x3deb48u: goto label_3deb48;
        case 0x3deb4cu: goto label_3deb4c;
        case 0x3deb50u: goto label_3deb50;
        case 0x3deb54u: goto label_3deb54;
        case 0x3deb58u: goto label_3deb58;
        case 0x3deb5cu: goto label_3deb5c;
        case 0x3deb60u: goto label_3deb60;
        case 0x3deb64u: goto label_3deb64;
        case 0x3deb68u: goto label_3deb68;
        case 0x3deb6cu: goto label_3deb6c;
        case 0x3deb70u: goto label_3deb70;
        case 0x3deb74u: goto label_3deb74;
        case 0x3deb78u: goto label_3deb78;
        case 0x3deb7cu: goto label_3deb7c;
        case 0x3deb80u: goto label_3deb80;
        case 0x3deb84u: goto label_3deb84;
        default: break;
    }

    ctx->pc = 0x3dea50u;

label_3dea50:
    // 0x3dea50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3dea50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3dea54:
    // 0x3dea54: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3dea54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3dea58:
    // 0x3dea58: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3dea58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3dea5c:
    // 0x3dea5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dea5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dea60:
    // 0x3dea60: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3dea60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3dea64:
    // 0x3dea64: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3dea64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3dea68:
    // 0x3dea68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3dea68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3dea6c:
    // 0x3dea6c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3dea6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3dea70:
    // 0x3dea70: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3dea70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3dea74:
    // 0x3dea74: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3dea74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3dea78:
    // 0x3dea78: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3dea78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3dea7c:
    // 0x3dea7c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3dea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3dea80:
    // 0x3dea80: 0x40f809  jalr        $v0
label_3dea84:
    if (ctx->pc == 0x3DEA84u) {
        ctx->pc = 0x3DEA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEA80u;
        // 0x3dea84: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEA88u;
        goto label_3dea88;
    }
    ctx->pc = 0x3DEA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DEA88u);
        ctx->pc = 0x3DEA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEA80u;
        // 0x3dea84: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DEA80u, 0x3DEA88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DEA88u;
label_3dea88:
    // 0x3dea88: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3dea88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dea8c:
    // 0x3dea8c: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3dea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3dea90:
    // 0x3dea90: 0x12420022  beq         $s2, $v0, . + 4 + (0x22 << 2)
label_3dea94:
    if (ctx->pc == 0x3DEA94u) {
        ctx->pc = 0x3DEA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEA90u;
        // 0x3dea94: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEA98u;
        goto label_3dea98;
    }
    ctx->pc = 0x3DEA90u;
    {
        const bool branch_taken_0x3dea90 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DEA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEA90u;
        // 0x3dea94: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dea90) {
            ctx->pc = 0x3DEB1Cu;
            goto label_3deb1c;
        }
    }
    ctx->pc = 0x3DEA98u;
label_3dea98:
    // 0x3dea98: 0x16420035  bne         $s2, $v0, . + 4 + (0x35 << 2)
label_3dea9c:
    if (ctx->pc == 0x3DEA9Cu) {
        ctx->pc = 0x3DEA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEA98u;
        // 0x3dea9c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEAA0u;
        goto label_3deaa0;
    }
    ctx->pc = 0x3DEA98u;
    {
        const bool branch_taken_0x3dea98 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x3DEA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEA98u;
        // 0x3dea9c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dea98) {
            ctx->pc = 0x3DEB70u;
            goto label_3deb70;
        }
    }
    ctx->pc = 0x3DEAA0u;
label_3deaa0:
    // 0x3deaa0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3deaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3deaa4:
    // 0x3deaa4: 0xc0ea12a  jal         func_3A84A8
label_3deaa8:
    if (ctx->pc == 0x3DEAA8u) {
        ctx->pc = 0x3DEAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEAA4u;
        // 0x3deaa8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEAACu;
        goto label_3deaac;
    }
    ctx->pc = 0x3DEAA4u;
    SET_GPR_U32(ctx, 31, 0x3DEAACu);
    ctx->pc = 0x3DEAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEAA4u;
    // 0x3deaa8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DEAA4u, 0x3DEAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEAACu;
label_3deaac:
    // 0x3deaac: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3deaacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3deab0:
    // 0x3deab0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3deab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3deab4:
    // 0x3deab4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3deab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3deab8:
    // 0x3deab8: 0xc0ea158  jal         func_3A8560
label_3deabc:
    if (ctx->pc == 0x3DEABCu) {
        ctx->pc = 0x3DEABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEAB8u;
        // 0x3deabc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEAC0u;
        goto label_3deac0;
    }
    ctx->pc = 0x3DEAB8u;
    SET_GPR_U32(ctx, 31, 0x3DEAC0u);
    ctx->pc = 0x3DEABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEAB8u;
    // 0x3deabc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3DEAB8u, 0x3DEAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEAC0u;
label_3deac0:
    // 0x3deac0: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x3deac0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3deac4:
    // 0x3deac4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3deac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3deac8:
    // 0x3deac8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x3deac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3deacc:
    // 0x3deacc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3deaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3dead0:
    // 0x3dead0: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3dead0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3dead4:
    // 0x3dead4: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3dead4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3dead8:
    // 0x3dead8: 0x60f809  jalr        $v1
label_3deadc:
    if (ctx->pc == 0x3DEADCu) {
        ctx->pc = 0x3DEADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEAD8u;
        // 0x3deadc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEAE0u;
        goto label_3deae0;
    }
    ctx->pc = 0x3DEAD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3DEAE0u);
        ctx->pc = 0x3DEADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEAD8u;
        // 0x3deadc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DEAD8u, 0x3DEAE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DEAE0u;
label_3deae0:
    // 0x3deae0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3deae0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3deae4:
    // 0x3deae4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3deae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3deae8:
    // 0x3deae8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3deae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3deaec:
    // 0x3deaec: 0xc0ea158  jal         func_3A8560
label_3deaf0:
    if (ctx->pc == 0x3DEAF0u) {
        ctx->pc = 0x3DEAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEAECu;
        // 0x3deaf0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEAF4u;
        goto label_3deaf4;
    }
    ctx->pc = 0x3DEAECu;
    SET_GPR_U32(ctx, 31, 0x3DEAF4u);
    ctx->pc = 0x3DEAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEAECu;
    // 0x3deaf0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3DEAECu, 0x3DEAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEAF4u;
label_3deaf4:
    // 0x3deaf4: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x3deaf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3deaf8:
    // 0x3deaf8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3deaf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3deafc:
    // 0x3deafc: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x3deafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3deb00:
    // 0x3deb00: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3deb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3deb04:
    // 0x3deb04: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3deb04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3deb08:
    // 0x3deb08: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3deb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3deb0c:
    // 0x3deb0c: 0x60f809  jalr        $v1
label_3deb10:
    if (ctx->pc == 0x3DEB10u) {
        ctx->pc = 0x3DEB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEB0Cu;
        // 0x3deb10: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEB14u;
        goto label_3deb14;
    }
    ctx->pc = 0x3DEB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3DEB14u);
        ctx->pc = 0x3DEB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEB0Cu;
        // 0x3deb10: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DEB0Cu, 0x3DEB14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DEB14u;
label_3deb14:
    // 0x3deb14: 0x10000016  b           . + 4 + (0x16 << 2)
label_3deb18:
    if (ctx->pc == 0x3DEB18u) {
        ctx->pc = 0x3DEB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEB14u;
        // 0x3deb18: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEB1Cu;
        goto label_3deb1c;
    }
    ctx->pc = 0x3DEB14u;
    {
        const bool branch_taken_0x3deb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEB14u;
        // 0x3deb18: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3deb14) {
            ctx->pc = 0x3DEB70u;
            goto label_3deb70;
        }
    }
    ctx->pc = 0x3DEB1Cu;
label_3deb1c:
    // 0x3deb1c: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3deb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3deb20:
    // 0x3deb20: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x3deb20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_3deb24:
    // 0x3deb24: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x3deb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3deb28:
    // 0x3deb28: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3deb28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3deb2c:
    // 0x3deb2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3deb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3deb30:
    // 0x3deb30: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3deb30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3deb34:
    // 0x3deb34: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x3deb34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3deb38:
    // 0x3deb38: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3deb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3deb3c:
    // 0x3deb3c: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3deb3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3deb40:
    // 0x3deb40: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3deb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3deb44:
    // 0x3deb44: 0x60f809  jalr        $v1
label_3deb48:
    if (ctx->pc == 0x3DEB48u) {
        ctx->pc = 0x3DEB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEB44u;
        // 0x3deb48: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEB4Cu;
        goto label_3deb4c;
    }
    ctx->pc = 0x3DEB44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3DEB4Cu);
        ctx->pc = 0x3DEB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEB44u;
        // 0x3deb48: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DEB44u, 0x3DEB4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DEB4Cu;
label_3deb4c:
    // 0x3deb4c: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x3deb4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3deb50:
    // 0x3deb50: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3deb50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3deb54:
    // 0x3deb54: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x3deb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3deb58:
    // 0x3deb58: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3deb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3deb5c:
    // 0x3deb5c: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3deb5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3deb60:
    // 0x3deb60: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3deb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3deb64:
    // 0x3deb64: 0x60f809  jalr        $v1
label_3deb68:
    if (ctx->pc == 0x3DEB68u) {
        ctx->pc = 0x3DEB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEB64u;
        // 0x3deb68: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEB6Cu;
        goto label_3deb6c;
    }
    ctx->pc = 0x3DEB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3DEB6Cu);
        ctx->pc = 0x3DEB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEB64u;
        // 0x3deb68: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DEB64u, 0x3DEB6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DEB6Cu;
label_3deb6c:
    // 0x3deb6c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3deb6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3deb70:
    // 0x3deb70: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3deb70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3deb74:
    // 0x3deb74: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3deb74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3deb78:
    // 0x3deb78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3deb78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3deb7c:
    // 0x3deb7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3deb7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3deb80:
    // 0x3deb80: 0x3e00008  jr          $ra
label_3deb84:
    if (ctx->pc == 0x3DEB84u) {
        ctx->pc = 0x3DEB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEB80u;
        // 0x3deb84: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEB88u;
        goto label_fallthrough_0x3deb80;
    }
    ctx->pc = 0x3DEB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DEB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEB80u;
        // 0x3deb84: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DEB80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3deb80:
    ctx->pc = 0x3DEB88u;
}
