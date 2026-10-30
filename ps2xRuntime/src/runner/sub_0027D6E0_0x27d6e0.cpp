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

// Function: sub_0027D6E0
// Address: 0x27d6e0 - 0x27d800
void sub_0027D6E0_0x27d6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027D6E0_0x27d6e0");
#endif

    switch (ctx->pc) {
        case 0x27d6f8u: goto label_27d6f8;
        case 0x27d700u: goto label_27d700;
        case 0x27d720u: goto label_27d720;
        case 0x27d738u: goto label_27d738;
        case 0x27d748u: goto label_27d748;
        case 0x27d780u: goto label_27d780;
        case 0x27d78cu: goto label_27d78c;
        case 0x27d794u: goto label_27d794;
        case 0x27d7a8u: goto label_27d7a8;
        case 0x27d7c4u: goto label_27d7c4;
        case 0x27d7e0u: goto label_27d7e0;
        default: break;
    }

    ctx->pc = 0x27d6e0u;

    // 0x27d6e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27d6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27d6e4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x27d6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x27d6e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27d6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27d6ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27d6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27d6f0: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x27D6F0u;
    SET_GPR_U32(ctx, 31, 0x27D6F8u);
    ctx->pc = 0x27D6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D6F0u;
    // 0x27d6f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x27D6F0u, 0x27D6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D6F8u;
label_27d6f8:
    // 0x27d6f8: 0xc089b98  jal         func_226E60
    ctx->pc = 0x27D6F8u;
    SET_GPR_U32(ctx, 31, 0x27D700u);
    ctx->pc = 0x27D6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D6F8u;
    // 0x27d6fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x27D6F8u, 0x27D700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D700u;
label_27d700:
    // 0x27d700: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27d700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d704: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x27d704u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
    // 0x27d708: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x27d708u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x27d70c: 0x34a5d3e8  ori         $a1, $a1, 0xD3E8
    ctx->pc = 0x27d70cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54248);
    // 0x27d710: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x27d710u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x27d714: 0x34a50300  ori         $a1, $a1, 0x300
    ctx->pc = 0x27d714u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)768);
    // 0x27d718: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x27D718u;
    SET_GPR_U32(ctx, 31, 0x27D720u);
    ctx->pc = 0x27D71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D718u;
    // 0x27d71c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x27D718u, 0x27D720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D720u;
label_27d720:
    // 0x27d720: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x27D720u;
    {
        const bool branch_taken_0x27d720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D720u;
        // 0x27d724: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d720) {
            ctx->pc = 0x27D7ECu;
            goto label_27d7ec;
        }
    }
    ctx->pc = 0x27D728u;
    // 0x27d728: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x27d728u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x27d72c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27d72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d730: 0xc089998  jal         func_226660
    ctx->pc = 0x27D730u;
    SET_GPR_U32(ctx, 31, 0x27D738u);
    ctx->pc = 0x27D734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D730u;
    // 0x27d734: 0x34a5101f  ori         $a1, $a1, 0x101F (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4127);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x27D730u, 0x27D738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D738u;
label_27d738:
    // 0x27d738: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x27D738u;
    {
        const bool branch_taken_0x27d738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D738u;
        // 0x27d73c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d738) {
            ctx->pc = 0x27D7ECu;
            goto label_27d7ec;
        }
    }
    ctx->pc = 0x27D740u;
    // 0x27d740: 0xc08c68e  jal         func_231A38
    ctx->pc = 0x27D740u;
    SET_GPR_U32(ctx, 31, 0x27D748u);
    ctx->pc = 0x27D744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D740u;
    // 0x27d744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A38u, 0x27D740u, 0x27D748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D748u;
label_27d748:
    // 0x27d748: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x27D748u;
    {
        const bool branch_taken_0x27d748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D748u;
        // 0x27d74c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d748) {
            ctx->pc = 0x27D7ECu;
            goto label_27d7ec;
        }
    }
    ctx->pc = 0x27D750u;
    // 0x27d750: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x27d750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x27d754: 0xa44000bc  sh          $zero, 0xBC($v0)
    ctx->pc = 0x27d754u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 188), (uint16_t)GPR_U32(ctx, 0));
    // 0x27d758: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x27d758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x27d75c: 0xac6000b8  sw          $zero, 0xB8($v1)
    ctx->pc = 0x27d75cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 184), GPR_U32(ctx, 0));
    // 0x27d760: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x27d760u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x27d764: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x27d764u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x27d768: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x27D768u;
    {
        const bool branch_taken_0x27d768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d768) {
            ctx->pc = 0x27D798u;
            goto label_27d798;
        }
    }
    ctx->pc = 0x27D770u;
    // 0x27d770: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x27d770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x27d774: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27d774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27d778: 0xc09e9b0  jal         func_27A6C0
    ctx->pc = 0x27D778u;
    SET_GPR_U32(ctx, 31, 0x27D780u);
    ctx->pc = 0x27D77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D778u;
    // 0x27d77c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A6C0u, 0x27D778u, 0x27D780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D780u;
label_27d780:
    // 0x27d780: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27d780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d784: 0xc089b34  jal         func_226CD0
    ctx->pc = 0x27D784u;
    SET_GPR_U32(ctx, 31, 0x27D78Cu);
    ctx->pc = 0x27D788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D784u;
    // 0x27d788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226CD0u, 0x27D784u, 0x27D78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D78Cu;
label_27d78c:
    // 0x27d78c: 0xc089b98  jal         func_226E60
    ctx->pc = 0x27D78Cu;
    SET_GPR_U32(ctx, 31, 0x27D794u);
    ctx->pc = 0x27D790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D78Cu;
    // 0x27d790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x27D78Cu, 0x27D794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D794u;
label_27d794:
    // 0x27d794: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27d794u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27d798:
    // 0x27d798: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x27D798u;
    {
        const bool branch_taken_0x27d798 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D798u;
        // 0x27d79c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d798) {
            ctx->pc = 0x27D7E8u;
            goto label_27d7e8;
        }
    }
    ctx->pc = 0x27D7A0u;
    // 0x27d7a0: 0xc0963a2  jal         func_258E88
    ctx->pc = 0x27D7A0u;
    SET_GPR_U32(ctx, 31, 0x27D7A8u);
    ctx->pc = 0x27D7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D7A0u;
    // 0x27d7a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258E88u, 0x27D7A0u, 0x27D7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D7A8u;
label_27d7a8:
    // 0x27d7a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27D7A8u;
    {
        const bool branch_taken_0x27d7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D7A8u;
        // 0x27d7ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d7a8) {
            ctx->pc = 0x27D7BCu;
            goto label_27d7bc;
        }
    }
    ctx->pc = 0x27D7B0u;
    // 0x27d7b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27d7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d7b4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27D7B4u;
    {
        const bool branch_taken_0x27d7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D7B4u;
        // 0x27d7b8: 0x2406004c  addiu       $a2, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d7b4) {
            ctx->pc = 0x27D7D4u;
            goto label_27d7d4;
        }
    }
    ctx->pc = 0x27D7BCu;
label_27d7bc:
    // 0x27d7bc: 0xc09643e  jal         func_2590F8
    ctx->pc = 0x27D7BCu;
    SET_GPR_U32(ctx, 31, 0x27D7C4u);
    ctx->pc = 0x27D7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D7BCu;
    // 0x27d7c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2590F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2590F8u, 0x27D7BCu, 0x27D7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D7C4u;
label_27d7c4:
    // 0x27d7c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27D7C4u;
    {
        const bool branch_taken_0x27d7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D7C4u;
        // 0x27d7c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d7c4) {
            ctx->pc = 0x27D7E8u;
            goto label_27d7e8;
        }
    }
    ctx->pc = 0x27D7CCu;
    // 0x27d7cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27d7ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d7d0: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x27d7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_27d7d4:
    // 0x27d7d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x27d7d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d7d8: 0xc098ab2  jal         func_262AC8
    ctx->pc = 0x27D7D8u;
    SET_GPR_U32(ctx, 31, 0x27D7E0u);
    ctx->pc = 0x27D7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D7D8u;
    // 0x27d7dc: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AC8u, 0x27D7D8u, 0x27D7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D7E0u;
label_27d7e0:
    // 0x27d7e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27D7E0u;
    {
        const bool branch_taken_0x27d7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D7E0u;
        // 0x27d7e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d7e0) {
            ctx->pc = 0x27D7ECu;
            goto label_27d7ec;
        }
    }
    ctx->pc = 0x27D7E8u;
label_27d7e8:
    // 0x27d7e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27d7e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27d7ec:
    // 0x27d7ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x27d7ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27d7f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27d7f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d7f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27d7f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x27D7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D7F8u;
        // 0x27d7fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D7F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27D800u;
}
