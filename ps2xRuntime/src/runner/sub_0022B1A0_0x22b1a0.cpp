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

// Function: sub_0022B1A0
// Address: 0x22b1a0 - 0x22b328
void sub_0022B1A0_0x22b1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B1A0_0x22b1a0");
#endif

    switch (ctx->pc) {
        case 0x22b1a0u: goto label_22b1a0;
        case 0x22b1a4u: goto label_22b1a4;
        case 0x22b1a8u: goto label_22b1a8;
        case 0x22b1acu: goto label_22b1ac;
        case 0x22b1b0u: goto label_22b1b0;
        case 0x22b1b4u: goto label_22b1b4;
        case 0x22b1b8u: goto label_22b1b8;
        case 0x22b1bcu: goto label_22b1bc;
        case 0x22b1c0u: goto label_22b1c0;
        case 0x22b1c4u: goto label_22b1c4;
        case 0x22b1c8u: goto label_22b1c8;
        case 0x22b1ccu: goto label_22b1cc;
        case 0x22b1d0u: goto label_22b1d0;
        case 0x22b1d4u: goto label_22b1d4;
        case 0x22b1d8u: goto label_22b1d8;
        case 0x22b1dcu: goto label_22b1dc;
        case 0x22b1e0u: goto label_22b1e0;
        case 0x22b1e4u: goto label_22b1e4;
        case 0x22b1e8u: goto label_22b1e8;
        case 0x22b1ecu: goto label_22b1ec;
        case 0x22b1f0u: goto label_22b1f0;
        case 0x22b1f4u: goto label_22b1f4;
        case 0x22b1f8u: goto label_22b1f8;
        case 0x22b1fcu: goto label_22b1fc;
        case 0x22b200u: goto label_22b200;
        case 0x22b204u: goto label_22b204;
        case 0x22b208u: goto label_22b208;
        case 0x22b20cu: goto label_22b20c;
        case 0x22b210u: goto label_22b210;
        case 0x22b214u: goto label_22b214;
        case 0x22b218u: goto label_22b218;
        case 0x22b21cu: goto label_22b21c;
        case 0x22b220u: goto label_22b220;
        case 0x22b224u: goto label_22b224;
        case 0x22b228u: goto label_22b228;
        case 0x22b22cu: goto label_22b22c;
        case 0x22b230u: goto label_22b230;
        case 0x22b234u: goto label_22b234;
        case 0x22b238u: goto label_22b238;
        case 0x22b23cu: goto label_22b23c;
        case 0x22b240u: goto label_22b240;
        case 0x22b244u: goto label_22b244;
        case 0x22b248u: goto label_22b248;
        case 0x22b24cu: goto label_22b24c;
        case 0x22b250u: goto label_22b250;
        case 0x22b254u: goto label_22b254;
        case 0x22b258u: goto label_22b258;
        case 0x22b25cu: goto label_22b25c;
        case 0x22b260u: goto label_22b260;
        case 0x22b264u: goto label_22b264;
        case 0x22b268u: goto label_22b268;
        case 0x22b26cu: goto label_22b26c;
        case 0x22b270u: goto label_22b270;
        case 0x22b274u: goto label_22b274;
        case 0x22b278u: goto label_22b278;
        case 0x22b27cu: goto label_22b27c;
        case 0x22b280u: goto label_22b280;
        case 0x22b284u: goto label_22b284;
        case 0x22b288u: goto label_22b288;
        case 0x22b28cu: goto label_22b28c;
        case 0x22b290u: goto label_22b290;
        case 0x22b294u: goto label_22b294;
        case 0x22b298u: goto label_22b298;
        case 0x22b29cu: goto label_22b29c;
        case 0x22b2a0u: goto label_22b2a0;
        case 0x22b2a4u: goto label_22b2a4;
        case 0x22b2a8u: goto label_22b2a8;
        case 0x22b2acu: goto label_22b2ac;
        case 0x22b2b0u: goto label_22b2b0;
        case 0x22b2b4u: goto label_22b2b4;
        case 0x22b2b8u: goto label_22b2b8;
        case 0x22b2bcu: goto label_22b2bc;
        case 0x22b2c0u: goto label_22b2c0;
        case 0x22b2c4u: goto label_22b2c4;
        case 0x22b2c8u: goto label_22b2c8;
        case 0x22b2ccu: goto label_22b2cc;
        case 0x22b2d0u: goto label_22b2d0;
        case 0x22b2d4u: goto label_22b2d4;
        case 0x22b2d8u: goto label_22b2d8;
        case 0x22b2dcu: goto label_22b2dc;
        case 0x22b2e0u: goto label_22b2e0;
        case 0x22b2e4u: goto label_22b2e4;
        case 0x22b2e8u: goto label_22b2e8;
        case 0x22b2ecu: goto label_22b2ec;
        case 0x22b2f0u: goto label_22b2f0;
        case 0x22b2f4u: goto label_22b2f4;
        case 0x22b2f8u: goto label_22b2f8;
        case 0x22b2fcu: goto label_22b2fc;
        case 0x22b300u: goto label_22b300;
        case 0x22b304u: goto label_22b304;
        case 0x22b308u: goto label_22b308;
        case 0x22b30cu: goto label_22b30c;
        case 0x22b310u: goto label_22b310;
        case 0x22b314u: goto label_22b314;
        case 0x22b318u: goto label_22b318;
        case 0x22b31cu: goto label_22b31c;
        case 0x22b320u: goto label_22b320;
        case 0x22b324u: goto label_22b324;
        default: break;
    }

    ctx->pc = 0x22b1a0u;

label_22b1a0:
    // 0x22b1a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22b1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_22b1a4:
    // 0x22b1a4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x22b1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_22b1a8:
    // 0x22b1a8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x22b1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_22b1ac:
    // 0x22b1ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22b1acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22b1b0:
    // 0x22b1b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22b1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_22b1b4:
    // 0x22b1b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22b1b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22b1b8:
    // 0x22b1b8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x22b1b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_22b1bc:
    // 0x22b1bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22b1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22b1c0:
    // 0x22b1c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22b1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22b1c4:
    // 0x22b1c4: 0xc089974  jal         func_2265D0
label_22b1c8:
    if (ctx->pc == 0x22B1C8u) {
        ctx->pc = 0x22B1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B1C4u;
        // 0x22b1c8: 0x3c050018  lui         $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B1CCu;
        goto label_22b1cc;
    }
    ctx->pc = 0x22B1C4u;
    SET_GPR_U32(ctx, 31, 0x22B1CCu);
    ctx->pc = 0x22B1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B1C4u;
    // 0x22b1c8: 0x3c050018  lui         $a1, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x22B1C4u, 0x22B1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B1CCu;
label_22b1cc:
    // 0x22b1cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22b1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22b1d0:
    // 0x22b1d0: 0xc08b2c0  jal         func_22CB00
label_22b1d4:
    if (ctx->pc == 0x22B1D4u) {
        ctx->pc = 0x22B1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B1D0u;
        // 0x22b1d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B1D8u;
        goto label_22b1d8;
    }
    ctx->pc = 0x22B1D0u;
    SET_GPR_U32(ctx, 31, 0x22B1D8u);
    ctx->pc = 0x22B1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B1D0u;
    // 0x22b1d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CB00u, 0x22B1D0u, 0x22B1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B1D8u;
label_22b1d8:
    // 0x22b1d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22b1d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22b1dc:
    // 0x22b1dc: 0xc0a0152  jal         func_280548
label_22b1e0:
    if (ctx->pc == 0x22B1E0u) {
        ctx->pc = 0x22B1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B1DCu;
        // 0x22b1e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B1E4u;
        goto label_22b1e4;
    }
    ctx->pc = 0x22B1DCu;
    SET_GPR_U32(ctx, 31, 0x22B1E4u);
    ctx->pc = 0x22B1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B1DCu;
    // 0x22b1e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280548u, 0x22B1DCu, 0x22B1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B1E4u;
label_22b1e4:
    // 0x22b1e4: 0xc08bf92  jal         func_22FE48
label_22b1e8:
    if (ctx->pc == 0x22B1E8u) {
        ctx->pc = 0x22B1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B1E4u;
        // 0x22b1e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B1ECu;
        goto label_22b1ec;
    }
    ctx->pc = 0x22B1E4u;
    SET_GPR_U32(ctx, 31, 0x22B1ECu);
    ctx->pc = 0x22B1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B1E4u;
    // 0x22b1e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE48u, 0x22B1E4u, 0x22B1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B1ECu;
label_22b1ec:
    // 0x22b1ec: 0xc08bf92  jal         func_22FE48
label_22b1f0:
    if (ctx->pc == 0x22B1F0u) {
        ctx->pc = 0x22B1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B1ECu;
        // 0x22b1f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B1F4u;
        goto label_22b1f4;
    }
    ctx->pc = 0x22B1ECu;
    SET_GPR_U32(ctx, 31, 0x22B1F4u);
    ctx->pc = 0x22B1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B1ECu;
    // 0x22b1f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE48u, 0x22B1ECu, 0x22B1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B1F4u;
label_22b1f4:
    // 0x22b1f4: 0xc089000  jal         func_224000
label_22b1f8:
    if (ctx->pc == 0x22B1F8u) {
        ctx->pc = 0x22B1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B1F4u;
        // 0x22b1f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B1FCu;
        goto label_22b1fc;
    }
    ctx->pc = 0x22B1F4u;
    SET_GPR_U32(ctx, 31, 0x22B1FCu);
    ctx->pc = 0x22B1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B1F4u;
    // 0x22b1f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x22B1F4u, 0x22B1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B1FCu;
label_22b1fc:
    // 0x22b1fc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_22b200:
    if (ctx->pc == 0x22B200u) {
        ctx->pc = 0x22B200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B1FCu;
        // 0x22b200: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B204u;
        goto label_22b204;
    }
    ctx->pc = 0x22B1FCu;
    {
        const bool branch_taken_0x22b1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b1fc) {
            ctx->pc = 0x22B200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B1FCu;
            // 0x22b200: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B210u;
            goto label_22b210;
        }
    }
    ctx->pc = 0x22B204u;
label_22b204:
    // 0x22b204: 0xc095fce  jal         func_257F38
label_22b208:
    if (ctx->pc == 0x22B208u) {
        ctx->pc = 0x22B208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B204u;
        // 0x22b208: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B20Cu;
        goto label_22b20c;
    }
    ctx->pc = 0x22B204u;
    SET_GPR_U32(ctx, 31, 0x22B20Cu);
    ctx->pc = 0x22B208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B204u;
    // 0x22b208: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x22B204u, 0x22B20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B20Cu;
label_22b20c:
    // 0x22b20c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x22b20cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_22b210:
    // 0x22b210: 0xc089988  jal         func_226620
label_22b214:
    if (ctx->pc == 0x22B214u) {
        ctx->pc = 0x22B214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B210u;
        // 0x22b214: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B218u;
        goto label_22b218;
    }
    ctx->pc = 0x22B210u;
    SET_GPR_U32(ctx, 31, 0x22B218u);
    ctx->pc = 0x22B214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B210u;
    // 0x22b214: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22B210u, 0x22B218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B218u;
label_22b218:
    // 0x22b218: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x22b218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22b21c:
    // 0x22b21c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22b21cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22b220:
    // 0x22b220: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22b220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22b224:
    // 0x22b224: 0x40f809  jalr        $v0
label_22b228:
    if (ctx->pc == 0x22B228u) {
        ctx->pc = 0x22B228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B224u;
        // 0x22b228: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B22Cu;
        goto label_22b22c;
    }
    ctx->pc = 0x22B224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22B22Cu);
        ctx->pc = 0x22B228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B224u;
        // 0x22b228: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B224u, 0x22B22Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22B22Cu;
label_22b22c:
    // 0x22b22c: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x22b22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_22b230:
    // 0x22b230: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x22b230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
label_22b234:
    // 0x22b234: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x22b234u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_22b238:
    // 0x22b238: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x22b238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22b23c:
    // 0x22b23c: 0x84a400f0  lh          $a0, 0xF0($a1)
    ctx->pc = 0x22b23cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 240)));
label_22b240:
    // 0x22b240: 0x8ca200f4  lw          $v0, 0xF4($a1)
    ctx->pc = 0x22b240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
label_22b244:
    // 0x22b244: 0x40f809  jalr        $v0
label_22b248:
    if (ctx->pc == 0x22B248u) {
        ctx->pc = 0x22B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B244u;
        // 0x22b248: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B24Cu;
        goto label_22b24c;
    }
    ctx->pc = 0x22B244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22B24Cu);
        ctx->pc = 0x22B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B244u;
        // 0x22b248: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B244u, 0x22B24Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22B24Cu;
label_22b24c:
    // 0x22b24c: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x22b24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_22b250:
    // 0x22b250: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x22b250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
label_22b254:
    // 0x22b254: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x22b254u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_22b258:
    // 0x22b258: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x22b258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22b25c:
    // 0x22b25c: 0x84a400f0  lh          $a0, 0xF0($a1)
    ctx->pc = 0x22b25cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 240)));
label_22b260:
    // 0x22b260: 0x8ca200f4  lw          $v0, 0xF4($a1)
    ctx->pc = 0x22b260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
label_22b264:
    // 0x22b264: 0x40f809  jalr        $v0
label_22b268:
    if (ctx->pc == 0x22B268u) {
        ctx->pc = 0x22B268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B264u;
        // 0x22b268: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B26Cu;
        goto label_22b26c;
    }
    ctx->pc = 0x22B264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22B26Cu);
        ctx->pc = 0x22B268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B264u;
        // 0x22b268: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B264u, 0x22B26Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22B26Cu;
label_22b26c:
    // 0x22b26c: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x22b26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_22b270:
    // 0x22b270: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22b270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22b274:
    // 0x22b274: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x22b274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_22b278:
    // 0x22b278: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x22b278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
label_22b27c:
    // 0x22b27c: 0xc089974  jal         func_2265D0
label_22b280:
    if (ctx->pc == 0x22B280u) {
        ctx->pc = 0x22B280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B27Cu;
        // 0x22b280: 0xac430040  sw          $v1, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B284u;
        goto label_22b284;
    }
    ctx->pc = 0x22B27Cu;
    SET_GPR_U32(ctx, 31, 0x22B284u);
    ctx->pc = 0x22B280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B27Cu;
    // 0x22b280: 0xac430040  sw          $v1, 0x40($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x22B27Cu, 0x22B284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B284u;
label_22b284:
    // 0x22b284: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22b284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22b288:
    // 0x22b288: 0xc089974  jal         func_2265D0
label_22b28c:
    if (ctx->pc == 0x22B28Cu) {
        ctx->pc = 0x22B28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B288u;
        // 0x22b28c: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B290u;
        goto label_22b290;
    }
    ctx->pc = 0x22B288u;
    SET_GPR_U32(ctx, 31, 0x22B290u);
    ctx->pc = 0x22B28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B288u;
    // 0x22b28c: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x22B288u, 0x22B290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B290u;
label_22b290:
    // 0x22b290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22b290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22b294:
    // 0x22b294: 0xc089974  jal         func_2265D0
label_22b298:
    if (ctx->pc == 0x22B298u) {
        ctx->pc = 0x22B298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B294u;
        // 0x22b298: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B29Cu;
        goto label_22b29c;
    }
    ctx->pc = 0x22B294u;
    SET_GPR_U32(ctx, 31, 0x22B29Cu);
    ctx->pc = 0x22B298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B294u;
    // 0x22b298: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x22B294u, 0x22B29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B29Cu;
label_22b29c:
    // 0x22b29c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22b29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22b2a0:
    // 0x22b2a0: 0xc089a66  jal         func_226998
label_22b2a4:
    if (ctx->pc == 0x22B2A4u) {
        ctx->pc = 0x22B2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B2A0u;
        // 0x22b2a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B2A8u;
        goto label_22b2a8;
    }
    ctx->pc = 0x22B2A0u;
    SET_GPR_U32(ctx, 31, 0x22B2A8u);
    ctx->pc = 0x22B2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B2A0u;
    // 0x22b2a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226998u, 0x22B2A0u, 0x22B2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B2A8u;
label_22b2a8:
    // 0x22b2a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22b2a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22b2ac:
    // 0x22b2ac: 0xc089a66  jal         func_226998
label_22b2b0:
    if (ctx->pc == 0x22B2B0u) {
        ctx->pc = 0x22B2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B2ACu;
        // 0x22b2b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B2B4u;
        goto label_22b2b4;
    }
    ctx->pc = 0x22B2ACu;
    SET_GPR_U32(ctx, 31, 0x22B2B4u);
    ctx->pc = 0x22B2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B2ACu;
    // 0x22b2b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226998u, 0x22B2ACu, 0x22B2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B2B4u;
label_22b2b4:
    // 0x22b2b4: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_22b2b8:
    if (ctx->pc == 0x22B2B8u) {
        ctx->pc = 0x22B2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B2B4u;
        // 0x22b2b8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B2BCu;
        goto label_22b2bc;
    }
    ctx->pc = 0x22B2B4u;
    {
        const bool branch_taken_0x22b2b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B2B4u;
        // 0x22b2b8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b2b4) {
            ctx->pc = 0x22B2D8u;
            goto label_22b2d8;
        }
    }
    ctx->pc = 0x22B2BCu;
label_22b2bc:
    // 0x22b2bc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x22b2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22b2c0:
    // 0x22b2c0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x22b2c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_22b2c4:
    // 0x22b2c4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x22b2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_22b2c8:
    // 0x22b2c8: 0x40f809  jalr        $v0
label_22b2cc:
    if (ctx->pc == 0x22B2CCu) {
        ctx->pc = 0x22B2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B2C8u;
        // 0x22b2cc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B2D0u;
        goto label_22b2d0;
    }
    ctx->pc = 0x22B2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22B2D0u);
        ctx->pc = 0x22B2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B2C8u;
        // 0x22b2cc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B2C8u, 0x22B2D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22B2D0u;
label_22b2d0:
    // 0x22b2d0: 0x10000003  b           . + 4 + (0x3 << 2)
label_22b2d4:
    if (ctx->pc == 0x22B2D4u) {
        ctx->pc = 0x22B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B2D0u;
        // 0x22b2d4: 0xae0200c4  sw          $v0, 0xC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B2D8u;
        goto label_22b2d8;
    }
    ctx->pc = 0x22B2D0u;
    {
        const bool branch_taken_0x22b2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B2D0u;
        // 0x22b2d4: 0xae0200c4  sw          $v0, 0xC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b2d0) {
            ctx->pc = 0x22B2E0u;
            goto label_22b2e0;
        }
    }
    ctx->pc = 0x22B2D8u;
label_22b2d8:
    // 0x22b2d8: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x22b2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_22b2dc:
    // 0x22b2dc: 0xae0300c4  sw          $v1, 0xC4($s0)
    ctx->pc = 0x22b2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 3));
label_22b2e0:
    // 0x22b2e0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_22b2e4:
    if (ctx->pc == 0x22B2E4u) {
        ctx->pc = 0x22B2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B2E0u;
        // 0x22b2e4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B2E8u;
        goto label_22b2e8;
    }
    ctx->pc = 0x22B2E0u;
    {
        const bool branch_taken_0x22b2e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B2E0u;
        // 0x22b2e4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b2e0) {
            ctx->pc = 0x22B304u;
            goto label_22b304;
        }
    }
    ctx->pc = 0x22B2E8u;
label_22b2e8:
    // 0x22b2e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22b2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22b2ec:
    // 0x22b2ec: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x22b2ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_22b2f0:
    // 0x22b2f0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x22b2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_22b2f4:
    // 0x22b2f4: 0x40f809  jalr        $v0
label_22b2f8:
    if (ctx->pc == 0x22B2F8u) {
        ctx->pc = 0x22B2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B2F4u;
        // 0x22b2f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B2FCu;
        goto label_22b2fc;
    }
    ctx->pc = 0x22B2F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22B2FCu);
        ctx->pc = 0x22B2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B2F4u;
        // 0x22b2f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B2F4u, 0x22B2FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22B2FCu;
label_22b2fc:
    // 0x22b2fc: 0x10000003  b           . + 4 + (0x3 << 2)
label_22b300:
    if (ctx->pc == 0x22B300u) {
        ctx->pc = 0x22B300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B2FCu;
        // 0x22b300: 0xae4200c4  sw          $v0, 0xC4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B304u;
        goto label_22b304;
    }
    ctx->pc = 0x22B2FCu;
    {
        const bool branch_taken_0x22b2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B2FCu;
        // 0x22b300: 0xae4200c4  sw          $v0, 0xC4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b2fc) {
            ctx->pc = 0x22B30Cu;
            goto label_22b30c;
        }
    }
    ctx->pc = 0x22B304u;
label_22b304:
    // 0x22b304: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x22b304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_22b308:
    // 0x22b308: 0xae4300c4  sw          $v1, 0xC4($s2)
    ctx->pc = 0x22b308u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 3));
label_22b30c:
    // 0x22b30c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x22b30cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22b310:
    // 0x22b310: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22b310u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22b314:
    // 0x22b314: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x22b314u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22b318:
    // 0x22b318: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22b318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22b31c:
    // 0x22b31c: 0x3e00008  jr          $ra
label_22b320:
    if (ctx->pc == 0x22B320u) {
        ctx->pc = 0x22B320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B31Cu;
        // 0x22b320: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B324u;
        goto label_22b324;
    }
    ctx->pc = 0x22B31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B31Cu;
        // 0x22b320: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B31Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B324u;
label_22b324:
    // 0x22b324: 0x0  nop
    ctx->pc = 0x22b324u;
    // NOP
    ctx->pc = 0x22b328u;
}
