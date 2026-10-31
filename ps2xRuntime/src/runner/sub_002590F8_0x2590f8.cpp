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

// Function: sub_002590F8
// Address: 0x2590f8 - 0x259368
void sub_002590F8_0x2590f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002590F8_0x2590f8");
#endif

    switch (ctx->pc) {
        case 0x259124u: goto label_259124;
        case 0x259148u: goto label_259148;
        case 0x25915cu: goto label_25915c;
        case 0x25916cu: goto label_25916c;
        case 0x25917cu: goto label_25917c;
        case 0x25918cu: goto label_25918c;
        case 0x25920cu: goto label_25920c;
        case 0x259220u: goto label_259220;
        case 0x259250u: goto label_259250;
        case 0x259268u: goto label_259268;
        case 0x25927cu: goto label_25927c;
        case 0x259290u: goto label_259290;
        case 0x2592b8u: goto label_2592b8;
        case 0x2592d4u: goto label_2592d4;
        case 0x2592ecu: goto label_2592ec;
        case 0x259308u: goto label_259308;
        case 0x25931cu: goto label_25931c;
        case 0x259334u: goto label_259334;
        default: break;
    }

    ctx->pc = 0x2590f8u;

    // 0x2590f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2590f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2590fc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2590fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x259100: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x259100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x259104: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x259104u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259108: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x259108u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25910c: 0x3c050fc7  lui         $a1, 0xFC7
    ctx->pc = 0x25910cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4039 << 16));
    // 0x259110: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x259110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x259114: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x259118: 0x34a5eaf7  ori         $a1, $a1, 0xEAF7
    ctx->pc = 0x259118u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)60151);
    // 0x25911c: 0xc089998  jal         func_226660
    ctx->pc = 0x25911Cu;
    SET_GPR_U32(ctx, 31, 0x259124u);
    ctx->pc = 0x259120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25911Cu;
    // 0x259120: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x25911Cu, 0x259124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259124u;
label_259124:
    // 0x259124: 0x14400088  bnez        $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x259124u;
    {
        const bool branch_taken_0x259124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x259128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259124u;
        // 0x259128: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259124) {
            ctx->pc = 0x259348u;
            goto label_259348;
        }
    }
    ctx->pc = 0x25912Cu;
    // 0x25912c: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x25912cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
    // 0x259130: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x259130u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x259134: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x259134u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
    // 0x259138: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x259138u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x25913c: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x25913cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
    // 0x259140: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x259140u;
    SET_GPR_U32(ctx, 31, 0x259148u);
    ctx->pc = 0x259144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259140u;
    // 0x259144: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x259140u, 0x259148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259148u;
label_259148:
    // 0x259148: 0x1440007f  bnez        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x259148u;
    {
        const bool branch_taken_0x259148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25914Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259148u;
        // 0x25914c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259148) {
            ctx->pc = 0x259348u;
            goto label_259348;
        }
    }
    ctx->pc = 0x259150u;
    // 0x259150: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x259150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259154: 0xc08702a  jal         func_21C0A8
    ctx->pc = 0x259154u;
    SET_GPR_U32(ctx, 31, 0x25915Cu);
    ctx->pc = 0x259158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259154u;
    // 0x259158: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C0A8u, 0x259154u, 0x25915Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25915Cu;
label_25915c:
    // 0x25915c: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x25915Cu;
    {
        const bool branch_taken_0x25915c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25915Cu;
        // 0x259160: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25915c) {
            ctx->pc = 0x259344u;
            goto label_259344;
        }
    }
    ctx->pc = 0x259164u;
    // 0x259164: 0xc089548  jal         func_225520
    ctx->pc = 0x259164u;
    SET_GPR_U32(ctx, 31, 0x25916Cu);
    ctx->pc = 0x259168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259164u;
    // 0x259168: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225520u, 0x259164u, 0x25916Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25916Cu;
label_25916c:
    // 0x25916c: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x25916Cu;
    {
        const bool branch_taken_0x25916c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25916Cu;
        // 0x259170: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25916c) {
            ctx->pc = 0x259348u;
            goto label_259348;
        }
    }
    ctx->pc = 0x259174u;
    // 0x259174: 0xc088bfe  jal         func_222FF8
    ctx->pc = 0x259174u;
    SET_GPR_U32(ctx, 31, 0x25917Cu);
    ctx->pc = 0x259178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259174u;
    // 0x259178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222FF8u, 0x259174u, 0x25917Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25917Cu;
label_25917c:
    // 0x25917c: 0x14400072  bnez        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x25917Cu;
    {
        const bool branch_taken_0x25917c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x259180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25917Cu;
        // 0x259180: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25917c) {
            ctx->pc = 0x259348u;
            goto label_259348;
        }
    }
    ctx->pc = 0x259184u;
    // 0x259184: 0xc089000  jal         func_224000
    ctx->pc = 0x259184u;
    SET_GPR_U32(ctx, 31, 0x25918Cu);
    ctx->pc = 0x259188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259184u;
    // 0x259188: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x259184u, 0x25918Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25918Cu;
label_25918c:
    // 0x25918c: 0x1440006e  bnez        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x25918Cu;
    {
        const bool branch_taken_0x25918c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x259190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25918Cu;
        // 0x259190: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25918c) {
            ctx->pc = 0x259348u;
            goto label_259348;
        }
    }
    ctx->pc = 0x259194u;
    // 0x259194: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x259194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x259198: 0x862301be  lh          $v1, 0x1BE($s1)
    ctx->pc = 0x259198u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
    // 0x25919c: 0x2444d838  addiu       $a0, $v0, -0x27C8
    ctx->pc = 0x25919cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957112));
    // 0x2591a0: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x2591a0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x55D83Au));
    // 0x2591a4: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2591A4u;
    {
        const bool branch_taken_0x2591a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2591A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2591A4u;
        // 0x2591a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2591a4) {
            ctx->pc = 0x2591DCu;
            goto label_2591dc;
        }
    }
    ctx->pc = 0x2591ACu;
    // 0x2591ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2591acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2591b0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2591B0u;
    {
        const bool branch_taken_0x2591b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2591B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2591B0u;
        // 0x2591b4: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2591b0) {
            ctx->pc = 0x2591C8u;
            goto label_2591c8;
        }
    }
    ctx->pc = 0x2591B8u;
    // 0x2591b8: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x2591b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2591bc: 0x862201c0  lh          $v0, 0x1C0($s1)
    ctx->pc = 0x2591bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x2591c0: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2591C0u;
    {
        const bool branch_taken_0x2591c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2591C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2591C0u;
        // 0x2591c4: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2591c0) {
            ctx->pc = 0x2591D8u;
            goto label_2591d8;
        }
    }
    ctx->pc = 0x2591C8u;
label_2591c8:
    // 0x2591c8: 0x8e2301c0  lw          $v1, 0x1C0($s1)
    ctx->pc = 0x2591c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x2591cc: 0x24424770  addiu       $v0, $v0, 0x4770
    ctx->pc = 0x2591ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18288));
    // 0x2591d0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2591D0u;
    {
        const bool branch_taken_0x2591d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2591d0) {
            ctx->pc = 0x2591DCu;
            goto label_2591dc;
        }
    }
    ctx->pc = 0x2591D8u;
label_2591d8:
    // 0x2591d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2591d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2591dc:
    // 0x2591dc: 0x14a0005a  bnez        $a1, . + 4 + (0x5A << 2)
    ctx->pc = 0x2591DCu;
    {
        const bool branch_taken_0x2591dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2591E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2591DCu;
        // 0x2591e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2591dc) {
            ctx->pc = 0x259348u;
            goto label_259348;
        }
    }
    ctx->pc = 0x2591E4u;
    // 0x2591e4: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2591e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x2591e8: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x2591e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x2591ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2591ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2591f0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2591f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2591f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2591f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2591f8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2591f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2591fc: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x2591FCu;
    {
        const bool branch_taken_0x2591fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x259200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2591FCu;
        // 0x259200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2591fc) {
            ctx->pc = 0x259348u;
            goto label_259348;
        }
    }
    ctx->pc = 0x259204u;
    // 0x259204: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x259204u;
    SET_GPR_U32(ctx, 31, 0x25920Cu);
    ctx->pc = 0x259208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259204u;
    // 0x259208: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x259204u, 0x25920Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25920Cu;
label_25920c:
    // 0x25920c: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x25920cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x259210: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x259210u;
    {
        const bool branch_taken_0x259210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x259214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259210u;
        // 0x259214: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259210) {
            ctx->pc = 0x259228u;
            goto label_259228;
        }
    }
    ctx->pc = 0x259218u;
    // 0x259218: 0xc088d7e  jal         func_2235F8
    ctx->pc = 0x259218u;
    SET_GPR_U32(ctx, 31, 0x259220u);
    ctx->pc = 0x25921Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259218u;
    // 0x25921c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2235F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2235F8u, 0x259218u, 0x259220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259220u;
label_259220:
    // 0x259220: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x259220u;
    {
        const bool branch_taken_0x259220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259220u;
        // 0x259224: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259220) {
            ctx->pc = 0x259344u;
            goto label_259344;
        }
    }
    ctx->pc = 0x259228u;
label_259228:
    // 0x259228: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x259228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x25922c: 0x906456e3  lbu         $a0, 0x56E3($v1)
    ctx->pc = 0x25922cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22243)));
    // 0x259230: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x259230u;
    {
        const bool branch_taken_0x259230 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x259230) {
            ctx->pc = 0x259274u;
            goto label_259274;
        }
    }
    ctx->pc = 0x259238u;
    // 0x259238: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x259238u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x25923c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x25923cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x259240: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x259240u;
    {
        const bool branch_taken_0x259240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x259244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259240u;
        // 0x259244: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259240) {
            ctx->pc = 0x25926Cu;
            goto label_25926c;
        }
    }
    ctx->pc = 0x259248u;
    // 0x259248: 0xc087502  jal         func_21D408
    ctx->pc = 0x259248u;
    SET_GPR_U32(ctx, 31, 0x259250u);
    ctx->pc = 0x25924Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259248u;
    // 0x25924c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x259248u, 0x259250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259250u;
label_259250:
    // 0x259250: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x259250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x259254: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x259254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x259258: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x259258u;
    {
        const bool branch_taken_0x259258 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x259258) {
            ctx->pc = 0x25926Cu;
            goto label_25926c;
        }
    }
    ctx->pc = 0x259260u;
    // 0x259260: 0xc088f88  jal         func_223E20
    ctx->pc = 0x259260u;
    SET_GPR_U32(ctx, 31, 0x259268u);
    ctx->pc = 0x259264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259260u;
    // 0x259264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E20u, 0x259260u, 0x259268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259268u;
label_259268:
    // 0x259268: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x259268u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_25926c:
    // 0x25926c: 0x16000036  bnez        $s0, . + 4 + (0x36 << 2)
    ctx->pc = 0x25926Cu;
    {
        const bool branch_taken_0x25926c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x259270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25926Cu;
        // 0x259270: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25926c) {
            ctx->pc = 0x259348u;
            goto label_259348;
        }
    }
    ctx->pc = 0x259274u;
label_259274:
    // 0x259274: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x259274u;
    SET_GPR_U32(ctx, 31, 0x25927Cu);
    ctx->pc = 0x259278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259274u;
    // 0x259278: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x259274u, 0x25927Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25927Cu;
label_25927c:
    // 0x25927c: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x25927cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x259280: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x259280u;
    {
        const bool branch_taken_0x259280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x259280) {
            ctx->pc = 0x2592E4u;
            goto label_2592e4;
        }
    }
    ctx->pc = 0x259288u;
    // 0x259288: 0xc088db2  jal         func_2236C8
    ctx->pc = 0x259288u;
    SET_GPR_U32(ctx, 31, 0x259290u);
    ctx->pc = 0x25928Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259288u;
    // 0x25928c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2236C8u, 0x259288u, 0x259290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259290u;
label_259290:
    // 0x259290: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x259290u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x259294: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x259294u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x259298: 0x0  nop
    ctx->pc = 0x259298u;
    // NOP
    // 0x25929c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x25929cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2592a0: 0x0  nop
    ctx->pc = 0x2592a0u;
    // NOP
    // 0x2592a4: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2592A4u;
    {
        const bool branch_taken_0x2592a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2592A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2592A4u;
        // 0x2592a8: 0x263005d0  addiu       $s0, $s1, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2592a4) {
            ctx->pc = 0x2592E4u;
            goto label_2592e4;
        }
    }
    ctx->pc = 0x2592ACu;
    // 0x2592ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2592acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2592b0: 0xc1060e6  jal         func_418398
    ctx->pc = 0x2592B0u;
    SET_GPR_U32(ctx, 31, 0x2592B8u);
    ctx->pc = 0x2592B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2592B0u;
    // 0x2592b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418398u, 0x2592B0u, 0x2592B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2592B8u;
label_2592b8:
    // 0x2592b8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2592b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2592bc: 0x0  nop
    ctx->pc = 0x2592bcu;
    // NOP
    // 0x2592c0: 0x45010021  bc1t        . + 4 + (0x21 << 2)
    ctx->pc = 0x2592C0u;
    {
        const bool branch_taken_0x2592c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2592C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2592C0u;
        // 0x2592c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2592c0) {
            ctx->pc = 0x259348u;
            goto label_259348;
        }
    }
    ctx->pc = 0x2592C8u;
    // 0x2592c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2592c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2592cc: 0xc1060e6  jal         func_418398
    ctx->pc = 0x2592CCu;
    SET_GPR_U32(ctx, 31, 0x2592D4u);
    ctx->pc = 0x2592D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2592CCu;
    // 0x2592d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418398u, 0x2592CCu, 0x2592D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2592D4u;
label_2592d4:
    // 0x2592d4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2592d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2592d8: 0x0  nop
    ctx->pc = 0x2592d8u;
    // NOP
    // 0x2592dc: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x2592DCu;
    {
        const bool branch_taken_0x2592dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2592E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2592DCu;
        // 0x2592e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2592dc) {
            ctx->pc = 0x259348u;
            goto label_259348;
        }
    }
    ctx->pc = 0x2592E4u;
label_2592e4:
    // 0x2592e4: 0xc0899ae  jal         func_2266B8
    ctx->pc = 0x2592E4u;
    SET_GPR_U32(ctx, 31, 0x2592ECu);
    ctx->pc = 0x2592E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2592E4u;
    // 0x2592e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x2592E4u, 0x2592ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2592ECu;
label_2592ec:
    // 0x2592ec: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x2592ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x2592f0: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2592f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2592f4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2592F4u;
    {
        const bool branch_taken_0x2592f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2592F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2592F4u;
        // 0x2592f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2592f4) {
            ctx->pc = 0x259344u;
            goto label_259344;
        }
    }
    ctx->pc = 0x2592FCu;
    // 0x2592fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2592fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259300: 0xc099cb4  jal         func_2672D0
    ctx->pc = 0x259300u;
    SET_GPR_U32(ctx, 31, 0x259308u);
    ctx->pc = 0x259304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259300u;
    // 0x259304: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2672D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2672D0u, 0x259300u, 0x259308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259308u;
label_259308:
    // 0x259308: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x259308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25930c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25930cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259310: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x259310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259314: 0xc099cb4  jal         func_2672D0
    ctx->pc = 0x259314u;
    SET_GPR_U32(ctx, 31, 0x25931Cu);
    ctx->pc = 0x259318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259314u;
    // 0x259318: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2672D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2672D0u, 0x259314u, 0x25931Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25931Cu;
label_25931c:
    // 0x25931c: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25931Cu;
    {
        const bool branch_taken_0x25931c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x259320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25931Cu;
        // 0x259320: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25931c) {
            ctx->pc = 0x25933Cu;
            goto label_25933c;
        }
    }
    ctx->pc = 0x259324u;
    // 0x259324: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x259324u;
    {
        const bool branch_taken_0x259324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259324) {
            ctx->pc = 0x259328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259324u;
            // 0x259328: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259348u;
            goto label_259348;
        }
    }
    ctx->pc = 0x25932Cu;
    // 0x25932c: 0xc089b98  jal         func_226E60
    ctx->pc = 0x25932Cu;
    SET_GPR_U32(ctx, 31, 0x259334u);
    ctx->pc = 0x259330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25932Cu;
    // 0x259330: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x25932Cu, 0x259334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259334u;
label_259334:
    // 0x259334: 0x511026  xor         $v0, $v0, $s1
    ctx->pc = 0x259334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 17));
    // 0x259338: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x259338u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_25933c:
    // 0x25933c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25933Cu;
    {
        const bool branch_taken_0x25933c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25933Cu;
        // 0x259340: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25933c) {
            ctx->pc = 0x259348u;
            goto label_259348;
        }
    }
    ctx->pc = 0x259344u;
label_259344:
    // 0x259344: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x259344u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_259348:
    // 0x259348: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x259348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25934c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x25934cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259350: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x259350u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259354: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x259354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259358: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x259358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25935c: 0x3e00008  jr          $ra
    ctx->pc = 0x25935Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25935Cu;
        // 0x259360: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25935Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259364u;
    // 0x259364: 0x0  nop
    ctx->pc = 0x259364u;
    // NOP
    ctx->pc = 0x259368u;
}
