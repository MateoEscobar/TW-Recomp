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

// Function: sub_002ED260
// Address: 0x2ed260 - 0x2ed348
void sub_002ED260_0x2ed260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED260_0x2ed260");
#endif

    switch (ctx->pc) {
        case 0x2ed260u: goto label_2ed260;
        case 0x2ed264u: goto label_2ed264;
        case 0x2ed268u: goto label_2ed268;
        case 0x2ed26cu: goto label_2ed26c;
        case 0x2ed270u: goto label_2ed270;
        case 0x2ed274u: goto label_2ed274;
        case 0x2ed278u: goto label_2ed278;
        case 0x2ed27cu: goto label_2ed27c;
        case 0x2ed280u: goto label_2ed280;
        case 0x2ed284u: goto label_2ed284;
        case 0x2ed288u: goto label_2ed288;
        case 0x2ed28cu: goto label_2ed28c;
        case 0x2ed290u: goto label_2ed290;
        case 0x2ed294u: goto label_2ed294;
        case 0x2ed298u: goto label_2ed298;
        case 0x2ed29cu: goto label_2ed29c;
        case 0x2ed2a0u: goto label_2ed2a0;
        case 0x2ed2a4u: goto label_2ed2a4;
        case 0x2ed2a8u: goto label_2ed2a8;
        case 0x2ed2acu: goto label_2ed2ac;
        case 0x2ed2b0u: goto label_2ed2b0;
        case 0x2ed2b4u: goto label_2ed2b4;
        case 0x2ed2b8u: goto label_2ed2b8;
        case 0x2ed2bcu: goto label_2ed2bc;
        case 0x2ed2c0u: goto label_2ed2c0;
        case 0x2ed2c4u: goto label_2ed2c4;
        case 0x2ed2c8u: goto label_2ed2c8;
        case 0x2ed2ccu: goto label_2ed2cc;
        case 0x2ed2d0u: goto label_2ed2d0;
        case 0x2ed2d4u: goto label_2ed2d4;
        case 0x2ed2d8u: goto label_2ed2d8;
        case 0x2ed2dcu: goto label_2ed2dc;
        case 0x2ed2e0u: goto label_2ed2e0;
        case 0x2ed2e4u: goto label_2ed2e4;
        case 0x2ed2e8u: goto label_2ed2e8;
        case 0x2ed2ecu: goto label_2ed2ec;
        case 0x2ed2f0u: goto label_2ed2f0;
        case 0x2ed2f4u: goto label_2ed2f4;
        case 0x2ed2f8u: goto label_2ed2f8;
        case 0x2ed2fcu: goto label_2ed2fc;
        case 0x2ed300u: goto label_2ed300;
        case 0x2ed304u: goto label_2ed304;
        case 0x2ed308u: goto label_2ed308;
        case 0x2ed30cu: goto label_2ed30c;
        case 0x2ed310u: goto label_2ed310;
        case 0x2ed314u: goto label_2ed314;
        case 0x2ed318u: goto label_2ed318;
        case 0x2ed31cu: goto label_2ed31c;
        case 0x2ed320u: goto label_2ed320;
        case 0x2ed324u: goto label_2ed324;
        case 0x2ed328u: goto label_2ed328;
        case 0x2ed32cu: goto label_2ed32c;
        case 0x2ed330u: goto label_2ed330;
        case 0x2ed334u: goto label_2ed334;
        case 0x2ed338u: goto label_2ed338;
        case 0x2ed33cu: goto label_2ed33c;
        case 0x2ed340u: goto label_2ed340;
        case 0x2ed344u: goto label_2ed344;
        default: break;
    }

    ctx->pc = 0x2ed260u;

label_2ed260:
    // 0x2ed260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ed260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2ed264:
    // 0x2ed264: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ed264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ed268:
    // 0x2ed268: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ed268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ed26c:
    // 0x2ed26c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2ed26cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ed270:
    // 0x2ed270: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ed270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2ed274:
    // 0x2ed274: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ed274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ed278:
    // 0x2ed278: 0x3c013ff5  lui         $at, 0x3FF5
    ctx->pc = 0x2ed278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16373 << 16));
label_2ed27c:
    // 0x2ed27c: 0x3421be0c  ori         $at, $at, 0xBE0C
    ctx->pc = 0x2ed27cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48652);
label_2ed280:
    // 0x2ed280: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ed280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ed284:
    // 0x2ed284: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2ed284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ed288:
    // 0x2ed288: 0xac62021c  sw          $v0, 0x21C($v1)
    ctx->pc = 0x2ed288u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 2));
label_2ed28c:
    // 0x2ed28c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2ed28cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ed290:
    // 0x2ed290: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ed290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ed294:
    // 0x2ed294: 0xa0460265  sb          $a2, 0x265($v0)
    ctx->pc = 0x2ed294u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 6));
label_2ed298:
    // 0x2ed298: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2ed298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ed29c:
    // 0x2ed29c: 0xe460012c  swc1        $f0, 0x12C($v1)
    ctx->pc = 0x2ed29cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
label_2ed2a0:
    // 0x2ed2a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ed2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ed2a4:
    // 0x2ed2a4: 0xa046011e  sb          $a2, 0x11E($v0)
    ctx->pc = 0x2ed2a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 6));
label_2ed2a8:
    // 0x2ed2a8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2ed2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ed2ac:
    // 0x2ed2ac: 0xc0a22c6  jal         func_288B18
label_2ed2b0:
    if (ctx->pc == 0x2ED2B0u) {
        ctx->pc = 0x2ED2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED2ACu;
        // 0x2ed2b0: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED2B4u;
        goto label_2ed2b4;
    }
    ctx->pc = 0x2ED2ACu;
    SET_GPR_U32(ctx, 31, 0x2ED2B4u);
    ctx->pc = 0x2ED2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED2ACu;
    // 0x2ed2b0: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B18u, 0x2ED2ACu, 0x2ED2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED2B4u;
label_2ed2b4:
    // 0x2ed2b4: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x2ed2b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_2ed2b8:
    // 0x2ed2b8: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x2ed2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_2ed2bc:
    // 0x2ed2bc: 0x3c04fffd  lui         $a0, 0xFFFD
    ctx->pc = 0x2ed2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65533 << 16));
label_2ed2c0:
    // 0x2ed2c0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2ed2c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_2ed2c4:
    // 0x2ed2c4: 0x2405bfff  addiu       $a1, $zero, -0x4001
    ctx->pc = 0x2ed2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
label_2ed2c8:
    // 0x2ed2c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ed2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2ed2cc:
    // 0x2ed2cc: 0x2406feff  addiu       $a2, $zero, -0x101
    ctx->pc = 0x2ed2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_2ed2d0:
    // 0x2ed2d0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2ed2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2ed2d4:
    // 0x2ed2d4: 0x2407ff7f  addiu       $a3, $zero, -0x81
    ctx->pc = 0x2ed2d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
label_2ed2d8:
    // 0x2ed2d8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2ed2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_2ed2dc:
    // 0x2ed2dc: 0x2408ffbf  addiu       $t0, $zero, -0x41
    ctx->pc = 0x2ed2dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_2ed2e0:
    // 0x2ed2e0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2ed2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_2ed2e4:
    // 0x2ed2e4: 0x2409fdff  addiu       $t1, $zero, -0x201
    ctx->pc = 0x2ed2e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
label_2ed2e8:
    // 0x2ed2e8: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x2ed2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_2ed2ec:
    // 0x2ed2ec: 0x3c04fffb  lui         $a0, 0xFFFB
    ctx->pc = 0x2ed2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65531 << 16));
label_2ed2f0:
    // 0x2ed2f0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2ed2f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_2ed2f4:
    // 0x2ed2f4: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x2ed2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_2ed2f8:
    // 0x2ed2f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ed2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ed2fc:
    // 0x2ed2fc: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x2ed2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
label_2ed300:
    // 0x2ed300: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ed300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2ed304:
    // 0x2ed304: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ed304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ed308:
    // 0x2ed308: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2ed308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2ed30c:
    // 0x2ed30c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2ed30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2ed310:
    // 0x2ed310: 0xfe0200e0  sd          $v0, 0xE0($s0)
    ctx->pc = 0x2ed310u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
label_2ed314:
    // 0x2ed314: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x2ed314u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_2ed318:
    // 0x2ed318: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x2ed318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_2ed31c:
    // 0x2ed31c: 0x40f809  jalr        $v0
label_2ed320:
    if (ctx->pc == 0x2ED320u) {
        ctx->pc = 0x2ED320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED31Cu;
        // 0x2ed320: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED324u;
        goto label_2ed324;
    }
    ctx->pc = 0x2ED31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2ED324u);
        ctx->pc = 0x2ED320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED31Cu;
        // 0x2ed320: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED31Cu, 0x2ED324u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ED324u;
label_2ed324:
    // 0x2ed324: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ed324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ed328:
    // 0x2ed328: 0x24050225  addiu       $a1, $zero, 0x225
    ctx->pc = 0x2ed328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 549));
label_2ed32c:
    // 0x2ed32c: 0xc0886a8  jal         func_221AA0
label_2ed330:
    if (ctx->pc == 0x2ED330u) {
        ctx->pc = 0x2ED330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED32Cu;
        // 0x2ed330: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED334u;
        goto label_2ed334;
    }
    ctx->pc = 0x2ED32Cu;
    SET_GPR_U32(ctx, 31, 0x2ED334u);
    ctx->pc = 0x2ED330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED32Cu;
    // 0x2ed330: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x2ED32Cu, 0x2ED334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED334u;
label_2ed334:
    // 0x2ed334: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ed334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ed338:
    // 0x2ed338: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ed338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ed33c:
    // 0x2ed33c: 0x3e00008  jr          $ra
label_2ed340:
    if (ctx->pc == 0x2ED340u) {
        ctx->pc = 0x2ED340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED33Cu;
        // 0x2ed340: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED344u;
        goto label_2ed344;
    }
    ctx->pc = 0x2ED33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED33Cu;
        // 0x2ed340: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED344u;
label_2ed344:
    // 0x2ed344: 0x0  nop
    ctx->pc = 0x2ed344u;
    // NOP
    ctx->pc = 0x2ed348u;
}
