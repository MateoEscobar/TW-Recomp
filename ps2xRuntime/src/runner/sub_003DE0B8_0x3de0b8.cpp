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

// Function: sub_003DE0B8
// Address: 0x3de0b8 - 0x3de3bc
void sub_003DE0B8_0x3de0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DE0B8_0x3de0b8");
#endif

    switch (ctx->pc) {
        case 0x3de0b8u: goto label_3de0b8;
        case 0x3de0bcu: goto label_3de0bc;
        case 0x3de0c0u: goto label_3de0c0;
        case 0x3de0c4u: goto label_3de0c4;
        case 0x3de0c8u: goto label_3de0c8;
        case 0x3de0ccu: goto label_3de0cc;
        case 0x3de0d0u: goto label_3de0d0;
        case 0x3de0d4u: goto label_3de0d4;
        case 0x3de0d8u: goto label_3de0d8;
        case 0x3de0dcu: goto label_3de0dc;
        case 0x3de0e0u: goto label_3de0e0;
        case 0x3de0e4u: goto label_3de0e4;
        case 0x3de0e8u: goto label_3de0e8;
        case 0x3de0ecu: goto label_3de0ec;
        case 0x3de0f0u: goto label_3de0f0;
        case 0x3de0f4u: goto label_3de0f4;
        case 0x3de0f8u: goto label_3de0f8;
        case 0x3de0fcu: goto label_3de0fc;
        case 0x3de100u: goto label_3de100;
        case 0x3de104u: goto label_3de104;
        case 0x3de108u: goto label_3de108;
        case 0x3de10cu: goto label_3de10c;
        case 0x3de110u: goto label_3de110;
        case 0x3de114u: goto label_3de114;
        case 0x3de118u: goto label_3de118;
        case 0x3de11cu: goto label_3de11c;
        case 0x3de120u: goto label_3de120;
        case 0x3de124u: goto label_3de124;
        case 0x3de128u: goto label_3de128;
        case 0x3de12cu: goto label_3de12c;
        case 0x3de130u: goto label_3de130;
        case 0x3de134u: goto label_3de134;
        case 0x3de138u: goto label_3de138;
        case 0x3de13cu: goto label_3de13c;
        case 0x3de140u: goto label_3de140;
        case 0x3de144u: goto label_3de144;
        case 0x3de148u: goto label_3de148;
        case 0x3de14cu: goto label_3de14c;
        case 0x3de150u: goto label_3de150;
        case 0x3de154u: goto label_3de154;
        case 0x3de158u: goto label_3de158;
        case 0x3de15cu: goto label_3de15c;
        case 0x3de160u: goto label_3de160;
        case 0x3de164u: goto label_3de164;
        case 0x3de168u: goto label_3de168;
        case 0x3de16cu: goto label_3de16c;
        case 0x3de170u: goto label_3de170;
        case 0x3de174u: goto label_3de174;
        case 0x3de178u: goto label_3de178;
        case 0x3de17cu: goto label_3de17c;
        case 0x3de180u: goto label_3de180;
        case 0x3de184u: goto label_3de184;
        case 0x3de188u: goto label_3de188;
        case 0x3de18cu: goto label_3de18c;
        case 0x3de190u: goto label_3de190;
        case 0x3de194u: goto label_3de194;
        case 0x3de198u: goto label_3de198;
        case 0x3de19cu: goto label_3de19c;
        case 0x3de1a0u: goto label_3de1a0;
        case 0x3de1a4u: goto label_3de1a4;
        case 0x3de1a8u: goto label_3de1a8;
        case 0x3de1acu: goto label_3de1ac;
        case 0x3de1b0u: goto label_3de1b0;
        case 0x3de1b4u: goto label_3de1b4;
        case 0x3de1b8u: goto label_3de1b8;
        case 0x3de1bcu: goto label_3de1bc;
        case 0x3de1c0u: goto label_3de1c0;
        case 0x3de1c4u: goto label_3de1c4;
        case 0x3de1c8u: goto label_3de1c8;
        case 0x3de1ccu: goto label_3de1cc;
        case 0x3de1d0u: goto label_3de1d0;
        case 0x3de1d4u: goto label_3de1d4;
        case 0x3de1d8u: goto label_3de1d8;
        case 0x3de1dcu: goto label_3de1dc;
        case 0x3de1e0u: goto label_3de1e0;
        case 0x3de1e4u: goto label_3de1e4;
        case 0x3de1e8u: goto label_3de1e8;
        case 0x3de1ecu: goto label_3de1ec;
        case 0x3de1f0u: goto label_3de1f0;
        case 0x3de1f4u: goto label_3de1f4;
        case 0x3de1f8u: goto label_3de1f8;
        case 0x3de1fcu: goto label_3de1fc;
        case 0x3de200u: goto label_3de200;
        case 0x3de204u: goto label_3de204;
        case 0x3de208u: goto label_3de208;
        case 0x3de20cu: goto label_3de20c;
        case 0x3de210u: goto label_3de210;
        case 0x3de214u: goto label_3de214;
        case 0x3de218u: goto label_3de218;
        case 0x3de21cu: goto label_3de21c;
        case 0x3de220u: goto label_3de220;
        case 0x3de224u: goto label_3de224;
        case 0x3de228u: goto label_3de228;
        case 0x3de22cu: goto label_3de22c;
        case 0x3de230u: goto label_3de230;
        case 0x3de234u: goto label_3de234;
        case 0x3de238u: goto label_3de238;
        case 0x3de23cu: goto label_3de23c;
        case 0x3de240u: goto label_3de240;
        case 0x3de244u: goto label_3de244;
        case 0x3de248u: goto label_3de248;
        case 0x3de24cu: goto label_3de24c;
        case 0x3de250u: goto label_3de250;
        case 0x3de254u: goto label_3de254;
        case 0x3de258u: goto label_3de258;
        case 0x3de25cu: goto label_3de25c;
        case 0x3de260u: goto label_3de260;
        case 0x3de264u: goto label_3de264;
        case 0x3de268u: goto label_3de268;
        case 0x3de26cu: goto label_3de26c;
        case 0x3de270u: goto label_3de270;
        case 0x3de274u: goto label_3de274;
        case 0x3de278u: goto label_3de278;
        case 0x3de27cu: goto label_3de27c;
        case 0x3de280u: goto label_3de280;
        case 0x3de284u: goto label_3de284;
        case 0x3de288u: goto label_3de288;
        case 0x3de28cu: goto label_3de28c;
        case 0x3de290u: goto label_3de290;
        case 0x3de294u: goto label_3de294;
        case 0x3de298u: goto label_3de298;
        case 0x3de29cu: goto label_3de29c;
        case 0x3de2a0u: goto label_3de2a0;
        case 0x3de2a4u: goto label_3de2a4;
        case 0x3de2a8u: goto label_3de2a8;
        case 0x3de2acu: goto label_3de2ac;
        case 0x3de2b0u: goto label_3de2b0;
        case 0x3de2b4u: goto label_3de2b4;
        case 0x3de2b8u: goto label_3de2b8;
        case 0x3de2bcu: goto label_3de2bc;
        case 0x3de2c0u: goto label_3de2c0;
        case 0x3de2c4u: goto label_3de2c4;
        case 0x3de2c8u: goto label_3de2c8;
        case 0x3de2ccu: goto label_3de2cc;
        case 0x3de2d0u: goto label_3de2d0;
        case 0x3de2d4u: goto label_3de2d4;
        case 0x3de2d8u: goto label_3de2d8;
        case 0x3de2dcu: goto label_3de2dc;
        case 0x3de2e0u: goto label_3de2e0;
        case 0x3de2e4u: goto label_3de2e4;
        case 0x3de2e8u: goto label_3de2e8;
        case 0x3de2ecu: goto label_3de2ec;
        case 0x3de2f0u: goto label_3de2f0;
        case 0x3de2f4u: goto label_3de2f4;
        case 0x3de2f8u: goto label_3de2f8;
        case 0x3de2fcu: goto label_3de2fc;
        case 0x3de300u: goto label_3de300;
        case 0x3de304u: goto label_3de304;
        case 0x3de308u: goto label_3de308;
        case 0x3de30cu: goto label_3de30c;
        case 0x3de310u: goto label_3de310;
        case 0x3de314u: goto label_3de314;
        case 0x3de318u: goto label_3de318;
        case 0x3de31cu: goto label_3de31c;
        case 0x3de320u: goto label_3de320;
        case 0x3de324u: goto label_3de324;
        case 0x3de328u: goto label_3de328;
        case 0x3de32cu: goto label_3de32c;
        case 0x3de330u: goto label_3de330;
        case 0x3de334u: goto label_3de334;
        case 0x3de338u: goto label_3de338;
        case 0x3de33cu: goto label_3de33c;
        case 0x3de340u: goto label_3de340;
        case 0x3de344u: goto label_3de344;
        case 0x3de348u: goto label_3de348;
        case 0x3de34cu: goto label_3de34c;
        case 0x3de350u: goto label_3de350;
        case 0x3de354u: goto label_3de354;
        case 0x3de358u: goto label_3de358;
        case 0x3de35cu: goto label_3de35c;
        case 0x3de360u: goto label_3de360;
        case 0x3de364u: goto label_3de364;
        case 0x3de368u: goto label_3de368;
        case 0x3de36cu: goto label_3de36c;
        case 0x3de370u: goto label_3de370;
        case 0x3de374u: goto label_3de374;
        case 0x3de378u: goto label_3de378;
        case 0x3de37cu: goto label_3de37c;
        case 0x3de380u: goto label_3de380;
        case 0x3de384u: goto label_3de384;
        case 0x3de388u: goto label_3de388;
        case 0x3de38cu: goto label_3de38c;
        case 0x3de390u: goto label_3de390;
        case 0x3de394u: goto label_3de394;
        case 0x3de398u: goto label_3de398;
        case 0x3de39cu: goto label_3de39c;
        case 0x3de3a0u: goto label_3de3a0;
        case 0x3de3a4u: goto label_3de3a4;
        case 0x3de3a8u: goto label_3de3a8;
        case 0x3de3acu: goto label_3de3ac;
        case 0x3de3b0u: goto label_3de3b0;
        case 0x3de3b4u: goto label_3de3b4;
        case 0x3de3b8u: goto label_3de3b8;
        default: break;
    }

    ctx->pc = 0x3de0b8u;

label_3de0b8:
    // 0x3de0b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3de0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3de0bc:
    // 0x3de0bc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3de0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3de0c0:
    // 0x3de0c0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3de0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3de0c4:
    // 0x3de0c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3de0c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3de0c8:
    // 0x3de0c8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3de0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3de0cc:
    // 0x3de0cc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3de0ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3de0d0:
    // 0x3de0d0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3de0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3de0d4:
    // 0x3de0d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3de0d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3de0d8:
    // 0x3de0d8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3de0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3de0dc:
    // 0x3de0dc: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3de0dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3de0e0:
    // 0x3de0e0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3de0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3de0e4:
    // 0x3de0e4: 0x40f809  jalr        $v0
label_3de0e8:
    if (ctx->pc == 0x3DE0E8u) {
        ctx->pc = 0x3DE0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE0E4u;
        // 0x3de0e8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE0ECu;
        goto label_3de0ec;
    }
    ctx->pc = 0x3DE0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DE0ECu);
        ctx->pc = 0x3DE0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE0E4u;
        // 0x3de0e8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE0E4u, 0x3DE0ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DE0ECu;
label_3de0ec:
    // 0x3de0ec: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x3de0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3de0f0:
    // 0x3de0f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3de0f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3de0f4:
    // 0x3de0f4: 0x2c620030  sltiu       $v0, $v1, 0x30
    ctx->pc = 0x3de0f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
label_3de0f8:
    // 0x3de0f8: 0x104000b0  beqz        $v0, . + 4 + (0xB0 << 2)
label_3de0fc:
    if (ctx->pc == 0x3DE0FCu) {
        ctx->pc = 0x3DE0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE0F8u;
        // 0x3de0fc: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE100u;
        goto label_3de100;
    }
    ctx->pc = 0x3DE0F8u;
    {
        const bool branch_taken_0x3de0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE0F8u;
        // 0x3de0fc: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de0f8) {
            ctx->pc = 0x3DE3BCu;
            return;
        }
    }
    ctx->pc = 0x3DE100u;
label_3de100:
    // 0x3de100: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3de100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3de104:
    // 0x3de104: 0x244251e0  addiu       $v0, $v0, 0x51E0
    ctx->pc = 0x3de104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20960));
label_3de108:
    // 0x3de108: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3de108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3de10c:
    // 0x3de10c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3de10cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3de110:
    // 0x3de110: 0x800008  jr          $a0
label_3de114:
    if (ctx->pc == 0x3DE114u) {
        ctx->pc = 0x3DE118u;
        goto label_3de118;
    }
    ctx->pc = 0x3DE110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3DE118u: goto label_3de118;
            case 0x3DE13Cu: goto label_3de13c;
            case 0x3DE188u: goto label_3de188;
            case 0x3DE208u: goto label_3de208;
            case 0x3DE234u: goto label_3de234;
            case 0x3DE2F8u: goto label_3de2f8;
            case 0x3DE348u: goto label_3de348;
            case 0x3DE38Cu: goto label_3de38c;
            case 0x3DE3A8u: goto label_3de3a8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE110u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3DE118u;
label_3de118:
    // 0x3de118: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3de118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3de11c:
    // 0x3de11c: 0xc0ea12a  jal         func_3A84A8
label_3de120:
    if (ctx->pc == 0x3DE120u) {
        ctx->pc = 0x3DE120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE11Cu;
        // 0x3de120: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE124u;
        goto label_3de124;
    }
    ctx->pc = 0x3DE11Cu;
    SET_GPR_U32(ctx, 31, 0x3DE124u);
    ctx->pc = 0x3DE120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE11Cu;
    // 0x3de120: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DE11Cu, 0x3DE124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE124u;
label_3de124:
    // 0x3de124: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3de124u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3de128:
    // 0x3de128: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3de128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3de12c:
    // 0x3de12c: 0xc0ea14c  jal         func_3A8530
label_3de130:
    if (ctx->pc == 0x3DE130u) {
        ctx->pc = 0x3DE130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE12Cu;
        // 0x3de130: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE134u;
        goto label_3de134;
    }
    ctx->pc = 0x3DE12Cu;
    SET_GPR_U32(ctx, 31, 0x3DE134u);
    ctx->pc = 0x3DE130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE12Cu;
    // 0x3de130: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3DE12Cu, 0x3DE134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE134u;
label_3de134:
    // 0x3de134: 0x100000a2  b           . + 4 + (0xA2 << 2)
label_3de138:
    if (ctx->pc == 0x3DE138u) {
        ctx->pc = 0x3DE138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE134u;
        // 0x3de138: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE13Cu;
        goto label_3de13c;
    }
    ctx->pc = 0x3DE134u;
    {
        const bool branch_taken_0x3de134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE134u;
        // 0x3de138: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de134) {
            ctx->pc = 0x3DE3C0u;
            return;
        }
    }
    ctx->pc = 0x3DE13Cu;
label_3de13c:
    // 0x3de13c: 0xc0ea146  jal         func_3A8518
label_3de140:
    if (ctx->pc == 0x3DE140u) {
        ctx->pc = 0x3DE140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE13Cu;
        // 0x3de140: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE144u;
        goto label_3de144;
    }
    ctx->pc = 0x3DE13Cu;
    SET_GPR_U32(ctx, 31, 0x3DE144u);
    ctx->pc = 0x3DE140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE13Cu;
    // 0x3de140: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3DE13Cu, 0x3DE144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE144u;
label_3de144:
    // 0x3de144: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3de144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3de148:
    // 0x3de148: 0xc0ea12a  jal         func_3A84A8
label_3de14c:
    if (ctx->pc == 0x3DE14Cu) {
        ctx->pc = 0x3DE14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE148u;
        // 0x3de14c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE150u;
        goto label_3de150;
    }
    ctx->pc = 0x3DE148u;
    SET_GPR_U32(ctx, 31, 0x3DE150u);
    ctx->pc = 0x3DE14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE148u;
    // 0x3de14c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DE148u, 0x3DE150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE150u;
label_3de150:
    // 0x3de150: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3de150u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3de154:
    // 0x3de154: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3de154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3de158:
    // 0x3de158: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3de158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3de15c:
    // 0x3de15c: 0xc0ea12a  jal         func_3A84A8
label_3de160:
    if (ctx->pc == 0x3DE160u) {
        ctx->pc = 0x3DE160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE15Cu;
        // 0x3de160: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE164u;
        goto label_3de164;
    }
    ctx->pc = 0x3DE15Cu;
    SET_GPR_U32(ctx, 31, 0x3DE164u);
    ctx->pc = 0x3DE160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE15Cu;
    // 0x3de160: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DE15Cu, 0x3DE164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE164u;
label_3de164:
    // 0x3de164: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3de164u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3de168:
    // 0x3de168: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3de168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3de16c:
    // 0x3de16c: 0xc0ea146  jal         func_3A8518
label_3de170:
    if (ctx->pc == 0x3DE170u) {
        ctx->pc = 0x3DE170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE16Cu;
        // 0x3de170: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE174u;
        goto label_3de174;
    }
    ctx->pc = 0x3DE16Cu;
    SET_GPR_U32(ctx, 31, 0x3DE174u);
    ctx->pc = 0x3DE170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE16Cu;
    // 0x3de170: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3DE16Cu, 0x3DE174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE174u;
label_3de174:
    // 0x3de174: 0xc0ea14c  jal         func_3A8530
label_3de178:
    if (ctx->pc == 0x3DE178u) {
        ctx->pc = 0x3DE178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE174u;
        // 0x3de178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE17Cu;
        goto label_3de17c;
    }
    ctx->pc = 0x3DE174u;
    SET_GPR_U32(ctx, 31, 0x3DE17Cu);
    ctx->pc = 0x3DE178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE174u;
    // 0x3de178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3DE174u, 0x3DE17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE17Cu;
label_3de17c:
    // 0x3de17c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3de17cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3de180:
    // 0x3de180: 0x1000008e  b           . + 4 + (0x8E << 2)
label_3de184:
    if (ctx->pc == 0x3DE184u) {
        ctx->pc = 0x3DE184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE180u;
        // 0x3de184: 0x7e430010  sq          $v1, 0x10($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE188u;
        goto label_3de188;
    }
    ctx->pc = 0x3DE180u;
    {
        const bool branch_taken_0x3de180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE180u;
        // 0x3de184: 0x7e430010  sq          $v1, 0x10($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de180) {
            ctx->pc = 0x3DE3BCu;
            return;
        }
    }
    ctx->pc = 0x3DE188u;
label_3de188:
    // 0x3de188: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3de188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3de18c:
    // 0x3de18c: 0x5440008c  bnel        $v0, $zero, . + 4 + (0x8C << 2)
label_3de190:
    if (ctx->pc == 0x3DE190u) {
        ctx->pc = 0x3DE190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE18Cu;
        // 0x3de190: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE194u;
        goto label_3de194;
    }
    ctx->pc = 0x3DE18Cu;
    {
        const bool branch_taken_0x3de18c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3de18c) {
            ctx->pc = 0x3DE190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DE18Cu;
            // 0x3de190: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DE3C0u;
            return;
        }
    }
    ctx->pc = 0x3DE194u;
label_3de194:
    // 0x3de194: 0x3c0273bd  lui         $v0, 0x73BD
    ctx->pc = 0x3de194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29629 << 16));
label_3de198:
    // 0x3de198: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x3de198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_3de19c:
    // 0x3de19c: 0x3442f74d  ori         $v0, $v0, 0xF74D
    ctx->pc = 0x3de19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63309);
label_3de1a0:
    // 0x3de1a0: 0x50620014  beql        $v1, $v0, . + 4 + (0x14 << 2)
label_3de1a4:
    if (ctx->pc == 0x3DE1A4u) {
        ctx->pc = 0x3DE1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE1A0u;
        // 0x3de1a4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE1A8u;
        goto label_3de1a8;
    }
    ctx->pc = 0x3DE1A0u;
    {
        const bool branch_taken_0x3de1a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3de1a0) {
            ctx->pc = 0x3DE1A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DE1A0u;
            // 0x3de1a4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DE1F4u;
            goto label_3de1f4;
        }
    }
    ctx->pc = 0x3DE1A8u;
label_3de1a8:
    // 0x3de1a8: 0x3c028c90  lui         $v0, 0x8C90
    ctx->pc = 0x3de1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35984 << 16));
label_3de1ac:
    // 0x3de1ac: 0x34423a74  ori         $v0, $v0, 0x3A74
    ctx->pc = 0x3de1acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14964);
label_3de1b0:
    // 0x3de1b0: 0x50620010  beql        $v1, $v0, . + 4 + (0x10 << 2)
label_3de1b4:
    if (ctx->pc == 0x3DE1B4u) {
        ctx->pc = 0x3DE1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE1B0u;
        // 0x3de1b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE1B8u;
        goto label_3de1b8;
    }
    ctx->pc = 0x3DE1B0u;
    {
        const bool branch_taken_0x3de1b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3de1b0) {
            ctx->pc = 0x3DE1B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DE1B0u;
            // 0x3de1b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DE1F4u;
            goto label_3de1f4;
        }
    }
    ctx->pc = 0x3DE1B8u;
label_3de1b8:
    // 0x3de1b8: 0x3c028478  lui         $v0, 0x8478
    ctx->pc = 0x3de1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33912 << 16));
label_3de1bc:
    // 0x3de1bc: 0x3442170e  ori         $v0, $v0, 0x170E
    ctx->pc = 0x3de1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5902);
label_3de1c0:
    // 0x3de1c0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_3de1c4:
    if (ctx->pc == 0x3DE1C4u) {
        ctx->pc = 0x3DE1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE1C0u;
        // 0x3de1c4: 0x3c0275bd  lui         $v0, 0x75BD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30141 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE1C8u;
        goto label_3de1c8;
    }
    ctx->pc = 0x3DE1C0u;
    {
        const bool branch_taken_0x3de1c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DE1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE1C0u;
        // 0x3de1c4: 0x3c0275bd  lui         $v0, 0x75BD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de1c0) {
            ctx->pc = 0x3DE1F0u;
            goto label_3de1f0;
        }
    }
    ctx->pc = 0x3DE1C8u;
label_3de1c8:
    // 0x3de1c8: 0x34426a7e  ori         $v0, $v0, 0x6A7E
    ctx->pc = 0x3de1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27262);
label_3de1cc:
    // 0x3de1cc: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_3de1d0:
    if (ctx->pc == 0x3DE1D0u) {
        ctx->pc = 0x3DE1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE1CCu;
        // 0x3de1d0: 0x3c0271ac  lui         $v0, 0x71AC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29100 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE1D4u;
        goto label_3de1d4;
    }
    ctx->pc = 0x3DE1CCu;
    {
        const bool branch_taken_0x3de1cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DE1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE1CCu;
        // 0x3de1d0: 0x3c0271ac  lui         $v0, 0x71AC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de1cc) {
            ctx->pc = 0x3DE1F0u;
            goto label_3de1f0;
        }
    }
    ctx->pc = 0x3DE1D4u;
label_3de1d4:
    // 0x3de1d4: 0x34429023  ori         $v0, $v0, 0x9023
    ctx->pc = 0x3de1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36899);
label_3de1d8:
    // 0x3de1d8: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
label_3de1dc:
    if (ctx->pc == 0x3DE1DCu) {
        ctx->pc = 0x3DE1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE1D8u;
        // 0x3de1dc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE1E0u;
        goto label_3de1e0;
    }
    ctx->pc = 0x3DE1D8u;
    {
        const bool branch_taken_0x3de1d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3de1d8) {
            ctx->pc = 0x3DE1DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DE1D8u;
            // 0x3de1dc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DE1F4u;
            goto label_3de1f4;
        }
    }
    ctx->pc = 0x3DE1E0u;
label_3de1e0:
    // 0x3de1e0: 0x3c02b948  lui         $v0, 0xB948
    ctx->pc = 0x3de1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47432 << 16));
label_3de1e4:
    // 0x3de1e4: 0x3442765a  ori         $v0, $v0, 0x765A
    ctx->pc = 0x3de1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30298);
label_3de1e8:
    // 0x3de1e8: 0x1462003c  bne         $v1, $v0, . + 4 + (0x3C << 2)
label_3de1ec:
    if (ctx->pc == 0x3DE1ECu) {
        ctx->pc = 0x3DE1F0u;
        goto label_3de1f0;
    }
    ctx->pc = 0x3DE1E8u;
    {
        const bool branch_taken_0x3de1e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3de1e8) {
            ctx->pc = 0x3DE2DCu;
            goto label_3de2dc;
        }
    }
    ctx->pc = 0x3DE1F0u;
label_3de1f0:
    // 0x3de1f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3de1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3de1f4:
    // 0x3de1f4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3de1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3de1f8:
    // 0x3de1f8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3de1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3de1fc:
    // 0x3de1fc: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3de1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3de200:
    // 0x3de200: 0x10000035  b           . + 4 + (0x35 << 2)
label_3de204:
    if (ctx->pc == 0x3DE204u) {
        ctx->pc = 0x3DE204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE200u;
        // 0x3de204: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE208u;
        goto label_3de208;
    }
    ctx->pc = 0x3DE200u;
    {
        const bool branch_taken_0x3de200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE200u;
        // 0x3de204: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de200) {
            ctx->pc = 0x3DE2D8u;
            goto label_3de2d8;
        }
    }
    ctx->pc = 0x3DE208u;
label_3de208:
    // 0x3de208: 0xc0ea146  jal         func_3A8518
label_3de20c:
    if (ctx->pc == 0x3DE20Cu) {
        ctx->pc = 0x3DE20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE208u;
        // 0x3de20c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE210u;
        goto label_3de210;
    }
    ctx->pc = 0x3DE208u;
    SET_GPR_U32(ctx, 31, 0x3DE210u);
    ctx->pc = 0x3DE20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE208u;
    // 0x3de20c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3DE208u, 0x3DE210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE210u;
label_3de210:
    // 0x3de210: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3de214:
    if (ctx->pc == 0x3DE214u) {
        ctx->pc = 0x3DE214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE210u;
        // 0x3de214: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE218u;
        goto label_3de218;
    }
    ctx->pc = 0x3DE210u;
    {
        const bool branch_taken_0x3de210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DE214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE210u;
        // 0x3de214: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de210) {
            ctx->pc = 0x3DE228u;
            goto label_3de228;
        }
    }
    ctx->pc = 0x3DE218u;
label_3de218:
    // 0x3de218: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3de218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_3de21c:
    // 0x3de21c: 0x38428000  xori        $v0, $v0, 0x8000
    ctx->pc = 0x3de21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)32768);
label_3de220:
    // 0x3de220: 0x10000066  b           . + 4 + (0x66 << 2)
label_3de224:
    if (ctx->pc == 0x3DE224u) {
        ctx->pc = 0x3DE224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE220u;
        // 0x3de224: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE228u;
        goto label_3de228;
    }
    ctx->pc = 0x3DE220u;
    {
        const bool branch_taken_0x3de220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE220u;
        // 0x3de224: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de220) {
            ctx->pc = 0x3DE3BCu;
            return;
        }
    }
    ctx->pc = 0x3DE228u;
label_3de228:
    // 0x3de228: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3de228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_3de22c:
    // 0x3de22c: 0x10000063  b           . + 4 + (0x63 << 2)
label_3de230:
    if (ctx->pc == 0x3DE230u) {
        ctx->pc = 0x3DE230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE22Cu;
        // 0x3de230: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE234u;
        goto label_3de234;
    }
    ctx->pc = 0x3DE22Cu;
    {
        const bool branch_taken_0x3de22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE22Cu;
        // 0x3de230: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de22c) {
            ctx->pc = 0x3DE3BCu;
            return;
        }
    }
    ctx->pc = 0x3DE234u;
label_3de234:
    // 0x3de234: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3de234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3de238:
    // 0x3de238: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3de238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3de23c:
    // 0x3de23c: 0x54620060  bnel        $v1, $v0, . + 4 + (0x60 << 2)
label_3de240:
    if (ctx->pc == 0x3DE240u) {
        ctx->pc = 0x3DE240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE23Cu;
        // 0x3de240: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE244u;
        goto label_3de244;
    }
    ctx->pc = 0x3DE23Cu;
    {
        const bool branch_taken_0x3de23c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3de23c) {
            ctx->pc = 0x3DE240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DE23Cu;
            // 0x3de240: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DE3C0u;
            return;
        }
    }
    ctx->pc = 0x3DE244u;
label_3de244:
    // 0x3de244: 0x3c028c90  lui         $v0, 0x8C90
    ctx->pc = 0x3de244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35984 << 16));
label_3de248:
    // 0x3de248: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x3de248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_3de24c:
    // 0x3de24c: 0x34423a74  ori         $v0, $v0, 0x3A74
    ctx->pc = 0x3de24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14964);
label_3de250:
    // 0x3de250: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_3de254:
    if (ctx->pc == 0x3DE254u) {
        ctx->pc = 0x3DE254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE250u;
        // 0x3de254: 0x3c0275bd  lui         $v0, 0x75BD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30141 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE258u;
        goto label_3de258;
    }
    ctx->pc = 0x3DE250u;
    {
        const bool branch_taken_0x3de250 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DE254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE250u;
        // 0x3de254: 0x3c0275bd  lui         $v0, 0x75BD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de250) {
            ctx->pc = 0x3DE274u;
            goto label_3de274;
        }
    }
    ctx->pc = 0x3DE258u;
label_3de258:
    // 0x3de258: 0x34426a7e  ori         $v0, $v0, 0x6A7E
    ctx->pc = 0x3de258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27262);
label_3de25c:
    // 0x3de25c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_3de260:
    if (ctx->pc == 0x3DE260u) {
        ctx->pc = 0x3DE260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE25Cu;
        // 0x3de260: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE264u;
        goto label_3de264;
    }
    ctx->pc = 0x3DE25Cu;
    {
        const bool branch_taken_0x3de25c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DE260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE25Cu;
        // 0x3de260: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de25c) {
            ctx->pc = 0x3DE278u;
            goto label_3de278;
        }
    }
    ctx->pc = 0x3DE264u;
label_3de264:
    // 0x3de264: 0x3c028478  lui         $v0, 0x8478
    ctx->pc = 0x3de264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33912 << 16));
label_3de268:
    // 0x3de268: 0x3442170e  ori         $v0, $v0, 0x170E
    ctx->pc = 0x3de268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5902);
label_3de26c:
    // 0x3de26c: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_3de270:
    if (ctx->pc == 0x3DE270u) {
        ctx->pc = 0x3DE270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE26Cu;
        // 0x3de270: 0x3c0273bd  lui         $v0, 0x73BD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29629 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE274u;
        goto label_3de274;
    }
    ctx->pc = 0x3DE26Cu;
    {
        const bool branch_taken_0x3de26c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3DE270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE26Cu;
        // 0x3de270: 0x3c0273bd  lui         $v0, 0x73BD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29629 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de26c) {
            ctx->pc = 0x3DE2A0u;
            goto label_3de2a0;
        }
    }
    ctx->pc = 0x3DE274u;
label_3de274:
    // 0x3de274: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x3de274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3de278:
    // 0x3de278: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3de278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3de27c:
    // 0x3de27c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3de27cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_3de280:
    // 0x3de280: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3de280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3de284:
    // 0x3de284: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3de284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3de288:
    // 0x3de288: 0x3463ff01  ori         $v1, $v1, 0xFF01
    ctx->pc = 0x3de288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65281);
label_3de28c:
    // 0x3de28c: 0x3484ff00  ori         $a0, $a0, 0xFF00
    ctx->pc = 0x3de28cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65280);
label_3de290:
    // 0x3de290: 0xae4300c8  sw          $v1, 0xC8($s2)
    ctx->pc = 0x3de290u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 3));
label_3de294:
    // 0x3de294: 0xae4400cc  sw          $a0, 0xCC($s2)
    ctx->pc = 0x3de294u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 4));
label_3de298:
    // 0x3de298: 0x3c0273bd  lui         $v0, 0x73BD
    ctx->pc = 0x3de298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29629 << 16));
label_3de29c:
    // 0x3de29c: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x3de29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_3de2a0:
    // 0x3de2a0: 0x3442f74d  ori         $v0, $v0, 0xF74D
    ctx->pc = 0x3de2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63309);
label_3de2a4:
    // 0x3de2a4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_3de2a8:
    if (ctx->pc == 0x3DE2A8u) {
        ctx->pc = 0x3DE2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE2A4u;
        // 0x3de2a8: 0x3c0271ac  lui         $v0, 0x71AC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29100 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE2ACu;
        goto label_3de2ac;
    }
    ctx->pc = 0x3DE2A4u;
    {
        const bool branch_taken_0x3de2a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DE2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE2A4u;
        // 0x3de2a8: 0x3c0271ac  lui         $v0, 0x71AC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de2a4) {
            ctx->pc = 0x3DE2C8u;
            goto label_3de2c8;
        }
    }
    ctx->pc = 0x3DE2ACu;
label_3de2ac:
    // 0x3de2ac: 0x34429023  ori         $v0, $v0, 0x9023
    ctx->pc = 0x3de2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36899);
label_3de2b0:
    // 0x3de2b0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_3de2b4:
    if (ctx->pc == 0x3DE2B4u) {
        ctx->pc = 0x3DE2B8u;
        goto label_3de2b8;
    }
    ctx->pc = 0x3DE2B0u;
    {
        const bool branch_taken_0x3de2b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3de2b0) {
            ctx->pc = 0x3DE2C8u;
            goto label_3de2c8;
        }
    }
    ctx->pc = 0x3DE2B8u;
label_3de2b8:
    // 0x3de2b8: 0x3c02b948  lui         $v0, 0xB948
    ctx->pc = 0x3de2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47432 << 16));
label_3de2bc:
    // 0x3de2bc: 0x3442765a  ori         $v0, $v0, 0x765A
    ctx->pc = 0x3de2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30298);
label_3de2c0:
    // 0x3de2c0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_3de2c4:
    if (ctx->pc == 0x3DE2C4u) {
        ctx->pc = 0x3DE2C8u;
        goto label_3de2c8;
    }
    ctx->pc = 0x3DE2C0u;
    {
        const bool branch_taken_0x3de2c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3de2c0) {
            ctx->pc = 0x3DE2DCu;
            goto label_3de2dc;
        }
    }
    ctx->pc = 0x3DE2C8u;
label_3de2c8:
    // 0x3de2c8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3de2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3de2cc:
    // 0x3de2cc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3de2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3de2d0:
    // 0x3de2d0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3de2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3de2d4:
    // 0x3de2d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3de2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3de2d8:
    // 0x3de2d8: 0xae4200c8  sw          $v0, 0xC8($s2)
    ctx->pc = 0x3de2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 2));
label_3de2dc:
    // 0x3de2dc: 0xc0e916a  jal         func_3A45A8
label_3de2e0:
    if (ctx->pc == 0x3DE2E0u) {
        ctx->pc = 0x3DE2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE2DCu;
        // 0x3de2e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE2E4u;
        goto label_3de2e4;
    }
    ctx->pc = 0x3DE2DCu;
    SET_GPR_U32(ctx, 31, 0x3DE2E4u);
    ctx->pc = 0x3DE2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE2DCu;
    // 0x3de2e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A45A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A45A8u, 0x3DE2DCu, 0x3DE2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE2E4u;
label_3de2e4:
    // 0x3de2e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3de2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3de2e8:
    // 0x3de2e8: 0xc0e9176  jal         func_3A45D8
label_3de2ec:
    if (ctx->pc == 0x3DE2ECu) {
        ctx->pc = 0x3DE2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE2E8u;
        // 0x3de2ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE2F0u;
        goto label_3de2f0;
    }
    ctx->pc = 0x3DE2E8u;
    SET_GPR_U32(ctx, 31, 0x3DE2F0u);
    ctx->pc = 0x3DE2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE2E8u;
    // 0x3de2ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A45D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A45D8u, 0x3DE2E8u, 0x3DE2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE2F0u;
label_3de2f0:
    // 0x3de2f0: 0x10000033  b           . + 4 + (0x33 << 2)
label_3de2f4:
    if (ctx->pc == 0x3DE2F4u) {
        ctx->pc = 0x3DE2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE2F0u;
        // 0x3de2f4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE2F8u;
        goto label_3de2f8;
    }
    ctx->pc = 0x3DE2F0u;
    {
        const bool branch_taken_0x3de2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE2F0u;
        // 0x3de2f4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de2f0) {
            ctx->pc = 0x3DE3C0u;
            return;
        }
    }
    ctx->pc = 0x3DE2F8u;
label_3de2f8:
    // 0x3de2f8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3de2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3de2fc:
    // 0x3de2fc: 0xc0ea12a  jal         func_3A84A8
label_3de300:
    if (ctx->pc == 0x3DE300u) {
        ctx->pc = 0x3DE300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE2FCu;
        // 0x3de300: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE304u;
        goto label_3de304;
    }
    ctx->pc = 0x3DE2FCu;
    SET_GPR_U32(ctx, 31, 0x3DE304u);
    ctx->pc = 0x3DE300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE2FCu;
    // 0x3de300: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DE2FCu, 0x3DE304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE304u;
label_3de304:
    // 0x3de304: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3de304u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3de308:
    // 0x3de308: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3de308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3de30c:
    // 0x3de30c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3de30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3de310:
    // 0x3de310: 0xc0ea12a  jal         func_3A84A8
label_3de314:
    if (ctx->pc == 0x3DE314u) {
        ctx->pc = 0x3DE314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE310u;
        // 0x3de314: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE318u;
        goto label_3de318;
    }
    ctx->pc = 0x3DE310u;
    SET_GPR_U32(ctx, 31, 0x3DE318u);
    ctx->pc = 0x3DE314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE310u;
    // 0x3de314: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DE310u, 0x3DE318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE318u;
label_3de318:
    // 0x3de318: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3de318u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3de31c:
    // 0x3de31c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3de31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3de320:
    // 0x3de320: 0xc0ea146  jal         func_3A8518
label_3de324:
    if (ctx->pc == 0x3DE324u) {
        ctx->pc = 0x3DE324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE320u;
        // 0x3de324: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE328u;
        goto label_3de328;
    }
    ctx->pc = 0x3DE320u;
    SET_GPR_U32(ctx, 31, 0x3DE328u);
    ctx->pc = 0x3DE324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE320u;
    // 0x3de324: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3DE320u, 0x3DE328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE328u;
label_3de328:
    // 0x3de328: 0xc0ea146  jal         func_3A8518
label_3de32c:
    if (ctx->pc == 0x3DE32Cu) {
        ctx->pc = 0x3DE32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE328u;
        // 0x3de32c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE330u;
        goto label_3de330;
    }
    ctx->pc = 0x3DE328u;
    SET_GPR_U32(ctx, 31, 0x3DE330u);
    ctx->pc = 0x3DE32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE328u;
    // 0x3de32c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3DE328u, 0x3DE330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE330u;
label_3de330:
    // 0x3de330: 0xc0ea14c  jal         func_3A8530
label_3de334:
    if (ctx->pc == 0x3DE334u) {
        ctx->pc = 0x3DE334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE330u;
        // 0x3de334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE338u;
        goto label_3de338;
    }
    ctx->pc = 0x3DE330u;
    SET_GPR_U32(ctx, 31, 0x3DE338u);
    ctx->pc = 0x3DE334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE330u;
    // 0x3de334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3DE330u, 0x3DE338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE338u;
label_3de338:
    // 0x3de338: 0xc0ea14c  jal         func_3A8530
label_3de33c:
    if (ctx->pc == 0x3DE33Cu) {
        ctx->pc = 0x3DE33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE338u;
        // 0x3de33c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE340u;
        goto label_3de340;
    }
    ctx->pc = 0x3DE338u;
    SET_GPR_U32(ctx, 31, 0x3DE340u);
    ctx->pc = 0x3DE33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE338u;
    // 0x3de33c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3DE338u, 0x3DE340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE340u;
label_3de340:
    // 0x3de340: 0x1000001f  b           . + 4 + (0x1F << 2)
label_3de344:
    if (ctx->pc == 0x3DE344u) {
        ctx->pc = 0x3DE344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE340u;
        // 0x3de344: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE348u;
        goto label_3de348;
    }
    ctx->pc = 0x3DE340u;
    {
        const bool branch_taken_0x3de340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE340u;
        // 0x3de344: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de340) {
            ctx->pc = 0x3DE3C0u;
            return;
        }
    }
    ctx->pc = 0x3DE348u;
label_3de348:
    // 0x3de348: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x3de348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3de34c:
    // 0x3de34c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3de34cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3de350:
    // 0x3de350: 0xc0e90ca  jal         func_3A4328
label_3de354:
    if (ctx->pc == 0x3DE354u) {
        ctx->pc = 0x3DE354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE350u;
        // 0x3de354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE358u;
        goto label_3de358;
    }
    ctx->pc = 0x3DE350u;
    SET_GPR_U32(ctx, 31, 0x3DE358u);
    ctx->pc = 0x3DE354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE350u;
    // 0x3de354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3DE350u, 0x3DE358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE358u;
label_3de358:
    // 0x3de358: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3de358u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3de35c:
    // 0x3de35c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3de35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3de360:
    // 0x3de360: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3de360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3de364:
    // 0x3de364: 0xc0e911e  jal         func_3A4478
label_3de368:
    if (ctx->pc == 0x3DE368u) {
        ctx->pc = 0x3DE368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE364u;
        // 0x3de368: 0x7e420010  sq          $v0, 0x10($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE36Cu;
        goto label_3de36c;
    }
    ctx->pc = 0x3DE364u;
    SET_GPR_U32(ctx, 31, 0x3DE36Cu);
    ctx->pc = 0x3DE368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE364u;
    // 0x3de368: 0x7e420010  sq          $v0, 0x10($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3DE364u, 0x3DE36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE36Cu;
label_3de36c:
    // 0x3de36c: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x3de36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3de370:
    // 0x3de370: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3de370u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3de374:
    // 0x3de374: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x3de374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_3de378:
    // 0x3de378: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x3de378u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
label_3de37c:
    // 0x3de37c: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x3de37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
label_3de380:
    // 0x3de380: 0x7e430020  sq          $v1, 0x20($s2)
    ctx->pc = 0x3de380u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 3));
label_3de384:
    // 0x3de384: 0x1000000d  b           . + 4 + (0xD << 2)
label_3de388:
    if (ctx->pc == 0x3DE388u) {
        ctx->pc = 0x3DE388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE384u;
        // 0x3de388: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE38Cu;
        goto label_3de38c;
    }
    ctx->pc = 0x3DE384u;
    {
        const bool branch_taken_0x3de384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE384u;
        // 0x3de388: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de384) {
            ctx->pc = 0x3DE3BCu;
            return;
        }
    }
    ctx->pc = 0x3DE38Cu;
label_3de38c:
    // 0x3de38c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3de38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3de390:
    // 0x3de390: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
label_3de394:
    if (ctx->pc == 0x3DE394u) {
        ctx->pc = 0x3DE394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE390u;
        // 0x3de394: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE398u;
        goto label_3de398;
    }
    ctx->pc = 0x3DE390u;
    {
        const bool branch_taken_0x3de390 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3de390) {
            ctx->pc = 0x3DE394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DE390u;
            // 0x3de394: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DE3C0u;
            return;
        }
    }
    ctx->pc = 0x3DE398u;
label_3de398:
    // 0x3de398: 0xc045c76  jal         func_1171D8
label_3de39c:
    if (ctx->pc == 0x3DE39Cu) {
        ctx->pc = 0x3DE3A0u;
        goto label_3de3a0;
    }
    ctx->pc = 0x3DE398u;
    SET_GPR_U32(ctx, 31, 0x3DE3A0u);
    ctx->pc = 0x1171D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1171D8u, 0x3DE398u, 0x3DE3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE3A0u;
label_3de3a0:
    // 0x3de3a0: 0x10000006  b           . + 4 + (0x6 << 2)
label_3de3a4:
    if (ctx->pc == 0x3DE3A4u) {
        ctx->pc = 0x3DE3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE3A0u;
        // 0x3de3a4: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE3A8u;
        goto label_3de3a8;
    }
    ctx->pc = 0x3DE3A0u;
    {
        const bool branch_taken_0x3de3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE3A0u;
        // 0x3de3a4: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de3a0) {
            ctx->pc = 0x3DE3BCu;
            return;
        }
    }
    ctx->pc = 0x3DE3A8u;
label_3de3a8:
    // 0x3de3a8: 0xc0ea146  jal         func_3A8518
label_3de3ac:
    if (ctx->pc == 0x3DE3ACu) {
        ctx->pc = 0x3DE3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE3A8u;
        // 0x3de3ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE3B0u;
        goto label_3de3b0;
    }
    ctx->pc = 0x3DE3A8u;
    SET_GPR_U32(ctx, 31, 0x3DE3B0u);
    ctx->pc = 0x3DE3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE3A8u;
    // 0x3de3ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3DE3A8u, 0x3DE3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE3B0u;
label_3de3b0:
    // 0x3de3b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3de3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3de3b4:
    // 0x3de3b4: 0xc0e85fa  jal         func_3A17E8
label_3de3b8:
    if (ctx->pc == 0x3DE3B8u) {
        ctx->pc = 0x3DE3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE3B4u;
        // 0x3de3b8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE3BCu;
        goto label_fallthrough_0x3de3b4;
    }
    ctx->pc = 0x3DE3B4u;
    SET_GPR_U32(ctx, 31, 0x3DE3BCu);
    ctx->pc = 0x3DE3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE3B4u;
    // 0x3de3b8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A17E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A17E8u, 0x3DE3B4u, 0x3DE3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x3de3b4:
    ctx->pc = 0x3DE3BCu;
}
