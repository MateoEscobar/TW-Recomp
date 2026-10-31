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

// Function: sub_00209068
// Address: 0x209068 - 0x209170
void sub_00209068_0x209068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209068_0x209068");
#endif

    switch (ctx->pc) {
        case 0x209068u: goto label_209068;
        case 0x20906cu: goto label_20906c;
        case 0x209070u: goto label_209070;
        case 0x209074u: goto label_209074;
        case 0x209078u: goto label_209078;
        case 0x20907cu: goto label_20907c;
        case 0x209080u: goto label_209080;
        case 0x209084u: goto label_209084;
        case 0x209088u: goto label_209088;
        case 0x20908cu: goto label_20908c;
        case 0x209090u: goto label_209090;
        case 0x209094u: goto label_209094;
        case 0x209098u: goto label_209098;
        case 0x20909cu: goto label_20909c;
        case 0x2090a0u: goto label_2090a0;
        case 0x2090a4u: goto label_2090a4;
        case 0x2090a8u: goto label_2090a8;
        case 0x2090acu: goto label_2090ac;
        case 0x2090b0u: goto label_2090b0;
        case 0x2090b4u: goto label_2090b4;
        case 0x2090b8u: goto label_2090b8;
        case 0x2090bcu: goto label_2090bc;
        case 0x2090c0u: goto label_2090c0;
        case 0x2090c4u: goto label_2090c4;
        case 0x2090c8u: goto label_2090c8;
        case 0x2090ccu: goto label_2090cc;
        case 0x2090d0u: goto label_2090d0;
        case 0x2090d4u: goto label_2090d4;
        case 0x2090d8u: goto label_2090d8;
        case 0x2090dcu: goto label_2090dc;
        case 0x2090e0u: goto label_2090e0;
        case 0x2090e4u: goto label_2090e4;
        case 0x2090e8u: goto label_2090e8;
        case 0x2090ecu: goto label_2090ec;
        case 0x2090f0u: goto label_2090f0;
        case 0x2090f4u: goto label_2090f4;
        case 0x2090f8u: goto label_2090f8;
        case 0x2090fcu: goto label_2090fc;
        case 0x209100u: goto label_209100;
        case 0x209104u: goto label_209104;
        case 0x209108u: goto label_209108;
        case 0x20910cu: goto label_20910c;
        case 0x209110u: goto label_209110;
        case 0x209114u: goto label_209114;
        case 0x209118u: goto label_209118;
        case 0x20911cu: goto label_20911c;
        case 0x209120u: goto label_209120;
        case 0x209124u: goto label_209124;
        case 0x209128u: goto label_209128;
        case 0x20912cu: goto label_20912c;
        case 0x209130u: goto label_209130;
        case 0x209134u: goto label_209134;
        case 0x209138u: goto label_209138;
        case 0x20913cu: goto label_20913c;
        case 0x209140u: goto label_209140;
        case 0x209144u: goto label_209144;
        case 0x209148u: goto label_209148;
        case 0x20914cu: goto label_20914c;
        case 0x209150u: goto label_209150;
        case 0x209154u: goto label_209154;
        case 0x209158u: goto label_209158;
        case 0x20915cu: goto label_20915c;
        case 0x209160u: goto label_209160;
        case 0x209164u: goto label_209164;
        case 0x209168u: goto label_209168;
        case 0x20916cu: goto label_20916c;
        default: break;
    }

    ctx->pc = 0x209068u;

label_209068:
    // 0x209068: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x209068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_20906c:
    // 0x20906c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x20906cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_209070:
    // 0x209070: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x209070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_209074:
    // 0x209074: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x209074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_209078:
    // 0x209078: 0xc06a38c  jal         func_1A8E30
label_20907c:
    if (ctx->pc == 0x20907Cu) {
        ctx->pc = 0x20907Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209078u;
        // 0x20907c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209080u;
        goto label_209080;
    }
    ctx->pc = 0x209078u;
    SET_GPR_U32(ctx, 31, 0x209080u);
    ctx->pc = 0x20907Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209078u;
    // 0x20907c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x209078u, 0x209080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209080u;
label_209080:
    // 0x209080: 0x26110078  addiu       $s1, $s0, 0x78
    ctx->pc = 0x209080u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_209084:
    // 0x209084: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x209084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_209088:
    // 0x209088: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x209088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_20908c:
    // 0x20908c: 0x24638778  addiu       $v1, $v1, -0x7888
    ctx->pc = 0x20908cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936440));
label_209090:
    // 0x209090: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x209090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_209094:
    // 0x209094: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x209094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_209098:
    // 0x209098: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x209098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_20909c:
    // 0x20909c: 0x24428510  addiu       $v0, $v0, -0x7AF0
    ctx->pc = 0x20909cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935824));
label_2090a0:
    // 0x2090a0: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2090a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_2090a4:
    // 0x2090a4: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2090a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_2090a8:
    // 0x2090a8: 0x2463cc88  addiu       $v1, $v1, -0x3378
    ctx->pc = 0x2090a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954120));
label_2090ac:
    // 0x2090ac: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2090acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_2090b0:
    // 0x2090b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2090b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2090b4:
    // 0x2090b4: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2090b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_2090b8:
    // 0x2090b8: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2090b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2090bc:
    // 0x2090bc: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2090bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2090c0:
    // 0x2090c0: 0x3c080056  lui         $t0, 0x56
    ctx->pc = 0x2090c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)86 << 16));
label_2090c4:
    // 0x2090c4: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2090c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_2090c8:
    // 0x2090c8: 0x3c0a0056  lui         $t2, 0x56
    ctx->pc = 0x2090c8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)86 << 16));
label_2090cc:
    // 0x2090cc: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x2090ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
label_2090d0:
    // 0x2090d0: 0x24a58dd8  addiu       $a1, $a1, -0x7228
    ctx->pc = 0x2090d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938072));
label_2090d4:
    // 0x2090d4: 0x8c4cb9c0  lw          $t4, -0x4640($v0)
    ctx->pc = 0x2090d4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_2090d8:
    // 0x2090d8: 0x25088de0  addiu       $t0, $t0, -0x7220
    ctx->pc = 0x2090d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294938080));
label_2090dc:
    // 0x2090dc: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2090dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2090e0:
    // 0x2090e0: 0x254a8e08  addiu       $t2, $t2, -0x71F8
    ctx->pc = 0x2090e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294938120));
label_2090e4:
    // 0x2090e4: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x2090e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2090e8:
    // 0x2090e8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2090e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2090ec:
    // 0x2090ec: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x2090ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_2090f0:
    // 0x2090f0: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x2090f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_2090f4:
    // 0x2090f4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2090f4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2090f8:
    // 0x2090f8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x2090f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_2090fc:
    // 0x2090fc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2090fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_209100:
    // 0x209100: 0x40f809  jalr        $v0
label_209104:
    if (ctx->pc == 0x209104u) {
        ctx->pc = 0x209104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209100u;
        // 0x209104: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209108u;
        goto label_209108;
    }
    ctx->pc = 0x209100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x209108u);
        ctx->pc = 0x209104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209100u;
        // 0x209104: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209100u, 0x209108u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209108u;
label_209108:
    // 0x209108: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x209108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_20910c:
    // 0x20910c: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x20910cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
label_209110:
    // 0x209110: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x209110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_209114:
    // 0x209114: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x209114u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_209118:
    // 0x209118: 0xa220000c  sb          $zero, 0xC($s1)
    ctx->pc = 0x209118u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
label_20911c:
    // 0x20911c: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x20911cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_209120:
    // 0x209120: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x209120u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_209124:
    // 0x209124: 0x24e7e250  addiu       $a3, $a3, -0x1DB0
    ctx->pc = 0x209124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294959696));
label_209128:
    // 0x209128: 0x24c6e278  addiu       $a2, $a2, -0x1D88
    ctx->pc = 0x209128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959736));
label_20912c:
    // 0x20912c: 0x24a5e2a8  addiu       $a1, $a1, -0x1D58
    ctx->pc = 0x20912cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959784));
label_209130:
    // 0x209130: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x209130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_209134:
    // 0x209134: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x209134u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_209138:
    // 0x209138: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x209138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20913c:
    // 0x20913c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x20913cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_209140:
    // 0x209140: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x209140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_209144:
    // 0x209144: 0xac630008  sw          $v1, 0x8($v1)
    ctx->pc = 0x209144u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 3));
label_209148:
    // 0x209148: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x209148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_20914c:
    // 0x20914c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20914cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_209150:
    // 0x209150: 0xac84000c  sw          $a0, 0xC($a0)
    ctx->pc = 0x209150u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 4));
label_209154:
    // 0x209154: 0xae07006c  sw          $a3, 0x6C($s0)
    ctx->pc = 0x209154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 7));
label_209158:
    // 0x209158: 0xae060088  sw          $a2, 0x88($s0)
    ctx->pc = 0x209158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 6));
label_20915c:
    // 0x20915c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x20915cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_209160:
    // 0x209160: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x209160u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_209164:
    // 0x209164: 0x3e00008  jr          $ra
label_209168:
    if (ctx->pc == 0x209168u) {
        ctx->pc = 0x209168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209164u;
        // 0x209168: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20916Cu;
        goto label_20916c;
    }
    ctx->pc = 0x209164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209164u;
        // 0x209168: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20916Cu;
label_20916c:
    // 0x20916c: 0x0  nop
    ctx->pc = 0x20916cu;
    // NOP
    ctx->pc = 0x209170u;
}
