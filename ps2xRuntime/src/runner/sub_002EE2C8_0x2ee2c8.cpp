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

// Function: sub_002EE2C8
// Address: 0x2ee2c8 - 0x2ee3a8
void sub_002EE2C8_0x2ee2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE2C8_0x2ee2c8");
#endif

    switch (ctx->pc) {
        case 0x2ee2c8u: goto label_2ee2c8;
        case 0x2ee2ccu: goto label_2ee2cc;
        case 0x2ee2d0u: goto label_2ee2d0;
        case 0x2ee2d4u: goto label_2ee2d4;
        case 0x2ee2d8u: goto label_2ee2d8;
        case 0x2ee2dcu: goto label_2ee2dc;
        case 0x2ee2e0u: goto label_2ee2e0;
        case 0x2ee2e4u: goto label_2ee2e4;
        case 0x2ee2e8u: goto label_2ee2e8;
        case 0x2ee2ecu: goto label_2ee2ec;
        case 0x2ee2f0u: goto label_2ee2f0;
        case 0x2ee2f4u: goto label_2ee2f4;
        case 0x2ee2f8u: goto label_2ee2f8;
        case 0x2ee2fcu: goto label_2ee2fc;
        case 0x2ee300u: goto label_2ee300;
        case 0x2ee304u: goto label_2ee304;
        case 0x2ee308u: goto label_2ee308;
        case 0x2ee30cu: goto label_2ee30c;
        case 0x2ee310u: goto label_2ee310;
        case 0x2ee314u: goto label_2ee314;
        case 0x2ee318u: goto label_2ee318;
        case 0x2ee31cu: goto label_2ee31c;
        case 0x2ee320u: goto label_2ee320;
        case 0x2ee324u: goto label_2ee324;
        case 0x2ee328u: goto label_2ee328;
        case 0x2ee32cu: goto label_2ee32c;
        case 0x2ee330u: goto label_2ee330;
        case 0x2ee334u: goto label_2ee334;
        case 0x2ee338u: goto label_2ee338;
        case 0x2ee33cu: goto label_2ee33c;
        case 0x2ee340u: goto label_2ee340;
        case 0x2ee344u: goto label_2ee344;
        case 0x2ee348u: goto label_2ee348;
        case 0x2ee34cu: goto label_2ee34c;
        case 0x2ee350u: goto label_2ee350;
        case 0x2ee354u: goto label_2ee354;
        case 0x2ee358u: goto label_2ee358;
        case 0x2ee35cu: goto label_2ee35c;
        case 0x2ee360u: goto label_2ee360;
        case 0x2ee364u: goto label_2ee364;
        case 0x2ee368u: goto label_2ee368;
        case 0x2ee36cu: goto label_2ee36c;
        case 0x2ee370u: goto label_2ee370;
        case 0x2ee374u: goto label_2ee374;
        case 0x2ee378u: goto label_2ee378;
        case 0x2ee37cu: goto label_2ee37c;
        case 0x2ee380u: goto label_2ee380;
        case 0x2ee384u: goto label_2ee384;
        case 0x2ee388u: goto label_2ee388;
        case 0x2ee38cu: goto label_2ee38c;
        case 0x2ee390u: goto label_2ee390;
        case 0x2ee394u: goto label_2ee394;
        case 0x2ee398u: goto label_2ee398;
        case 0x2ee39cu: goto label_2ee39c;
        case 0x2ee3a0u: goto label_2ee3a0;
        case 0x2ee3a4u: goto label_2ee3a4;
        default: break;
    }

    ctx->pc = 0x2ee2c8u;

label_2ee2c8:
    // 0x2ee2c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ee2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2ee2cc:
    // 0x2ee2cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ee2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ee2d0:
    // 0x2ee2d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ee2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ee2d4:
    // 0x2ee2d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2ee2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ee2d8:
    // 0x2ee2d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ee2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2ee2dc:
    // 0x2ee2dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ee2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ee2e0:
    // 0x2ee2e0: 0x3c013ff5  lui         $at, 0x3FF5
    ctx->pc = 0x2ee2e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16373 << 16));
label_2ee2e4:
    // 0x2ee2e4: 0x3421be0c  ori         $at, $at, 0xBE0C
    ctx->pc = 0x2ee2e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48652);
label_2ee2e8:
    // 0x2ee2e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ee2e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ee2ec:
    // 0x2ee2ec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2ee2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ee2f0:
    // 0x2ee2f0: 0xac62021c  sw          $v0, 0x21C($v1)
    ctx->pc = 0x2ee2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 2));
label_2ee2f4:
    // 0x2ee2f4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2ee2f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ee2f8:
    // 0x2ee2f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ee2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ee2fc:
    // 0x2ee2fc: 0xa0460265  sb          $a2, 0x265($v0)
    ctx->pc = 0x2ee2fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 6));
label_2ee300:
    // 0x2ee300: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2ee300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ee304:
    // 0x2ee304: 0xe460012c  swc1        $f0, 0x12C($v1)
    ctx->pc = 0x2ee304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
label_2ee308:
    // 0x2ee308: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ee308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ee30c:
    // 0x2ee30c: 0xa046011e  sb          $a2, 0x11E($v0)
    ctx->pc = 0x2ee30cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 6));
label_2ee310:
    // 0x2ee310: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2ee310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ee314:
    // 0x2ee314: 0xc0a22c6  jal         func_288B18
label_2ee318:
    if (ctx->pc == 0x2EE318u) {
        ctx->pc = 0x2EE318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE314u;
        // 0x2ee318: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE31Cu;
        goto label_2ee31c;
    }
    ctx->pc = 0x2EE314u;
    SET_GPR_U32(ctx, 31, 0x2EE31Cu);
    ctx->pc = 0x2EE318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE314u;
    // 0x2ee318: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B18u, 0x2EE314u, 0x2EE31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE31Cu;
label_2ee31c:
    // 0x2ee31c: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x2ee31cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_2ee320:
    // 0x2ee320: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x2ee320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_2ee324:
    // 0x2ee324: 0x3c04fffd  lui         $a0, 0xFFFD
    ctx->pc = 0x2ee324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65533 << 16));
label_2ee328:
    // 0x2ee328: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2ee328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_2ee32c:
    // 0x2ee32c: 0x2405feff  addiu       $a1, $zero, -0x101
    ctx->pc = 0x2ee32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_2ee330:
    // 0x2ee330: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ee330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2ee334:
    // 0x2ee334: 0x2406ff7f  addiu       $a2, $zero, -0x81
    ctx->pc = 0x2ee334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
label_2ee338:
    // 0x2ee338: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2ee338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2ee33c:
    // 0x2ee33c: 0x2407ffbf  addiu       $a3, $zero, -0x41
    ctx->pc = 0x2ee33cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_2ee340:
    // 0x2ee340: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2ee340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_2ee344:
    // 0x2ee344: 0x2408fdff  addiu       $t0, $zero, -0x201
    ctx->pc = 0x2ee344u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
label_2ee348:
    // 0x2ee348: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2ee348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_2ee34c:
    // 0x2ee34c: 0x3c04fffb  lui         $a0, 0xFFFB
    ctx->pc = 0x2ee34cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65531 << 16));
label_2ee350:
    // 0x2ee350: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2ee350u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_2ee354:
    // 0x2ee354: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x2ee354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_2ee358:
    // 0x2ee358: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ee358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ee35c:
    // 0x2ee35c: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x2ee35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_2ee360:
    // 0x2ee360: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ee360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2ee364:
    // 0x2ee364: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ee364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ee368:
    // 0x2ee368: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2ee368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2ee36c:
    // 0x2ee36c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2ee36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2ee370:
    // 0x2ee370: 0xfe0200e0  sd          $v0, 0xE0($s0)
    ctx->pc = 0x2ee370u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
label_2ee374:
    // 0x2ee374: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x2ee374u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_2ee378:
    // 0x2ee378: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x2ee378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_2ee37c:
    // 0x2ee37c: 0x40f809  jalr        $v0
label_2ee380:
    if (ctx->pc == 0x2EE380u) {
        ctx->pc = 0x2EE380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE37Cu;
        // 0x2ee380: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE384u;
        goto label_2ee384;
    }
    ctx->pc = 0x2EE37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EE384u);
        ctx->pc = 0x2EE380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE37Cu;
        // 0x2ee380: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE37Cu, 0x2EE384u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EE384u;
label_2ee384:
    // 0x2ee384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ee384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ee388:
    // 0x2ee388: 0x24050225  addiu       $a1, $zero, 0x225
    ctx->pc = 0x2ee388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 549));
label_2ee38c:
    // 0x2ee38c: 0xc0886a8  jal         func_221AA0
label_2ee390:
    if (ctx->pc == 0x2EE390u) {
        ctx->pc = 0x2EE390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE38Cu;
        // 0x2ee390: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE394u;
        goto label_2ee394;
    }
    ctx->pc = 0x2EE38Cu;
    SET_GPR_U32(ctx, 31, 0x2EE394u);
    ctx->pc = 0x2EE390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE38Cu;
    // 0x2ee390: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x2EE38Cu, 0x2EE394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE394u;
label_2ee394:
    // 0x2ee394: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ee394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ee398:
    // 0x2ee398: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ee398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ee39c:
    // 0x2ee39c: 0x3e00008  jr          $ra
label_2ee3a0:
    if (ctx->pc == 0x2EE3A0u) {
        ctx->pc = 0x2EE3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE39Cu;
        // 0x2ee3a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE3A4u;
        goto label_2ee3a4;
    }
    ctx->pc = 0x2EE39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE39Cu;
        // 0x2ee3a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE39Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE3A4u;
label_2ee3a4:
    // 0x2ee3a4: 0x0  nop
    ctx->pc = 0x2ee3a4u;
    // NOP
    ctx->pc = 0x2ee3a8u;
}
