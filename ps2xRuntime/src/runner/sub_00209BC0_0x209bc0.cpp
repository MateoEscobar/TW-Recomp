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

// Function: sub_00209BC0
// Address: 0x209bc0 - 0x209cc8
void sub_00209BC0_0x209bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209BC0_0x209bc0");
#endif

    switch (ctx->pc) {
        case 0x209bc0u: goto label_209bc0;
        case 0x209bc4u: goto label_209bc4;
        case 0x209bc8u: goto label_209bc8;
        case 0x209bccu: goto label_209bcc;
        case 0x209bd0u: goto label_209bd0;
        case 0x209bd4u: goto label_209bd4;
        case 0x209bd8u: goto label_209bd8;
        case 0x209bdcu: goto label_209bdc;
        case 0x209be0u: goto label_209be0;
        case 0x209be4u: goto label_209be4;
        case 0x209be8u: goto label_209be8;
        case 0x209becu: goto label_209bec;
        case 0x209bf0u: goto label_209bf0;
        case 0x209bf4u: goto label_209bf4;
        case 0x209bf8u: goto label_209bf8;
        case 0x209bfcu: goto label_209bfc;
        case 0x209c00u: goto label_209c00;
        case 0x209c04u: goto label_209c04;
        case 0x209c08u: goto label_209c08;
        case 0x209c0cu: goto label_209c0c;
        case 0x209c10u: goto label_209c10;
        case 0x209c14u: goto label_209c14;
        case 0x209c18u: goto label_209c18;
        case 0x209c1cu: goto label_209c1c;
        case 0x209c20u: goto label_209c20;
        case 0x209c24u: goto label_209c24;
        case 0x209c28u: goto label_209c28;
        case 0x209c2cu: goto label_209c2c;
        case 0x209c30u: goto label_209c30;
        case 0x209c34u: goto label_209c34;
        case 0x209c38u: goto label_209c38;
        case 0x209c3cu: goto label_209c3c;
        case 0x209c40u: goto label_209c40;
        case 0x209c44u: goto label_209c44;
        case 0x209c48u: goto label_209c48;
        case 0x209c4cu: goto label_209c4c;
        case 0x209c50u: goto label_209c50;
        case 0x209c54u: goto label_209c54;
        case 0x209c58u: goto label_209c58;
        case 0x209c5cu: goto label_209c5c;
        case 0x209c60u: goto label_209c60;
        case 0x209c64u: goto label_209c64;
        case 0x209c68u: goto label_209c68;
        case 0x209c6cu: goto label_209c6c;
        case 0x209c70u: goto label_209c70;
        case 0x209c74u: goto label_209c74;
        case 0x209c78u: goto label_209c78;
        case 0x209c7cu: goto label_209c7c;
        case 0x209c80u: goto label_209c80;
        case 0x209c84u: goto label_209c84;
        case 0x209c88u: goto label_209c88;
        case 0x209c8cu: goto label_209c8c;
        case 0x209c90u: goto label_209c90;
        case 0x209c94u: goto label_209c94;
        case 0x209c98u: goto label_209c98;
        case 0x209c9cu: goto label_209c9c;
        case 0x209ca0u: goto label_209ca0;
        case 0x209ca4u: goto label_209ca4;
        case 0x209ca8u: goto label_209ca8;
        case 0x209cacu: goto label_209cac;
        case 0x209cb0u: goto label_209cb0;
        case 0x209cb4u: goto label_209cb4;
        case 0x209cb8u: goto label_209cb8;
        case 0x209cbcu: goto label_209cbc;
        case 0x209cc0u: goto label_209cc0;
        case 0x209cc4u: goto label_209cc4;
        default: break;
    }

    ctx->pc = 0x209bc0u;

label_209bc0:
    // 0x209bc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x209bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_209bc4:
    // 0x209bc4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x209bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_209bc8:
    // 0x209bc8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x209bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_209bcc:
    // 0x209bcc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x209bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_209bd0:
    // 0x209bd0: 0xc06a38c  jal         func_1A8E30
label_209bd4:
    if (ctx->pc == 0x209BD4u) {
        ctx->pc = 0x209BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209BD0u;
        // 0x209bd4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209BD8u;
        goto label_209bd8;
    }
    ctx->pc = 0x209BD0u;
    SET_GPR_U32(ctx, 31, 0x209BD8u);
    ctx->pc = 0x209BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209BD0u;
    // 0x209bd4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x209BD0u, 0x209BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209BD8u;
label_209bd8:
    // 0x209bd8: 0x26110078  addiu       $s1, $s0, 0x78
    ctx->pc = 0x209bd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_209bdc:
    // 0x209bdc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x209bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_209be0:
    // 0x209be0: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x209be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_209be4:
    // 0x209be4: 0x24638778  addiu       $v1, $v1, -0x7888
    ctx->pc = 0x209be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936440));
label_209be8:
    // 0x209be8: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x209be8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_209bec:
    // 0x209bec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x209becu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_209bf0:
    // 0x209bf0: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x209bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_209bf4:
    // 0x209bf4: 0x24428510  addiu       $v0, $v0, -0x7AF0
    ctx->pc = 0x209bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935824));
label_209bf8:
    // 0x209bf8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x209bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_209bfc:
    // 0x209bfc: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x209bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_209c00:
    // 0x209c00: 0x2463cc88  addiu       $v1, $v1, -0x3378
    ctx->pc = 0x209c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954120));
label_209c04:
    // 0x209c04: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x209c04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_209c08:
    // 0x209c08: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x209c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_209c0c:
    // 0x209c0c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x209c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_209c10:
    // 0x209c10: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x209c10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_209c14:
    // 0x209c14: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x209c14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_209c18:
    // 0x209c18: 0x3c080056  lui         $t0, 0x56
    ctx->pc = 0x209c18u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)86 << 16));
label_209c1c:
    // 0x209c1c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x209c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_209c20:
    // 0x209c20: 0x3c0a0056  lui         $t2, 0x56
    ctx->pc = 0x209c20u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)86 << 16));
label_209c24:
    // 0x209c24: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x209c24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
label_209c28:
    // 0x209c28: 0x24a58eb0  addiu       $a1, $a1, -0x7150
    ctx->pc = 0x209c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938288));
label_209c2c:
    // 0x209c2c: 0x8c4cb9c0  lw          $t4, -0x4640($v0)
    ctx->pc = 0x209c2cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_209c30:
    // 0x209c30: 0x25088eb8  addiu       $t0, $t0, -0x7148
    ctx->pc = 0x209c30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294938296));
label_209c34:
    // 0x209c34: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x209c34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_209c38:
    // 0x209c38: 0x254a8ee0  addiu       $t2, $t2, -0x7120
    ctx->pc = 0x209c38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294938336));
label_209c3c:
    // 0x209c3c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x209c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_209c40:
    // 0x209c40: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x209c40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_209c44:
    // 0x209c44: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x209c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_209c48:
    // 0x209c48: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x209c48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_209c4c:
    // 0x209c4c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x209c4cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209c50:
    // 0x209c50: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x209c50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_209c54:
    // 0x209c54: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x209c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_209c58:
    // 0x209c58: 0x40f809  jalr        $v0
label_209c5c:
    if (ctx->pc == 0x209C5Cu) {
        ctx->pc = 0x209C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209C58u;
        // 0x209c5c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209C60u;
        goto label_209c60;
    }
    ctx->pc = 0x209C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x209C60u);
        ctx->pc = 0x209C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209C58u;
        // 0x209c5c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209C58u, 0x209C60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209C60u;
label_209c60:
    // 0x209c60: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x209c60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_209c64:
    // 0x209c64: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x209c64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
label_209c68:
    // 0x209c68: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x209c68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_209c6c:
    // 0x209c6c: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x209c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_209c70:
    // 0x209c70: 0xa220000c  sb          $zero, 0xC($s1)
    ctx->pc = 0x209c70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
label_209c74:
    // 0x209c74: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x209c74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_209c78:
    // 0x209c78: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x209c78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_209c7c:
    // 0x209c7c: 0x24e7e360  addiu       $a3, $a3, -0x1CA0
    ctx->pc = 0x209c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294959968));
label_209c80:
    // 0x209c80: 0x24c6e388  addiu       $a2, $a2, -0x1C78
    ctx->pc = 0x209c80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960008));
label_209c84:
    // 0x209c84: 0x24a5e3b8  addiu       $a1, $a1, -0x1C48
    ctx->pc = 0x209c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960056));
label_209c88:
    // 0x209c88: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x209c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_209c8c:
    // 0x209c8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x209c8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_209c90:
    // 0x209c90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x209c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_209c94:
    // 0x209c94: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x209c94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_209c98:
    // 0x209c98: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x209c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_209c9c:
    // 0x209c9c: 0xac630008  sw          $v1, 0x8($v1)
    ctx->pc = 0x209c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 3));
label_209ca0:
    // 0x209ca0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x209ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_209ca4:
    // 0x209ca4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x209ca4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_209ca8:
    // 0x209ca8: 0xac84000c  sw          $a0, 0xC($a0)
    ctx->pc = 0x209ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 4));
label_209cac:
    // 0x209cac: 0xae07006c  sw          $a3, 0x6C($s0)
    ctx->pc = 0x209cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 7));
label_209cb0:
    // 0x209cb0: 0xae060088  sw          $a2, 0x88($s0)
    ctx->pc = 0x209cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 6));
label_209cb4:
    // 0x209cb4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x209cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_209cb8:
    // 0x209cb8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x209cb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_209cbc:
    // 0x209cbc: 0x3e00008  jr          $ra
label_209cc0:
    if (ctx->pc == 0x209CC0u) {
        ctx->pc = 0x209CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209CBCu;
        // 0x209cc0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209CC4u;
        goto label_209cc4;
    }
    ctx->pc = 0x209CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209CBCu;
        // 0x209cc0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209CC4u;
label_209cc4:
    // 0x209cc4: 0x0  nop
    ctx->pc = 0x209cc4u;
    // NOP
    ctx->pc = 0x209cc8u;
}
