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

// Function: sub_0027E040
// Address: 0x27e040 - 0x27e6d8
void sub_0027E040_0x27e040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027E040_0x27e040");
#endif

    switch (ctx->pc) {
        case 0x27e05cu: goto label_27e05c;
        case 0x27e06cu: goto label_27e06c;
        case 0x27e07cu: goto label_27e07c;
        case 0x27e08cu: goto label_27e08c;
        case 0x27e09cu: goto label_27e09c;
        case 0x27e0a4u: goto label_27e0a4;
        case 0x27e0b4u: goto label_27e0b4;
        case 0x27e0c4u: goto label_27e0c4;
        case 0x27e0d4u: goto label_27e0d4;
        case 0x27e0e4u: goto label_27e0e4;
        case 0x27e0f4u: goto label_27e0f4;
        case 0x27e104u: goto label_27e104;
        case 0x27e114u: goto label_27e114;
        case 0x27e124u: goto label_27e124;
        case 0x27e130u: goto label_27e130;
        case 0x27e1a0u: goto label_27e1a0;
        case 0x27e1b0u: goto label_27e1b0;
        case 0x27e1d0u: goto label_27e1d0;
        case 0x27e1e0u: goto label_27e1e0;
        case 0x27e1f0u: goto label_27e1f0;
        case 0x27e200u: goto label_27e200;
        case 0x27e210u: goto label_27e210;
        case 0x27e220u: goto label_27e220;
        case 0x27e230u: goto label_27e230;
        case 0x27e240u: goto label_27e240;
        case 0x27e24cu: goto label_27e24c;
        case 0x27e25cu: goto label_27e25c;
        case 0x27e270u: goto label_27e270;
        case 0x27e284u: goto label_27e284;
        case 0x27e298u: goto label_27e298;
        case 0x27e2a8u: goto label_27e2a8;
        case 0x27e2bcu: goto label_27e2bc;
        case 0x27e2d8u: goto label_27e2d8;
        case 0x27e2ecu: goto label_27e2ec;
        case 0x27e2fcu: goto label_27e2fc;
        case 0x27e310u: goto label_27e310;
        case 0x27e324u: goto label_27e324;
        case 0x27e334u: goto label_27e334;
        case 0x27e344u: goto label_27e344;
        case 0x27e354u: goto label_27e354;
        case 0x27e364u: goto label_27e364;
        case 0x27e374u: goto label_27e374;
        case 0x27e384u: goto label_27e384;
        case 0x27e394u: goto label_27e394;
        case 0x27e3a4u: goto label_27e3a4;
        case 0x27e3b4u: goto label_27e3b4;
        case 0x27e3c4u: goto label_27e3c4;
        case 0x27e3d4u: goto label_27e3d4;
        case 0x27e3e4u: goto label_27e3e4;
        case 0x27e3f4u: goto label_27e3f4;
        case 0x27e404u: goto label_27e404;
        case 0x27e428u: goto label_27e428;
        case 0x27e440u: goto label_27e440;
        case 0x27e4a0u: goto label_27e4a0;
        case 0x27e4c8u: goto label_27e4c8;
        case 0x27e4e0u: goto label_27e4e0;
        case 0x27e53cu: goto label_27e53c;
        case 0x27e554u: goto label_27e554;
        case 0x27e56cu: goto label_27e56c;
        case 0x27e5c0u: goto label_27e5c0;
        case 0x27e5d8u: goto label_27e5d8;
        case 0x27e5f0u: goto label_27e5f0;
        case 0x27e600u: goto label_27e600;
        case 0x27e618u: goto label_27e618;
        case 0x27e628u: goto label_27e628;
        case 0x27e644u: goto label_27e644;
        case 0x27e654u: goto label_27e654;
        case 0x27e664u: goto label_27e664;
        case 0x27e674u: goto label_27e674;
        case 0x27e684u: goto label_27e684;
        case 0x27e69cu: goto label_27e69c;
        case 0x27e6acu: goto label_27e6ac;
        case 0x27e6b8u: goto label_27e6b8;
        default: break;
    }

    ctx->pc = 0x27e040u;

    // 0x27e040: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27e040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27e044: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x27e044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x27e048: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x27e048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x27e04c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x27e04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x27e050: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27e050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27e054: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x27E054u;
    SET_GPR_U32(ctx, 31, 0x27E05Cu);
    ctx->pc = 0x27E058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E054u;
    // 0x27e058: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x27E054u, 0x27E05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E05Cu;
label_27e05c:
    // 0x27e05c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27e05cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e060: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27e060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e064: 0xc051fe6  jal         func_147F98
    ctx->pc = 0x27E064u;
    SET_GPR_U32(ctx, 31, 0x27E06Cu);
    ctx->pc = 0x27E068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E064u;
    // 0x27e068: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147F98u, 0x27E064u, 0x27E06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E06Cu;
label_27e06c:
    // 0x27e06c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27e06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e070: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x27e070u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x27e074: 0xc089988  jal         func_226620
    ctx->pc = 0x27E074u;
    SET_GPR_U32(ctx, 31, 0x27E07Cu);
    ctx->pc = 0x27E078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E074u;
    // 0x27e078: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x27E074u, 0x27E07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E07Cu;
label_27e07c:
    // 0x27e07c: 0x3c0505c7  lui         $a1, 0x5C7
    ctx->pc = 0x27e07cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1479 << 16));
    // 0x27e080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27e080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e084: 0xc089998  jal         func_226660
    ctx->pc = 0x27E084u;
    SET_GPR_U32(ctx, 31, 0x27E08Cu);
    ctx->pc = 0x27E088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E084u;
    // 0x27e088: 0x34a5eee0  ori         $a1, $a1, 0xEEE0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61152);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x27E084u, 0x27E08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E08Cu;
label_27e08c:
    // 0x27e08c: 0x1440018b  bnez        $v0, . + 4 + (0x18B << 2)
    ctx->pc = 0x27E08Cu;
    {
        const bool branch_taken_0x27e08c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E08Cu;
        // 0x27e090: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e08c) {
            ctx->pc = 0x27E6BCu;
            goto label_27e6bc;
        }
    }
    ctx->pc = 0x27E094u;
    // 0x27e094: 0xc09f568  jal         func_27D5A0
    ctx->pc = 0x27E094u;
    SET_GPR_U32(ctx, 31, 0x27E09Cu);
    ctx->pc = 0x27E098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E094u;
    // 0x27e098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D5A0u, 0x27E094u, 0x27E09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E09Cu;
label_27e09c:
    // 0x27e09c: 0xc08a096  jal         func_228258
    ctx->pc = 0x27E09Cu;
    SET_GPR_U32(ctx, 31, 0x27E0A4u);
    ctx->pc = 0x27E0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E09Cu;
    // 0x27e0a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x27E09Cu, 0x27E0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E0A4u;
label_27e0a4:
    // 0x27e0a4: 0x1440017b  bnez        $v0, . + 4 + (0x17B << 2)
    ctx->pc = 0x27E0A4u;
    {
        const bool branch_taken_0x27e0a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E0A4u;
        // 0x27e0a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e0a4) {
            ctx->pc = 0x27E694u;
            goto label_27e694;
        }
    }
    ctx->pc = 0x27E0ACu;
    // 0x27e0ac: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27E0ACu;
    SET_GPR_U32(ctx, 31, 0x27E0B4u);
    ctx->pc = 0x27E0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E0ACu;
    // 0x27e0b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27E0ACu, 0x27E0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E0B4u;
label_27e0b4:
    // 0x27e0b4: 0x10400177  beqz        $v0, . + 4 + (0x177 << 2)
    ctx->pc = 0x27E0B4u;
    {
        const bool branch_taken_0x27e0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E0B4u;
        // 0x27e0b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e0b4) {
            ctx->pc = 0x27E694u;
            goto label_27e694;
        }
    }
    ctx->pc = 0x27E0BCu;
    // 0x27e0bc: 0xc0a018c  jal         func_280630
    ctx->pc = 0x27E0BCu;
    SET_GPR_U32(ctx, 31, 0x27E0C4u);
    ctx->pc = 0x27E0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E0BCu;
    // 0x27e0c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280630u, 0x27E0BCu, 0x27E0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E0C4u;
label_27e0c4:
    // 0x27e0c4: 0x1440017d  bnez        $v0, . + 4 + (0x17D << 2)
    ctx->pc = 0x27E0C4u;
    {
        const bool branch_taken_0x27e0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E0C4u;
        // 0x27e0c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e0c4) {
            ctx->pc = 0x27E6BCu;
            goto label_27e6bc;
        }
    }
    ctx->pc = 0x27E0CCu;
    // 0x27e0cc: 0xc09ee4c  jal         func_27B930
    ctx->pc = 0x27E0CCu;
    SET_GPR_U32(ctx, 31, 0x27E0D4u);
    ctx->pc = 0x27E0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E0CCu;
    // 0x27e0d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B930u, 0x27E0CCu, 0x27E0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E0D4u;
label_27e0d4:
    // 0x27e0d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27E0D4u;
    {
        const bool branch_taken_0x27e0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e0d4) {
            ctx->pc = 0x27E0ECu;
            goto label_27e0ec;
        }
    }
    ctx->pc = 0x27E0DCu;
    // 0x27e0dc: 0xc09f684  jal         func_27DA10
    ctx->pc = 0x27E0DCu;
    SET_GPR_U32(ctx, 31, 0x27E0E4u);
    ctx->pc = 0x27E0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E0DCu;
    // 0x27e0e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DA10u, 0x27E0DCu, 0x27E0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E0E4u;
label_27e0e4:
    // 0x27e0e4: 0x10000167  b           . + 4 + (0x167 << 2)
    ctx->pc = 0x27E0E4u;
    {
        const bool branch_taken_0x27e0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e0e4) {
            ctx->pc = 0x27E684u;
            goto label_27e684;
        }
    }
    ctx->pc = 0x27E0ECu;
label_27e0ec:
    // 0x27e0ec: 0xc09ee38  jal         func_27B8E0
    ctx->pc = 0x27E0ECu;
    SET_GPR_U32(ctx, 31, 0x27E0F4u);
    ctx->pc = 0x27E0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E0ECu;
    // 0x27e0f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B8E0u, 0x27E0ECu, 0x27E0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E0F4u;
label_27e0f4:
    // 0x27e0f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27E0F4u;
    {
        const bool branch_taken_0x27e0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e0f4) {
            ctx->pc = 0x27E10Cu;
            goto label_27e10c;
        }
    }
    ctx->pc = 0x27E0FCu;
    // 0x27e0fc: 0xc09f700  jal         func_27DC00
    ctx->pc = 0x27E0FCu;
    SET_GPR_U32(ctx, 31, 0x27E104u);
    ctx->pc = 0x27E100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E0FCu;
    // 0x27e100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DC00u, 0x27E0FCu, 0x27E104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E104u;
label_27e104:
    // 0x27e104: 0x1000015f  b           . + 4 + (0x15F << 2)
    ctx->pc = 0x27E104u;
    {
        const bool branch_taken_0x27e104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e104) {
            ctx->pc = 0x27E684u;
            goto label_27e684;
        }
    }
    ctx->pc = 0x27E10Cu;
label_27e10c:
    // 0x27e10c: 0xc09ee42  jal         func_27B908
    ctx->pc = 0x27E10Cu;
    SET_GPR_U32(ctx, 31, 0x27E114u);
    ctx->pc = 0x27E110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E10Cu;
    // 0x27e110: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B908u, 0x27E10Cu, 0x27E114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E114u;
label_27e114:
    // 0x27e114: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x27E114u;
    {
        const bool branch_taken_0x27e114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E114u;
        // 0x27e118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e114) {
            ctx->pc = 0x27E1A8u;
            goto label_27e1a8;
        }
    }
    ctx->pc = 0x27E11Cu;
    // 0x27e11c: 0xc089988  jal         func_226620
    ctx->pc = 0x27E11Cu;
    SET_GPR_U32(ctx, 31, 0x27E124u);
    ctx->pc = 0x27E120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E11Cu;
    // 0x27e120: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x27E11Cu, 0x27E124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E124u;
label_27e124:
    // 0x27e124: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27e124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e128: 0xc089974  jal         func_2265D0
    ctx->pc = 0x27E128u;
    SET_GPR_U32(ctx, 31, 0x27E130u);
    ctx->pc = 0x27E12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E128u;
    // 0x27e12c: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x27E128u, 0x27E130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E130u;
label_27e130:
    // 0x27e130: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x27e130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x27e134: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x27e134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x27e138: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x27e138u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x27e13c: 0x2446e880  addiu       $a2, $v0, -0x1780
    ctx->pc = 0x27e13cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x27e140: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x27e140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x27e144: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x27e144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x27e148: 0x24420108  addiu       $v0, $v0, 0x108
    ctx->pc = 0x27e148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 264));
    // 0x27e14c: 0xaca200f4  sw          $v0, 0xF4($a1)
    ctx->pc = 0x27e14cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 244), GPR_U32(ctx, 2));
    // 0x27e150: 0x860301be  lh          $v1, 0x1BE($s0)
    ctx->pc = 0x27e150u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x27e154: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x27e154u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x55E882u));
    // 0x27e158: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27E158u;
    {
        const bool branch_taken_0x27e158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27E15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E158u;
        // 0x27e15c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e158) {
            ctx->pc = 0x27E190u;
            goto label_27e190;
        }
    }
    ctx->pc = 0x27E160u;
    // 0x27e160: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27e160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27e164: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27E164u;
    {
        const bool branch_taken_0x27e164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27E168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E164u;
        // 0x27e168: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e164) {
            ctx->pc = 0x27E17Cu;
            goto label_27e17c;
        }
    }
    ctx->pc = 0x27E16Cu;
    // 0x27e16c: 0x84c30004  lh          $v1, 0x4($a2)
    ctx->pc = 0x27e16cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x27e170: 0x860201c0  lh          $v0, 0x1C0($s0)
    ctx->pc = 0x27e170u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x27e174: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27E174u;
    {
        const bool branch_taken_0x27e174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x27E178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E174u;
        // 0x27e178: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e174) {
            ctx->pc = 0x27E18Cu;
            goto label_27e18c;
        }
    }
    ctx->pc = 0x27E17Cu;
label_27e17c:
    // 0x27e17c: 0x8e0301c0  lw          $v1, 0x1C0($s0)
    ctx->pc = 0x27e17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x27e180: 0x24424770  addiu       $v0, $v0, 0x4770
    ctx->pc = 0x27e180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18288));
    // 0x27e184: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27E184u;
    {
        const bool branch_taken_0x27e184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27e184) {
            ctx->pc = 0x27E190u;
            goto label_27e190;
        }
    }
    ctx->pc = 0x27E18Cu;
label_27e18c:
    // 0x27e18c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x27e18cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27e190:
    // 0x27e190: 0x10e0014a  beqz        $a3, . + 4 + (0x14A << 2)
    ctx->pc = 0x27E190u;
    {
        const bool branch_taken_0x27e190 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E190u;
        // 0x27e194: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e190) {
            ctx->pc = 0x27E6BCu;
            goto label_27e6bc;
        }
    }
    ctx->pc = 0x27E198u;
    // 0x27e198: 0xc089ea4  jal         func_227A90
    ctx->pc = 0x27E198u;
    SET_GPR_U32(ctx, 31, 0x27E1A0u);
    ctx->pc = 0x27E19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E198u;
    // 0x27e19c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227A90u, 0x27E198u, 0x27E1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E1A0u;
label_27e1a0:
    // 0x27e1a0: 0x10000146  b           . + 4 + (0x146 << 2)
    ctx->pc = 0x27E1A0u;
    {
        const bool branch_taken_0x27e1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E1A0u;
        // 0x27e1a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e1a0) {
            ctx->pc = 0x27E6BCu;
            goto label_27e6bc;
        }
    }
    ctx->pc = 0x27E1A8u;
label_27e1a8:
    // 0x27e1a8: 0xc088fa8  jal         func_223EA0
    ctx->pc = 0x27E1A8u;
    SET_GPR_U32(ctx, 31, 0x27E1B0u);
    ctx->pc = 0x27E1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E1A8u;
    // 0x27e1ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EA0u, 0x27E1A8u, 0x27E1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E1B0u;
label_27e1b0:
    // 0x27e1b0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x27E1B0u;
    {
        const bool branch_taken_0x27e1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e1b0) {
            ctx->pc = 0x27E1F8u;
            goto label_27e1f8;
        }
    }
    ctx->pc = 0x27E1B8u;
    // 0x27e1b8: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x27e1b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x27e1bc: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x27e1bcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x27e1c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27E1C0u;
    {
        const bool branch_taken_0x27e1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e1c0) {
            ctx->pc = 0x27E1D8u;
            goto label_27e1d8;
        }
    }
    ctx->pc = 0x27E1C8u;
    // 0x27e1c8: 0xc09ee10  jal         func_27B840
    ctx->pc = 0x27E1C8u;
    SET_GPR_U32(ctx, 31, 0x27E1D0u);
    ctx->pc = 0x27E1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E1C8u;
    // 0x27e1cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B840u, 0x27E1C8u, 0x27E1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E1D0u;
label_27e1d0:
    // 0x27e1d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27E1D0u;
    {
        const bool branch_taken_0x27e1d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e1d0) {
            ctx->pc = 0x27E1E8u;
            goto label_27e1e8;
        }
    }
    ctx->pc = 0x27E1D8u;
label_27e1d8:
    // 0x27e1d8: 0xc09ee2e  jal         func_27B8B8
    ctx->pc = 0x27E1D8u;
    SET_GPR_U32(ctx, 31, 0x27E1E0u);
    ctx->pc = 0x27E1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E1D8u;
    // 0x27e1dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B8B8u, 0x27E1D8u, 0x27E1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E1E0u;
label_27e1e0:
    // 0x27e1e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27E1E0u;
    {
        const bool branch_taken_0x27e1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e1e0) {
            ctx->pc = 0x27E1F8u;
            goto label_27e1f8;
        }
    }
    ctx->pc = 0x27E1E8u;
label_27e1e8:
    // 0x27e1e8: 0xc0a220e  jal         func_288838
    ctx->pc = 0x27E1E8u;
    SET_GPR_U32(ctx, 31, 0x27E1F0u);
    ctx->pc = 0x27E1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E1E8u;
    // 0x27e1ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288838u, 0x27E1E8u, 0x27E1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E1F0u;
label_27e1f0:
    // 0x27e1f0: 0x14400132  bnez        $v0, . + 4 + (0x132 << 2)
    ctx->pc = 0x27E1F0u;
    {
        const bool branch_taken_0x27e1f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E1F0u;
        // 0x27e1f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e1f0) {
            ctx->pc = 0x27E6BCu;
            goto label_27e6bc;
        }
    }
    ctx->pc = 0x27E1F8u;
label_27e1f8:
    // 0x27e1f8: 0xc09ed82  jal         func_27B608
    ctx->pc = 0x27E1F8u;
    SET_GPR_U32(ctx, 31, 0x27E200u);
    ctx->pc = 0x27E1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E1F8u;
    // 0x27e1fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B608u, 0x27E1F8u, 0x27E200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E200u;
label_27e200:
    // 0x27e200: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27E200u;
    {
        const bool branch_taken_0x27e200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e200) {
            ctx->pc = 0x27E238u;
            goto label_27e238;
        }
    }
    ctx->pc = 0x27E208u;
    // 0x27e208: 0xc09ed78  jal         func_27B5E0
    ctx->pc = 0x27E208u;
    SET_GPR_U32(ctx, 31, 0x27E210u);
    ctx->pc = 0x27E20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E208u;
    // 0x27e20c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B5E0u, 0x27E208u, 0x27E210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E210u;
label_27e210:
    // 0x27e210: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27E210u;
    {
        const bool branch_taken_0x27e210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e210) {
            ctx->pc = 0x27E238u;
            goto label_27e238;
        }
    }
    ctx->pc = 0x27E218u;
    // 0x27e218: 0xc09edf2  jal         func_27B7C8
    ctx->pc = 0x27E218u;
    SET_GPR_U32(ctx, 31, 0x27E220u);
    ctx->pc = 0x27E21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E218u;
    // 0x27e21c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B7C8u, 0x27E218u, 0x27E220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E220u;
label_27e220:
    // 0x27e220: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27E220u;
    {
        const bool branch_taken_0x27e220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e220) {
            ctx->pc = 0x27E238u;
            goto label_27e238;
        }
    }
    ctx->pc = 0x27E228u;
    // 0x27e228: 0xc09ede8  jal         func_27B7A0
    ctx->pc = 0x27E228u;
    SET_GPR_U32(ctx, 31, 0x27E230u);
    ctx->pc = 0x27E22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E228u;
    // 0x27e22c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B7A0u, 0x27E228u, 0x27E230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E230u;
label_27e230:
    // 0x27e230: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x27E230u;
    {
        const bool branch_taken_0x27e230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e230) {
            ctx->pc = 0x27E3BCu;
            goto label_27e3bc;
        }
    }
    ctx->pc = 0x27E238u;
label_27e238:
    // 0x27e238: 0xc089b98  jal         func_226E60
    ctx->pc = 0x27E238u;
    SET_GPR_U32(ctx, 31, 0x27E240u);
    ctx->pc = 0x27E23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E238u;
    // 0x27e23c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x27E238u, 0x27E240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E240u;
label_27e240:
    // 0x27e240: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27e240u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e244: 0xc08c68e  jal         func_231A38
    ctx->pc = 0x27E244u;
    SET_GPR_U32(ctx, 31, 0x27E24Cu);
    ctx->pc = 0x27E248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E244u;
    // 0x27e248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A38u, 0x27E244u, 0x27E24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E24Cu;
label_27e24c:
    // 0x27e24c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27E24Cu;
    {
        const bool branch_taken_0x27e24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e24c) {
            ctx->pc = 0x27E268u;
            goto label_27e268;
        }
    }
    ctx->pc = 0x27E254u;
    // 0x27e254: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x27E254u;
    SET_GPR_U32(ctx, 31, 0x27E25Cu);
    ctx->pc = 0x27E258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E254u;
    // 0x27e258: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x27E254u, 0x27E25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E25Cu;
label_27e25c:
    // 0x27e25c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x27e25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27e260: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x27E260u;
    {
        const bool branch_taken_0x27e260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27e260) {
            ctx->pc = 0x27E290u;
            goto label_27e290;
        }
    }
    ctx->pc = 0x27E268u;
label_27e268:
    // 0x27e268: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x27E268u;
    SET_GPR_U32(ctx, 31, 0x27E270u);
    ctx->pc = 0x27E26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E268u;
    // 0x27e26c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x27E268u, 0x27E270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E270u;
label_27e270:
    // 0x27e270: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x27e270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27e274: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x27E274u;
    {
        const bool branch_taken_0x27e274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27e274) {
            ctx->pc = 0x27E290u;
            goto label_27e290;
        }
    }
    ctx->pc = 0x27E27Cu;
    // 0x27e27c: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x27E27Cu;
    SET_GPR_U32(ctx, 31, 0x27E284u);
    ctx->pc = 0x27E280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E27Cu;
    // 0x27e280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x27E27Cu, 0x27E284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E284u;
label_27e284:
    // 0x27e284: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x27e284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27e288: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27E288u;
    {
        const bool branch_taken_0x27e288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x27e288) {
            ctx->pc = 0x27E2A0u;
            goto label_27e2a0;
        }
    }
    ctx->pc = 0x27E290u;
label_27e290:
    // 0x27e290: 0xc0a2036  jal         func_2880D8
    ctx->pc = 0x27E290u;
    SET_GPR_U32(ctx, 31, 0x27E298u);
    ctx->pc = 0x27E294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E290u;
    // 0x27e294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2880D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2880D8u, 0x27E290u, 0x27E298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E298u;
label_27e298:
    // 0x27e298: 0x100000fa  b           . + 4 + (0xFA << 2)
    ctx->pc = 0x27E298u;
    {
        const bool branch_taken_0x27e298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e298) {
            ctx->pc = 0x27E684u;
            goto label_27e684;
        }
    }
    ctx->pc = 0x27E2A0u;
label_27e2a0:
    // 0x27e2a0: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x27E2A0u;
    SET_GPR_U32(ctx, 31, 0x27E2A8u);
    ctx->pc = 0x27E2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E2A0u;
    // 0x27e2a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x27E2A0u, 0x27E2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E2A8u;
label_27e2a8:
    // 0x27e2a8: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x27e2a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x27e2ac: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x27E2ACu;
    {
        const bool branch_taken_0x27e2ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E2ACu;
        // 0x27e2b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e2ac) {
            ctx->pc = 0x27E33Cu;
            goto label_27e33c;
        }
    }
    ctx->pc = 0x27E2B4u;
    // 0x27e2b4: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x27E2B4u;
    SET_GPR_U32(ctx, 31, 0x27E2BCu);
    ctx->pc = 0x27E2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E2B4u;
    // 0x27e2b8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x27E2B4u, 0x27E2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E2BCu;
label_27e2bc:
    // 0x27e2bc: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x27E2BCu;
    {
        const bool branch_taken_0x27e2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e2bc) {
            ctx->pc = 0x27E33Cu;
            goto label_27e33c;
        }
    }
    ctx->pc = 0x27E2C4u;
    // 0x27e2c4: 0x124000fc  beqz        $s2, . + 4 + (0xFC << 2)
    ctx->pc = 0x27E2C4u;
    {
        const bool branch_taken_0x27e2c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E2C4u;
        // 0x27e2c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e2c4) {
            ctx->pc = 0x27E6B8u;
            goto label_27e6b8;
        }
    }
    ctx->pc = 0x27E2CCu;
    // 0x27e2cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27e2ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e2d0: 0xc099cb4  jal         func_2672D0
    ctx->pc = 0x27E2D0u;
    SET_GPR_U32(ctx, 31, 0x27E2D8u);
    ctx->pc = 0x27E2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E2D0u;
    // 0x27e2d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2672D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2672D0u, 0x27E2D0u, 0x27E2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E2D8u;
label_27e2d8:
    // 0x27e2d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27e2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27e2dc: 0x144300f7  bne         $v0, $v1, . + 4 + (0xF7 << 2)
    ctx->pc = 0x27E2DCu;
    {
        const bool branch_taken_0x27e2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x27E2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E2DCu;
        // 0x27e2e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e2dc) {
            ctx->pc = 0x27E6BCu;
            goto label_27e6bc;
        }
    }
    ctx->pc = 0x27E2E4u;
    // 0x27e2e4: 0xc089b98  jal         func_226E60
    ctx->pc = 0x27E2E4u;
    SET_GPR_U32(ctx, 31, 0x27E2ECu);
    ctx->pc = 0x27E2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E2E4u;
    // 0x27e2e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x27E2E4u, 0x27E2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E2ECu;
label_27e2ec:
    // 0x27e2ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27e2ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e2f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27e2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e2f4: 0xc099cb4  jal         func_2672D0
    ctx->pc = 0x27E2F4u;
    SET_GPR_U32(ctx, 31, 0x27E2FCu);
    ctx->pc = 0x27E2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E2F4u;
    // 0x27e2f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2672D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2672D0u, 0x27E2F4u, 0x27E2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E2FCu;
label_27e2fc:
    // 0x27e2fc: 0x144000ef  bnez        $v0, . + 4 + (0xEF << 2)
    ctx->pc = 0x27E2FCu;
    {
        const bool branch_taken_0x27e2fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E2FCu;
        // 0x27e300: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e2fc) {
            ctx->pc = 0x27E6BCu;
            goto label_27e6bc;
        }
    }
    ctx->pc = 0x27E304u;
    // 0x27e304: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27e304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e308: 0xc089548  jal         func_225520
    ctx->pc = 0x27E308u;
    SET_GPR_U32(ctx, 31, 0x27E310u);
    ctx->pc = 0x27E30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E308u;
    // 0x27e30c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225520u, 0x27E308u, 0x27E310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E310u;
label_27e310:
    // 0x27e310: 0x104000ea  beqz        $v0, . + 4 + (0xEA << 2)
    ctx->pc = 0x27E310u;
    {
        const bool branch_taken_0x27e310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E310u;
        // 0x27e314: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e310) {
            ctx->pc = 0x27E6BCu;
            goto label_27e6bc;
        }
    }
    ctx->pc = 0x27E318u;
    // 0x27e318: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27e318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e31c: 0xc08702a  jal         func_21C0A8
    ctx->pc = 0x27E31Cu;
    SET_GPR_U32(ctx, 31, 0x27E324u);
    ctx->pc = 0x27E320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E31Cu;
    // 0x27e320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C0A8u, 0x27E31Cu, 0x27E324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E324u;
label_27e324:
    // 0x27e324: 0x104000e5  beqz        $v0, . + 4 + (0xE5 << 2)
    ctx->pc = 0x27E324u;
    {
        const bool branch_taken_0x27e324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E324u;
        // 0x27e328: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e324) {
            ctx->pc = 0x27E6BCu;
            goto label_27e6bc;
        }
    }
    ctx->pc = 0x27E32Cu;
    // 0x27e32c: 0xc0991ce  jal         func_264738
    ctx->pc = 0x27E32Cu;
    SET_GPR_U32(ctx, 31, 0x27E334u);
    ctx->pc = 0x27E330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E32Cu;
    // 0x27e330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264738u, 0x27E32Cu, 0x27E334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E334u;
label_27e334:
    // 0x27e334: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x27E334u;
    {
        const bool branch_taken_0x27e334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E334u;
        // 0x27e338: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e334) {
            ctx->pc = 0x27E6BCu;
            goto label_27e6bc;
        }
    }
    ctx->pc = 0x27E33Cu;
label_27e33c:
    // 0x27e33c: 0xc09ed78  jal         func_27B5E0
    ctx->pc = 0x27E33Cu;
    SET_GPR_U32(ctx, 31, 0x27E344u);
    ctx->pc = 0x27E340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E33Cu;
    // 0x27e340: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B5E0u, 0x27E33Cu, 0x27E344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E344u;
label_27e344:
    // 0x27e344: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27E344u;
    {
        const bool branch_taken_0x27e344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e344) {
            ctx->pc = 0x27E35Cu;
            goto label_27e35c;
        }
    }
    ctx->pc = 0x27E34Cu;
    // 0x27e34c: 0xc0a1e86  jal         func_287A18
    ctx->pc = 0x27E34Cu;
    SET_GPR_U32(ctx, 31, 0x27E354u);
    ctx->pc = 0x27E350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E34Cu;
    // 0x27e350: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287A18u, 0x27E34Cu, 0x27E354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E354u;
label_27e354:
    // 0x27e354: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27E354u;
    {
        const bool branch_taken_0x27e354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e354) {
            ctx->pc = 0x27E374u;
            goto label_27e374;
        }
    }
    ctx->pc = 0x27E35Cu;
label_27e35c:
    // 0x27e35c: 0xc09ed82  jal         func_27B608
    ctx->pc = 0x27E35Cu;
    SET_GPR_U32(ctx, 31, 0x27E364u);
    ctx->pc = 0x27E360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E35Cu;
    // 0x27e360: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B608u, 0x27E35Cu, 0x27E364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E364u;
label_27e364:
    // 0x27e364: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27E364u;
    {
        const bool branch_taken_0x27e364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e364) {
            ctx->pc = 0x27E38Cu;
            goto label_27e38c;
        }
    }
    ctx->pc = 0x27E36Cu;
    // 0x27e36c: 0xc0a1b32  jal         func_286CC8
    ctx->pc = 0x27E36Cu;
    SET_GPR_U32(ctx, 31, 0x27E374u);
    ctx->pc = 0x27E370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E36Cu;
    // 0x27e370: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286CC8u, 0x27E36Cu, 0x27E374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E374u;
label_27e374:
    // 0x27e374: 0x104000d0  beqz        $v0, . + 4 + (0xD0 << 2)
    ctx->pc = 0x27E374u;
    {
        const bool branch_taken_0x27e374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E374u;
        // 0x27e378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e374) {
            ctx->pc = 0x27E6B8u;
            goto label_27e6b8;
        }
    }
    ctx->pc = 0x27E37Cu;
    // 0x27e37c: 0xc0899aa  jal         func_2266A8
    ctx->pc = 0x27E37Cu;
    SET_GPR_U32(ctx, 31, 0x27E384u);
    ctx->pc = 0x27E380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E37Cu;
    // 0x27e380: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x27E37Cu, 0x27E384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E384u;
label_27e384:
    // 0x27e384: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x27E384u;
    {
        const bool branch_taken_0x27e384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E384u;
        // 0x27e388: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e384) {
            ctx->pc = 0x27E6BCu;
            goto label_27e6bc;
        }
    }
    ctx->pc = 0x27E38Cu;
label_27e38c:
    // 0x27e38c: 0xc09edf2  jal         func_27B7C8
    ctx->pc = 0x27E38Cu;
    SET_GPR_U32(ctx, 31, 0x27E394u);
    ctx->pc = 0x27E390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E38Cu;
    // 0x27e390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B7C8u, 0x27E38Cu, 0x27E394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E394u;
label_27e394:
    // 0x27e394: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27E394u;
    {
        const bool branch_taken_0x27e394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e394) {
            ctx->pc = 0x27E3ACu;
            goto label_27e3ac;
        }
    }
    ctx->pc = 0x27E39Cu;
    // 0x27e39c: 0xc09ede8  jal         func_27B7A0
    ctx->pc = 0x27E39Cu;
    SET_GPR_U32(ctx, 31, 0x27E3A4u);
    ctx->pc = 0x27E3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E39Cu;
    // 0x27e3a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B7A0u, 0x27E39Cu, 0x27E3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E3A4u;
label_27e3a4:
    // 0x27e3a4: 0x104000c5  beqz        $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x27E3A4u;
    {
        const bool branch_taken_0x27e3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E3A4u;
        // 0x27e3a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e3a4) {
            ctx->pc = 0x27E6BCu;
            goto label_27e6bc;
        }
    }
    ctx->pc = 0x27E3ACu;
label_27e3ac:
    // 0x27e3ac: 0xc0a1248  jal         func_284920
    ctx->pc = 0x27E3ACu;
    SET_GPR_U32(ctx, 31, 0x27E3B4u);
    ctx->pc = 0x27E3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E3ACu;
    // 0x27e3b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284920u, 0x27E3ACu, 0x27E3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E3B4u;
label_27e3b4:
    // 0x27e3b4: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x27E3B4u;
    {
        const bool branch_taken_0x27e3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e3b4) {
            ctx->pc = 0x27E684u;
            goto label_27e684;
        }
    }
    ctx->pc = 0x27E3BCu;
label_27e3bc:
    // 0x27e3bc: 0xc09ef08  jal         func_27BC20
    ctx->pc = 0x27E3BCu;
    SET_GPR_U32(ctx, 31, 0x27E3C4u);
    ctx->pc = 0x27E3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E3BCu;
    // 0x27e3c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BC20u, 0x27E3BCu, 0x27E3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E3C4u;
label_27e3c4:
    // 0x27e3c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27E3C4u;
    {
        const bool branch_taken_0x27e3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e3c4) {
            ctx->pc = 0x27E3DCu;
            goto label_27e3dc;
        }
    }
    ctx->pc = 0x27E3CCu;
    // 0x27e3cc: 0xc0a0cb2  jal         func_2832C8
    ctx->pc = 0x27E3CCu;
    SET_GPR_U32(ctx, 31, 0x27E3D4u);
    ctx->pc = 0x27E3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E3CCu;
    // 0x27e3d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2832C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2832C8u, 0x27E3CCu, 0x27E3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E3D4u;
label_27e3d4:
    // 0x27e3d4: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x27E3D4u;
    {
        const bool branch_taken_0x27e3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e3d4) {
            ctx->pc = 0x27E684u;
            goto label_27e684;
        }
    }
    ctx->pc = 0x27E3DCu;
label_27e3dc:
    // 0x27e3dc: 0xc09eefe  jal         func_27BBF8
    ctx->pc = 0x27E3DCu;
    SET_GPR_U32(ctx, 31, 0x27E3E4u);
    ctx->pc = 0x27E3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E3DCu;
    // 0x27e3e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BBF8u, 0x27E3DCu, 0x27E3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E3E4u;
label_27e3e4:
    // 0x27e3e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27E3E4u;
    {
        const bool branch_taken_0x27e3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e3e4) {
            ctx->pc = 0x27E3FCu;
            goto label_27e3fc;
        }
    }
    ctx->pc = 0x27E3ECu;
    // 0x27e3ec: 0xc0a1aea  jal         func_286BA8
    ctx->pc = 0x27E3ECu;
    SET_GPR_U32(ctx, 31, 0x27E3F4u);
    ctx->pc = 0x27E3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E3ECu;
    // 0x27e3f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286BA8u, 0x27E3ECu, 0x27E3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E3F4u;
label_27e3f4:
    // 0x27e3f4: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x27E3F4u;
    {
        const bool branch_taken_0x27e3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e3f4) {
            ctx->pc = 0x27E684u;
            goto label_27e684;
        }
    }
    ctx->pc = 0x27E3FCu;
label_27e3fc:
    // 0x27e3fc: 0xc09ee84  jal         func_27BA10
    ctx->pc = 0x27E3FCu;
    SET_GPR_U32(ctx, 31, 0x27E404u);
    ctx->pc = 0x27E400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E3FCu;
    // 0x27e400: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BA10u, 0x27E3FCu, 0x27E404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E404u;
label_27e404:
    // 0x27e404: 0x10400086  beqz        $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x27E404u;
    {
        const bool branch_taken_0x27e404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e404) {
            ctx->pc = 0x27E620u;
            goto label_27e620;
        }
    }
    ctx->pc = 0x27E40Cu;
    // 0x27e40c: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x27e40cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
    // 0x27e410: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x27e410u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x27e414: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x27e414u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
    // 0x27e418: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x27e418u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x27e41c: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x27e41cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
    // 0x27e420: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x27E420u;
    SET_GPR_U32(ctx, 31, 0x27E428u);
    ctx->pc = 0x27E424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E420u;
    // 0x27e424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x27E420u, 0x27E428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E428u;
label_27e428:
    // 0x27e428: 0x144000a4  bnez        $v0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x27E428u;
    {
        const bool branch_taken_0x27e428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E428u;
        // 0x27e42c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e428) {
            ctx->pc = 0x27E6BCu;
            goto label_27e6bc;
        }
    }
    ctx->pc = 0x27E430u;
    // 0x27e430: 0x3c0505c7  lui         $a1, 0x5C7
    ctx->pc = 0x27e430u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1479 << 16));
    // 0x27e434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27e434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e438: 0xc089998  jal         func_226660
    ctx->pc = 0x27E438u;
    SET_GPR_U32(ctx, 31, 0x27E440u);
    ctx->pc = 0x27E43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E438u;
    // 0x27e43c: 0x34a5eae0  ori         $a1, $a1, 0xEAE0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)60128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x27E438u, 0x27E440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E440u;
label_27e440:
    // 0x27e440: 0x1440009e  bnez        $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x27E440u;
    {
        const bool branch_taken_0x27e440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E440u;
        // 0x27e444: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e440) {
            ctx->pc = 0x27E6BCu;
            goto label_27e6bc;
        }
    }
    ctx->pc = 0x27E448u;
    // 0x27e448: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x27e448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x27e44c: 0x860301be  lh          $v1, 0x1BE($s0)
    ctx->pc = 0x27e44cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x27e450: 0x2444e880  addiu       $a0, $v0, -0x1780
    ctx->pc = 0x27e450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x27e454: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x27e454u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x55E882u));
    // 0x27e458: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27E458u;
    {
        const bool branch_taken_0x27e458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27E45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E458u;
        // 0x27e45c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e458) {
            ctx->pc = 0x27E490u;
            goto label_27e490;
        }
    }
    ctx->pc = 0x27E460u;
    // 0x27e460: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27e460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27e464: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27E464u;
    {
        const bool branch_taken_0x27e464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27E468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E464u;
        // 0x27e468: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e464) {
            ctx->pc = 0x27E47Cu;
            goto label_27e47c;
        }
    }
    ctx->pc = 0x27E46Cu;
    // 0x27e46c: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x27e46cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x27e470: 0x860201c0  lh          $v0, 0x1C0($s0)
    ctx->pc = 0x27e470u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x27e474: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27E474u;
    {
        const bool branch_taken_0x27e474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x27E478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E474u;
        // 0x27e478: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e474) {
            ctx->pc = 0x27E48Cu;
            goto label_27e48c;
        }
    }
    ctx->pc = 0x27E47Cu;
label_27e47c:
    // 0x27e47c: 0x8e0301c0  lw          $v1, 0x1C0($s0)
    ctx->pc = 0x27e47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x27e480: 0x24424770  addiu       $v0, $v0, 0x4770
    ctx->pc = 0x27e480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18288));
    // 0x27e484: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27E484u;
    {
        const bool branch_taken_0x27e484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27e484) {
            ctx->pc = 0x27E490u;
            goto label_27e490;
        }
    }
    ctx->pc = 0x27E48Cu;
label_27e48c:
    // 0x27e48c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27e48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27e490:
    // 0x27e490: 0x14a0008a  bnez        $a1, . + 4 + (0x8A << 2)
    ctx->pc = 0x27E490u;
    {
        const bool branch_taken_0x27e490 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E490u;
        // 0x27e494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e490) {
            ctx->pc = 0x27E6BCu;
            goto label_27e6bc;
        }
    }
    ctx->pc = 0x27E498u;
    // 0x27e498: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x27E498u;
    SET_GPR_U32(ctx, 31, 0x27E4A0u);
    ctx->pc = 0x27E49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E498u;
    // 0x27e49c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x27E498u, 0x27E4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E4A0u;
label_27e4a0:
    // 0x27e4a0: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x27e4a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x27e4a4: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x27E4A4u;
    {
        const bool branch_taken_0x27e4a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e4a4) {
            ctx->pc = 0x27E610u;
            goto label_27e610;
        }
    }
    ctx->pc = 0x27E4ACu;
    // 0x27e4ac: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x27e4acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
    // 0x27e4b0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x27e4b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x27e4b4: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x27e4b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
    // 0x27e4b8: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x27e4b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x27e4bc: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x27e4bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
    // 0x27e4c0: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x27E4C0u;
    SET_GPR_U32(ctx, 31, 0x27E4C8u);
    ctx->pc = 0x27E4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E4C0u;
    // 0x27e4c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x27E4C0u, 0x27E4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E4C8u;
label_27e4c8:
    // 0x27e4c8: 0x1440007c  bnez        $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x27E4C8u;
    {
        const bool branch_taken_0x27e4c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E4C8u;
        // 0x27e4cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e4c8) {
            ctx->pc = 0x27E6BCu;
            goto label_27e6bc;
        }
    }
    ctx->pc = 0x27E4D0u;
    // 0x27e4d0: 0x3c0505cf  lui         $a1, 0x5CF
    ctx->pc = 0x27e4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1487 << 16));
    // 0x27e4d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27e4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e4d8: 0xc089998  jal         func_226660
    ctx->pc = 0x27E4D8u;
    SET_GPR_U32(ctx, 31, 0x27E4E0u);
    ctx->pc = 0x27E4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E4D8u;
    // 0x27e4dc: 0x34a5eafb  ori         $a1, $a1, 0xEAFB (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)60155);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x27E4D8u, 0x27E4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E4E0u;
label_27e4e0:
    // 0x27e4e0: 0x14400076  bnez        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x27E4E0u;
    {
        const bool branch_taken_0x27e4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E4E0u;
        // 0x27e4e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e4e0) {
            ctx->pc = 0x27E6BCu;
            goto label_27e6bc;
        }
    }
    ctx->pc = 0x27E4E8u;
    // 0x27e4e8: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x27e4e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x27e4ec: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x27e4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x27e4f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27e4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27e4f4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x27e4f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x27e4f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x27e4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x27e4fc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x27e4fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x27e500: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x27E500u;
    {
        const bool branch_taken_0x27e500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e500) {
            ctx->pc = 0x27E55Cu;
            goto label_27e55c;
        }
    }
    ctx->pc = 0x27E508u;
    // 0x27e508: 0x92220018  lbu         $v0, 0x18($s1)
    ctx->pc = 0x27e508u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x27e50c: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x27e50cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
    // 0x27e510: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x27e510u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x27e514: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27e514u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27e518: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27e518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27e51c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x27e51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x27e520: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x27e520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e524: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27e524u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27e528: 0x0  nop
    ctx->pc = 0x27e528u;
    // NOP
    // 0x27e52c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x27E52Cu;
    {
        const bool branch_taken_0x27e52c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27e52c) {
            ctx->pc = 0x27E55Cu;
            goto label_27e55c;
        }
    }
    ctx->pc = 0x27E534u;
    // 0x27e534: 0xc0a09bc  jal         func_2826F0
    ctx->pc = 0x27E534u;
    SET_GPR_U32(ctx, 31, 0x27E53Cu);
    ctx->pc = 0x27E538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E534u;
    // 0x27e538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2826F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2826F0u, 0x27E534u, 0x27E53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E53Cu;
label_27e53c:
    // 0x27e53c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E53Cu;
    {
        const bool branch_taken_0x27e53c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e53c) {
            ctx->pc = 0x27E55Cu;
            goto label_27e55c;
        }
    }
    ctx->pc = 0x27E544u;
    // 0x27e544: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x27e544u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x27e548: 0x52db8  dsll        $a1, $a1, 22
    ctx->pc = 0x27e548u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 22);
    // 0x27e54c: 0xc089988  jal         func_226620
    ctx->pc = 0x27E54Cu;
    SET_GPR_U32(ctx, 31, 0x27E554u);
    ctx->pc = 0x27E550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E54Cu;
    // 0x27e550: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x27E54Cu, 0x27E554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E554u;
label_27e554:
    // 0x27e554: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x27E554u;
    {
        const bool branch_taken_0x27e554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E554u;
        // 0x27e558: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e554) {
            ctx->pc = 0x27E6BCu;
            goto label_27e6bc;
        }
    }
    ctx->pc = 0x27E55Cu;
label_27e55c:
    // 0x27e55c: 0x56400006  bnel        $s2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27E55Cu;
    {
        const bool branch_taken_0x27e55c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e55c) {
            ctx->pc = 0x27E560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E55Cu;
            // 0x27e560: 0xde0200e0  ld          $v0, 0xE0($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E578u;
            goto label_27e578;
        }
    }
    ctx->pc = 0x27E564u;
    // 0x27e564: 0xc0a047c  jal         func_2811F0
    ctx->pc = 0x27E564u;
    SET_GPR_U32(ctx, 31, 0x27E56Cu);
    ctx->pc = 0x27E568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E564u;
    // 0x27e568: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811F0u, 0x27E564u, 0x27E56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E56Cu;
label_27e56c:
    // 0x27e56c: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x27E56Cu;
    {
        const bool branch_taken_0x27e56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E56Cu;
        // 0x27e570: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e56c) {
            ctx->pc = 0x27E6BCu;
            goto label_27e6bc;
        }
    }
    ctx->pc = 0x27E574u;
    // 0x27e574: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x27e574u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_27e578:
    // 0x27e578: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x27e578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x27e57c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27e57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27e580: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x27e580u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x27e584: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x27e584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x27e588: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x27e588u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x27e58c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x27E58Cu;
    {
        const bool branch_taken_0x27e58c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E58Cu;
        // 0x27e590: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e58c) {
            ctx->pc = 0x27E5E0u;
            goto label_27e5e0;
        }
    }
    ctx->pc = 0x27E594u;
    // 0x27e594: 0x92220018  lbu         $v0, 0x18($s1)
    ctx->pc = 0x27e594u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x27e598: 0xc46102e8  lwc1        $f1, 0x2E8($v1)
    ctx->pc = 0x27e598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27e59c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27e59cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27e5a0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x27e5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x27e5a4: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x27e5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e5a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27e5a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27e5ac: 0x0  nop
    ctx->pc = 0x27e5acu;
    // NOP
    // 0x27e5b0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x27E5B0u;
    {
        const bool branch_taken_0x27e5b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27E5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E5B0u;
        // 0x27e5b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e5b0) {
            ctx->pc = 0x27E5E0u;
            goto label_27e5e0;
        }
    }
    ctx->pc = 0x27E5B8u;
    // 0x27e5b8: 0xc0a0a7a  jal         func_2829E8
    ctx->pc = 0x27E5B8u;
    SET_GPR_U32(ctx, 31, 0x27E5C0u);
    ctx->pc = 0x27E5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E5B8u;
    // 0x27e5bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2829E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2829E8u, 0x27E5B8u, 0x27E5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E5C0u;
label_27e5c0:
    // 0x27e5c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E5C0u;
    {
        const bool branch_taken_0x27e5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e5c0) {
            ctx->pc = 0x27E5E0u;
            goto label_27e5e0;
        }
    }
    ctx->pc = 0x27E5C8u;
    // 0x27e5c8: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x27e5c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x27e5cc: 0x52db8  dsll        $a1, $a1, 22
    ctx->pc = 0x27e5ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 22);
    // 0x27e5d0: 0xc089988  jal         func_226620
    ctx->pc = 0x27E5D0u;
    SET_GPR_U32(ctx, 31, 0x27E5D8u);
    ctx->pc = 0x27E5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E5D0u;
    // 0x27e5d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x27E5D0u, 0x27E5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E5D8u;
label_27e5d8:
    // 0x27e5d8: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x27E5D8u;
    {
        const bool branch_taken_0x27e5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E5D8u;
        // 0x27e5dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e5d8) {
            ctx->pc = 0x27E6BCu;
            goto label_27e6bc;
        }
    }
    ctx->pc = 0x27E5E0u;
label_27e5e0:
    // 0x27e5e0: 0x16400036  bnez        $s2, . + 4 + (0x36 << 2)
    ctx->pc = 0x27E5E0u;
    {
        const bool branch_taken_0x27e5e0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E5E0u;
        // 0x27e5e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e5e0) {
            ctx->pc = 0x27E6BCu;
            goto label_27e6bc;
        }
    }
    ctx->pc = 0x27E5E8u;
    // 0x27e5e8: 0xc089bfc  jal         func_226FF0
    ctx->pc = 0x27E5E8u;
    SET_GPR_U32(ctx, 31, 0x27E5F0u);
    ctx->pc = 0x27E5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E5E8u;
    // 0x27e5ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x27E5E8u, 0x27E5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E5F0u;
label_27e5f0:
    // 0x27e5f0: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x27E5F0u;
    {
        const bool branch_taken_0x27e5f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E5F0u;
        // 0x27e5f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e5f0) {
            ctx->pc = 0x27E6BCu;
            goto label_27e6bc;
        }
    }
    ctx->pc = 0x27E5F8u;
    // 0x27e5f8: 0xc095fce  jal         func_257F38
    ctx->pc = 0x27E5F8u;
    SET_GPR_U32(ctx, 31, 0x27E600u);
    ctx->pc = 0x27E5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E5F8u;
    // 0x27e5fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x27E5F8u, 0x27E600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E600u;
label_27e600:
    // 0x27e600: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27e600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e604: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27e604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e608: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x27E608u;
    {
        const bool branch_taken_0x27e608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E608u;
        // 0x27e60c: 0xa20305b8  sb          $v1, 0x5B8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1464), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e608) {
            ctx->pc = 0x27E6BCu;
            goto label_27e6bc;
        }
    }
    ctx->pc = 0x27E610u;
label_27e610:
    // 0x27e610: 0xc0a047c  jal         func_2811F0
    ctx->pc = 0x27E610u;
    SET_GPR_U32(ctx, 31, 0x27E618u);
    ctx->pc = 0x27E614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E610u;
    // 0x27e614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811F0u, 0x27E610u, 0x27E618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E618u;
label_27e618:
    // 0x27e618: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x27E618u;
    {
        const bool branch_taken_0x27e618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e618) {
            ctx->pc = 0x27E684u;
            goto label_27e684;
        }
    }
    ctx->pc = 0x27E620u;
label_27e620:
    // 0x27e620: 0xc09ee8e  jal         func_27BA38
    ctx->pc = 0x27E620u;
    SET_GPR_U32(ctx, 31, 0x27E628u);
    ctx->pc = 0x27E624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E620u;
    // 0x27e624: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BA38u, 0x27E620u, 0x27E628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E628u;
label_27e628:
    // 0x27e628: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27E628u;
    {
        const bool branch_taken_0x27e628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e628) {
            ctx->pc = 0x27E64Cu;
            goto label_27e64c;
        }
    }
    ctx->pc = 0x27E630u;
    // 0x27e630: 0x920205b8  lbu         $v0, 0x5B8($s0)
    ctx->pc = 0x27e630u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x27e634: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x27E634u;
    {
        const bool branch_taken_0x27e634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E634u;
        // 0x27e638: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e634) {
            ctx->pc = 0x27E6BCu;
            goto label_27e6bc;
        }
    }
    ctx->pc = 0x27E63Cu;
    // 0x27e63c: 0xc0a047c  jal         func_2811F0
    ctx->pc = 0x27E63Cu;
    SET_GPR_U32(ctx, 31, 0x27E644u);
    ctx->pc = 0x27E640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E63Cu;
    // 0x27e640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811F0u, 0x27E63Cu, 0x27E644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E644u;
label_27e644:
    // 0x27e644: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x27E644u;
    {
        const bool branch_taken_0x27e644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E644u;
        // 0x27e648: 0xa20005b8  sb          $zero, 0x5B8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1464), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e644) {
            ctx->pc = 0x27E684u;
            goto label_27e684;
        }
    }
    ctx->pc = 0x27E64Cu;
label_27e64c:
    // 0x27e64c: 0xc09f034  jal         func_27C0D0
    ctx->pc = 0x27E64Cu;
    SET_GPR_U32(ctx, 31, 0x27E654u);
    ctx->pc = 0x27E650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E64Cu;
    // 0x27e650: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C0D0u, 0x27E64Cu, 0x27E654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E654u;
label_27e654:
    // 0x27e654: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27E654u;
    {
        const bool branch_taken_0x27e654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e654) {
            ctx->pc = 0x27E66Cu;
            goto label_27e66c;
        }
    }
    ctx->pc = 0x27E65Cu;
    // 0x27e65c: 0xc0a03b8  jal         func_280EE0
    ctx->pc = 0x27E65Cu;
    SET_GPR_U32(ctx, 31, 0x27E664u);
    ctx->pc = 0x280EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280EE0u, 0x27E65Cu, 0x27E664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E664u;
label_27e664:
    // 0x27e664: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27E664u;
    {
        const bool branch_taken_0x27e664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e664) {
            ctx->pc = 0x27E684u;
            goto label_27e684;
        }
    }
    ctx->pc = 0x27E66Cu;
label_27e66c:
    // 0x27e66c: 0xc09f03e  jal         func_27C0F8
    ctx->pc = 0x27E66Cu;
    SET_GPR_U32(ctx, 31, 0x27E674u);
    ctx->pc = 0x27E670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E66Cu;
    // 0x27e670: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C0F8u, 0x27E66Cu, 0x27E674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E674u;
label_27e674:
    // 0x27e674: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x27E674u;
    {
        const bool branch_taken_0x27e674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E674u;
        // 0x27e678: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e674) {
            ctx->pc = 0x27E6BCu;
            goto label_27e6bc;
        }
    }
    ctx->pc = 0x27E67Cu;
    // 0x27e67c: 0xc0a03c2  jal         func_280F08
    ctx->pc = 0x27E67Cu;
    SET_GPR_U32(ctx, 31, 0x27E684u);
    ctx->pc = 0x280F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280F08u, 0x27E67Cu, 0x27E684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E684u;
label_27e684:
    // 0x27e684: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x27E684u;
    {
        const bool branch_taken_0x27e684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E684u;
        // 0x27e688: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e684) {
            ctx->pc = 0x27E6B8u;
            goto label_27e6b8;
        }
    }
    ctx->pc = 0x27E68Cu;
    // 0x27e68c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27E68Cu;
    {
        const bool branch_taken_0x27e68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E68Cu;
        // 0x27e690: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e68c) {
            ctx->pc = 0x27E6C0u;
            goto label_27e6c0;
        }
    }
    ctx->pc = 0x27E694u;
label_27e694:
    // 0x27e694: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x27E694u;
    SET_GPR_U32(ctx, 31, 0x27E69Cu);
    ctx->pc = 0x27E698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E694u;
    // 0x27e698: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x27E694u, 0x27E69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E69Cu;
label_27e69c:
    // 0x27e69c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27E69Cu;
    {
        const bool branch_taken_0x27e69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E69Cu;
        // 0x27e6a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e69c) {
            ctx->pc = 0x27E6B8u;
            goto label_27e6b8;
        }
    }
    ctx->pc = 0x27E6A4u;
    // 0x27e6a4: 0xc089988  jal         func_226620
    ctx->pc = 0x27E6A4u;
    SET_GPR_U32(ctx, 31, 0x27E6ACu);
    ctx->pc = 0x27E6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E6A4u;
    // 0x27e6a8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x27E6A4u, 0x27E6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E6ACu;
label_27e6ac:
    // 0x27e6ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27e6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e6b0: 0xc089974  jal         func_2265D0
    ctx->pc = 0x27E6B0u;
    SET_GPR_U32(ctx, 31, 0x27E6B8u);
    ctx->pc = 0x27E6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E6B0u;
    // 0x27e6b4: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x27E6B0u, 0x27E6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E6B8u;
label_27e6b8:
    // 0x27e6b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27e6b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27e6bc:
    // 0x27e6bc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x27e6bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27e6c0:
    // 0x27e6c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27e6c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27e6c4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x27e6c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e6c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27e6c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e6cc: 0x3e00008  jr          $ra
    ctx->pc = 0x27E6CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E6CCu;
        // 0x27e6d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E6CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E6D4u;
    // 0x27e6d4: 0x0  nop
    ctx->pc = 0x27e6d4u;
    // NOP
    ctx->pc = 0x27e6d8u;
}
