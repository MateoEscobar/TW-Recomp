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

// Function: sub_0031B268
// Address: 0x31b268 - 0x31b388
void sub_0031B268_0x31b268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B268_0x31b268");
#endif

    switch (ctx->pc) {
        case 0x31b268u: goto label_31b268;
        case 0x31b26cu: goto label_31b26c;
        case 0x31b270u: goto label_31b270;
        case 0x31b274u: goto label_31b274;
        case 0x31b278u: goto label_31b278;
        case 0x31b27cu: goto label_31b27c;
        case 0x31b280u: goto label_31b280;
        case 0x31b284u: goto label_31b284;
        case 0x31b288u: goto label_31b288;
        case 0x31b28cu: goto label_31b28c;
        case 0x31b290u: goto label_31b290;
        case 0x31b294u: goto label_31b294;
        case 0x31b298u: goto label_31b298;
        case 0x31b29cu: goto label_31b29c;
        case 0x31b2a0u: goto label_31b2a0;
        case 0x31b2a4u: goto label_31b2a4;
        case 0x31b2a8u: goto label_31b2a8;
        case 0x31b2acu: goto label_31b2ac;
        case 0x31b2b0u: goto label_31b2b0;
        case 0x31b2b4u: goto label_31b2b4;
        case 0x31b2b8u: goto label_31b2b8;
        case 0x31b2bcu: goto label_31b2bc;
        case 0x31b2c0u: goto label_31b2c0;
        case 0x31b2c4u: goto label_31b2c4;
        case 0x31b2c8u: goto label_31b2c8;
        case 0x31b2ccu: goto label_31b2cc;
        case 0x31b2d0u: goto label_31b2d0;
        case 0x31b2d4u: goto label_31b2d4;
        case 0x31b2d8u: goto label_31b2d8;
        case 0x31b2dcu: goto label_31b2dc;
        case 0x31b2e0u: goto label_31b2e0;
        case 0x31b2e4u: goto label_31b2e4;
        case 0x31b2e8u: goto label_31b2e8;
        case 0x31b2ecu: goto label_31b2ec;
        case 0x31b2f0u: goto label_31b2f0;
        case 0x31b2f4u: goto label_31b2f4;
        case 0x31b2f8u: goto label_31b2f8;
        case 0x31b2fcu: goto label_31b2fc;
        case 0x31b300u: goto label_31b300;
        case 0x31b304u: goto label_31b304;
        case 0x31b308u: goto label_31b308;
        case 0x31b30cu: goto label_31b30c;
        case 0x31b310u: goto label_31b310;
        case 0x31b314u: goto label_31b314;
        case 0x31b318u: goto label_31b318;
        case 0x31b31cu: goto label_31b31c;
        case 0x31b320u: goto label_31b320;
        case 0x31b324u: goto label_31b324;
        case 0x31b328u: goto label_31b328;
        case 0x31b32cu: goto label_31b32c;
        case 0x31b330u: goto label_31b330;
        case 0x31b334u: goto label_31b334;
        case 0x31b338u: goto label_31b338;
        case 0x31b33cu: goto label_31b33c;
        case 0x31b340u: goto label_31b340;
        case 0x31b344u: goto label_31b344;
        case 0x31b348u: goto label_31b348;
        case 0x31b34cu: goto label_31b34c;
        case 0x31b350u: goto label_31b350;
        case 0x31b354u: goto label_31b354;
        case 0x31b358u: goto label_31b358;
        case 0x31b35cu: goto label_31b35c;
        case 0x31b360u: goto label_31b360;
        case 0x31b364u: goto label_31b364;
        case 0x31b368u: goto label_31b368;
        case 0x31b36cu: goto label_31b36c;
        case 0x31b370u: goto label_31b370;
        case 0x31b374u: goto label_31b374;
        case 0x31b378u: goto label_31b378;
        case 0x31b37cu: goto label_31b37c;
        case 0x31b380u: goto label_31b380;
        case 0x31b384u: goto label_31b384;
        default: break;
    }

    ctx->pc = 0x31b268u;

label_31b268:
    // 0x31b268: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x31b268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_31b26c:
    // 0x31b26c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x31b26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_31b270:
    // 0x31b270: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x31b270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_31b274:
    // 0x31b274: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x31b274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
label_31b278:
    // 0x31b278: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x31b278u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31b27c:
    // 0x31b27c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x31b27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_31b280:
    // 0x31b280: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x31b280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_31b284:
    // 0x31b284: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x31b284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_31b288:
    // 0x31b288: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x31b288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_31b28c:
    // 0x31b28c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x31b28cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_31b290:
    // 0x31b290: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x31b290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_31b294:
    // 0x31b294: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x31b294u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_31b298:
    // 0x31b298: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x31b298u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_31b29c:
    // 0x31b29c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31b29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31b2a0:
    // 0x31b2a0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x31b2a0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_31b2a4:
    // 0x31b2a4: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x31b2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
label_31b2a8:
    // 0x31b2a8: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x31b2a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_31b2ac:
    // 0x31b2ac: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x31b2acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_31b2b0:
    // 0x31b2b0: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x31b2b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_31b2b4:
    // 0x31b2b4: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x31b2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_31b2b8:
    // 0x31b2b8: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x31b2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_31b2bc:
    // 0x31b2bc: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x31b2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_31b2c0:
    // 0x31b2c0: 0xa2600018  sb          $zero, 0x18($s3)
    ctx->pc = 0x31b2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 24), (uint8_t)GPR_U32(ctx, 0));
label_31b2c4:
    // 0x31b2c4: 0xae62001c  sw          $v0, 0x1C($s3)
    ctx->pc = 0x31b2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
label_31b2c8:
    // 0x31b2c8: 0xc0c1a3e  jal         func_3068F8
label_31b2cc:
    if (ctx->pc == 0x31B2CCu) {
        ctx->pc = 0x31B2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B2C8u;
        // 0x31b2cc: 0xae6a0008  sw          $t2, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B2D0u;
        goto label_31b2d0;
    }
    ctx->pc = 0x31B2C8u;
    SET_GPR_U32(ctx, 31, 0x31B2D0u);
    ctx->pc = 0x31B2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B2C8u;
    // 0x31b2cc: 0xae6a0008  sw          $t2, 0x8($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3068F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3068F8u, 0x31B2C8u, 0x31B2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B2D0u;
label_31b2d0:
    // 0x31b2d0: 0xa270003c  sb          $s0, 0x3C($s3)
    ctx->pc = 0x31b2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 60), (uint8_t)GPR_U32(ctx, 16));
label_31b2d4:
    // 0x31b2d4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x31b2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_31b2d8:
    // 0x31b2d8: 0xa260003d  sb          $zero, 0x3D($s3)
    ctx->pc = 0x31b2d8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 61), (uint8_t)GPR_U32(ctx, 0));
label_31b2dc:
    // 0x31b2dc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x31b2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_31b2e0:
    // 0x31b2e0: 0x24633e00  addiu       $v1, $v1, 0x3E00
    ctx->pc = 0x31b2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15872));
label_31b2e4:
    // 0x31b2e4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x31b2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_31b2e8:
    // 0x31b2e8: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x31b2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_31b2ec:
    // 0x31b2ec: 0xae600028  sw          $zero, 0x28($s3)
    ctx->pc = 0x31b2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
label_31b2f0:
    // 0x31b2f0: 0xae60002c  sw          $zero, 0x2C($s3)
    ctx->pc = 0x31b2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 0));
label_31b2f4:
    // 0x31b2f4: 0xae63001c  sw          $v1, 0x1C($s3)
    ctx->pc = 0x31b2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 3));
label_31b2f8:
    // 0x31b2f8: 0xae720020  sw          $s2, 0x20($s3)
    ctx->pc = 0x31b2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 18));
label_31b2fc:
    // 0x31b2fc: 0xe6740024  swc1        $f20, 0x24($s3)
    ctx->pc = 0x31b2fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
label_31b300:
    // 0x31b300: 0xa6640034  sh          $a0, 0x34($s3)
    ctx->pc = 0x31b300u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 52), (uint16_t)GPR_U32(ctx, 4));
label_31b304:
    // 0x31b304: 0xa6710036  sh          $s1, 0x36($s3)
    ctx->pc = 0x31b304u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 54), (uint16_t)GPR_U32(ctx, 17));
label_31b308:
    // 0x31b308: 0xae600038  sw          $zero, 0x38($s3)
    ctx->pc = 0x31b308u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
label_31b30c:
    // 0x31b30c: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x31b30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_31b310:
    // 0x31b310: 0x244200fa  addiu       $v0, $v0, 0xFA
    ctx->pc = 0x31b310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 250));
label_31b314:
    // 0x31b314: 0xae620028  sw          $v0, 0x28($s3)
    ctx->pc = 0x31b314u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
label_31b318:
    // 0x31b318: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x31b318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_31b31c:
    // 0x31b31c: 0x246307d0  addiu       $v1, $v1, 0x7D0
    ctx->pc = 0x31b31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2000));
label_31b320:
    // 0x31b320: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
label_31b324:
    if (ctx->pc == 0x31B324u) {
        ctx->pc = 0x31B324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B320u;
        // 0x31b324: 0xae63002c  sw          $v1, 0x2C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B328u;
        goto label_31b328;
    }
    ctx->pc = 0x31B320u;
    {
        const bool branch_taken_0x31b320 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B320u;
        // 0x31b324: 0xae63002c  sw          $v1, 0x2C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b320) {
            ctx->pc = 0x31B358u;
            goto label_31b358;
        }
    }
    ctx->pc = 0x31B328u;
label_31b328:
    // 0x31b328: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x31b328u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_31b32c:
    // 0x31b32c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_31b330:
    if (ctx->pc == 0x31B330u) {
        ctx->pc = 0x31B330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B32Cu;
        // 0x31b330: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B334u;
        goto label_31b334;
    }
    ctx->pc = 0x31B32Cu;
    {
        const bool branch_taken_0x31b32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B32Cu;
        // 0x31b330: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b32c) {
            ctx->pc = 0x31B358u;
            goto label_31b358;
        }
    }
    ctx->pc = 0x31B334u;
label_31b334:
    // 0x31b334: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x31b334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_31b338:
    // 0x31b338: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x31b338u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_31b33c:
    // 0x31b33c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x31b33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_31b340:
    // 0x31b340: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x31b340u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_31b344:
    // 0x31b344: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x31b344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_31b348:
    // 0x31b348: 0x40f809  jalr        $v0
label_31b34c:
    if (ctx->pc == 0x31B34Cu) {
        ctx->pc = 0x31B34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B348u;
        // 0x31b34c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B350u;
        goto label_31b350;
    }
    ctx->pc = 0x31B348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31B350u);
        ctx->pc = 0x31B34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B348u;
        // 0x31b34c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B348u, 0x31B350u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31B350u;
label_31b350:
    // 0x31b350: 0x10000002  b           . + 4 + (0x2 << 2)
label_31b354:
    if (ctx->pc == 0x31B354u) {
        ctx->pc = 0x31B354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B350u;
        // 0x31b354: 0xae620030  sw          $v0, 0x30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B358u;
        goto label_31b358;
    }
    ctx->pc = 0x31B350u;
    {
        const bool branch_taken_0x31b350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B350u;
        // 0x31b354: 0xae620030  sw          $v0, 0x30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b350) {
            ctx->pc = 0x31B35Cu;
            goto label_31b35c;
        }
    }
    ctx->pc = 0x31B358u;
label_31b358:
    // 0x31b358: 0xae600030  sw          $zero, 0x30($s3)
    ctx->pc = 0x31b358u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
label_31b35c:
    // 0x31b35c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x31b35cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31b360:
    // 0x31b360: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x31b360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31b364:
    // 0x31b364: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x31b364u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31b368:
    // 0x31b368: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x31b368u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31b36c:
    // 0x31b36c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x31b36cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31b370:
    // 0x31b370: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x31b370u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31b374:
    // 0x31b374: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31b374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31b378:
    // 0x31b378: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x31b378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_31b37c:
    // 0x31b37c: 0x3e00008  jr          $ra
label_31b380:
    if (ctx->pc == 0x31B380u) {
        ctx->pc = 0x31B380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B37Cu;
        // 0x31b380: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B384u;
        goto label_31b384;
    }
    ctx->pc = 0x31B37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B37Cu;
        // 0x31b380: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B37Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B384u;
label_31b384:
    // 0x31b384: 0x0  nop
    ctx->pc = 0x31b384u;
    // NOP
    ctx->pc = 0x31b388u;
}
