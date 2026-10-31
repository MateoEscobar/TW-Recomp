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

// Function: sub_00206FF0
// Address: 0x206ff0 - 0x2070f8
void sub_00206FF0_0x206ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206FF0_0x206ff0");
#endif

    switch (ctx->pc) {
        case 0x206ff0u: goto label_206ff0;
        case 0x206ff4u: goto label_206ff4;
        case 0x206ff8u: goto label_206ff8;
        case 0x206ffcu: goto label_206ffc;
        case 0x207000u: goto label_207000;
        case 0x207004u: goto label_207004;
        case 0x207008u: goto label_207008;
        case 0x20700cu: goto label_20700c;
        case 0x207010u: goto label_207010;
        case 0x207014u: goto label_207014;
        case 0x207018u: goto label_207018;
        case 0x20701cu: goto label_20701c;
        case 0x207020u: goto label_207020;
        case 0x207024u: goto label_207024;
        case 0x207028u: goto label_207028;
        case 0x20702cu: goto label_20702c;
        case 0x207030u: goto label_207030;
        case 0x207034u: goto label_207034;
        case 0x207038u: goto label_207038;
        case 0x20703cu: goto label_20703c;
        case 0x207040u: goto label_207040;
        case 0x207044u: goto label_207044;
        case 0x207048u: goto label_207048;
        case 0x20704cu: goto label_20704c;
        case 0x207050u: goto label_207050;
        case 0x207054u: goto label_207054;
        case 0x207058u: goto label_207058;
        case 0x20705cu: goto label_20705c;
        case 0x207060u: goto label_207060;
        case 0x207064u: goto label_207064;
        case 0x207068u: goto label_207068;
        case 0x20706cu: goto label_20706c;
        case 0x207070u: goto label_207070;
        case 0x207074u: goto label_207074;
        case 0x207078u: goto label_207078;
        case 0x20707cu: goto label_20707c;
        case 0x207080u: goto label_207080;
        case 0x207084u: goto label_207084;
        case 0x207088u: goto label_207088;
        case 0x20708cu: goto label_20708c;
        case 0x207090u: goto label_207090;
        case 0x207094u: goto label_207094;
        case 0x207098u: goto label_207098;
        case 0x20709cu: goto label_20709c;
        case 0x2070a0u: goto label_2070a0;
        case 0x2070a4u: goto label_2070a4;
        case 0x2070a8u: goto label_2070a8;
        case 0x2070acu: goto label_2070ac;
        case 0x2070b0u: goto label_2070b0;
        case 0x2070b4u: goto label_2070b4;
        case 0x2070b8u: goto label_2070b8;
        case 0x2070bcu: goto label_2070bc;
        case 0x2070c0u: goto label_2070c0;
        case 0x2070c4u: goto label_2070c4;
        case 0x2070c8u: goto label_2070c8;
        case 0x2070ccu: goto label_2070cc;
        case 0x2070d0u: goto label_2070d0;
        case 0x2070d4u: goto label_2070d4;
        case 0x2070d8u: goto label_2070d8;
        case 0x2070dcu: goto label_2070dc;
        case 0x2070e0u: goto label_2070e0;
        case 0x2070e4u: goto label_2070e4;
        case 0x2070e8u: goto label_2070e8;
        case 0x2070ecu: goto label_2070ec;
        case 0x2070f0u: goto label_2070f0;
        case 0x2070f4u: goto label_2070f4;
        default: break;
    }

    ctx->pc = 0x206ff0u;

label_206ff0:
    // 0x206ff0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x206ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_206ff4:
    // 0x206ff4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x206ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_206ff8:
    // 0x206ff8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x206ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_206ffc:
    // 0x206ffc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x206ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_207000:
    // 0x207000: 0xc06a38c  jal         func_1A8E30
label_207004:
    if (ctx->pc == 0x207004u) {
        ctx->pc = 0x207004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207000u;
        // 0x207004: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207008u;
        goto label_207008;
    }
    ctx->pc = 0x207000u;
    SET_GPR_U32(ctx, 31, 0x207008u);
    ctx->pc = 0x207004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207000u;
    // 0x207004: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x207000u, 0x207008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207008u;
label_207008:
    // 0x207008: 0x26110078  addiu       $s1, $s0, 0x78
    ctx->pc = 0x207008u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_20700c:
    // 0x20700c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x20700cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_207010:
    // 0x207010: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x207010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_207014:
    // 0x207014: 0x24638778  addiu       $v1, $v1, -0x7888
    ctx->pc = 0x207014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936440));
label_207018:
    // 0x207018: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x207018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_20701c:
    // 0x20701c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x20701cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_207020:
    // 0x207020: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x207020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_207024:
    // 0x207024: 0x24428510  addiu       $v0, $v0, -0x7AF0
    ctx->pc = 0x207024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935824));
label_207028:
    // 0x207028: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x207028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_20702c:
    // 0x20702c: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x20702cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_207030:
    // 0x207030: 0x2463cc88  addiu       $v1, $v1, -0x3378
    ctx->pc = 0x207030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954120));
label_207034:
    // 0x207034: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x207034u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_207038:
    // 0x207038: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x207038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_20703c:
    // 0x20703c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x20703cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_207040:
    // 0x207040: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x207040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_207044:
    // 0x207044: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x207044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_207048:
    // 0x207048: 0x3c080056  lui         $t0, 0x56
    ctx->pc = 0x207048u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)86 << 16));
label_20704c:
    // 0x20704c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x20704cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_207050:
    // 0x207050: 0x3c0a0056  lui         $t2, 0x56
    ctx->pc = 0x207050u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)86 << 16));
label_207054:
    // 0x207054: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x207054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
label_207058:
    // 0x207058: 0x24a589d0  addiu       $a1, $a1, -0x7630
    ctx->pc = 0x207058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937040));
label_20705c:
    // 0x20705c: 0x8c4cb9c0  lw          $t4, -0x4640($v0)
    ctx->pc = 0x20705cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_207060:
    // 0x207060: 0x250889d8  addiu       $t0, $t0, -0x7628
    ctx->pc = 0x207060u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294937048));
label_207064:
    // 0x207064: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x207064u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_207068:
    // 0x207068: 0x254a8a00  addiu       $t2, $t2, -0x7600
    ctx->pc = 0x207068u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294937088));
label_20706c:
    // 0x20706c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x20706cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_207070:
    // 0x207070: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x207070u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_207074:
    // 0x207074: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x207074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_207078:
    // 0x207078: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x207078u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_20707c:
    // 0x20707c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x20707cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207080:
    // 0x207080: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x207080u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_207084:
    // 0x207084: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x207084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_207088:
    // 0x207088: 0x40f809  jalr        $v0
label_20708c:
    if (ctx->pc == 0x20708Cu) {
        ctx->pc = 0x20708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207088u;
        // 0x20708c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207090u;
        goto label_207090;
    }
    ctx->pc = 0x207088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x207090u);
        ctx->pc = 0x20708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207088u;
        // 0x20708c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207088u, 0x207090u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207090u;
label_207090:
    // 0x207090: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x207090u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_207094:
    // 0x207094: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x207094u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
label_207098:
    // 0x207098: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x207098u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_20709c:
    // 0x20709c: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x20709cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_2070a0:
    // 0x2070a0: 0xa220000c  sb          $zero, 0xC($s1)
    ctx->pc = 0x2070a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
label_2070a4:
    // 0x2070a4: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x2070a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_2070a8:
    // 0x2070a8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2070a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2070ac:
    // 0x2070ac: 0x24e7df18  addiu       $a3, $a3, -0x20E8
    ctx->pc = 0x2070acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958872));
label_2070b0:
    // 0x2070b0: 0x24c6df40  addiu       $a2, $a2, -0x20C0
    ctx->pc = 0x2070b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958912));
label_2070b4:
    // 0x2070b4: 0x24a5df70  addiu       $a1, $a1, -0x2090
    ctx->pc = 0x2070b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958960));
label_2070b8:
    // 0x2070b8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2070b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2070bc:
    // 0x2070bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2070bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2070c0:
    // 0x2070c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2070c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2070c4:
    // 0x2070c4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2070c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2070c8:
    // 0x2070c8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2070c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2070cc:
    // 0x2070cc: 0xac630008  sw          $v1, 0x8($v1)
    ctx->pc = 0x2070ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 3));
label_2070d0:
    // 0x2070d0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2070d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2070d4:
    // 0x2070d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2070d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2070d8:
    // 0x2070d8: 0xac84000c  sw          $a0, 0xC($a0)
    ctx->pc = 0x2070d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 4));
label_2070dc:
    // 0x2070dc: 0xae07006c  sw          $a3, 0x6C($s0)
    ctx->pc = 0x2070dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 7));
label_2070e0:
    // 0x2070e0: 0xae060088  sw          $a2, 0x88($s0)
    ctx->pc = 0x2070e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 6));
label_2070e4:
    // 0x2070e4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2070e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_2070e8:
    // 0x2070e8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2070e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2070ec:
    // 0x2070ec: 0x3e00008  jr          $ra
label_2070f0:
    if (ctx->pc == 0x2070F0u) {
        ctx->pc = 0x2070F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2070ECu;
        // 0x2070f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2070F4u;
        goto label_2070f4;
    }
    ctx->pc = 0x2070ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2070F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2070ECu;
        // 0x2070f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2070ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2070F4u;
label_2070f4:
    // 0x2070f4: 0x0  nop
    ctx->pc = 0x2070f4u;
    // NOP
    ctx->pc = 0x2070f8u;
}
