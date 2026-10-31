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

// Function: sub_0020AC48
// Address: 0x20ac48 - 0x20ad30
void sub_0020AC48_0x20ac48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020AC48_0x20ac48");
#endif

    switch (ctx->pc) {
        case 0x20ac48u: goto label_20ac48;
        case 0x20ac4cu: goto label_20ac4c;
        case 0x20ac50u: goto label_20ac50;
        case 0x20ac54u: goto label_20ac54;
        case 0x20ac58u: goto label_20ac58;
        case 0x20ac5cu: goto label_20ac5c;
        case 0x20ac60u: goto label_20ac60;
        case 0x20ac64u: goto label_20ac64;
        case 0x20ac68u: goto label_20ac68;
        case 0x20ac6cu: goto label_20ac6c;
        case 0x20ac70u: goto label_20ac70;
        case 0x20ac74u: goto label_20ac74;
        case 0x20ac78u: goto label_20ac78;
        case 0x20ac7cu: goto label_20ac7c;
        case 0x20ac80u: goto label_20ac80;
        case 0x20ac84u: goto label_20ac84;
        case 0x20ac88u: goto label_20ac88;
        case 0x20ac8cu: goto label_20ac8c;
        case 0x20ac90u: goto label_20ac90;
        case 0x20ac94u: goto label_20ac94;
        case 0x20ac98u: goto label_20ac98;
        case 0x20ac9cu: goto label_20ac9c;
        case 0x20aca0u: goto label_20aca0;
        case 0x20aca4u: goto label_20aca4;
        case 0x20aca8u: goto label_20aca8;
        case 0x20acacu: goto label_20acac;
        case 0x20acb0u: goto label_20acb0;
        case 0x20acb4u: goto label_20acb4;
        case 0x20acb8u: goto label_20acb8;
        case 0x20acbcu: goto label_20acbc;
        case 0x20acc0u: goto label_20acc0;
        case 0x20acc4u: goto label_20acc4;
        case 0x20acc8u: goto label_20acc8;
        case 0x20acccu: goto label_20accc;
        case 0x20acd0u: goto label_20acd0;
        case 0x20acd4u: goto label_20acd4;
        case 0x20acd8u: goto label_20acd8;
        case 0x20acdcu: goto label_20acdc;
        case 0x20ace0u: goto label_20ace0;
        case 0x20ace4u: goto label_20ace4;
        case 0x20ace8u: goto label_20ace8;
        case 0x20acecu: goto label_20acec;
        case 0x20acf0u: goto label_20acf0;
        case 0x20acf4u: goto label_20acf4;
        case 0x20acf8u: goto label_20acf8;
        case 0x20acfcu: goto label_20acfc;
        case 0x20ad00u: goto label_20ad00;
        case 0x20ad04u: goto label_20ad04;
        case 0x20ad08u: goto label_20ad08;
        case 0x20ad0cu: goto label_20ad0c;
        case 0x20ad10u: goto label_20ad10;
        case 0x20ad14u: goto label_20ad14;
        case 0x20ad18u: goto label_20ad18;
        case 0x20ad1cu: goto label_20ad1c;
        case 0x20ad20u: goto label_20ad20;
        case 0x20ad24u: goto label_20ad24;
        case 0x20ad28u: goto label_20ad28;
        case 0x20ad2cu: goto label_20ad2c;
        default: break;
    }

    ctx->pc = 0x20ac48u;

label_20ac48:
    // 0x20ac48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20ac48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_20ac4c:
    // 0x20ac4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20ac4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20ac50:
    // 0x20ac50: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20ac50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_20ac54:
    // 0x20ac54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20ac54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20ac58:
    // 0x20ac58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20ac58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20ac5c:
    // 0x20ac5c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x20ac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_20ac60:
    // 0x20ac60: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_20ac64:
    if (ctx->pc == 0x20AC64u) {
        ctx->pc = 0x20AC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC60u;
        // 0x20ac64: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AC68u;
        goto label_20ac68;
    }
    ctx->pc = 0x20AC60u;
    {
        const bool branch_taken_0x20ac60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC60u;
        // 0x20ac64: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ac60) {
            ctx->pc = 0x20AD1Cu;
            goto label_20ad1c;
        }
    }
    ctx->pc = 0x20AC68u;
label_20ac68:
    // 0x20ac68: 0x8e250090  lw          $a1, 0x90($s1)
    ctx->pc = 0x20ac68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_20ac6c:
    // 0x20ac6c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20ac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20ac70:
    // 0x20ac70: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x20ac70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_20ac74:
    // 0x20ac74: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x20ac74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_20ac78:
    // 0x20ac78: 0x60f809  jalr        $v1
label_20ac7c:
    if (ctx->pc == 0x20AC7Cu) {
        ctx->pc = 0x20AC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC78u;
        // 0x20ac7c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AC80u;
        goto label_20ac80;
    }
    ctx->pc = 0x20AC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20AC80u);
        ctx->pc = 0x20AC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC78u;
        // 0x20ac7c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AC78u, 0x20AC80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20AC80u;
label_20ac80:
    // 0x20ac80: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x20ac80u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_20ac84:
    // 0x20ac84: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x20ac84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_20ac88:
    // 0x20ac88: 0x26109070  addiu       $s0, $s0, -0x6F90
    ctx->pc = 0x20ac88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938736));
label_20ac8c:
    // 0x20ac8c: 0x2406006f  addiu       $a2, $zero, 0x6F
    ctx->pc = 0x20ac8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
label_20ac90:
    // 0x20ac90: 0xc13a560  jal         func_4E9580
label_20ac94:
    if (ctx->pc == 0x20AC94u) {
        ctx->pc = 0x20AC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC90u;
        // 0x20ac94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AC98u;
        goto label_20ac98;
    }
    ctx->pc = 0x20AC90u;
    SET_GPR_U32(ctx, 31, 0x20AC98u);
    ctx->pc = 0x20AC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AC90u;
    // 0x20ac94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9580u, 0x20AC90u, 0x20AC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AC98u;
label_20ac98:
    // 0x20ac98: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x20ac98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_20ac9c:
    // 0x20ac9c: 0x8e25008c  lw          $a1, 0x8C($s1)
    ctx->pc = 0x20ac9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_20aca0:
    // 0x20aca0: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x20aca0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_20aca4:
    // 0x20aca4: 0x24070071  addiu       $a3, $zero, 0x71
    ctx->pc = 0x20aca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
label_20aca8:
    // 0x20aca8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20aca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20acac:
    // 0x20acac: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x20acacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_20acb0:
    // 0x20acb0: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x20acb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_20acb4:
    // 0x20acb4: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x20acb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_20acb8:
    // 0x20acb8: 0x60f809  jalr        $v1
label_20acbc:
    if (ctx->pc == 0x20ACBCu) {
        ctx->pc = 0x20ACBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACB8u;
        // 0x20acbc: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ACC0u;
        goto label_20acc0;
    }
    ctx->pc = 0x20ACB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20ACC0u);
        ctx->pc = 0x20ACBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACB8u;
        // 0x20acbc: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20ACB8u, 0x20ACC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20ACC0u;
label_20acc0:
    // 0x20acc0: 0x8e250098  lw          $a1, 0x98($s1)
    ctx->pc = 0x20acc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_20acc4:
    // 0x20acc4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20acc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20acc8:
    // 0x20acc8: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x20acc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_20accc:
    // 0x20accc: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x20acccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_20acd0:
    // 0x20acd0: 0x60f809  jalr        $v1
label_20acd4:
    if (ctx->pc == 0x20ACD4u) {
        ctx->pc = 0x20ACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACD0u;
        // 0x20acd4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ACD8u;
        goto label_20acd8;
    }
    ctx->pc = 0x20ACD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20ACD8u);
        ctx->pc = 0x20ACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACD0u;
        // 0x20acd4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20ACD0u, 0x20ACD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20ACD8u;
label_20acd8:
    // 0x20acd8: 0x8e240098  lw          $a0, 0x98($s1)
    ctx->pc = 0x20acd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_20acdc:
    // 0x20acdc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20acdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20ace0:
    // 0x20ace0: 0xc139fe8  jal         func_4E7FA0
label_20ace4:
    if (ctx->pc == 0x20ACE4u) {
        ctx->pc = 0x20ACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACE0u;
        // 0x20ace4: 0x24060074  addiu       $a2, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ACE8u;
        goto label_20ace8;
    }
    ctx->pc = 0x20ACE0u;
    SET_GPR_U32(ctx, 31, 0x20ACE8u);
    ctx->pc = 0x20ACE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ACE0u;
    // 0x20ace4: 0x24060074  addiu       $a2, $zero, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7FA0u, 0x20ACE0u, 0x20ACE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ACE8u;
label_20ace8:
    // 0x20ace8: 0x8e250094  lw          $a1, 0x94($s1)
    ctx->pc = 0x20ace8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_20acec:
    // 0x20acec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20acecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20acf0:
    // 0x20acf0: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x20acf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_20acf4:
    // 0x20acf4: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x20acf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_20acf8:
    // 0x20acf8: 0x60f809  jalr        $v1
label_20acfc:
    if (ctx->pc == 0x20ACFCu) {
        ctx->pc = 0x20ACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACF8u;
        // 0x20acfc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AD00u;
        goto label_20ad00;
    }
    ctx->pc = 0x20ACF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20AD00u);
        ctx->pc = 0x20ACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACF8u;
        // 0x20acfc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20ACF8u, 0x20AD00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20AD00u;
label_20ad00:
    // 0x20ad00: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x20ad00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_20ad04:
    // 0x20ad04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20ad04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20ad08:
    // 0x20ad08: 0xc139fc8  jal         func_4E7F20
label_20ad0c:
    if (ctx->pc == 0x20AD0Cu) {
        ctx->pc = 0x20AD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD08u;
        // 0x20ad0c: 0x24060077  addiu       $a2, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AD10u;
        goto label_20ad10;
    }
    ctx->pc = 0x20AD08u;
    SET_GPR_U32(ctx, 31, 0x20AD10u);
    ctx->pc = 0x20AD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AD08u;
    // 0x20ad0c: 0x24060077  addiu       $a2, $zero, 0x77 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7F20u, 0x20AD08u, 0x20AD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AD10u;
label_20ad10:
    // 0x20ad10: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x20ad10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_20ad14:
    // 0x20ad14: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x20ad14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_20ad18:
    // 0x20ad18: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20ad18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20ad1c:
    // 0x20ad1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20ad1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20ad20:
    // 0x20ad20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20ad20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20ad24:
    // 0x20ad24: 0x3e00008  jr          $ra
label_20ad28:
    if (ctx->pc == 0x20AD28u) {
        ctx->pc = 0x20AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD24u;
        // 0x20ad28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AD2Cu;
        goto label_20ad2c;
    }
    ctx->pc = 0x20AD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD24u;
        // 0x20ad28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AD24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AD2Cu;
label_20ad2c:
    // 0x20ad2c: 0x0  nop
    ctx->pc = 0x20ad2cu;
    // NOP
    ctx->pc = 0x20ad30u;
}
