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

// Function: sub_001B3020
// Address: 0x1b3020 - 0x1b3258
void sub_001B3020_0x1b3020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3020_0x1b3020");
#endif

    switch (ctx->pc) {
        case 0x1b3058u: goto label_1b3058;
        case 0x1b3068u: goto label_1b3068;
        case 0x1b308cu: goto label_1b308c;
        case 0x1b309cu: goto label_1b309c;
        case 0x1b30b0u: goto label_1b30b0;
        case 0x1b30c0u: goto label_1b30c0;
        case 0x1b30f8u: goto label_1b30f8;
        case 0x1b311cu: goto label_1b311c;
        case 0x1b3150u: goto label_1b3150;
        case 0x1b316cu: goto label_1b316c;
        case 0x1b317cu: goto label_1b317c;
        case 0x1b318cu: goto label_1b318c;
        case 0x1b319cu: goto label_1b319c;
        case 0x1b31a4u: goto label_1b31a4;
        case 0x1b31d0u: goto label_1b31d0;
        case 0x1b31e0u: goto label_1b31e0;
        case 0x1b31f0u: goto label_1b31f0;
        case 0x1b3200u: goto label_1b3200;
        case 0x1b3208u: goto label_1b3208;
        case 0x1b3234u: goto label_1b3234;
        default: break;
    }

    ctx->pc = 0x1b3020u;

    // 0x1b3020: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1b3020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1b3024: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1b3024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1b3028: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b3028u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b302c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1b302cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1b3030: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1b3030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1b3034: 0x263015d0  addiu       $s0, $s1, 0x15D0
    ctx->pc = 0x1b3034u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 5584));
    // 0x1b3038: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1b3038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1b303c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1b303cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3040: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1b3040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1b3044: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3048: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1b3048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x1b304c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b304cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b3050: 0xc071322  jal         func_1C4C88
    ctx->pc = 0x1B3050u;
    SET_GPR_U32(ctx, 31, 0x1B3058u);
    ctx->pc = 0x1B3054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3050u;
    // 0x1b3054: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4C88u, 0x1B3050u, 0x1B3058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3058u;
label_1b3058:
    // 0x1b3058: 0x54400077  bnel        $v0, $zero, . + 4 + (0x77 << 2)
    ctx->pc = 0x1B3058u;
    {
        const bool branch_taken_0x1b3058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3058) {
            ctx->pc = 0x1B305Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B3058u;
            // 0x1b305c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3238u;
            goto label_1b3238;
        }
    }
    ctx->pc = 0x1B3060u;
    // 0x1b3060: 0xc0e409a  jal         func_390268
    ctx->pc = 0x1B3060u;
    SET_GPR_U32(ctx, 31, 0x1B3068u);
    ctx->pc = 0x1B3064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3060u;
    // 0x1b3064: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1B3060u, 0x1B3068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3068u;
label_1b3068:
    // 0x1b3068: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b3068u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b306c: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x1b306cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
    // 0x1b3070: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1b3070u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1b3074: 0x2a82b  sltu        $s5, $zero, $v0
    ctx->pc = 0x1b3074u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b3078: 0x12a0000a  beqz        $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x1B3078u;
    {
        const bool branch_taken_0x1b3078 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B307Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3078u;
        // 0x1b307c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3078) {
            ctx->pc = 0x1B30A4u;
            goto label_1b30a4;
        }
    }
    ctx->pc = 0x1B3080u;
    // 0x1b3080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3084: 0xc071290  jal         func_1C4A40
    ctx->pc = 0x1B3084u;
    SET_GPR_U32(ctx, 31, 0x1B308Cu);
    ctx->pc = 0x1B3088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3084u;
    // 0x1b3088: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4A40u, 0x1B3084u, 0x1B308Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B308Cu;
label_1b308c:
    // 0x1b308c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1b308cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3090: 0x26243f10  addiu       $a0, $s1, 0x3F10
    ctx->pc = 0x1b3090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16144));
    // 0x1b3094: 0xc071290  jal         func_1C4A40
    ctx->pc = 0x1B3094u;
    SET_GPR_U32(ctx, 31, 0x1B309Cu);
    ctx->pc = 0x1B3098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3094u;
    // 0x1b3098: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4A40u, 0x1B3094u, 0x1B309Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B309Cu;
label_1b309c:
    // 0x1b309c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B309Cu;
    {
        const bool branch_taken_0x1b309c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B30A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B309Cu;
        // 0x1b30a0: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b309c) {
            ctx->pc = 0x1B30C4u;
            goto label_1b30c4;
        }
    }
    ctx->pc = 0x1B30A4u;
label_1b30a4:
    // 0x1b30a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b30a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b30a8: 0xc071290  jal         func_1C4A40
    ctx->pc = 0x1B30A8u;
    SET_GPR_U32(ctx, 31, 0x1B30B0u);
    ctx->pc = 0x1B30ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B30A8u;
    // 0x1b30ac: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4A40u, 0x1B30A8u, 0x1B30B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B30B0u;
label_1b30b0:
    // 0x1b30b0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1b30b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b30b4: 0x26243f10  addiu       $a0, $s1, 0x3F10
    ctx->pc = 0x1b30b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16144));
    // 0x1b30b8: 0xc071290  jal         func_1C4A40
    ctx->pc = 0x1B30B8u;
    SET_GPR_U32(ctx, 31, 0x1B30C0u);
    ctx->pc = 0x1B30BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B30B8u;
    // 0x1b30bc: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4A40u, 0x1B30B8u, 0x1B30C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B30C0u;
label_1b30c0:
    // 0x1b30c0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b30c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1b30c4:
    // 0x1b30c4: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x1b30c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
    // 0x1b30c8: 0x8c820158  lw          $v0, 0x158($a0)
    ctx->pc = 0x1b30c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x1b30cc: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1B30CCu;
    {
        const bool branch_taken_0x1b30cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B30D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B30CCu;
        // 0x1b30d0: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b30cc) {
            ctx->pc = 0x1B3174u;
            goto label_1b3174;
        }
    }
    ctx->pc = 0x1B30D4u;
    // 0x1b30d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b30d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b30d8: 0x16620009  bne         $s3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B30D8u;
    {
        const bool branch_taken_0x1b30d8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B30DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B30D8u;
        // 0x1b30dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b30d8) {
            ctx->pc = 0x1B3100u;
            goto label_1b3100;
        }
    }
    ctx->pc = 0x1B30E0u;
    // 0x1b30e0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1b30e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b30e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b30e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b30e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b30e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b30ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b30ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b30f0: 0xc06cb28  jal         func_1B2CA0
    ctx->pc = 0x1B30F0u;
    SET_GPR_U32(ctx, 31, 0x1B30F8u);
    ctx->pc = 0x1B30F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B30F0u;
    // 0x1b30f4: 0x24060019  addiu       $a2, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2CA0u, 0x1B30F0u, 0x1B30F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B30F8u;
label_1b30f8:
    // 0x1b30f8: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1B30F8u;
    {
        const bool branch_taken_0x1b30f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B30FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B30F8u;
        // 0x1b30fc: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b30f8) {
            ctx->pc = 0x1B3238u;
            goto label_1b3238;
        }
    }
    ctx->pc = 0x1B3100u;
label_1b3100:
    // 0x1b3100: 0x16620008  bne         $s3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B3100u;
    {
        const bool branch_taken_0x1b3100 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B3104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3100u;
        // 0x1b3104: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3100) {
            ctx->pc = 0x1B3124u;
            goto label_1b3124;
        }
    }
    ctx->pc = 0x1B3108u;
    // 0x1b3108: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b3108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b310c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b310cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b3110: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b3110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b3114: 0xc06cb28  jal         func_1B2CA0
    ctx->pc = 0x1B3114u;
    SET_GPR_U32(ctx, 31, 0x1B311Cu);
    ctx->pc = 0x1B3118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3114u;
    // 0x1b3118: 0x2406001a  addiu       $a2, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2CA0u, 0x1B3114u, 0x1B311Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B311Cu;
label_1b311c:
    // 0x1b311c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1B311Cu;
    {
        const bool branch_taken_0x1b311c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B311Cu;
        // 0x1b3120: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b311c) {
            ctx->pc = 0x1B3238u;
            goto label_1b3238;
        }
    }
    ctx->pc = 0x1B3124u;
label_1b3124:
    // 0x1b3124: 0x16600044  bnez        $s3, . + 4 + (0x44 << 2)
    ctx->pc = 0x1B3124u;
    {
        const bool branch_taken_0x1b3124 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3124u;
        // 0x1b3128: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3124) {
            ctx->pc = 0x1B3238u;
            goto label_1b3238;
        }
    }
    ctx->pc = 0x1B312Cu;
    // 0x1b312c: 0x12a0000a  beqz        $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x1B312Cu;
    {
        const bool branch_taken_0x1b312c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B312Cu;
        // 0x1b3130: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b312c) {
            ctx->pc = 0x1B3158u;
            goto label_1b3158;
        }
    }
    ctx->pc = 0x1B3134u;
    // 0x1b3134: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x1b3134u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
    // 0x1b3138: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1B3138u;
    {
        const bool branch_taken_0x1b3138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3138u;
        // 0x1b313c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3138) {
            ctx->pc = 0x1B31BCu;
            goto label_1b31bc;
        }
    }
    ctx->pc = 0x1B3140u;
    // 0x1b3140: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b3140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b3144: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b3144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b3148: 0xc06cb28  jal         func_1B2CA0
    ctx->pc = 0x1B3148u;
    SET_GPR_U32(ctx, 31, 0x1B3150u);
    ctx->pc = 0x1B314Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3148u;
    // 0x1b314c: 0x2406016b  addiu       $a2, $zero, 0x16B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 363));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2CA0u, 0x1B3148u, 0x1B3150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3150u;
label_1b3150:
    // 0x1b3150: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1B3150u;
    {
        const bool branch_taken_0x1b3150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3150u;
        // 0x1b3154: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3150) {
            ctx->pc = 0x1B3238u;
            goto label_1b3238;
        }
    }
    ctx->pc = 0x1B3158u;
label_1b3158:
    // 0x1b3158: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b3158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b315c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b315cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b3160: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b3160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b3164: 0xc06cb28  jal         func_1B2CA0
    ctx->pc = 0x1B3164u;
    SET_GPR_U32(ctx, 31, 0x1B316Cu);
    ctx->pc = 0x1B3168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3164u;
    // 0x1b3168: 0x2406016d  addiu       $a2, $zero, 0x16D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 365));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2CA0u, 0x1B3164u, 0x1B316Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B316Cu;
label_1b316c:
    // 0x1b316c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1B316Cu;
    {
        const bool branch_taken_0x1b316c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B316Cu;
        // 0x1b3170: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b316c) {
            ctx->pc = 0x1B3238u;
            goto label_1b3238;
        }
    }
    ctx->pc = 0x1B3174u;
label_1b3174:
    // 0x1b3174: 0xc0e409a  jal         func_390268
    ctx->pc = 0x1B3174u;
    SET_GPR_U32(ctx, 31, 0x1B317Cu);
    ctx->pc = 0x1B3178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3174u;
    // 0x1b3178: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1B3174u, 0x1B317Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B317Cu;
label_1b317c:
    // 0x1b317c: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B317Cu;
    {
        const bool branch_taken_0x1b317c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b317c) {
            ctx->pc = 0x1B3180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B317Cu;
            // 0x1b3180: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B31D8u;
            goto label_1b31d8;
        }
    }
    ctx->pc = 0x1B3184u;
    // 0x1b3184: 0xc087502  jal         func_21D408
    ctx->pc = 0x1B3184u;
    SET_GPR_U32(ctx, 31, 0x1B318Cu);
    ctx->pc = 0x1B3188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3184u;
    // 0x1b3188: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x1B3184u, 0x1B318Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B318Cu;
label_1b318c:
    // 0x1b318c: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x1b318cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
    // 0x1b3190: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x1b3190u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x1b3194: 0xc0e409a  jal         func_390268
    ctx->pc = 0x1B3194u;
    SET_GPR_U32(ctx, 31, 0x1B319Cu);
    ctx->pc = 0x1B3198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3194u;
    // 0x1b3198: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1B3194u, 0x1B319Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B319Cu;
label_1b319c:
    // 0x1b319c: 0xc087502  jal         func_21D408
    ctx->pc = 0x1B319Cu;
    SET_GPR_U32(ctx, 31, 0x1B31A4u);
    ctx->pc = 0x1B31A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B319Cu;
    // 0x1b31a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x1B319Cu, 0x1B31A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B31A4u;
label_1b31a4:
    // 0x1b31a4: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x1b31a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x1b31a8: 0x5603000b  bnel        $s0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1B31A8u;
    {
        const bool branch_taken_0x1b31a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b31a8) {
            ctx->pc = 0x1B31ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B31A8u;
            // 0x1b31ac: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B31D8u;
            goto label_1b31d8;
        }
    }
    ctx->pc = 0x1B31B0u;
    // 0x1b31b0: 0x16600021  bnez        $s3, . + 4 + (0x21 << 2)
    ctx->pc = 0x1B31B0u;
    {
        const bool branch_taken_0x1b31b0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B31B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B31B0u;
        // 0x1b31b4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b31b0) {
            ctx->pc = 0x1B3238u;
            goto label_1b3238;
        }
    }
    ctx->pc = 0x1B31B8u;
    // 0x1b31b8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1b31b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1b31bc:
    // 0x1b31bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b31bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b31c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b31c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b31c4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b31c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b31c8: 0xc06cb28  jal         func_1B2CA0
    ctx->pc = 0x1B31C8u;
    SET_GPR_U32(ctx, 31, 0x1B31D0u);
    ctx->pc = 0x1B31CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B31C8u;
    // 0x1b31cc: 0x2406016a  addiu       $a2, $zero, 0x16A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 362));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2CA0u, 0x1B31C8u, 0x1B31D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B31D0u;
label_1b31d0:
    // 0x1b31d0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1B31D0u;
    {
        const bool branch_taken_0x1b31d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B31D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B31D0u;
        // 0x1b31d4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b31d0) {
            ctx->pc = 0x1B3238u;
            goto label_1b3238;
        }
    }
    ctx->pc = 0x1B31D8u;
label_1b31d8:
    // 0x1b31d8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x1B31D8u;
    SET_GPR_U32(ctx, 31, 0x1B31E0u);
    ctx->pc = 0x1B31DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B31D8u;
    // 0x1b31dc: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1B31D8u, 0x1B31E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B31E0u;
label_1b31e0:
    // 0x1b31e0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B31E0u;
    {
        const bool branch_taken_0x1b31e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B31E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B31E0u;
        // 0x1b31e4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b31e0) {
            ctx->pc = 0x1B3238u;
            goto label_1b3238;
        }
    }
    ctx->pc = 0x1B31E8u;
    // 0x1b31e8: 0xc087502  jal         func_21D408
    ctx->pc = 0x1B31E8u;
    SET_GPR_U32(ctx, 31, 0x1B31F0u);
    ctx->pc = 0x1B31ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B31E8u;
    // 0x1b31ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x1B31E8u, 0x1B31F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B31F0u;
label_1b31f0:
    // 0x1b31f0: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x1b31f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
    // 0x1b31f4: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x1b31f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x1b31f8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x1B31F8u;
    SET_GPR_U32(ctx, 31, 0x1B3200u);
    ctx->pc = 0x1B31FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B31F8u;
    // 0x1b31fc: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1B31F8u, 0x1B3200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3200u;
label_1b3200:
    // 0x1b3200: 0xc087502  jal         func_21D408
    ctx->pc = 0x1B3200u;
    SET_GPR_U32(ctx, 31, 0x1B3208u);
    ctx->pc = 0x1B3204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3200u;
    // 0x1b3204: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x1B3200u, 0x1B3208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3208u;
label_1b3208:
    // 0x1b3208: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x1b3208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x1b320c: 0x1603000a  bne         $s0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1B320Cu;
    {
        const bool branch_taken_0x1b320c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B3210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B320Cu;
        // 0x1b3210: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b320c) {
            ctx->pc = 0x1B3238u;
            goto label_1b3238;
        }
    }
    ctx->pc = 0x1B3214u;
    // 0x1b3214: 0x56600009  bnel        $s3, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B3214u;
    {
        const bool branch_taken_0x1b3214 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3214) {
            ctx->pc = 0x1B3218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B3214u;
            // 0x1b3218: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B323Cu;
            goto label_1b323c;
        }
    }
    ctx->pc = 0x1B321Cu;
    // 0x1b321c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1b321cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3220: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b3220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3224: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b3224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b3228: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b3228u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b322c: 0xc06cb28  jal         func_1B2CA0
    ctx->pc = 0x1B322Cu;
    SET_GPR_U32(ctx, 31, 0x1B3234u);
    ctx->pc = 0x1B3230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B322Cu;
    // 0x1b3230: 0x2406016a  addiu       $a2, $zero, 0x16A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 362));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2CA0u, 0x1B322Cu, 0x1B3234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3234u;
label_1b3234:
    // 0x1b3234: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1b3234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1b3238:
    // 0x1b3238: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1b3238u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b323c:
    // 0x1b323c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1b323cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3240: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1b3240u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b3244: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1b3244u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3248: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1b3248u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b324c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b324cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3250: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3250u;
        // 0x1b3254: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3258u;
}
