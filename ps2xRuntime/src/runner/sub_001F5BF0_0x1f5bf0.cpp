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

// Function: sub_001F5BF0
// Address: 0x1f5bf0 - 0x1f5d20
void sub_001F5BF0_0x1f5bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5BF0_0x1f5bf0");
#endif

    switch (ctx->pc) {
        case 0x1f5bf0u: goto label_1f5bf0;
        case 0x1f5bf4u: goto label_1f5bf4;
        case 0x1f5bf8u: goto label_1f5bf8;
        case 0x1f5bfcu: goto label_1f5bfc;
        case 0x1f5c00u: goto label_1f5c00;
        case 0x1f5c04u: goto label_1f5c04;
        case 0x1f5c08u: goto label_1f5c08;
        case 0x1f5c0cu: goto label_1f5c0c;
        case 0x1f5c10u: goto label_1f5c10;
        case 0x1f5c14u: goto label_1f5c14;
        case 0x1f5c18u: goto label_1f5c18;
        case 0x1f5c1cu: goto label_1f5c1c;
        case 0x1f5c20u: goto label_1f5c20;
        case 0x1f5c24u: goto label_1f5c24;
        case 0x1f5c28u: goto label_1f5c28;
        case 0x1f5c2cu: goto label_1f5c2c;
        case 0x1f5c30u: goto label_1f5c30;
        case 0x1f5c34u: goto label_1f5c34;
        case 0x1f5c38u: goto label_1f5c38;
        case 0x1f5c3cu: goto label_1f5c3c;
        case 0x1f5c40u: goto label_1f5c40;
        case 0x1f5c44u: goto label_1f5c44;
        case 0x1f5c48u: goto label_1f5c48;
        case 0x1f5c4cu: goto label_1f5c4c;
        case 0x1f5c50u: goto label_1f5c50;
        case 0x1f5c54u: goto label_1f5c54;
        case 0x1f5c58u: goto label_1f5c58;
        case 0x1f5c5cu: goto label_1f5c5c;
        case 0x1f5c60u: goto label_1f5c60;
        case 0x1f5c64u: goto label_1f5c64;
        case 0x1f5c68u: goto label_1f5c68;
        case 0x1f5c6cu: goto label_1f5c6c;
        case 0x1f5c70u: goto label_1f5c70;
        case 0x1f5c74u: goto label_1f5c74;
        case 0x1f5c78u: goto label_1f5c78;
        case 0x1f5c7cu: goto label_1f5c7c;
        case 0x1f5c80u: goto label_1f5c80;
        case 0x1f5c84u: goto label_1f5c84;
        case 0x1f5c88u: goto label_1f5c88;
        case 0x1f5c8cu: goto label_1f5c8c;
        case 0x1f5c90u: goto label_1f5c90;
        case 0x1f5c94u: goto label_1f5c94;
        case 0x1f5c98u: goto label_1f5c98;
        case 0x1f5c9cu: goto label_1f5c9c;
        case 0x1f5ca0u: goto label_1f5ca0;
        case 0x1f5ca4u: goto label_1f5ca4;
        case 0x1f5ca8u: goto label_1f5ca8;
        case 0x1f5cacu: goto label_1f5cac;
        case 0x1f5cb0u: goto label_1f5cb0;
        case 0x1f5cb4u: goto label_1f5cb4;
        case 0x1f5cb8u: goto label_1f5cb8;
        case 0x1f5cbcu: goto label_1f5cbc;
        case 0x1f5cc0u: goto label_1f5cc0;
        case 0x1f5cc4u: goto label_1f5cc4;
        case 0x1f5cc8u: goto label_1f5cc8;
        case 0x1f5cccu: goto label_1f5ccc;
        case 0x1f5cd0u: goto label_1f5cd0;
        case 0x1f5cd4u: goto label_1f5cd4;
        case 0x1f5cd8u: goto label_1f5cd8;
        case 0x1f5cdcu: goto label_1f5cdc;
        case 0x1f5ce0u: goto label_1f5ce0;
        case 0x1f5ce4u: goto label_1f5ce4;
        case 0x1f5ce8u: goto label_1f5ce8;
        case 0x1f5cecu: goto label_1f5cec;
        case 0x1f5cf0u: goto label_1f5cf0;
        case 0x1f5cf4u: goto label_1f5cf4;
        case 0x1f5cf8u: goto label_1f5cf8;
        case 0x1f5cfcu: goto label_1f5cfc;
        case 0x1f5d00u: goto label_1f5d00;
        case 0x1f5d04u: goto label_1f5d04;
        case 0x1f5d08u: goto label_1f5d08;
        case 0x1f5d0cu: goto label_1f5d0c;
        case 0x1f5d10u: goto label_1f5d10;
        case 0x1f5d14u: goto label_1f5d14;
        case 0x1f5d18u: goto label_1f5d18;
        case 0x1f5d1cu: goto label_1f5d1c;
        default: break;
    }

    ctx->pc = 0x1f5bf0u;

label_1f5bf0:
    // 0x1f5bf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f5bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1f5bf4:
    // 0x1f5bf4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f5bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1f5bf8:
    // 0x1f5bf8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f5bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1f5bfc:
    // 0x1f5bfc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f5bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1f5c00:
    // 0x1f5c00: 0xc06a38c  jal         func_1A8E30
label_1f5c04:
    if (ctx->pc == 0x1F5C04u) {
        ctx->pc = 0x1F5C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C00u;
        // 0x1f5c04: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5C08u;
        goto label_1f5c08;
    }
    ctx->pc = 0x1F5C00u;
    SET_GPR_U32(ctx, 31, 0x1F5C08u);
    ctx->pc = 0x1F5C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5C00u;
    // 0x1f5c04: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1F5C00u, 0x1F5C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5C08u;
label_1f5c08:
    // 0x1f5c08: 0x26300078  addiu       $s0, $s1, 0x78
    ctx->pc = 0x1f5c08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_1f5c0c:
    // 0x1f5c0c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1f5c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1f5c10:
    // 0x1f5c10: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1f5c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1f5c14:
    // 0x1f5c14: 0x24638778  addiu       $v1, $v1, -0x7888
    ctx->pc = 0x1f5c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936440));
label_1f5c18:
    // 0x1f5c18: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x1f5c18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
label_1f5c1c:
    // 0x1f5c1c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1f5c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1f5c20:
    // 0x1f5c20: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x1f5c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_1f5c24:
    // 0x1f5c24: 0x24428510  addiu       $v0, $v0, -0x7AF0
    ctx->pc = 0x1f5c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935824));
label_1f5c28:
    // 0x1f5c28: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1f5c28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1f5c2c:
    // 0x1f5c2c: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x1f5c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_1f5c30:
    // 0x1f5c30: 0x2463cc88  addiu       $v1, $v1, -0x3378
    ctx->pc = 0x1f5c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954120));
label_1f5c34:
    // 0x1f5c34: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1f5c34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_1f5c38:
    // 0x1f5c38: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f5c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f5c3c:
    // 0x1f5c3c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1f5c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_1f5c40:
    // 0x1f5c40: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1f5c40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1f5c44:
    // 0x1f5c44: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1f5c44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_1f5c48:
    // 0x1f5c48: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1f5c48u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1f5c4c:
    // 0x1f5c4c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1f5c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_1f5c50:
    // 0x1f5c50: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x1f5c50u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_1f5c54:
    // 0x1f5c54: 0xae230088  sw          $v1, 0x88($s1)
    ctx->pc = 0x1f5c54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 3));
label_1f5c58:
    // 0x1f5c58: 0x24a57658  addiu       $a1, $a1, 0x7658
    ctx->pc = 0x1f5c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30296));
label_1f5c5c:
    // 0x1f5c5c: 0x8c4cb9c0  lw          $t4, -0x4640($v0)
    ctx->pc = 0x1f5c5cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1f5c60:
    // 0x1f5c60: 0x25087660  addiu       $t0, $t0, 0x7660
    ctx->pc = 0x1f5c60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 30304));
label_1f5c64:
    // 0x1f5c64: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1f5c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1f5c68:
    // 0x1f5c68: 0x254a7688  addiu       $t2, $t2, 0x7688
    ctx->pc = 0x1f5c68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 30344));
label_1f5c6c:
    // 0x1f5c6c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1f5c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1f5c70:
    // 0x1f5c70: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f5c70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f5c74:
    // 0x1f5c74: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f5c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f5c78:
    // 0x1f5c78: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x1f5c78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1f5c7c:
    // 0x1f5c7c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f5c7cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5c80:
    // 0x1f5c80: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f5c80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f5c84:
    // 0x1f5c84: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f5c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f5c88:
    // 0x1f5c88: 0x40f809  jalr        $v0
label_1f5c8c:
    if (ctx->pc == 0x1F5C8Cu) {
        ctx->pc = 0x1F5C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C88u;
        // 0x1f5c8c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5C90u;
        goto label_1f5c90;
    }
    ctx->pc = 0x1F5C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F5C90u);
        ctx->pc = 0x1F5C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C88u;
        // 0x1f5c8c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5C88u, 0x1F5C90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5C90u;
label_1f5c90:
    // 0x1f5c90: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1f5c90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1f5c94:
    // 0x1f5c94: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x1f5c94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_1f5c98:
    // 0x1f5c98: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1f5c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1f5c9c:
    // 0x1f5c9c: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x1f5c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_1f5ca0:
    // 0x1f5ca0: 0xa200000c  sb          $zero, 0xC($s0)
    ctx->pc = 0x1f5ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
label_1f5ca4:
    // 0x1f5ca4: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x1f5ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
label_1f5ca8:
    // 0x1f5ca8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1f5ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1f5cac:
    // 0x1f5cac: 0x24c6d208  addiu       $a2, $a2, -0x2DF8
    ctx->pc = 0x1f5cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955528));
label_1f5cb0:
    // 0x1f5cb0: 0x24a5d230  addiu       $a1, $a1, -0x2DD0
    ctx->pc = 0x1f5cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955568));
label_1f5cb4:
    // 0x1f5cb4: 0x2484d260  addiu       $a0, $a0, -0x2DA0
    ctx->pc = 0x1f5cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955616));
label_1f5cb8:
    // 0x1f5cb8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f5cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f5cbc:
    // 0x1f5cbc: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x1f5cbcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
label_1f5cc0:
    // 0x1f5cc0: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x1f5cc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f5cc4:
    // 0x1f5cc4: 0x262700d0  addiu       $a3, $s1, 0xD0
    ctx->pc = 0x1f5cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_1f5cc8:
    // 0x1f5cc8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f5cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_1f5ccc:
    // 0x1f5ccc: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1f5cccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1f5cd0:
    // 0x1f5cd0: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x1f5cd0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
label_1f5cd4:
    // 0x1f5cd4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f5cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f5cd8:
    // 0x1f5cd8: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x1f5cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_1f5cdc:
    // 0x1f5cdc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1f5cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f5ce0:
    // 0x1f5ce0: 0xac63000c  sw          $v1, 0xC($v1)
    ctx->pc = 0x1f5ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 3));
label_1f5ce4:
    // 0x1f5ce4: 0xae26006c  sw          $a2, 0x6C($s1)
    ctx->pc = 0x1f5ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 6));
label_1f5ce8:
    // 0x1f5ce8: 0xae250088  sw          $a1, 0x88($s1)
    ctx->pc = 0x1f5ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 5));
label_1f5cec:
    // 0x1f5cec: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x1f5cecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_1f5cf0:
    // 0x1f5cf0: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x1f5cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
label_1f5cf4:
    // 0x1f5cf4: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x1f5cf4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_1f5cf8:
    // 0x1f5cf8: 0x0  nop
    ctx->pc = 0x1f5cf8u;
    // NOP
label_1f5cfc:
    // 0x1f5cfc: 0x0  nop
    ctx->pc = 0x1f5cfcu;
    // NOP
label_1f5d00:
    // 0x1f5d00: 0x152afffb  bne         $t1, $t2, . + 4 + (-0x5 << 2)
label_1f5d04:
    if (ctx->pc == 0x1F5D04u) {
        ctx->pc = 0x1F5D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D00u;
        // 0x1f5d04: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5D08u;
        goto label_1f5d08;
    }
    ctx->pc = 0x1F5D00u;
    {
        const bool branch_taken_0x1f5d00 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 10));
        ctx->pc = 0x1F5D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D00u;
        // 0x1f5d04: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d00) {
            ctx->pc = 0x1F5CF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5cf0;
        }
    }
    ctx->pc = 0x1F5D08u;
label_1f5d08:
    // 0x1f5d08: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1f5d08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f5d0c:
    // 0x1f5d0c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f5d0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f5d10:
    // 0x1f5d10: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f5d10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f5d14:
    // 0x1f5d14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f5d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5d18:
    // 0x1f5d18: 0x3e00008  jr          $ra
label_1f5d1c:
    if (ctx->pc == 0x1F5D1Cu) {
        ctx->pc = 0x1F5D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D18u;
        // 0x1f5d1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5D20u;
        goto label_fallthrough_0x1f5d18;
    }
    ctx->pc = 0x1F5D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D18u;
        // 0x1f5d1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f5d18:
    ctx->pc = 0x1F5D20u;
}
