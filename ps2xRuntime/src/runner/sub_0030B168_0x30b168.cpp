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

// Function: sub_0030B168
// Address: 0x30b168 - 0x30b3b8
void sub_0030B168_0x30b168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030B168_0x30b168");
#endif

    switch (ctx->pc) {
        case 0x30b168u: goto label_30b168;
        case 0x30b16cu: goto label_30b16c;
        case 0x30b170u: goto label_30b170;
        case 0x30b174u: goto label_30b174;
        case 0x30b178u: goto label_30b178;
        case 0x30b17cu: goto label_30b17c;
        case 0x30b180u: goto label_30b180;
        case 0x30b184u: goto label_30b184;
        case 0x30b188u: goto label_30b188;
        case 0x30b18cu: goto label_30b18c;
        case 0x30b190u: goto label_30b190;
        case 0x30b194u: goto label_30b194;
        case 0x30b198u: goto label_30b198;
        case 0x30b19cu: goto label_30b19c;
        case 0x30b1a0u: goto label_30b1a0;
        case 0x30b1a4u: goto label_30b1a4;
        case 0x30b1a8u: goto label_30b1a8;
        case 0x30b1acu: goto label_30b1ac;
        case 0x30b1b0u: goto label_30b1b0;
        case 0x30b1b4u: goto label_30b1b4;
        case 0x30b1b8u: goto label_30b1b8;
        case 0x30b1bcu: goto label_30b1bc;
        case 0x30b1c0u: goto label_30b1c0;
        case 0x30b1c4u: goto label_30b1c4;
        case 0x30b1c8u: goto label_30b1c8;
        case 0x30b1ccu: goto label_30b1cc;
        case 0x30b1d0u: goto label_30b1d0;
        case 0x30b1d4u: goto label_30b1d4;
        case 0x30b1d8u: goto label_30b1d8;
        case 0x30b1dcu: goto label_30b1dc;
        case 0x30b1e0u: goto label_30b1e0;
        case 0x30b1e4u: goto label_30b1e4;
        case 0x30b1e8u: goto label_30b1e8;
        case 0x30b1ecu: goto label_30b1ec;
        case 0x30b1f0u: goto label_30b1f0;
        case 0x30b1f4u: goto label_30b1f4;
        case 0x30b1f8u: goto label_30b1f8;
        case 0x30b1fcu: goto label_30b1fc;
        case 0x30b200u: goto label_30b200;
        case 0x30b204u: goto label_30b204;
        case 0x30b208u: goto label_30b208;
        case 0x30b20cu: goto label_30b20c;
        case 0x30b210u: goto label_30b210;
        case 0x30b214u: goto label_30b214;
        case 0x30b218u: goto label_30b218;
        case 0x30b21cu: goto label_30b21c;
        case 0x30b220u: goto label_30b220;
        case 0x30b224u: goto label_30b224;
        case 0x30b228u: goto label_30b228;
        case 0x30b22cu: goto label_30b22c;
        case 0x30b230u: goto label_30b230;
        case 0x30b234u: goto label_30b234;
        case 0x30b238u: goto label_30b238;
        case 0x30b23cu: goto label_30b23c;
        case 0x30b240u: goto label_30b240;
        case 0x30b244u: goto label_30b244;
        case 0x30b248u: goto label_30b248;
        case 0x30b24cu: goto label_30b24c;
        case 0x30b250u: goto label_30b250;
        case 0x30b254u: goto label_30b254;
        case 0x30b258u: goto label_30b258;
        case 0x30b25cu: goto label_30b25c;
        case 0x30b260u: goto label_30b260;
        case 0x30b264u: goto label_30b264;
        case 0x30b268u: goto label_30b268;
        case 0x30b26cu: goto label_30b26c;
        case 0x30b270u: goto label_30b270;
        case 0x30b274u: goto label_30b274;
        case 0x30b278u: goto label_30b278;
        case 0x30b27cu: goto label_30b27c;
        case 0x30b280u: goto label_30b280;
        case 0x30b284u: goto label_30b284;
        case 0x30b288u: goto label_30b288;
        case 0x30b28cu: goto label_30b28c;
        case 0x30b290u: goto label_30b290;
        case 0x30b294u: goto label_30b294;
        case 0x30b298u: goto label_30b298;
        case 0x30b29cu: goto label_30b29c;
        case 0x30b2a0u: goto label_30b2a0;
        case 0x30b2a4u: goto label_30b2a4;
        case 0x30b2a8u: goto label_30b2a8;
        case 0x30b2acu: goto label_30b2ac;
        case 0x30b2b0u: goto label_30b2b0;
        case 0x30b2b4u: goto label_30b2b4;
        case 0x30b2b8u: goto label_30b2b8;
        case 0x30b2bcu: goto label_30b2bc;
        case 0x30b2c0u: goto label_30b2c0;
        case 0x30b2c4u: goto label_30b2c4;
        case 0x30b2c8u: goto label_30b2c8;
        case 0x30b2ccu: goto label_30b2cc;
        case 0x30b2d0u: goto label_30b2d0;
        case 0x30b2d4u: goto label_30b2d4;
        case 0x30b2d8u: goto label_30b2d8;
        case 0x30b2dcu: goto label_30b2dc;
        case 0x30b2e0u: goto label_30b2e0;
        case 0x30b2e4u: goto label_30b2e4;
        case 0x30b2e8u: goto label_30b2e8;
        case 0x30b2ecu: goto label_30b2ec;
        case 0x30b2f0u: goto label_30b2f0;
        case 0x30b2f4u: goto label_30b2f4;
        case 0x30b2f8u: goto label_30b2f8;
        case 0x30b2fcu: goto label_30b2fc;
        case 0x30b300u: goto label_30b300;
        case 0x30b304u: goto label_30b304;
        case 0x30b308u: goto label_30b308;
        case 0x30b30cu: goto label_30b30c;
        case 0x30b310u: goto label_30b310;
        case 0x30b314u: goto label_30b314;
        case 0x30b318u: goto label_30b318;
        case 0x30b31cu: goto label_30b31c;
        case 0x30b320u: goto label_30b320;
        case 0x30b324u: goto label_30b324;
        case 0x30b328u: goto label_30b328;
        case 0x30b32cu: goto label_30b32c;
        case 0x30b330u: goto label_30b330;
        case 0x30b334u: goto label_30b334;
        case 0x30b338u: goto label_30b338;
        case 0x30b33cu: goto label_30b33c;
        case 0x30b340u: goto label_30b340;
        case 0x30b344u: goto label_30b344;
        case 0x30b348u: goto label_30b348;
        case 0x30b34cu: goto label_30b34c;
        case 0x30b350u: goto label_30b350;
        case 0x30b354u: goto label_30b354;
        case 0x30b358u: goto label_30b358;
        case 0x30b35cu: goto label_30b35c;
        case 0x30b360u: goto label_30b360;
        case 0x30b364u: goto label_30b364;
        case 0x30b368u: goto label_30b368;
        case 0x30b36cu: goto label_30b36c;
        case 0x30b370u: goto label_30b370;
        case 0x30b374u: goto label_30b374;
        case 0x30b378u: goto label_30b378;
        case 0x30b37cu: goto label_30b37c;
        case 0x30b380u: goto label_30b380;
        case 0x30b384u: goto label_30b384;
        case 0x30b388u: goto label_30b388;
        case 0x30b38cu: goto label_30b38c;
        case 0x30b390u: goto label_30b390;
        case 0x30b394u: goto label_30b394;
        case 0x30b398u: goto label_30b398;
        case 0x30b39cu: goto label_30b39c;
        case 0x30b3a0u: goto label_30b3a0;
        case 0x30b3a4u: goto label_30b3a4;
        case 0x30b3a8u: goto label_30b3a8;
        case 0x30b3acu: goto label_30b3ac;
        case 0x30b3b0u: goto label_30b3b0;
        case 0x30b3b4u: goto label_30b3b4;
        default: break;
    }

    ctx->pc = 0x30b168u;

label_30b168:
    // 0x30b168: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x30b168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_30b16c:
    // 0x30b16c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x30b16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_30b170:
    // 0x30b170: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x30b170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_30b174:
    // 0x30b174: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x30b174u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30b178:
    // 0x30b178: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x30b178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_30b17c:
    // 0x30b17c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x30b17cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30b180:
    // 0x30b180: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x30b180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_30b184:
    // 0x30b184: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x30b184u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30b188:
    // 0x30b188: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x30b188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_30b18c:
    // 0x30b18c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x30b18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_30b190:
    // 0x30b190: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x30b190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_30b194:
    // 0x30b194: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30b194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_30b198:
    // 0x30b198: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x30b198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_30b19c:
    // 0x30b19c: 0x24560048  addiu       $s6, $v0, 0x48
    ctx->pc = 0x30b19cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_30b1a0:
    // 0x30b1a0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x30b1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_30b1a4:
    // 0x30b1a4: 0x0  nop
    ctx->pc = 0x30b1a4u;
    // NOP
label_30b1a8:
    // 0x30b1a8: 0xc137826  jal         func_4DE098
label_30b1ac:
    if (ctx->pc == 0x30B1ACu) {
        ctx->pc = 0x30B1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B1A8u;
        // 0x30b1ac: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B1B0u;
        goto label_30b1b0;
    }
    ctx->pc = 0x30B1A8u;
    SET_GPR_U32(ctx, 31, 0x30B1B0u);
    ctx->pc = 0x30B1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B1A8u;
    // 0x30b1ac: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x30B1A8u, 0x30B1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B1B0u;
label_30b1b0:
    // 0x30b1b0: 0xc0e409a  jal         func_390268
label_30b1b4:
    if (ctx->pc == 0x30B1B4u) {
        ctx->pc = 0x30B1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B1B0u;
        // 0x30b1b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B1B8u;
        goto label_30b1b8;
    }
    ctx->pc = 0x30B1B0u;
    SET_GPR_U32(ctx, 31, 0x30B1B8u);
    ctx->pc = 0x30B1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B1B0u;
    // 0x30b1b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30B1B0u, 0x30B1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B1B8u;
label_30b1b8:
    // 0x30b1b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x30b1b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30b1bc:
    // 0x30b1bc: 0x1240006f  beqz        $s2, . + 4 + (0x6F << 2)
label_30b1c0:
    if (ctx->pc == 0x30B1C0u) {
        ctx->pc = 0x30B1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B1BCu;
        // 0x30b1c0: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B1C4u;
        goto label_30b1c4;
    }
    ctx->pc = 0x30B1BCu;
    {
        const bool branch_taken_0x30b1bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B1BCu;
        // 0x30b1c0: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b1bc) {
            ctx->pc = 0x30B37Cu;
            goto label_30b37c;
        }
    }
    ctx->pc = 0x30B1C4u;
label_30b1c4:
    // 0x30b1c4: 0x8e4300cc  lw          $v1, 0xCC($s2)
    ctx->pc = 0x30b1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
label_30b1c8:
    // 0x30b1c8: 0x5462006d  bnel        $v1, $v0, . + 4 + (0x6D << 2)
label_30b1cc:
    if (ctx->pc == 0x30B1CCu) {
        ctx->pc = 0x30B1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B1C8u;
        // 0x30b1cc: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B1D0u;
        goto label_30b1d0;
    }
    ctx->pc = 0x30B1C8u;
    {
        const bool branch_taken_0x30b1c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30b1c8) {
            ctx->pc = 0x30B1CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30B1C8u;
            // 0x30b1cc: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B380u;
            goto label_30b380;
        }
    }
    ctx->pc = 0x30B1D0u;
label_30b1d0:
    // 0x30b1d0: 0xc088bbc  jal         func_222EF0
label_30b1d4:
    if (ctx->pc == 0x30B1D4u) {
        ctx->pc = 0x30B1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B1D0u;
        // 0x30b1d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B1D8u;
        goto label_30b1d8;
    }
    ctx->pc = 0x30B1D0u;
    SET_GPR_U32(ctx, 31, 0x30B1D8u);
    ctx->pc = 0x30B1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B1D0u;
    // 0x30b1d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222EF0u, 0x30B1D0u, 0x30B1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B1D8u;
label_30b1d8:
    // 0x30b1d8: 0x92630020  lbu         $v1, 0x20($s3)
    ctx->pc = 0x30b1d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 32)));
label_30b1dc:
    // 0x30b1dc: 0x14740008  bne         $v1, $s4, . + 4 + (0x8 << 2)
label_30b1e0:
    if (ctx->pc == 0x30B1E0u) {
        ctx->pc = 0x30B1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B1DCu;
        // 0x30b1e0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B1E4u;
        goto label_30b1e4;
    }
    ctx->pc = 0x30B1DCu;
    {
        const bool branch_taken_0x30b1dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        ctx->pc = 0x30B1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B1DCu;
        // 0x30b1e0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b1dc) {
            ctx->pc = 0x30B200u;
            goto label_30b200;
        }
    }
    ctx->pc = 0x30B1E4u;
label_30b1e4:
    // 0x30b1e4: 0x3c014296  lui         $at, 0x4296
    ctx->pc = 0x30b1e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17046 << 16));
label_30b1e8:
    // 0x30b1e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30b1e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30b1ec:
    // 0x30b1ec: 0x0  nop
    ctx->pc = 0x30b1ecu;
    // NOP
label_30b1f0:
    // 0x30b1f0: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x30b1f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30b1f4:
    // 0x30b1f4: 0x0  nop
    ctx->pc = 0x30b1f4u;
    // NOP
label_30b1f8:
    // 0x30b1f8: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_30b1fc:
    if (ctx->pc == 0x30B1FCu) {
        ctx->pc = 0x30B200u;
        goto label_30b200;
    }
    ctx->pc = 0x30B1F8u;
    {
        const bool branch_taken_0x30b1f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30b1f8) {
            ctx->pc = 0x30B228u;
            goto label_30b228;
        }
    }
    ctx->pc = 0x30B200u;
label_30b200:
    // 0x30b200: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30b200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_30b204:
    // 0x30b204: 0x5462003d  bnel        $v1, $v0, . + 4 + (0x3D << 2)
label_30b208:
    if (ctx->pc == 0x30B208u) {
        ctx->pc = 0x30B208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B204u;
        // 0x30b208: 0x96630020  lhu         $v1, 0x20($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B20Cu;
        goto label_30b20c;
    }
    ctx->pc = 0x30B204u;
    {
        const bool branch_taken_0x30b204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30b204) {
            ctx->pc = 0x30B208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30B204u;
            // 0x30b208: 0x96630020  lhu         $v1, 0x20($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B2FCu;
            goto label_30b2fc;
        }
    }
    ctx->pc = 0x30B20Cu;
label_30b20c:
    // 0x30b20c: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x30b20cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_30b210:
    // 0x30b210: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30b210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30b214:
    // 0x30b214: 0x0  nop
    ctx->pc = 0x30b214u;
    // NOP
label_30b218:
    // 0x30b218: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x30b218u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30b21c:
    // 0x30b21c: 0x0  nop
    ctx->pc = 0x30b21cu;
    // NOP
label_30b220:
    // 0x30b220: 0x45020036  bc1fl       . + 4 + (0x36 << 2)
label_30b224:
    if (ctx->pc == 0x30B224u) {
        ctx->pc = 0x30B224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B220u;
        // 0x30b224: 0x96630020  lhu         $v1, 0x20($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B228u;
        goto label_30b228;
    }
    ctx->pc = 0x30B220u;
    {
        const bool branch_taken_0x30b220 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30b220) {
            ctx->pc = 0x30B224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30B220u;
            // 0x30b224: 0x96630020  lhu         $v1, 0x20($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B2FCu;
            goto label_30b2fc;
        }
    }
    ctx->pc = 0x30B228u;
label_30b228:
    // 0x30b228: 0xc087502  jal         func_21D408
label_30b22c:
    if (ctx->pc == 0x30B22Cu) {
        ctx->pc = 0x30B22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B228u;
        // 0x30b22c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B230u;
        goto label_30b230;
    }
    ctx->pc = 0x30B228u;
    SET_GPR_U32(ctx, 31, 0x30B230u);
    ctx->pc = 0x30B22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B228u;
    // 0x30b22c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30B228u, 0x30B230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B230u;
label_30b230:
    // 0x30b230: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x30b230u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30b234:
    // 0x30b234: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x30b234u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_30b238:
    // 0x30b238: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_30b23c:
    if (ctx->pc == 0x30B23Cu) {
        ctx->pc = 0x30B23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B238u;
        // 0x30b23c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B240u;
        goto label_30b240;
    }
    ctx->pc = 0x30B238u;
    {
        const bool branch_taken_0x30b238 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x30B23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B238u;
        // 0x30b23c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b238) {
            ctx->pc = 0x30B24Cu;
            goto label_30b24c;
        }
    }
    ctx->pc = 0x30B240u;
label_30b240:
    // 0x30b240: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30b240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30b244:
    // 0x30b244: 0x10000002  b           . + 4 + (0x2 << 2)
label_30b248:
    if (ctx->pc == 0x30B248u) {
        ctx->pc = 0x30B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B244u;
        // 0x30b248: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B24Cu;
        goto label_30b24c;
    }
    ctx->pc = 0x30B244u;
    {
        const bool branch_taken_0x30b244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B244u;
        // 0x30b248: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b244) {
            ctx->pc = 0x30B250u;
            goto label_30b250;
        }
    }
    ctx->pc = 0x30B24Cu;
label_30b24c:
    // 0x30b24c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30b24cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30b250:
    // 0x30b250: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_30b254:
    if (ctx->pc == 0x30B254u) {
        ctx->pc = 0x30B254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B250u;
        // 0x30b254: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B258u;
        goto label_30b258;
    }
    ctx->pc = 0x30B250u;
    {
        const bool branch_taken_0x30b250 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B250u;
        // 0x30b254: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b250) {
            ctx->pc = 0x30B274u;
            goto label_30b274;
        }
    }
    ctx->pc = 0x30B258u;
label_30b258:
    // 0x30b258: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x30b258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_30b25c:
    // 0x30b25c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x30b25cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_30b260:
    // 0x30b260: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x30b260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_30b264:
    // 0x30b264: 0x40f809  jalr        $v0
label_30b268:
    if (ctx->pc == 0x30B268u) {
        ctx->pc = 0x30B268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B264u;
        // 0x30b268: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B26Cu;
        goto label_30b26c;
    }
    ctx->pc = 0x30B264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30B26Cu);
        ctx->pc = 0x30B268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B264u;
        // 0x30b268: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B264u, 0x30B26Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30B26Cu;
label_30b26c:
    // 0x30b26c: 0x38420085  xori        $v0, $v0, 0x85
    ctx->pc = 0x30b26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)133);
label_30b270:
    // 0x30b270: 0x202880a  movz        $s1, $s0, $v0
    ctx->pc = 0x30b270u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 16));
label_30b274:
    // 0x30b274: 0x52200042  beql        $s1, $zero, . + 4 + (0x42 << 2)
label_30b278:
    if (ctx->pc == 0x30B278u) {
        ctx->pc = 0x30B278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B274u;
        // 0x30b278: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B27Cu;
        goto label_30b27c;
    }
    ctx->pc = 0x30B274u;
    {
        const bool branch_taken_0x30b274 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b274) {
            ctx->pc = 0x30B278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30B274u;
            // 0x30b278: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B380u;
            goto label_30b380;
        }
    }
    ctx->pc = 0x30B27Cu;
label_30b27c:
    // 0x30b27c: 0x9222002e  lbu         $v0, 0x2E($s1)
    ctx->pc = 0x30b27cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 46)));
label_30b280:
    // 0x30b280: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x30b280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_30b284:
    // 0x30b284: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x30b284u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_30b288:
    // 0x30b288: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_30b28c:
    if (ctx->pc == 0x30B28Cu) {
        ctx->pc = 0x30B290u;
        goto label_30b290;
    }
    ctx->pc = 0x30B288u;
    {
        const bool branch_taken_0x30b288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30b288) {
            ctx->pc = 0x30B2C4u;
            goto label_30b2c4;
        }
    }
    ctx->pc = 0x30B290u;
label_30b290:
    // 0x30b290: 0xc0ba9bc  jal         func_2EA6F0
label_30b294:
    if (ctx->pc == 0x30B294u) {
        ctx->pc = 0x30B294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B290u;
        // 0x30b294: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B298u;
        goto label_30b298;
    }
    ctx->pc = 0x30B290u;
    SET_GPR_U32(ctx, 31, 0x30B298u);
    ctx->pc = 0x30B294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B290u;
    // 0x30b294: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EA6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA6F0u, 0x30B290u, 0x30B298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B298u;
label_30b298:
    // 0x30b298: 0x92620020  lbu         $v0, 0x20($s3)
    ctx->pc = 0x30b298u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 32)));
label_30b29c:
    // 0x30b29c: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x30b29cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_30b2a0:
    // 0x30b2a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30b2a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_30b2a4:
    // 0x30b2a4: 0x14540003  bne         $v0, $s4, . + 4 + (0x3 << 2)
label_30b2a8:
    if (ctx->pc == 0x30B2A8u) {
        ctx->pc = 0x30B2ACu;
        goto label_30b2ac;
    }
    ctx->pc = 0x30B2A4u;
    {
        const bool branch_taken_0x30b2a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x30b2a4) {
            ctx->pc = 0x30B2B4u;
            goto label_30b2b4;
        }
    }
    ctx->pc = 0x30B2ACu;
label_30b2ac:
    // 0x30b2ac: 0x3c014296  lui         $at, 0x4296
    ctx->pc = 0x30b2acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17046 << 16));
label_30b2b0:
    // 0x30b2b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30b2b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_30b2b4:
    // 0x30b2b4: 0xc088ba0  jal         func_222E80
label_30b2b8:
    if (ctx->pc == 0x30B2B8u) {
        ctx->pc = 0x30B2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B2B4u;
        // 0x30b2b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B2BCu;
        goto label_30b2bc;
    }
    ctx->pc = 0x30B2B4u;
    SET_GPR_U32(ctx, 31, 0x30B2BCu);
    ctx->pc = 0x30B2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B2B4u;
    // 0x30b2b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E80u, 0x30B2B4u, 0x30B2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B2BCu;
label_30b2bc:
    // 0x30b2bc: 0x10000034  b           . + 4 + (0x34 << 2)
label_30b2c0:
    if (ctx->pc == 0x30B2C0u) {
        ctx->pc = 0x30B2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B2BCu;
        // 0x30b2c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B2C4u;
        goto label_30b2c4;
    }
    ctx->pc = 0x30B2BCu;
    {
        const bool branch_taken_0x30b2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B2BCu;
        // 0x30b2c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b2bc) {
            ctx->pc = 0x30B390u;
            goto label_30b390;
        }
    }
    ctx->pc = 0x30B2C4u;
label_30b2c4:
    // 0x30b2c4: 0xc0baa3e  jal         func_2EA8F8
label_30b2c8:
    if (ctx->pc == 0x30B2C8u) {
        ctx->pc = 0x30B2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B2C4u;
        // 0x30b2c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B2CCu;
        goto label_30b2cc;
    }
    ctx->pc = 0x30B2C4u;
    SET_GPR_U32(ctx, 31, 0x30B2CCu);
    ctx->pc = 0x30B2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B2C4u;
    // 0x30b2c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EA8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA8F8u, 0x30B2C4u, 0x30B2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B2CCu;
label_30b2cc:
    // 0x30b2cc: 0x5454002c  bnel        $v0, $s4, . + 4 + (0x2C << 2)
label_30b2d0:
    if (ctx->pc == 0x30B2D0u) {
        ctx->pc = 0x30B2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B2CCu;
        // 0x30b2d0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B2D4u;
        goto label_30b2d4;
    }
    ctx->pc = 0x30B2CCu;
    {
        const bool branch_taken_0x30b2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x30b2cc) {
            ctx->pc = 0x30B2D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30B2CCu;
            // 0x30b2d0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B380u;
            goto label_30b380;
        }
    }
    ctx->pc = 0x30B2D4u;
label_30b2d4:
    // 0x30b2d4: 0xc0baa10  jal         func_2EA840
label_30b2d8:
    if (ctx->pc == 0x30B2D8u) {
        ctx->pc = 0x30B2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B2D4u;
        // 0x30b2d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B2DCu;
        goto label_30b2dc;
    }
    ctx->pc = 0x30B2D4u;
    SET_GPR_U32(ctx, 31, 0x30B2DCu);
    ctx->pc = 0x30B2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B2D4u;
    // 0x30b2d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EA840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA840u, 0x30B2D4u, 0x30B2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B2DCu;
label_30b2dc:
    // 0x30b2dc: 0x14540028  bne         $v0, $s4, . + 4 + (0x28 << 2)
label_30b2e0:
    if (ctx->pc == 0x30B2E0u) {
        ctx->pc = 0x30B2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B2DCu;
        // 0x30b2e0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B2E4u;
        goto label_30b2e4;
    }
    ctx->pc = 0x30B2DCu;
    {
        const bool branch_taken_0x30b2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x30B2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B2DCu;
        // 0x30b2e0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b2dc) {
            ctx->pc = 0x30B380u;
            goto label_30b380;
        }
    }
    ctx->pc = 0x30B2E4u;
label_30b2e4:
    // 0x30b2e4: 0x92650020  lbu         $a1, 0x20($s3)
    ctx->pc = 0x30b2e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 32)));
label_30b2e8:
    // 0x30b2e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30b2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_30b2ec:
    // 0x30b2ec: 0xc0c2d16  jal         func_30B458
label_30b2f0:
    if (ctx->pc == 0x30B2F0u) {
        ctx->pc = 0x30B2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B2ECu;
        // 0x30b2f0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B2F4u;
        goto label_30b2f4;
    }
    ctx->pc = 0x30B2ECu;
    SET_GPR_U32(ctx, 31, 0x30B2F4u);
    ctx->pc = 0x30B2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B2ECu;
    // 0x30b2f0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B458u, 0x30B2ECu, 0x30B2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B2F4u;
label_30b2f4:
    // 0x30b2f4: 0x10000026  b           . + 4 + (0x26 << 2)
label_30b2f8:
    if (ctx->pc == 0x30B2F8u) {
        ctx->pc = 0x30B2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B2F4u;
        // 0x30b2f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B2FCu;
        goto label_30b2fc;
    }
    ctx->pc = 0x30B2F4u;
    {
        const bool branch_taken_0x30b2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B2F4u;
        // 0x30b2f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b2f4) {
            ctx->pc = 0x30B390u;
            goto label_30b390;
        }
    }
    ctx->pc = 0x30B2FCu;
label_30b2fc:
    // 0x30b2fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x30b2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_30b300:
    // 0x30b300: 0x5462001f  bnel        $v1, $v0, . + 4 + (0x1F << 2)
label_30b304:
    if (ctx->pc == 0x30B304u) {
        ctx->pc = 0x30B304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B300u;
        // 0x30b304: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B308u;
        goto label_30b308;
    }
    ctx->pc = 0x30B300u;
    {
        const bool branch_taken_0x30b300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30b300) {
            ctx->pc = 0x30B304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30B300u;
            // 0x30b304: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B380u;
            goto label_30b380;
        }
    }
    ctx->pc = 0x30B308u;
label_30b308:
    // 0x30b308: 0xc087502  jal         func_21D408
label_30b30c:
    if (ctx->pc == 0x30B30Cu) {
        ctx->pc = 0x30B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B308u;
        // 0x30b30c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B310u;
        goto label_30b310;
    }
    ctx->pc = 0x30B308u;
    SET_GPR_U32(ctx, 31, 0x30B310u);
    ctx->pc = 0x30B30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B308u;
    // 0x30b30c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30B308u, 0x30B310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B310u;
label_30b310:
    // 0x30b310: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x30b310u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30b314:
    // 0x30b314: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x30b314u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_30b318:
    // 0x30b318: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_30b31c:
    if (ctx->pc == 0x30B31Cu) {
        ctx->pc = 0x30B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B318u;
        // 0x30b31c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B320u;
        goto label_30b320;
    }
    ctx->pc = 0x30B318u;
    {
        const bool branch_taken_0x30b318 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x30B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B318u;
        // 0x30b31c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b318) {
            ctx->pc = 0x30B32Cu;
            goto label_30b32c;
        }
    }
    ctx->pc = 0x30B320u;
label_30b320:
    // 0x30b320: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30b320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30b324:
    // 0x30b324: 0x10000002  b           . + 4 + (0x2 << 2)
label_30b328:
    if (ctx->pc == 0x30B328u) {
        ctx->pc = 0x30B328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B324u;
        // 0x30b328: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B32Cu;
        goto label_30b32c;
    }
    ctx->pc = 0x30B324u;
    {
        const bool branch_taken_0x30b324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B324u;
        // 0x30b328: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b324) {
            ctx->pc = 0x30B330u;
            goto label_30b330;
        }
    }
    ctx->pc = 0x30B32Cu;
label_30b32c:
    // 0x30b32c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30b32cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30b330:
    // 0x30b330: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_30b334:
    if (ctx->pc == 0x30B334u) {
        ctx->pc = 0x30B334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B330u;
        // 0x30b334: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B338u;
        goto label_30b338;
    }
    ctx->pc = 0x30B330u;
    {
        const bool branch_taken_0x30b330 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B330u;
        // 0x30b334: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b330) {
            ctx->pc = 0x30B358u;
            goto label_30b358;
        }
    }
    ctx->pc = 0x30B338u;
label_30b338:
    // 0x30b338: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x30b338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_30b33c:
    // 0x30b33c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x30b33cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_30b340:
    // 0x30b340: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x30b340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_30b344:
    // 0x30b344: 0x40f809  jalr        $v0
label_30b348:
    if (ctx->pc == 0x30B348u) {
        ctx->pc = 0x30B348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B344u;
        // 0x30b348: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B34Cu;
        goto label_30b34c;
    }
    ctx->pc = 0x30B344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30B34Cu);
        ctx->pc = 0x30B348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B344u;
        // 0x30b348: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B344u, 0x30B34Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30B34Cu;
label_30b34c:
    // 0x30b34c: 0x38420085  xori        $v0, $v0, 0x85
    ctx->pc = 0x30b34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)133);
label_30b350:
    // 0x30b350: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30b350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30b354:
    // 0x30b354: 0x202200a  movz        $a0, $s0, $v0
    ctx->pc = 0x30b354u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 16));
label_30b358:
    // 0x30b358: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_30b35c:
    if (ctx->pc == 0x30B35Cu) {
        ctx->pc = 0x30B35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B358u;
        // 0x30b35c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B360u;
        goto label_30b360;
    }
    ctx->pc = 0x30B358u;
    {
        const bool branch_taken_0x30b358 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B358u;
        // 0x30b35c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b358) {
            ctx->pc = 0x30B380u;
            goto label_30b380;
        }
    }
    ctx->pc = 0x30B360u;
label_30b360:
    // 0x30b360: 0xc0baa7c  jal         func_2EA9F0
label_30b364:
    if (ctx->pc == 0x30B364u) {
        ctx->pc = 0x30B368u;
        goto label_30b368;
    }
    ctx->pc = 0x30B360u;
    SET_GPR_U32(ctx, 31, 0x30B368u);
    ctx->pc = 0x2EA9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA9F0u, 0x30B360u, 0x30B368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B368u;
label_30b368:
    // 0x30b368: 0x54540006  bnel        $v0, $s4, . + 4 + (0x6 << 2)
label_30b36c:
    if (ctx->pc == 0x30B36Cu) {
        ctx->pc = 0x30B36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B368u;
        // 0x30b36c: 0x2ea20010  sltiu       $v0, $s5, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B370u;
        goto label_30b370;
    }
    ctx->pc = 0x30B368u;
    {
        const bool branch_taken_0x30b368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x30b368) {
            ctx->pc = 0x30B36Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30B368u;
            // 0x30b36c: 0x2ea20010  sltiu       $v0, $s5, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B384u;
            goto label_30b384;
        }
    }
    ctx->pc = 0x30B370u;
label_30b370:
    // 0x30b370: 0xa2620021  sb          $v0, 0x21($s3)
    ctx->pc = 0x30b370u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 33), (uint8_t)GPR_U32(ctx, 2));
label_30b374:
    // 0x30b374: 0x10000006  b           . + 4 + (0x6 << 2)
label_30b378:
    if (ctx->pc == 0x30B378u) {
        ctx->pc = 0x30B378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B374u;
        // 0x30b378: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B37Cu;
        goto label_30b37c;
    }
    ctx->pc = 0x30B374u;
    {
        const bool branch_taken_0x30b374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B374u;
        // 0x30b378: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b374) {
            ctx->pc = 0x30B390u;
            goto label_30b390;
        }
    }
    ctx->pc = 0x30B37Cu;
label_30b37c:
    // 0x30b37c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x30b37cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_30b380:
    // 0x30b380: 0x2ea20010  sltiu       $v0, $s5, 0x10
    ctx->pc = 0x30b380u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_30b384:
    // 0x30b384: 0x1440ff88  bnez        $v0, . + 4 + (-0x78 << 2)
label_30b388:
    if (ctx->pc == 0x30B388u) {
        ctx->pc = 0x30B388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B384u;
        // 0x30b388: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B38Cu;
        goto label_30b38c;
    }
    ctx->pc = 0x30B384u;
    {
        const bool branch_taken_0x30b384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B384u;
        // 0x30b388: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b384) {
            ctx->pc = 0x30B1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b1a8;
        }
    }
    ctx->pc = 0x30B38Cu;
label_30b38c:
    // 0x30b38c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30b38cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30b390:
    // 0x30b390: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x30b390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_30b394:
    // 0x30b394: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x30b394u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_30b398:
    // 0x30b398: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x30b398u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_30b39c:
    // 0x30b39c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x30b39cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_30b3a0:
    // 0x30b3a0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x30b3a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_30b3a4:
    // 0x30b3a4: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x30b3a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30b3a8:
    // 0x30b3a8: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x30b3a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30b3ac:
    // 0x30b3ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30b3acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30b3b0:
    // 0x30b3b0: 0x3e00008  jr          $ra
label_30b3b4:
    if (ctx->pc == 0x30B3B4u) {
        ctx->pc = 0x30B3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B3B0u;
        // 0x30b3b4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B3B8u;
        goto label_fallthrough_0x30b3b0;
    }
    ctx->pc = 0x30B3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B3B0u;
        // 0x30b3b4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B3B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x30b3b0:
    ctx->pc = 0x30B3B8u;
}
