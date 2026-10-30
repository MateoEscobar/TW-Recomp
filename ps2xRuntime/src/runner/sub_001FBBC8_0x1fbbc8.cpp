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

// Function: sub_001FBBC8
// Address: 0x1fbbc8 - 0x1fbc80
void sub_001FBBC8_0x1fbbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBBC8_0x1fbbc8");
#endif

    switch (ctx->pc) {
        case 0x1fbbc8u: goto label_1fbbc8;
        case 0x1fbbccu: goto label_1fbbcc;
        case 0x1fbbd0u: goto label_1fbbd0;
        case 0x1fbbd4u: goto label_1fbbd4;
        case 0x1fbbd8u: goto label_1fbbd8;
        case 0x1fbbdcu: goto label_1fbbdc;
        case 0x1fbbe0u: goto label_1fbbe0;
        case 0x1fbbe4u: goto label_1fbbe4;
        case 0x1fbbe8u: goto label_1fbbe8;
        case 0x1fbbecu: goto label_1fbbec;
        case 0x1fbbf0u: goto label_1fbbf0;
        case 0x1fbbf4u: goto label_1fbbf4;
        case 0x1fbbf8u: goto label_1fbbf8;
        case 0x1fbbfcu: goto label_1fbbfc;
        case 0x1fbc00u: goto label_1fbc00;
        case 0x1fbc04u: goto label_1fbc04;
        case 0x1fbc08u: goto label_1fbc08;
        case 0x1fbc0cu: goto label_1fbc0c;
        case 0x1fbc10u: goto label_1fbc10;
        case 0x1fbc14u: goto label_1fbc14;
        case 0x1fbc18u: goto label_1fbc18;
        case 0x1fbc1cu: goto label_1fbc1c;
        case 0x1fbc20u: goto label_1fbc20;
        case 0x1fbc24u: goto label_1fbc24;
        case 0x1fbc28u: goto label_1fbc28;
        case 0x1fbc2cu: goto label_1fbc2c;
        case 0x1fbc30u: goto label_1fbc30;
        case 0x1fbc34u: goto label_1fbc34;
        case 0x1fbc38u: goto label_1fbc38;
        case 0x1fbc3cu: goto label_1fbc3c;
        case 0x1fbc40u: goto label_1fbc40;
        case 0x1fbc44u: goto label_1fbc44;
        case 0x1fbc48u: goto label_1fbc48;
        case 0x1fbc4cu: goto label_1fbc4c;
        case 0x1fbc50u: goto label_1fbc50;
        case 0x1fbc54u: goto label_1fbc54;
        case 0x1fbc58u: goto label_1fbc58;
        case 0x1fbc5cu: goto label_1fbc5c;
        case 0x1fbc60u: goto label_1fbc60;
        case 0x1fbc64u: goto label_1fbc64;
        case 0x1fbc68u: goto label_1fbc68;
        case 0x1fbc6cu: goto label_1fbc6c;
        case 0x1fbc70u: goto label_1fbc70;
        case 0x1fbc74u: goto label_1fbc74;
        case 0x1fbc78u: goto label_1fbc78;
        case 0x1fbc7cu: goto label_1fbc7c;
        default: break;
    }

    ctx->pc = 0x1fbbc8u;

label_1fbbc8:
    // 0x1fbbc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fbbc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fbbcc:
    // 0x1fbbcc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fbbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1fbbd0:
    // 0x1fbbd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fbbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fbbd4:
    // 0x1fbbd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fbbd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fbbd8:
    // 0x1fbbd8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1fbbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fbbdc:
    // 0x1fbbdc: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1fbbdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1fbbe0:
    // 0x1fbbe0: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1fbbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1fbbe4:
    // 0x1fbbe4: 0x40f809  jalr        $v0
label_1fbbe8:
    if (ctx->pc == 0x1FBBE8u) {
        ctx->pc = 0x1FBBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBBE4u;
        // 0x1fbbe8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBBECu;
        goto label_1fbbec;
    }
    ctx->pc = 0x1FBBE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FBBECu);
        ctx->pc = 0x1FBBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBBE4u;
        // 0x1fbbe8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBBE4u, 0x1FBBECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FBBECu;
label_1fbbec:
    // 0x1fbbec: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
label_1fbbf0:
    if (ctx->pc == 0x1FBBF0u) {
        ctx->pc = 0x1FBBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBBECu;
        // 0x1fbbf0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBBF4u;
        goto label_1fbbf4;
    }
    ctx->pc = 0x1FBBECu;
    {
        const bool branch_taken_0x1fbbec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbbec) {
            ctx->pc = 0x1FBBF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBBECu;
            // 0x1fbbf0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBC74u;
            goto label_1fbc74;
        }
    }
    ctx->pc = 0x1FBBF4u;
label_1fbbf4:
    // 0x1fbbf4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1fbbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fbbf8:
    // 0x1fbbf8: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1fbbf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1fbbfc:
    // 0x1fbbfc: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1fbbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1fbc00:
    // 0x1fbc00: 0x40f809  jalr        $v0
label_1fbc04:
    if (ctx->pc == 0x1FBC04u) {
        ctx->pc = 0x1FBC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC00u;
        // 0x1fbc04: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBC08u;
        goto label_1fbc08;
    }
    ctx->pc = 0x1FBC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FBC08u);
        ctx->pc = 0x1FBC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC00u;
        // 0x1fbc04: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBC00u, 0x1FBC08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FBC08u;
label_1fbc08:
    // 0x1fbc08: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_1fbc0c:
    if (ctx->pc == 0x1FBC0Cu) {
        ctx->pc = 0x1FBC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC08u;
        // 0x1fbc0c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBC10u;
        goto label_1fbc10;
    }
    ctx->pc = 0x1FBC08u;
    {
        const bool branch_taken_0x1fbc08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbc08) {
            ctx->pc = 0x1FBC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBC08u;
            // 0x1fbc0c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBC74u;
            goto label_1fbc74;
        }
    }
    ctx->pc = 0x1FBC10u;
label_1fbc10:
    // 0x1fbc10: 0x8e050098  lw          $a1, 0x98($s0)
    ctx->pc = 0x1fbc10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_1fbc14:
    // 0x1fbc14: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fbc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fbc18:
    // 0x1fbc18: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1fbc18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1fbc1c:
    // 0x1fbc1c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1fbc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1fbc20:
    // 0x1fbc20: 0x60f809  jalr        $v1
label_1fbc24:
    if (ctx->pc == 0x1FBC24u) {
        ctx->pc = 0x1FBC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC20u;
        // 0x1fbc24: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBC28u;
        goto label_1fbc28;
    }
    ctx->pc = 0x1FBC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FBC28u);
        ctx->pc = 0x1FBC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC20u;
        // 0x1fbc24: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBC20u, 0x1FBC28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FBC28u;
label_1fbc28:
    // 0x1fbc28: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x1fbc28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_1fbc2c:
    // 0x1fbc2c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fbc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fbc30:
    // 0x1fbc30: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1fbc30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1fbc34:
    // 0x1fbc34: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1fbc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1fbc38:
    // 0x1fbc38: 0x60f809  jalr        $v1
label_1fbc3c:
    if (ctx->pc == 0x1FBC3Cu) {
        ctx->pc = 0x1FBC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC38u;
        // 0x1fbc3c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBC40u;
        goto label_1fbc40;
    }
    ctx->pc = 0x1FBC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FBC40u);
        ctx->pc = 0x1FBC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC38u;
        // 0x1fbc3c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBC38u, 0x1FBC40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FBC40u;
label_1fbc40:
    // 0x1fbc40: 0x8e05009c  lw          $a1, 0x9C($s0)
    ctx->pc = 0x1fbc40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_1fbc44:
    // 0x1fbc44: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fbc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fbc48:
    // 0x1fbc48: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1fbc48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1fbc4c:
    // 0x1fbc4c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1fbc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1fbc50:
    // 0x1fbc50: 0x60f809  jalr        $v1
label_1fbc54:
    if (ctx->pc == 0x1FBC54u) {
        ctx->pc = 0x1FBC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC50u;
        // 0x1fbc54: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBC58u;
        goto label_1fbc58;
    }
    ctx->pc = 0x1FBC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FBC58u);
        ctx->pc = 0x1FBC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC50u;
        // 0x1fbc54: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBC50u, 0x1FBC58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FBC58u;
label_1fbc58:
    // 0x1fbc58: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x1fbc58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1fbc5c:
    // 0x1fbc5c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fbc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fbc60:
    // 0x1fbc60: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1fbc60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1fbc64:
    // 0x1fbc64: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1fbc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1fbc68:
    // 0x1fbc68: 0x60f809  jalr        $v1
label_1fbc6c:
    if (ctx->pc == 0x1FBC6Cu) {
        ctx->pc = 0x1FBC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC68u;
        // 0x1fbc6c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBC70u;
        goto label_1fbc70;
    }
    ctx->pc = 0x1FBC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FBC70u);
        ctx->pc = 0x1FBC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC68u;
        // 0x1fbc6c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBC68u, 0x1FBC70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FBC70u;
label_1fbc70:
    // 0x1fbc70: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fbc70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fbc74:
    // 0x1fbc74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fbc74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fbc78:
    // 0x1fbc78: 0x3e00008  jr          $ra
label_1fbc7c:
    if (ctx->pc == 0x1FBC7Cu) {
        ctx->pc = 0x1FBC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC78u;
        // 0x1fbc7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBC80u;
        goto label_fallthrough_0x1fbc78;
    }
    ctx->pc = 0x1FBC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC78u;
        // 0x1fbc7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fbc78:
    ctx->pc = 0x1FBC80u;
}
