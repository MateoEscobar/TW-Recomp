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

// Function: sub_00127C10
// Address: 0x127c10 - 0x127cd8
void sub_00127C10_0x127c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127C10_0x127c10");
#endif

    switch (ctx->pc) {
        case 0x127c10u: goto label_127c10;
        case 0x127c14u: goto label_127c14;
        case 0x127c18u: goto label_127c18;
        case 0x127c1cu: goto label_127c1c;
        case 0x127c20u: goto label_127c20;
        case 0x127c24u: goto label_127c24;
        case 0x127c28u: goto label_127c28;
        case 0x127c2cu: goto label_127c2c;
        case 0x127c30u: goto label_127c30;
        case 0x127c34u: goto label_127c34;
        case 0x127c38u: goto label_127c38;
        case 0x127c3cu: goto label_127c3c;
        case 0x127c40u: goto label_127c40;
        case 0x127c44u: goto label_127c44;
        case 0x127c48u: goto label_127c48;
        case 0x127c4cu: goto label_127c4c;
        case 0x127c50u: goto label_127c50;
        case 0x127c54u: goto label_127c54;
        case 0x127c58u: goto label_127c58;
        case 0x127c5cu: goto label_127c5c;
        case 0x127c60u: goto label_127c60;
        case 0x127c64u: goto label_127c64;
        case 0x127c68u: goto label_127c68;
        case 0x127c6cu: goto label_127c6c;
        case 0x127c70u: goto label_127c70;
        case 0x127c74u: goto label_127c74;
        case 0x127c78u: goto label_127c78;
        case 0x127c7cu: goto label_127c7c;
        case 0x127c80u: goto label_127c80;
        case 0x127c84u: goto label_127c84;
        case 0x127c88u: goto label_127c88;
        case 0x127c8cu: goto label_127c8c;
        case 0x127c90u: goto label_127c90;
        case 0x127c94u: goto label_127c94;
        case 0x127c98u: goto label_127c98;
        case 0x127c9cu: goto label_127c9c;
        case 0x127ca0u: goto label_127ca0;
        case 0x127ca4u: goto label_127ca4;
        case 0x127ca8u: goto label_127ca8;
        case 0x127cacu: goto label_127cac;
        case 0x127cb0u: goto label_127cb0;
        case 0x127cb4u: goto label_127cb4;
        case 0x127cb8u: goto label_127cb8;
        case 0x127cbcu: goto label_127cbc;
        case 0x127cc0u: goto label_127cc0;
        case 0x127cc4u: goto label_127cc4;
        case 0x127cc8u: goto label_127cc8;
        case 0x127cccu: goto label_127ccc;
        case 0x127cd0u: goto label_127cd0;
        case 0x127cd4u: goto label_127cd4;
        default: break;
    }

    ctx->pc = 0x127c10u;

label_127c10:
    // 0x127c10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x127c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_127c14:
    // 0x127c14: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x127c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_127c18:
    // 0x127c18: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x127c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_127c1c:
    // 0x127c1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x127c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127c20:
    // 0x127c20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x127c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_127c24:
    // 0x127c24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x127c24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_127c28:
    // 0x127c28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x127c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_127c2c:
    // 0x127c2c: 0x8c4347c4  lw          $v1, 0x47C4($v0)
    ctx->pc = 0x127c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
label_127c30:
    // 0x127c30: 0x9204046c  lbu         $a0, 0x46C($s0)
    ctx->pc = 0x127c30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_127c34:
    // 0x127c34: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x127c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_127c38:
    // 0x127c38: 0x14850008  bne         $a0, $a1, . + 4 + (0x8 << 2)
label_127c3c:
    if (ctx->pc == 0x127C3Cu) {
        ctx->pc = 0x127C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127C38u;
        // 0x127c3c: 0x8c510004  lw          $s1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127C40u;
        goto label_127c40;
    }
    ctx->pc = 0x127C38u;
    {
        const bool branch_taken_0x127c38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x127C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127C38u;
        // 0x127c3c: 0x8c510004  lw          $s1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127c38) {
            ctx->pc = 0x127C5Cu;
            goto label_127c5c;
        }
    }
    ctx->pc = 0x127C40u;
label_127c40:
    // 0x127c40: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x127c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
label_127c44:
    // 0x127c44: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x127c44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_127c48:
    // 0x127c48: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x127c48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_127c4c:
    // 0x127c4c: 0xc04ab96  jal         func_12AE58
label_127c50:
    if (ctx->pc == 0x127C50u) {
        ctx->pc = 0x127C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127C4Cu;
        // 0x127c50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127C54u;
        goto label_127c54;
    }
    ctx->pc = 0x127C4Cu;
    SET_GPR_U32(ctx, 31, 0x127C54u);
    ctx->pc = 0x127C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127C4Cu;
    // 0x127c50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AE58u, 0x127C4Cu, 0x127C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127C54u;
label_127c54:
    // 0x127c54: 0x10000003  b           . + 4 + (0x3 << 2)
label_127c58:
    if (ctx->pc == 0x127C58u) {
        ctx->pc = 0x127C5Cu;
        goto label_127c5c;
    }
    ctx->pc = 0x127C54u;
    {
        const bool branch_taken_0x127c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127c54) {
            ctx->pc = 0x127C64u;
            goto label_127c64;
        }
    }
    ctx->pc = 0x127C5Cu;
label_127c5c:
    // 0x127c5c: 0xc048622  jal         func_121888
label_127c60:
    if (ctx->pc == 0x127C60u) {
        ctx->pc = 0x127C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127C5Cu;
        // 0x127c60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127C64u;
        goto label_127c64;
    }
    ctx->pc = 0x127C5Cu;
    SET_GPR_U32(ctx, 31, 0x127C64u);
    ctx->pc = 0x127C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127C5Cu;
    // 0x127c60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121888u, 0x127C5Cu, 0x127C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127C64u;
label_127c64:
    // 0x127c64: 0xc049a9a  jal         func_126A68
label_127c68:
    if (ctx->pc == 0x127C68u) {
        ctx->pc = 0x127C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127C64u;
        // 0x127c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127C6Cu;
        goto label_127c6c;
    }
    ctx->pc = 0x127C64u;
    SET_GPR_U32(ctx, 31, 0x127C6Cu);
    ctx->pc = 0x127C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127C64u;
    // 0x127c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126A68u, 0x127C64u, 0x127C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127C6Cu;
label_127c6c:
    // 0x127c6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x127c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127c70:
    // 0x127c70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x127c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_127c74:
    // 0x127c74: 0xc04a0a8  jal         func_1282A0
label_127c78:
    if (ctx->pc == 0x127C78u) {
        ctx->pc = 0x127C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127C74u;
        // 0x127c78: 0xa202046c  sb          $v0, 0x46C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127C7Cu;
        goto label_127c7c;
    }
    ctx->pc = 0x127C74u;
    SET_GPR_U32(ctx, 31, 0x127C7Cu);
    ctx->pc = 0x127C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127C74u;
    // 0x127c78: 0xa202046c  sb          $v0, 0x46C($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1282A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1282A0u, 0x127C74u, 0x127C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127C7Cu;
label_127c7c:
    // 0x127c7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x127c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_127c80:
    // 0x127c80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x127c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_127c84:
    // 0x127c84: 0xc049eb2  jal         func_127AC8
label_127c88:
    if (ctx->pc == 0x127C88u) {
        ctx->pc = 0x127C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127C84u;
        // 0x127c88: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127C8Cu;
        goto label_127c8c;
    }
    ctx->pc = 0x127C84u;
    SET_GPR_U32(ctx, 31, 0x127C8Cu);
    ctx->pc = 0x127C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127C84u;
    // 0x127c88: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127AC8u, 0x127C84u, 0x127C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127C8Cu;
label_127c8c:
    // 0x127c8c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x127c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_127c90:
    // 0x127c90: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x127c90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_127c94:
    // 0x127c94: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x127c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_127c98:
    // 0x127c98: 0x40f809  jalr        $v0
label_127c9c:
    if (ctx->pc == 0x127C9Cu) {
        ctx->pc = 0x127C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127C98u;
        // 0x127c9c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127CA0u;
        goto label_127ca0;
    }
    ctx->pc = 0x127C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x127CA0u);
        ctx->pc = 0x127C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127C98u;
        // 0x127c9c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127C98u, 0x127CA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127CA0u;
label_127ca0:
    // 0x127ca0: 0xc047e72  jal         func_11F9C8
label_127ca4:
    if (ctx->pc == 0x127CA4u) {
        ctx->pc = 0x127CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127CA0u;
        // 0x127ca4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127CA8u;
        goto label_127ca8;
    }
    ctx->pc = 0x127CA0u;
    SET_GPR_U32(ctx, 31, 0x127CA8u);
    ctx->pc = 0x127CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127CA0u;
    // 0x127ca4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x127CA0u, 0x127CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127CA8u;
label_127ca8:
    // 0x127ca8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_127cac:
    if (ctx->pc == 0x127CACu) {
        ctx->pc = 0x127CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127CA8u;
        // 0x127cac: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127CB0u;
        goto label_127cb0;
    }
    ctx->pc = 0x127CA8u;
    {
        const bool branch_taken_0x127ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127ca8) {
            ctx->pc = 0x127CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127CA8u;
            // 0x127cac: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127CC8u;
            goto label_127cc8;
        }
    }
    ctx->pc = 0x127CB0u;
label_127cb0:
    // 0x127cb0: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x127cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
label_127cb4:
    // 0x127cb4: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x127cb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_127cb8:
    // 0x127cb8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x127cb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_127cbc:
    // 0x127cbc: 0xc04ab96  jal         func_12AE58
label_127cc0:
    if (ctx->pc == 0x127CC0u) {
        ctx->pc = 0x127CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127CBCu;
        // 0x127cc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127CC4u;
        goto label_127cc4;
    }
    ctx->pc = 0x127CBCu;
    SET_GPR_U32(ctx, 31, 0x127CC4u);
    ctx->pc = 0x127CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127CBCu;
    // 0x127cc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AE58u, 0x127CBCu, 0x127CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127CC4u;
label_127cc4:
    // 0x127cc4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x127cc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_127cc8:
    // 0x127cc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x127cc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_127ccc:
    // 0x127ccc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x127cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_127cd0:
    // 0x127cd0: 0x3e00008  jr          $ra
label_127cd4:
    if (ctx->pc == 0x127CD4u) {
        ctx->pc = 0x127CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127CD0u;
        // 0x127cd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127CD8u;
        goto label_fallthrough_0x127cd0;
    }
    ctx->pc = 0x127CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127CD0u;
        // 0x127cd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x127cd0:
    ctx->pc = 0x127CD8u;
}
