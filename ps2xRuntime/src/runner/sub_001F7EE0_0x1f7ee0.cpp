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

// Function: sub_001F7EE0
// Address: 0x1f7ee0 - 0x1f7fe8
void sub_001F7EE0_0x1f7ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7EE0_0x1f7ee0");
#endif

    switch (ctx->pc) {
        case 0x1f7ee0u: goto label_1f7ee0;
        case 0x1f7ee4u: goto label_1f7ee4;
        case 0x1f7ee8u: goto label_1f7ee8;
        case 0x1f7eecu: goto label_1f7eec;
        case 0x1f7ef0u: goto label_1f7ef0;
        case 0x1f7ef4u: goto label_1f7ef4;
        case 0x1f7ef8u: goto label_1f7ef8;
        case 0x1f7efcu: goto label_1f7efc;
        case 0x1f7f00u: goto label_1f7f00;
        case 0x1f7f04u: goto label_1f7f04;
        case 0x1f7f08u: goto label_1f7f08;
        case 0x1f7f0cu: goto label_1f7f0c;
        case 0x1f7f10u: goto label_1f7f10;
        case 0x1f7f14u: goto label_1f7f14;
        case 0x1f7f18u: goto label_1f7f18;
        case 0x1f7f1cu: goto label_1f7f1c;
        case 0x1f7f20u: goto label_1f7f20;
        case 0x1f7f24u: goto label_1f7f24;
        case 0x1f7f28u: goto label_1f7f28;
        case 0x1f7f2cu: goto label_1f7f2c;
        case 0x1f7f30u: goto label_1f7f30;
        case 0x1f7f34u: goto label_1f7f34;
        case 0x1f7f38u: goto label_1f7f38;
        case 0x1f7f3cu: goto label_1f7f3c;
        case 0x1f7f40u: goto label_1f7f40;
        case 0x1f7f44u: goto label_1f7f44;
        case 0x1f7f48u: goto label_1f7f48;
        case 0x1f7f4cu: goto label_1f7f4c;
        case 0x1f7f50u: goto label_1f7f50;
        case 0x1f7f54u: goto label_1f7f54;
        case 0x1f7f58u: goto label_1f7f58;
        case 0x1f7f5cu: goto label_1f7f5c;
        case 0x1f7f60u: goto label_1f7f60;
        case 0x1f7f64u: goto label_1f7f64;
        case 0x1f7f68u: goto label_1f7f68;
        case 0x1f7f6cu: goto label_1f7f6c;
        case 0x1f7f70u: goto label_1f7f70;
        case 0x1f7f74u: goto label_1f7f74;
        case 0x1f7f78u: goto label_1f7f78;
        case 0x1f7f7cu: goto label_1f7f7c;
        case 0x1f7f80u: goto label_1f7f80;
        case 0x1f7f84u: goto label_1f7f84;
        case 0x1f7f88u: goto label_1f7f88;
        case 0x1f7f8cu: goto label_1f7f8c;
        case 0x1f7f90u: goto label_1f7f90;
        case 0x1f7f94u: goto label_1f7f94;
        case 0x1f7f98u: goto label_1f7f98;
        case 0x1f7f9cu: goto label_1f7f9c;
        case 0x1f7fa0u: goto label_1f7fa0;
        case 0x1f7fa4u: goto label_1f7fa4;
        case 0x1f7fa8u: goto label_1f7fa8;
        case 0x1f7facu: goto label_1f7fac;
        case 0x1f7fb0u: goto label_1f7fb0;
        case 0x1f7fb4u: goto label_1f7fb4;
        case 0x1f7fb8u: goto label_1f7fb8;
        case 0x1f7fbcu: goto label_1f7fbc;
        case 0x1f7fc0u: goto label_1f7fc0;
        case 0x1f7fc4u: goto label_1f7fc4;
        case 0x1f7fc8u: goto label_1f7fc8;
        case 0x1f7fccu: goto label_1f7fcc;
        case 0x1f7fd0u: goto label_1f7fd0;
        case 0x1f7fd4u: goto label_1f7fd4;
        case 0x1f7fd8u: goto label_1f7fd8;
        case 0x1f7fdcu: goto label_1f7fdc;
        case 0x1f7fe0u: goto label_1f7fe0;
        case 0x1f7fe4u: goto label_1f7fe4;
        default: break;
    }

    ctx->pc = 0x1f7ee0u;

label_1f7ee0:
    // 0x1f7ee0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f7ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1f7ee4:
    // 0x1f7ee4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f7ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1f7ee8:
    // 0x1f7ee8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f7ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1f7eec:
    // 0x1f7eec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f7eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1f7ef0:
    // 0x1f7ef0: 0xc06a38c  jal         func_1A8E30
label_1f7ef4:
    if (ctx->pc == 0x1F7EF4u) {
        ctx->pc = 0x1F7EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7EF0u;
        // 0x1f7ef4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7EF8u;
        goto label_1f7ef8;
    }
    ctx->pc = 0x1F7EF0u;
    SET_GPR_U32(ctx, 31, 0x1F7EF8u);
    ctx->pc = 0x1F7EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7EF0u;
    // 0x1f7ef4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1F7EF0u, 0x1F7EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7EF8u;
label_1f7ef8:
    // 0x1f7ef8: 0x26110078  addiu       $s1, $s0, 0x78
    ctx->pc = 0x1f7ef8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_1f7efc:
    // 0x1f7efc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1f7efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1f7f00:
    // 0x1f7f00: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1f7f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1f7f04:
    // 0x1f7f04: 0x24638778  addiu       $v1, $v1, -0x7888
    ctx->pc = 0x1f7f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936440));
label_1f7f08:
    // 0x1f7f08: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1f7f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_1f7f0c:
    // 0x1f7f0c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1f7f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1f7f10:
    // 0x1f7f10: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1f7f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_1f7f14:
    // 0x1f7f14: 0x24428510  addiu       $v0, $v0, -0x7AF0
    ctx->pc = 0x1f7f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935824));
label_1f7f18:
    // 0x1f7f18: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1f7f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1f7f1c:
    // 0x1f7f1c: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x1f7f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_1f7f20:
    // 0x1f7f20: 0x2463cc88  addiu       $v1, $v1, -0x3378
    ctx->pc = 0x1f7f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954120));
label_1f7f24:
    // 0x1f7f24: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1f7f24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_1f7f28:
    // 0x1f7f28: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f7f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f7f2c:
    // 0x1f7f2c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1f7f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_1f7f30:
    // 0x1f7f30: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1f7f30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1f7f34:
    // 0x1f7f34: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1f7f34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_1f7f38:
    // 0x1f7f38: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1f7f38u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1f7f3c:
    // 0x1f7f3c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1f7f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_1f7f40:
    // 0x1f7f40: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x1f7f40u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_1f7f44:
    // 0x1f7f44: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x1f7f44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
label_1f7f48:
    // 0x1f7f48: 0x24a57840  addiu       $a1, $a1, 0x7840
    ctx->pc = 0x1f7f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30784));
label_1f7f4c:
    // 0x1f7f4c: 0x8c4cb9c0  lw          $t4, -0x4640($v0)
    ctx->pc = 0x1f7f4cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1f7f50:
    // 0x1f7f50: 0x25087848  addiu       $t0, $t0, 0x7848
    ctx->pc = 0x1f7f50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 30792));
label_1f7f54:
    // 0x1f7f54: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1f7f54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1f7f58:
    // 0x1f7f58: 0x254a7870  addiu       $t2, $t2, 0x7870
    ctx->pc = 0x1f7f58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 30832));
label_1f7f5c:
    // 0x1f7f5c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1f7f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1f7f60:
    // 0x1f7f60: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f7f60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f7f64:
    // 0x1f7f64: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f7f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f7f68:
    // 0x1f7f68: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x1f7f68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1f7f6c:
    // 0x1f7f6c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f7f6cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7f70:
    // 0x1f7f70: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f7f70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f7f74:
    // 0x1f7f74: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f7f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f7f78:
    // 0x1f7f78: 0x40f809  jalr        $v0
label_1f7f7c:
    if (ctx->pc == 0x1F7F7Cu) {
        ctx->pc = 0x1F7F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7F78u;
        // 0x1f7f7c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7F80u;
        goto label_1f7f80;
    }
    ctx->pc = 0x1F7F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F7F80u);
        ctx->pc = 0x1F7F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7F78u;
        // 0x1f7f7c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7F78u, 0x1F7F80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F7F80u;
label_1f7f80:
    // 0x1f7f80: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1f7f80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1f7f84:
    // 0x1f7f84: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x1f7f84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
label_1f7f88:
    // 0x1f7f88: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1f7f88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1f7f8c:
    // 0x1f7f8c: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x1f7f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_1f7f90:
    // 0x1f7f90: 0xa220000c  sb          $zero, 0xC($s1)
    ctx->pc = 0x1f7f90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
label_1f7f94:
    // 0x1f7f94: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x1f7f94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_1f7f98:
    // 0x1f7f98: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1f7f98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1f7f9c:
    // 0x1f7f9c: 0x24e7d310  addiu       $a3, $a3, -0x2CF0
    ctx->pc = 0x1f7f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955792));
label_1f7fa0:
    // 0x1f7fa0: 0x24c6d338  addiu       $a2, $a2, -0x2CC8
    ctx->pc = 0x1f7fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955832));
label_1f7fa4:
    // 0x1f7fa4: 0x24a5d368  addiu       $a1, $a1, -0x2C98
    ctx->pc = 0x1f7fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955880));
label_1f7fa8:
    // 0x1f7fa8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1f7fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1f7fac:
    // 0x1f7fac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f7facu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f7fb0:
    // 0x1f7fb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f7fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f7fb4:
    // 0x1f7fb4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1f7fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_1f7fb8:
    // 0x1f7fb8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1f7fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1f7fbc:
    // 0x1f7fbc: 0xac630008  sw          $v1, 0x8($v1)
    ctx->pc = 0x1f7fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 3));
label_1f7fc0:
    // 0x1f7fc0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1f7fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1f7fc4:
    // 0x1f7fc4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f7fc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f7fc8:
    // 0x1f7fc8: 0xac84000c  sw          $a0, 0xC($a0)
    ctx->pc = 0x1f7fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 4));
label_1f7fcc:
    // 0x1f7fcc: 0xae07006c  sw          $a3, 0x6C($s0)
    ctx->pc = 0x1f7fccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 7));
label_1f7fd0:
    // 0x1f7fd0: 0xae060088  sw          $a2, 0x88($s0)
    ctx->pc = 0x1f7fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 6));
label_1f7fd4:
    // 0x1f7fd4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x1f7fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_1f7fd8:
    // 0x1f7fd8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f7fd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f7fdc:
    // 0x1f7fdc: 0x3e00008  jr          $ra
label_1f7fe0:
    if (ctx->pc == 0x1F7FE0u) {
        ctx->pc = 0x1F7FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7FDCu;
        // 0x1f7fe0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7FE4u;
        goto label_1f7fe4;
    }
    ctx->pc = 0x1F7FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7FDCu;
        // 0x1f7fe0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7FE4u;
label_1f7fe4:
    // 0x1f7fe4: 0x0  nop
    ctx->pc = 0x1f7fe4u;
    // NOP
    ctx->pc = 0x1f7fe8u;
}
