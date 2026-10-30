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

// Function: sub_00357A68
// Address: 0x357a68 - 0x357ba0
void sub_00357A68_0x357a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357A68_0x357a68");
#endif

    switch (ctx->pc) {
        case 0x357a68u: goto label_357a68;
        case 0x357a6cu: goto label_357a6c;
        case 0x357a70u: goto label_357a70;
        case 0x357a74u: goto label_357a74;
        case 0x357a78u: goto label_357a78;
        case 0x357a7cu: goto label_357a7c;
        case 0x357a80u: goto label_357a80;
        case 0x357a84u: goto label_357a84;
        case 0x357a88u: goto label_357a88;
        case 0x357a8cu: goto label_357a8c;
        case 0x357a90u: goto label_357a90;
        case 0x357a94u: goto label_357a94;
        case 0x357a98u: goto label_357a98;
        case 0x357a9cu: goto label_357a9c;
        case 0x357aa0u: goto label_357aa0;
        case 0x357aa4u: goto label_357aa4;
        case 0x357aa8u: goto label_357aa8;
        case 0x357aacu: goto label_357aac;
        case 0x357ab0u: goto label_357ab0;
        case 0x357ab4u: goto label_357ab4;
        case 0x357ab8u: goto label_357ab8;
        case 0x357abcu: goto label_357abc;
        case 0x357ac0u: goto label_357ac0;
        case 0x357ac4u: goto label_357ac4;
        case 0x357ac8u: goto label_357ac8;
        case 0x357accu: goto label_357acc;
        case 0x357ad0u: goto label_357ad0;
        case 0x357ad4u: goto label_357ad4;
        case 0x357ad8u: goto label_357ad8;
        case 0x357adcu: goto label_357adc;
        case 0x357ae0u: goto label_357ae0;
        case 0x357ae4u: goto label_357ae4;
        case 0x357ae8u: goto label_357ae8;
        case 0x357aecu: goto label_357aec;
        case 0x357af0u: goto label_357af0;
        case 0x357af4u: goto label_357af4;
        case 0x357af8u: goto label_357af8;
        case 0x357afcu: goto label_357afc;
        case 0x357b00u: goto label_357b00;
        case 0x357b04u: goto label_357b04;
        case 0x357b08u: goto label_357b08;
        case 0x357b0cu: goto label_357b0c;
        case 0x357b10u: goto label_357b10;
        case 0x357b14u: goto label_357b14;
        case 0x357b18u: goto label_357b18;
        case 0x357b1cu: goto label_357b1c;
        case 0x357b20u: goto label_357b20;
        case 0x357b24u: goto label_357b24;
        case 0x357b28u: goto label_357b28;
        case 0x357b2cu: goto label_357b2c;
        case 0x357b30u: goto label_357b30;
        case 0x357b34u: goto label_357b34;
        case 0x357b38u: goto label_357b38;
        case 0x357b3cu: goto label_357b3c;
        case 0x357b40u: goto label_357b40;
        case 0x357b44u: goto label_357b44;
        case 0x357b48u: goto label_357b48;
        case 0x357b4cu: goto label_357b4c;
        case 0x357b50u: goto label_357b50;
        case 0x357b54u: goto label_357b54;
        case 0x357b58u: goto label_357b58;
        case 0x357b5cu: goto label_357b5c;
        case 0x357b60u: goto label_357b60;
        case 0x357b64u: goto label_357b64;
        case 0x357b68u: goto label_357b68;
        case 0x357b6cu: goto label_357b6c;
        case 0x357b70u: goto label_357b70;
        case 0x357b74u: goto label_357b74;
        case 0x357b78u: goto label_357b78;
        case 0x357b7cu: goto label_357b7c;
        case 0x357b80u: goto label_357b80;
        case 0x357b84u: goto label_357b84;
        case 0x357b88u: goto label_357b88;
        case 0x357b8cu: goto label_357b8c;
        case 0x357b90u: goto label_357b90;
        case 0x357b94u: goto label_357b94;
        case 0x357b98u: goto label_357b98;
        case 0x357b9cu: goto label_357b9c;
        default: break;
    }

    ctx->pc = 0x357a68u;

label_357a68:
    // 0x357a68: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x357a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
label_357a6c:
    // 0x357a6c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x357a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_357a70:
    // 0x357a70: 0x7fb00240  sq          $s0, 0x240($sp)
    ctx->pc = 0x357a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 16));
label_357a74:
    // 0x357a74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x357a74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_357a78:
    // 0x357a78: 0x7fb10230  sq          $s1, 0x230($sp)
    ctx->pc = 0x357a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 17));
label_357a7c:
    // 0x357a7c: 0x7fb30210  sq          $s3, 0x210($sp)
    ctx->pc = 0x357a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 19));
label_357a80:
    // 0x357a80: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x357a80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_357a84:
    // 0x357a84: 0x8c44b788  lw          $a0, -0x4878($v0)
    ctx->pc = 0x357a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948744)));
label_357a88:
    // 0x357a88: 0x7fb20220  sq          $s2, 0x220($sp)
    ctx->pc = 0x357a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 18));
label_357a8c:
    // 0x357a8c: 0xffbf0200  sd          $ra, 0x200($sp)
    ctx->pc = 0x357a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 31));
label_357a90:
    // 0x357a90: 0xc051630  jal         func_1458C0
label_357a94:
    if (ctx->pc == 0x357A94u) {
        ctx->pc = 0x357A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357A90u;
        // 0x357a94: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357A98u;
        goto label_357a98;
    }
    ctx->pc = 0x357A90u;
    SET_GPR_U32(ctx, 31, 0x357A98u);
    ctx->pc = 0x357A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357A90u;
    // 0x357a94: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1458C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1458C0u, 0x357A90u, 0x357A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357A98u;
label_357a98:
    // 0x357a98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_357a9c:
    if (ctx->pc == 0x357A9Cu) {
        ctx->pc = 0x357A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357A98u;
        // 0x357a9c: 0x3c060058  lui         $a2, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357AA0u;
        goto label_357aa0;
    }
    ctx->pc = 0x357A98u;
    {
        const bool branch_taken_0x357a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x357A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357A98u;
        // 0x357a9c: 0x3c060058  lui         $a2, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357a98) {
            ctx->pc = 0x357AA8u;
            goto label_357aa8;
        }
    }
    ctx->pc = 0x357AA0u;
label_357aa0:
    // 0x357aa0: 0x1000000a  b           . + 4 + (0xA << 2)
label_357aa4:
    if (ctx->pc == 0x357AA4u) {
        ctx->pc = 0x357AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357AA0u;
        // 0x357aa4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357AA8u;
        goto label_357aa8;
    }
    ctx->pc = 0x357AA0u;
    {
        const bool branch_taken_0x357aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357AA0u;
        // 0x357aa4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357aa0) {
            ctx->pc = 0x357ACCu;
            goto label_357acc;
        }
    }
    ctx->pc = 0x357AA8u;
label_357aa8:
    // 0x357aa8: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x357aa8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_357aac:
    // 0x357aac: 0x2402007e  addiu       $v0, $zero, 0x7E
    ctx->pc = 0x357aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_357ab0:
    // 0x357ab0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_357ab4:
    if (ctx->pc == 0x357AB4u) {
        ctx->pc = 0x357AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357AB0u;
        // 0x357ab4: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357AB8u;
        goto label_357ab8;
    }
    ctx->pc = 0x357AB0u;
    {
        const bool branch_taken_0x357ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x357AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357AB0u;
        // 0x357ab4: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357ab0) {
            ctx->pc = 0x357AC4u;
            goto label_357ac4;
        }
    }
    ctx->pc = 0x357AB8u;
label_357ab8:
    // 0x357ab8: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x357ab8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_357abc:
    // 0x357abc: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_357ac0:
    if (ctx->pc == 0x357AC0u) {
        ctx->pc = 0x357AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357ABCu;
        // 0x357ac0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357AC4u;
        goto label_357ac4;
    }
    ctx->pc = 0x357ABCu;
    {
        const bool branch_taken_0x357abc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x357AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357ABCu;
        // 0x357ac0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357abc) {
            ctx->pc = 0x357AE4u;
            goto label_357ae4;
        }
    }
    ctx->pc = 0x357AC4u;
label_357ac4:
    // 0x357ac4: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x357ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
label_357ac8:
    // 0x357ac8: 0x26070002  addiu       $a3, $s0, 0x2
    ctx->pc = 0x357ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_357acc:
    // 0x357acc: 0x24c69058  addiu       $a2, $a2, -0x6FA8
    ctx->pc = 0x357accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938712));
label_357ad0:
    // 0x357ad0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x357ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_357ad4:
    // 0x357ad4: 0xc10ca04  jal         func_432810
label_357ad8:
    if (ctx->pc == 0x357AD8u) {
        ctx->pc = 0x357AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357AD4u;
        // 0x357ad8: 0x240501ff  addiu       $a1, $zero, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357ADCu;
        goto label_357adc;
    }
    ctx->pc = 0x357AD4u;
    SET_GPR_U32(ctx, 31, 0x357ADCu);
    ctx->pc = 0x357AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357AD4u;
    // 0x357ad8: 0x240501ff  addiu       $a1, $zero, 0x1FF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x357AD4u, 0x357ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357ADCu;
label_357adc:
    // 0x357adc: 0x1000000e  b           . + 4 + (0xE << 2)
label_357ae0:
    if (ctx->pc == 0x357AE0u) {
        ctx->pc = 0x357AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357ADCu;
        // 0x357ae0: 0x8e22b788  lw          $v0, -0x4878($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948744)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357AE4u;
        goto label_357ae4;
    }
    ctx->pc = 0x357ADCu;
    {
        const bool branch_taken_0x357adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357ADCu;
        // 0x357ae0: 0x8e22b788  lw          $v0, -0x4878($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948744)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357adc) {
            ctx->pc = 0x357B18u;
            goto label_357b18;
        }
    }
    ctx->pc = 0x357AE4u;
label_357ae4:
    // 0x357ae4: 0x24090084  addiu       $t1, $zero, 0x84
    ctx->pc = 0x357ae4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_357ae8:
    // 0x357ae8: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x357ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_357aec:
    // 0x357aec: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x357aecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
label_357af0:
    // 0x357af0: 0x24c69078  addiu       $a2, $a2, -0x6F88
    ctx->pc = 0x357af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938744));
label_357af4:
    // 0x357af4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x357af4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_357af8:
    // 0x357af8: 0x946756dc  lhu         $a3, 0x56DC($v1)
    ctx->pc = 0x357af8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22236)));
label_357afc:
    // 0x357afc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x357afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_357b00:
    // 0x357b00: 0x240501ff  addiu       $a1, $zero, 0x1FF
    ctx->pc = 0x357b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
label_357b04:
    // 0x357b04: 0xe91018  mult        $v0, $a3, $t1
    ctx->pc = 0x357b04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_357b08:
    // 0x357b08: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x357b08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_357b0c:
    // 0x357b0c: 0xc10ca04  jal         func_432810
label_357b10:
    if (ctx->pc == 0x357B10u) {
        ctx->pc = 0x357B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357B0Cu;
        // 0x357b10: 0x24e714e8  addiu       $a3, $a3, 0x14E8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357B14u;
        goto label_357b14;
    }
    ctx->pc = 0x357B0Cu;
    SET_GPR_U32(ctx, 31, 0x357B14u);
    ctx->pc = 0x357B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357B0Cu;
    // 0x357b10: 0x24e714e8  addiu       $a3, $a3, 0x14E8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x357B0Cu, 0x357B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357B14u;
label_357b14:
    // 0x357b14: 0x8e22b788  lw          $v0, -0x4878($s1)
    ctx->pc = 0x357b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948744)));
label_357b18:
    // 0x357b18: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x357b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_357b1c:
    // 0x357b1c: 0x3c12005e  lui         $s2, 0x5E
    ctx->pc = 0x357b1cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)94 << 16));
label_357b20:
    // 0x357b20: 0x8c460090  lw          $a2, 0x90($v0)
    ctx->pc = 0x357b20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_357b24:
    // 0x357b24: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x357b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_357b28:
    // 0x357b28: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x357b28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_357b2c:
    // 0x357b2c: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x357b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_357b30:
    // 0x357b30: 0x40f809  jalr        $v0
label_357b34:
    if (ctx->pc == 0x357B34u) {
        ctx->pc = 0x357B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357B30u;
        // 0x357b34: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357B38u;
        goto label_357b38;
    }
    ctx->pc = 0x357B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x357B38u);
        ctx->pc = 0x357B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357B30u;
        // 0x357b34: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357B30u, 0x357B38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x357B38u;
label_357b38:
    // 0x357b38: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x357b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_357b3c:
    // 0x357b3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x357b3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_357b40:
    // 0x357b40: 0x8c662b04  lw          $a2, 0x2B04($v1)
    ctx->pc = 0x357b40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11012)));
label_357b44:
    // 0x357b44: 0x3c100035  lui         $s0, 0x35
    ctx->pc = 0x357b44u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)53 << 16));
label_357b48:
    // 0x357b48: 0x26106d00  addiu       $s0, $s0, 0x6D00
    ctx->pc = 0x357b48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27904));
label_357b4c:
    // 0x357b4c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x357b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_357b50:
    // 0x357b50: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x357b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_357b54:
    // 0x357b54: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x357b54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_357b58:
    // 0x357b58: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x357b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_357b5c:
    // 0x357b5c: 0x40f809  jalr        $v0
label_357b60:
    if (ctx->pc == 0x357B60u) {
        ctx->pc = 0x357B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357B5Cu;
        // 0x357b60: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357B64u;
        goto label_357b64;
    }
    ctx->pc = 0x357B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x357B64u);
        ctx->pc = 0x357B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357B5Cu;
        // 0x357b60: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357B5Cu, 0x357B64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x357B64u;
label_357b64:
    // 0x357b64: 0x8e445340  lw          $a0, 0x5340($s2)
    ctx->pc = 0x357b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 21312)));
label_357b68:
    // 0x357b68: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x357b68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_357b6c:
    // 0x357b6c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x357b6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_357b70:
    // 0x357b70: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x357b70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_357b74:
    // 0x357b74: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x357b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_357b78:
    // 0x357b78: 0xc055354  jal         func_154D50
label_357b7c:
    if (ctx->pc == 0x357B7Cu) {
        ctx->pc = 0x357B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357B78u;
        // 0x357b7c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357B80u;
        goto label_357b80;
    }
    ctx->pc = 0x357B78u;
    SET_GPR_U32(ctx, 31, 0x357B80u);
    ctx->pc = 0x357B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357B78u;
    // 0x357b7c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154D50u, 0x357B78u, 0x357B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357B80u;
label_357b80:
    // 0x357b80: 0x7bb00240  lq          $s0, 0x240($sp)
    ctx->pc = 0x357b80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_357b84:
    // 0x357b84: 0x7bb10230  lq          $s1, 0x230($sp)
    ctx->pc = 0x357b84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_357b88:
    // 0x357b88: 0x7bb20220  lq          $s2, 0x220($sp)
    ctx->pc = 0x357b88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_357b8c:
    // 0x357b8c: 0x7bb30210  lq          $s3, 0x210($sp)
    ctx->pc = 0x357b8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_357b90:
    // 0x357b90: 0xdfbf0200  ld          $ra, 0x200($sp)
    ctx->pc = 0x357b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 512)));
label_357b94:
    // 0x357b94: 0x3e00008  jr          $ra
label_357b98:
    if (ctx->pc == 0x357B98u) {
        ctx->pc = 0x357B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357B94u;
        // 0x357b98: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357B9Cu;
        goto label_357b9c;
    }
    ctx->pc = 0x357B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357B94u;
        // 0x357b98: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357B9Cu;
label_357b9c:
    // 0x357b9c: 0x0  nop
    ctx->pc = 0x357b9cu;
    // NOP
    ctx->pc = 0x357ba0u;
}
