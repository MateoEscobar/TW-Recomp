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

// Function: sub_001FBC80
// Address: 0x1fbc80 - 0x1fbd88
void sub_001FBC80_0x1fbc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBC80_0x1fbc80");
#endif

    switch (ctx->pc) {
        case 0x1fbc80u: goto label_1fbc80;
        case 0x1fbc84u: goto label_1fbc84;
        case 0x1fbc88u: goto label_1fbc88;
        case 0x1fbc8cu: goto label_1fbc8c;
        case 0x1fbc90u: goto label_1fbc90;
        case 0x1fbc94u: goto label_1fbc94;
        case 0x1fbc98u: goto label_1fbc98;
        case 0x1fbc9cu: goto label_1fbc9c;
        case 0x1fbca0u: goto label_1fbca0;
        case 0x1fbca4u: goto label_1fbca4;
        case 0x1fbca8u: goto label_1fbca8;
        case 0x1fbcacu: goto label_1fbcac;
        case 0x1fbcb0u: goto label_1fbcb0;
        case 0x1fbcb4u: goto label_1fbcb4;
        case 0x1fbcb8u: goto label_1fbcb8;
        case 0x1fbcbcu: goto label_1fbcbc;
        case 0x1fbcc0u: goto label_1fbcc0;
        case 0x1fbcc4u: goto label_1fbcc4;
        case 0x1fbcc8u: goto label_1fbcc8;
        case 0x1fbcccu: goto label_1fbccc;
        case 0x1fbcd0u: goto label_1fbcd0;
        case 0x1fbcd4u: goto label_1fbcd4;
        case 0x1fbcd8u: goto label_1fbcd8;
        case 0x1fbcdcu: goto label_1fbcdc;
        case 0x1fbce0u: goto label_1fbce0;
        case 0x1fbce4u: goto label_1fbce4;
        case 0x1fbce8u: goto label_1fbce8;
        case 0x1fbcecu: goto label_1fbcec;
        case 0x1fbcf0u: goto label_1fbcf0;
        case 0x1fbcf4u: goto label_1fbcf4;
        case 0x1fbcf8u: goto label_1fbcf8;
        case 0x1fbcfcu: goto label_1fbcfc;
        case 0x1fbd00u: goto label_1fbd00;
        case 0x1fbd04u: goto label_1fbd04;
        case 0x1fbd08u: goto label_1fbd08;
        case 0x1fbd0cu: goto label_1fbd0c;
        case 0x1fbd10u: goto label_1fbd10;
        case 0x1fbd14u: goto label_1fbd14;
        case 0x1fbd18u: goto label_1fbd18;
        case 0x1fbd1cu: goto label_1fbd1c;
        case 0x1fbd20u: goto label_1fbd20;
        case 0x1fbd24u: goto label_1fbd24;
        case 0x1fbd28u: goto label_1fbd28;
        case 0x1fbd2cu: goto label_1fbd2c;
        case 0x1fbd30u: goto label_1fbd30;
        case 0x1fbd34u: goto label_1fbd34;
        case 0x1fbd38u: goto label_1fbd38;
        case 0x1fbd3cu: goto label_1fbd3c;
        case 0x1fbd40u: goto label_1fbd40;
        case 0x1fbd44u: goto label_1fbd44;
        case 0x1fbd48u: goto label_1fbd48;
        case 0x1fbd4cu: goto label_1fbd4c;
        case 0x1fbd50u: goto label_1fbd50;
        case 0x1fbd54u: goto label_1fbd54;
        case 0x1fbd58u: goto label_1fbd58;
        case 0x1fbd5cu: goto label_1fbd5c;
        case 0x1fbd60u: goto label_1fbd60;
        case 0x1fbd64u: goto label_1fbd64;
        case 0x1fbd68u: goto label_1fbd68;
        case 0x1fbd6cu: goto label_1fbd6c;
        case 0x1fbd70u: goto label_1fbd70;
        case 0x1fbd74u: goto label_1fbd74;
        case 0x1fbd78u: goto label_1fbd78;
        case 0x1fbd7cu: goto label_1fbd7c;
        case 0x1fbd80u: goto label_1fbd80;
        case 0x1fbd84u: goto label_1fbd84;
        default: break;
    }

    ctx->pc = 0x1fbc80u;

label_1fbc80:
    // 0x1fbc80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fbc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1fbc84:
    // 0x1fbc84: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1fbc84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1fbc88:
    // 0x1fbc88: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1fbc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1fbc8c:
    // 0x1fbc8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fbc8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1fbc90:
    // 0x1fbc90: 0xc06a38c  jal         func_1A8E30
label_1fbc94:
    if (ctx->pc == 0x1FBC94u) {
        ctx->pc = 0x1FBC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC90u;
        // 0x1fbc94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBC98u;
        goto label_1fbc98;
    }
    ctx->pc = 0x1FBC90u;
    SET_GPR_U32(ctx, 31, 0x1FBC98u);
    ctx->pc = 0x1FBC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBC90u;
    // 0x1fbc94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1FBC90u, 0x1FBC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBC98u;
label_1fbc98:
    // 0x1fbc98: 0x26110078  addiu       $s1, $s0, 0x78
    ctx->pc = 0x1fbc98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_1fbc9c:
    // 0x1fbc9c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1fbc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1fbca0:
    // 0x1fbca0: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1fbca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1fbca4:
    // 0x1fbca4: 0x24638778  addiu       $v1, $v1, -0x7888
    ctx->pc = 0x1fbca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936440));
label_1fbca8:
    // 0x1fbca8: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1fbca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_1fbcac:
    // 0x1fbcac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1fbcacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1fbcb0:
    // 0x1fbcb0: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1fbcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_1fbcb4:
    // 0x1fbcb4: 0x24428510  addiu       $v0, $v0, -0x7AF0
    ctx->pc = 0x1fbcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935824));
label_1fbcb8:
    // 0x1fbcb8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1fbcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1fbcbc:
    // 0x1fbcbc: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x1fbcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_1fbcc0:
    // 0x1fbcc0: 0x2463cc88  addiu       $v1, $v1, -0x3378
    ctx->pc = 0x1fbcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954120));
label_1fbcc4:
    // 0x1fbcc4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1fbcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_1fbcc8:
    // 0x1fbcc8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1fbcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1fbccc:
    // 0x1fbccc: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1fbcccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_1fbcd0:
    // 0x1fbcd0: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1fbcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1fbcd4:
    // 0x1fbcd4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1fbcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_1fbcd8:
    // 0x1fbcd8: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1fbcd8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1fbcdc:
    // 0x1fbcdc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1fbcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_1fbce0:
    // 0x1fbce0: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x1fbce0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_1fbce4:
    // 0x1fbce4: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x1fbce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
label_1fbce8:
    // 0x1fbce8: 0x24a57db8  addiu       $a1, $a1, 0x7DB8
    ctx->pc = 0x1fbce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32184));
label_1fbcec:
    // 0x1fbcec: 0x8c4cb9c0  lw          $t4, -0x4640($v0)
    ctx->pc = 0x1fbcecu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1fbcf0:
    // 0x1fbcf0: 0x25087dc0  addiu       $t0, $t0, 0x7DC0
    ctx->pc = 0x1fbcf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32192));
label_1fbcf4:
    // 0x1fbcf4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1fbcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1fbcf8:
    // 0x1fbcf8: 0x254a7de8  addiu       $t2, $t2, 0x7DE8
    ctx->pc = 0x1fbcf8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32232));
label_1fbcfc:
    // 0x1fbcfc: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1fbcfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1fbd00:
    // 0x1fbd00: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1fbd00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fbd04:
    // 0x1fbd04: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1fbd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1fbd08:
    // 0x1fbd08: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x1fbd08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1fbd0c:
    // 0x1fbd0c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1fbd0cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fbd10:
    // 0x1fbd10: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1fbd10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1fbd14:
    // 0x1fbd14: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1fbd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1fbd18:
    // 0x1fbd18: 0x40f809  jalr        $v0
label_1fbd1c:
    if (ctx->pc == 0x1FBD1Cu) {
        ctx->pc = 0x1FBD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBD18u;
        // 0x1fbd1c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBD20u;
        goto label_1fbd20;
    }
    ctx->pc = 0x1FBD18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FBD20u);
        ctx->pc = 0x1FBD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBD18u;
        // 0x1fbd1c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBD18u, 0x1FBD20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FBD20u;
label_1fbd20:
    // 0x1fbd20: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1fbd20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1fbd24:
    // 0x1fbd24: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x1fbd24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
label_1fbd28:
    // 0x1fbd28: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1fbd28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1fbd2c:
    // 0x1fbd2c: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x1fbd2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_1fbd30:
    // 0x1fbd30: 0xa220000c  sb          $zero, 0xC($s1)
    ctx->pc = 0x1fbd30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
label_1fbd34:
    // 0x1fbd34: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x1fbd34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_1fbd38:
    // 0x1fbd38: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1fbd38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1fbd3c:
    // 0x1fbd3c: 0x24e7d5e0  addiu       $a3, $a3, -0x2A20
    ctx->pc = 0x1fbd3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956512));
label_1fbd40:
    // 0x1fbd40: 0x24c6d608  addiu       $a2, $a2, -0x29F8
    ctx->pc = 0x1fbd40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956552));
label_1fbd44:
    // 0x1fbd44: 0x24a5d638  addiu       $a1, $a1, -0x29C8
    ctx->pc = 0x1fbd44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956600));
label_1fbd48:
    // 0x1fbd48: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1fbd48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1fbd4c:
    // 0x1fbd4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fbd4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fbd50:
    // 0x1fbd50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fbd50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fbd54:
    // 0x1fbd54: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1fbd54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_1fbd58:
    // 0x1fbd58: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1fbd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1fbd5c:
    // 0x1fbd5c: 0xac630008  sw          $v1, 0x8($v1)
    ctx->pc = 0x1fbd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 3));
label_1fbd60:
    // 0x1fbd60: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1fbd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1fbd64:
    // 0x1fbd64: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fbd64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fbd68:
    // 0x1fbd68: 0xac84000c  sw          $a0, 0xC($a0)
    ctx->pc = 0x1fbd68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 4));
label_1fbd6c:
    // 0x1fbd6c: 0xae07006c  sw          $a3, 0x6C($s0)
    ctx->pc = 0x1fbd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 7));
label_1fbd70:
    // 0x1fbd70: 0xae060088  sw          $a2, 0x88($s0)
    ctx->pc = 0x1fbd70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 6));
label_1fbd74:
    // 0x1fbd74: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x1fbd74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_1fbd78:
    // 0x1fbd78: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1fbd78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fbd7c:
    // 0x1fbd7c: 0x3e00008  jr          $ra
label_1fbd80:
    if (ctx->pc == 0x1FBD80u) {
        ctx->pc = 0x1FBD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBD7Cu;
        // 0x1fbd80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBD84u;
        goto label_1fbd84;
    }
    ctx->pc = 0x1FBD7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBD7Cu;
        // 0x1fbd80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBD7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBD84u;
label_1fbd84:
    // 0x1fbd84: 0x0  nop
    ctx->pc = 0x1fbd84u;
    // NOP
    ctx->pc = 0x1fbd88u;
}
