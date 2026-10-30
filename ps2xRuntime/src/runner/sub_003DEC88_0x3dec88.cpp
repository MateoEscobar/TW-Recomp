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

// Function: sub_003DEC88
// Address: 0x3dec88 - 0x3ded88
void sub_003DEC88_0x3dec88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DEC88_0x3dec88");
#endif

    switch (ctx->pc) {
        case 0x3dec88u: goto label_3dec88;
        case 0x3dec8cu: goto label_3dec8c;
        case 0x3dec90u: goto label_3dec90;
        case 0x3dec94u: goto label_3dec94;
        case 0x3dec98u: goto label_3dec98;
        case 0x3dec9cu: goto label_3dec9c;
        case 0x3deca0u: goto label_3deca0;
        case 0x3deca4u: goto label_3deca4;
        case 0x3deca8u: goto label_3deca8;
        case 0x3decacu: goto label_3decac;
        case 0x3decb0u: goto label_3decb0;
        case 0x3decb4u: goto label_3decb4;
        case 0x3decb8u: goto label_3decb8;
        case 0x3decbcu: goto label_3decbc;
        case 0x3decc0u: goto label_3decc0;
        case 0x3decc4u: goto label_3decc4;
        case 0x3decc8u: goto label_3decc8;
        case 0x3decccu: goto label_3deccc;
        case 0x3decd0u: goto label_3decd0;
        case 0x3decd4u: goto label_3decd4;
        case 0x3decd8u: goto label_3decd8;
        case 0x3decdcu: goto label_3decdc;
        case 0x3dece0u: goto label_3dece0;
        case 0x3dece4u: goto label_3dece4;
        case 0x3dece8u: goto label_3dece8;
        case 0x3dececu: goto label_3decec;
        case 0x3decf0u: goto label_3decf0;
        case 0x3decf4u: goto label_3decf4;
        case 0x3decf8u: goto label_3decf8;
        case 0x3decfcu: goto label_3decfc;
        case 0x3ded00u: goto label_3ded00;
        case 0x3ded04u: goto label_3ded04;
        case 0x3ded08u: goto label_3ded08;
        case 0x3ded0cu: goto label_3ded0c;
        case 0x3ded10u: goto label_3ded10;
        case 0x3ded14u: goto label_3ded14;
        case 0x3ded18u: goto label_3ded18;
        case 0x3ded1cu: goto label_3ded1c;
        case 0x3ded20u: goto label_3ded20;
        case 0x3ded24u: goto label_3ded24;
        case 0x3ded28u: goto label_3ded28;
        case 0x3ded2cu: goto label_3ded2c;
        case 0x3ded30u: goto label_3ded30;
        case 0x3ded34u: goto label_3ded34;
        case 0x3ded38u: goto label_3ded38;
        case 0x3ded3cu: goto label_3ded3c;
        case 0x3ded40u: goto label_3ded40;
        case 0x3ded44u: goto label_3ded44;
        case 0x3ded48u: goto label_3ded48;
        case 0x3ded4cu: goto label_3ded4c;
        case 0x3ded50u: goto label_3ded50;
        case 0x3ded54u: goto label_3ded54;
        case 0x3ded58u: goto label_3ded58;
        case 0x3ded5cu: goto label_3ded5c;
        case 0x3ded60u: goto label_3ded60;
        case 0x3ded64u: goto label_3ded64;
        case 0x3ded68u: goto label_3ded68;
        case 0x3ded6cu: goto label_3ded6c;
        case 0x3ded70u: goto label_3ded70;
        case 0x3ded74u: goto label_3ded74;
        case 0x3ded78u: goto label_3ded78;
        case 0x3ded7cu: goto label_3ded7c;
        case 0x3ded80u: goto label_3ded80;
        case 0x3ded84u: goto label_3ded84;
        default: break;
    }

    ctx->pc = 0x3dec88u;

label_3dec88:
    // 0x3dec88: 0x27bdf780  addiu       $sp, $sp, -0x880
    ctx->pc = 0x3dec88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965120));
label_3dec8c:
    // 0x3dec8c: 0x7fb20850  sq          $s2, 0x850($sp)
    ctx->pc = 0x3dec8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 18));
label_3dec90:
    // 0x3dec90: 0x7fb30840  sq          $s3, 0x840($sp)
    ctx->pc = 0x3dec90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 19));
label_3dec94:
    // 0x3dec94: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3dec94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dec98:
    // 0x3dec98: 0x7fb00870  sq          $s0, 0x870($sp)
    ctx->pc = 0x3dec98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 16));
label_3dec9c:
    // 0x3dec9c: 0x7fb10860  sq          $s1, 0x860($sp)
    ctx->pc = 0x3dec9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 17));
label_3deca0:
    // 0x3deca0: 0xffbf0830  sd          $ra, 0x830($sp)
    ctx->pc = 0x3deca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2096), GPR_U64(ctx, 31));
label_3deca4:
    // 0x3deca4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3deca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3deca8:
    // 0x3deca8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3deca8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3decac:
    // 0x3decac: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3decacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3decb0:
    // 0x3decb0: 0x40f809  jalr        $v0
label_3decb4:
    if (ctx->pc == 0x3DECB4u) {
        ctx->pc = 0x3DECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DECB0u;
        // 0x3decb4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DECB8u;
        goto label_3decb8;
    }
    ctx->pc = 0x3DECB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DECB8u);
        ctx->pc = 0x3DECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DECB0u;
        // 0x3decb4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DECB0u, 0x3DECB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DECB8u;
label_3decb8:
    // 0x3decb8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3decb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3decbc:
    // 0x3decbc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3decbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3decc0:
    // 0x3decc0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3decc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3decc4:
    // 0x3decc4: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3decc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3decc8:
    // 0x3decc8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3decc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3deccc:
    // 0x3deccc: 0x0  nop
    ctx->pc = 0x3decccu;
    // NOP
label_3decd0:
    // 0x3decd0: 0x0  nop
    ctx->pc = 0x3decd0u;
    // NOP
label_3decd4:
    // 0x3decd4: 0x0  nop
    ctx->pc = 0x3decd4u;
    // NOP
label_3decd8:
    // 0x3decd8: 0x0  nop
    ctx->pc = 0x3decd8u;
    // NOP
label_3decdc:
    // 0x3decdc: 0x0  nop
    ctx->pc = 0x3decdcu;
    // NOP
label_3dece0:
    // 0x3dece0: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3dece4:
    if (ctx->pc == 0x3DECE4u) {
        ctx->pc = 0x3DECE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DECE0u;
        // 0x3dece4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DECE8u;
        goto label_3dece8;
    }
    ctx->pc = 0x3DECE0u;
    {
        const bool branch_taken_0x3dece0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3DECE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DECE0u;
        // 0x3dece4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dece0) {
            ctx->pc = 0x3DECD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3decd0;
        }
    }
    ctx->pc = 0x3DECE8u;
label_3dece8:
    // 0x3dece8: 0xc138ddc  jal         func_4E3770
label_3decec:
    if (ctx->pc == 0x3DECECu) {
        ctx->pc = 0x3DECF0u;
        goto label_3decf0;
    }
    ctx->pc = 0x3DECE8u;
    SET_GPR_U32(ctx, 31, 0x3DECF0u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3DECE8u, 0x3DECF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DECF0u;
label_3decf0:
    // 0x3decf0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3decf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3decf4:
    // 0x3decf4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3decf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3decf8:
    // 0x3decf8: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
label_3decfc:
    if (ctx->pc == 0x3DECFCu) {
        ctx->pc = 0x3DECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DECF8u;
        // 0x3decfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DED00u;
        goto label_3ded00;
    }
    ctx->pc = 0x3DECF8u;
    {
        const bool branch_taken_0x3decf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DECF8u;
        // 0x3decfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3decf8) {
            ctx->pc = 0x3DED6Cu;
            goto label_3ded6c;
        }
    }
    ctx->pc = 0x3DED00u;
label_3ded00:
    // 0x3ded00: 0xc0e9694  jal         func_3A5A50
label_3ded04:
    if (ctx->pc == 0x3DED04u) {
        ctx->pc = 0x3DED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DED00u;
        // 0x3ded04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DED08u;
        goto label_3ded08;
    }
    ctx->pc = 0x3DED00u;
    SET_GPR_U32(ctx, 31, 0x3DED08u);
    ctx->pc = 0x3DED04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DED00u;
    // 0x3ded04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3DED00u, 0x3DED08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DED08u;
label_3ded08:
    // 0x3ded08: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3ded0c:
    if (ctx->pc == 0x3DED0Cu) {
        ctx->pc = 0x3DED0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DED08u;
        // 0x3ded0c: 0x7a420010  lq          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DED10u;
        goto label_3ded10;
    }
    ctx->pc = 0x3DED08u;
    {
        const bool branch_taken_0x3ded08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ded08) {
            ctx->pc = 0x3DED0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DED08u;
            // 0x3ded0c: 0x7a420010  lq          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DED18u;
            goto label_3ded18;
        }
    }
    ctx->pc = 0x3DED10u;
label_3ded10:
    // 0x3ded10: 0x10000016  b           . + 4 + (0x16 << 2)
label_3ded14:
    if (ctx->pc == 0x3DED14u) {
        ctx->pc = 0x3DED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DED10u;
        // 0x3ded14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DED18u;
        goto label_3ded18;
    }
    ctx->pc = 0x3DED10u;
    {
        const bool branch_taken_0x3ded10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DED10u;
        // 0x3ded14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ded10) {
            ctx->pc = 0x3DED6Cu;
            goto label_3ded6c;
        }
    }
    ctx->pc = 0x3DED18u;
label_3ded18:
    // 0x3ded18: 0x27b10410  addiu       $s1, $sp, 0x410
    ctx->pc = 0x3ded18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3ded1c:
    // 0x3ded1c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3ded1cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3ded20:
    // 0x3ded20: 0x27a50820  addiu       $a1, $sp, 0x820
    ctx->pc = 0x3ded20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2080));
label_3ded24:
    // 0x3ded24: 0x7fa20820  sq          $v0, 0x820($sp)
    ctx->pc = 0x3ded24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2080), GPR_VEC(ctx, 2));
label_3ded28:
    // 0x3ded28: 0x261052c0  addiu       $s0, $s0, 0x52C0
    ctx->pc = 0x3ded28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21184));
label_3ded2c:
    // 0x3ded2c: 0xc0e9f6a  jal         func_3A7DA8
label_3ded30:
    if (ctx->pc == 0x3DED30u) {
        ctx->pc = 0x3DED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DED2Cu;
        // 0x3ded30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DED34u;
        goto label_3ded34;
    }
    ctx->pc = 0x3DED2Cu;
    SET_GPR_U32(ctx, 31, 0x3DED34u);
    ctx->pc = 0x3DED30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DED2Cu;
    // 0x3ded30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7DA8u, 0x3DED2Cu, 0x3DED34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DED34u;
label_3ded34:
    // 0x3ded34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ded34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ded38:
    // 0x3ded38: 0xc0f15bc  jal         func_3C56F0
label_3ded3c:
    if (ctx->pc == 0x3DED3Cu) {
        ctx->pc = 0x3DED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DED38u;
        // 0x3ded3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DED40u;
        goto label_3ded40;
    }
    ctx->pc = 0x3DED38u;
    SET_GPR_U32(ctx, 31, 0x3DED40u);
    ctx->pc = 0x3DED3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DED38u;
    // 0x3ded3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3DED38u, 0x3DED40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DED40u;
label_3ded40:
    // 0x3ded40: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3ded40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3ded44:
    // 0x3ded44: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3ded44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3ded48:
    // 0x3ded48: 0xc0cd4ee  jal         func_3353B8
label_3ded4c:
    if (ctx->pc == 0x3DED4Cu) {
        ctx->pc = 0x3DED4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DED48u;
        // 0x3ded4c: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DED50u;
        goto label_3ded50;
    }
    ctx->pc = 0x3DED48u;
    SET_GPR_U32(ctx, 31, 0x3DED50u);
    ctx->pc = 0x3DED4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DED48u;
    // 0x3ded4c: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3DED48u, 0x3DED50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DED50u;
label_3ded50:
    // 0x3ded50: 0x2445000a  addiu       $a1, $v0, 0xA
    ctx->pc = 0x3ded50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
label_3ded54:
    // 0x3ded54: 0xc0e858c  jal         func_3A1630
label_3ded58:
    if (ctx->pc == 0x3DED58u) {
        ctx->pc = 0x3DED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DED54u;
        // 0x3ded58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DED5Cu;
        goto label_3ded5c;
    }
    ctx->pc = 0x3DED54u;
    SET_GPR_U32(ctx, 31, 0x3DED5Cu);
    ctx->pc = 0x3DED58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DED54u;
    // 0x3ded58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DED54u, 0x3DED5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DED5Cu;
label_3ded5c:
    // 0x3ded5c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3ded5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3ded60:
    // 0x3ded60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ded60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ded64:
    // 0x3ded64: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ded64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3ded68:
    // 0x3ded68: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x3ded68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_3ded6c:
    // 0x3ded6c: 0x7bb00870  lq          $s0, 0x870($sp)
    ctx->pc = 0x3ded6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2160)));
label_3ded70:
    // 0x3ded70: 0x7bb10860  lq          $s1, 0x860($sp)
    ctx->pc = 0x3ded70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2144)));
label_3ded74:
    // 0x3ded74: 0x7bb20850  lq          $s2, 0x850($sp)
    ctx->pc = 0x3ded74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2128)));
label_3ded78:
    // 0x3ded78: 0x7bb30840  lq          $s3, 0x840($sp)
    ctx->pc = 0x3ded78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2112)));
label_3ded7c:
    // 0x3ded7c: 0xdfbf0830  ld          $ra, 0x830($sp)
    ctx->pc = 0x3ded7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2096)));
label_3ded80:
    // 0x3ded80: 0x3e00008  jr          $ra
label_3ded84:
    if (ctx->pc == 0x3DED84u) {
        ctx->pc = 0x3DED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DED80u;
        // 0x3ded84: 0x27bd0880  addiu       $sp, $sp, 0x880 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DED88u;
        goto label_fallthrough_0x3ded80;
    }
    ctx->pc = 0x3DED80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DED80u;
        // 0x3ded84: 0x27bd0880  addiu       $sp, $sp, 0x880 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DED80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ded80:
    ctx->pc = 0x3DED88u;
}
