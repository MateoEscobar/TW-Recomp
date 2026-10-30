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

// Function: sub_0015C858
// Address: 0x15c858 - 0x15ca90
void sub_0015C858_0x15c858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C858_0x15c858");
#endif

    switch (ctx->pc) {
        case 0x15c858u: goto label_15c858;
        case 0x15c85cu: goto label_15c85c;
        case 0x15c860u: goto label_15c860;
        case 0x15c864u: goto label_15c864;
        case 0x15c868u: goto label_15c868;
        case 0x15c86cu: goto label_15c86c;
        case 0x15c870u: goto label_15c870;
        case 0x15c874u: goto label_15c874;
        case 0x15c878u: goto label_15c878;
        case 0x15c87cu: goto label_15c87c;
        case 0x15c880u: goto label_15c880;
        case 0x15c884u: goto label_15c884;
        case 0x15c888u: goto label_15c888;
        case 0x15c88cu: goto label_15c88c;
        case 0x15c890u: goto label_15c890;
        case 0x15c894u: goto label_15c894;
        case 0x15c898u: goto label_15c898;
        case 0x15c89cu: goto label_15c89c;
        case 0x15c8a0u: goto label_15c8a0;
        case 0x15c8a4u: goto label_15c8a4;
        case 0x15c8a8u: goto label_15c8a8;
        case 0x15c8acu: goto label_15c8ac;
        case 0x15c8b0u: goto label_15c8b0;
        case 0x15c8b4u: goto label_15c8b4;
        case 0x15c8b8u: goto label_15c8b8;
        case 0x15c8bcu: goto label_15c8bc;
        case 0x15c8c0u: goto label_15c8c0;
        case 0x15c8c4u: goto label_15c8c4;
        case 0x15c8c8u: goto label_15c8c8;
        case 0x15c8ccu: goto label_15c8cc;
        case 0x15c8d0u: goto label_15c8d0;
        case 0x15c8d4u: goto label_15c8d4;
        case 0x15c8d8u: goto label_15c8d8;
        case 0x15c8dcu: goto label_15c8dc;
        case 0x15c8e0u: goto label_15c8e0;
        case 0x15c8e4u: goto label_15c8e4;
        case 0x15c8e8u: goto label_15c8e8;
        case 0x15c8ecu: goto label_15c8ec;
        case 0x15c8f0u: goto label_15c8f0;
        case 0x15c8f4u: goto label_15c8f4;
        case 0x15c8f8u: goto label_15c8f8;
        case 0x15c8fcu: goto label_15c8fc;
        case 0x15c900u: goto label_15c900;
        case 0x15c904u: goto label_15c904;
        case 0x15c908u: goto label_15c908;
        case 0x15c90cu: goto label_15c90c;
        case 0x15c910u: goto label_15c910;
        case 0x15c914u: goto label_15c914;
        case 0x15c918u: goto label_15c918;
        case 0x15c91cu: goto label_15c91c;
        case 0x15c920u: goto label_15c920;
        case 0x15c924u: goto label_15c924;
        case 0x15c928u: goto label_15c928;
        case 0x15c92cu: goto label_15c92c;
        case 0x15c930u: goto label_15c930;
        case 0x15c934u: goto label_15c934;
        case 0x15c938u: goto label_15c938;
        case 0x15c93cu: goto label_15c93c;
        case 0x15c940u: goto label_15c940;
        case 0x15c944u: goto label_15c944;
        case 0x15c948u: goto label_15c948;
        case 0x15c94cu: goto label_15c94c;
        case 0x15c950u: goto label_15c950;
        case 0x15c954u: goto label_15c954;
        case 0x15c958u: goto label_15c958;
        case 0x15c95cu: goto label_15c95c;
        case 0x15c960u: goto label_15c960;
        case 0x15c964u: goto label_15c964;
        case 0x15c968u: goto label_15c968;
        case 0x15c96cu: goto label_15c96c;
        case 0x15c970u: goto label_15c970;
        case 0x15c974u: goto label_15c974;
        case 0x15c978u: goto label_15c978;
        case 0x15c97cu: goto label_15c97c;
        case 0x15c980u: goto label_15c980;
        case 0x15c984u: goto label_15c984;
        case 0x15c988u: goto label_15c988;
        case 0x15c98cu: goto label_15c98c;
        case 0x15c990u: goto label_15c990;
        case 0x15c994u: goto label_15c994;
        case 0x15c998u: goto label_15c998;
        case 0x15c99cu: goto label_15c99c;
        case 0x15c9a0u: goto label_15c9a0;
        case 0x15c9a4u: goto label_15c9a4;
        case 0x15c9a8u: goto label_15c9a8;
        case 0x15c9acu: goto label_15c9ac;
        case 0x15c9b0u: goto label_15c9b0;
        case 0x15c9b4u: goto label_15c9b4;
        case 0x15c9b8u: goto label_15c9b8;
        case 0x15c9bcu: goto label_15c9bc;
        case 0x15c9c0u: goto label_15c9c0;
        case 0x15c9c4u: goto label_15c9c4;
        case 0x15c9c8u: goto label_15c9c8;
        case 0x15c9ccu: goto label_15c9cc;
        case 0x15c9d0u: goto label_15c9d0;
        case 0x15c9d4u: goto label_15c9d4;
        case 0x15c9d8u: goto label_15c9d8;
        case 0x15c9dcu: goto label_15c9dc;
        case 0x15c9e0u: goto label_15c9e0;
        case 0x15c9e4u: goto label_15c9e4;
        case 0x15c9e8u: goto label_15c9e8;
        case 0x15c9ecu: goto label_15c9ec;
        case 0x15c9f0u: goto label_15c9f0;
        case 0x15c9f4u: goto label_15c9f4;
        case 0x15c9f8u: goto label_15c9f8;
        case 0x15c9fcu: goto label_15c9fc;
        case 0x15ca00u: goto label_15ca00;
        case 0x15ca04u: goto label_15ca04;
        case 0x15ca08u: goto label_15ca08;
        case 0x15ca0cu: goto label_15ca0c;
        case 0x15ca10u: goto label_15ca10;
        case 0x15ca14u: goto label_15ca14;
        case 0x15ca18u: goto label_15ca18;
        case 0x15ca1cu: goto label_15ca1c;
        case 0x15ca20u: goto label_15ca20;
        case 0x15ca24u: goto label_15ca24;
        case 0x15ca28u: goto label_15ca28;
        case 0x15ca2cu: goto label_15ca2c;
        case 0x15ca30u: goto label_15ca30;
        case 0x15ca34u: goto label_15ca34;
        case 0x15ca38u: goto label_15ca38;
        case 0x15ca3cu: goto label_15ca3c;
        case 0x15ca40u: goto label_15ca40;
        case 0x15ca44u: goto label_15ca44;
        case 0x15ca48u: goto label_15ca48;
        case 0x15ca4cu: goto label_15ca4c;
        case 0x15ca50u: goto label_15ca50;
        case 0x15ca54u: goto label_15ca54;
        case 0x15ca58u: goto label_15ca58;
        case 0x15ca5cu: goto label_15ca5c;
        case 0x15ca60u: goto label_15ca60;
        case 0x15ca64u: goto label_15ca64;
        case 0x15ca68u: goto label_15ca68;
        case 0x15ca6cu: goto label_15ca6c;
        case 0x15ca70u: goto label_15ca70;
        case 0x15ca74u: goto label_15ca74;
        case 0x15ca78u: goto label_15ca78;
        case 0x15ca7cu: goto label_15ca7c;
        case 0x15ca80u: goto label_15ca80;
        case 0x15ca84u: goto label_15ca84;
        case 0x15ca88u: goto label_15ca88;
        case 0x15ca8cu: goto label_15ca8c;
        default: break;
    }

    ctx->pc = 0x15c858u;

label_15c858:
    // 0x15c858: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x15c858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_15c85c:
    // 0x15c85c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15c85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15c860:
    // 0x15c860: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x15c860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_15c864:
    // 0x15c864: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15c864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15c868:
    // 0x15c868: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15c868u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15c86c:
    // 0x15c86c: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x15c86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_15c870:
    // 0x15c870: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x15c870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_15c874:
    // 0x15c874: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x15c874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_15c878:
    // 0x15c878: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x15c878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_15c87c:
    // 0x15c87c: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x15c87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_15c880:
    // 0x15c880: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x15c880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_15c884:
    // 0x15c884: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x15c884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_15c888:
    // 0x15c888: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x15c888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_15c88c:
    // 0x15c88c: 0xc0517d8  jal         func_145F60
label_15c890:
    if (ctx->pc == 0x15C890u) {
        ctx->pc = 0x15C890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C88Cu;
        // 0x15c890: 0xe7b400e0  swc1        $f20, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C894u;
        goto label_15c894;
    }
    ctx->pc = 0x15C88Cu;
    SET_GPR_U32(ctx, 31, 0x15C894u);
    ctx->pc = 0x15C890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C88Cu;
    // 0x15c890: 0xe7b400e0  swc1        $f20, 0xE0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x145F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145F60u, 0x15C88Cu, 0x15C894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C894u;
label_15c894:
    // 0x15c894: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x15c894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_15c898:
    // 0x15c898: 0x440000e  bltz        $v0, . + 4 + (0xE << 2)
label_15c89c:
    if (ctx->pc == 0x15C89Cu) {
        ctx->pc = 0x15C89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C898u;
        // 0x15c89c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C8A0u;
        goto label_15c8a0;
    }
    ctx->pc = 0x15C898u;
    {
        const bool branch_taken_0x15c898 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x15C89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C898u;
        // 0x15c89c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c898) {
            ctx->pc = 0x15C8D4u;
            goto label_15c8d4;
        }
    }
    ctx->pc = 0x15C8A0u;
label_15c8a0:
    // 0x15c8a0: 0xc05717e  jal         func_15C5F8
label_15c8a4:
    if (ctx->pc == 0x15C8A4u) {
        ctx->pc = 0x15C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C8A0u;
        // 0x15c8a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C8A8u;
        goto label_15c8a8;
    }
    ctx->pc = 0x15C8A0u;
    SET_GPR_U32(ctx, 31, 0x15C8A8u);
    ctx->pc = 0x15C8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C8A0u;
    // 0x15c8a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C5F8u, 0x15C8A0u, 0x15C8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C8A8u;
label_15c8a8:
    // 0x15c8a8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15c8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15c8ac:
    // 0x15c8ac: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x15c8acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_15c8b0:
    // 0x15c8b0: 0xc1073a2  jal         func_41CE88
label_15c8b4:
    if (ctx->pc == 0x15C8B4u) {
        ctx->pc = 0x15C8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C8B0u;
        // 0x15c8b4: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C8B8u;
        goto label_15c8b8;
    }
    ctx->pc = 0x15C8B0u;
    SET_GPR_U32(ctx, 31, 0x15C8B8u);
    ctx->pc = 0x15C8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C8B0u;
    // 0x15c8b4: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CE88u, 0x15C8B0u, 0x15C8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C8B8u;
label_15c8b8:
    // 0x15c8b8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15c8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15c8bc:
    // 0x15c8bc: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15c8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_15c8c0:
    // 0x15c8c0: 0xae630020  sw          $v1, 0x20($s3)
    ctx->pc = 0x15c8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 3));
label_15c8c4:
    // 0x15c8c4: 0xc05797a  jal         func_15E5E8
label_15c8c8:
    if (ctx->pc == 0x15C8C8u) {
        ctx->pc = 0x15C8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C8C4u;
        // 0x15c8c8: 0x248456b8  addiu       $a0, $a0, 0x56B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C8CCu;
        goto label_15c8cc;
    }
    ctx->pc = 0x15C8C4u;
    SET_GPR_U32(ctx, 31, 0x15C8CCu);
    ctx->pc = 0x15C8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C8C4u;
    // 0x15c8c8: 0x248456b8  addiu       $a0, $a0, 0x56B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E5E8u, 0x15C8C4u, 0x15C8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C8CCu;
label_15c8cc:
    // 0x15c8cc: 0x10000064  b           . + 4 + (0x64 << 2)
label_15c8d0:
    if (ctx->pc == 0x15C8D0u) {
        ctx->pc = 0x15C8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C8CCu;
        // 0x15c8d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C8D4u;
        goto label_15c8d4;
    }
    ctx->pc = 0x15C8CCu;
    {
        const bool branch_taken_0x15c8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C8CCu;
        // 0x15c8d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c8cc) {
            ctx->pc = 0x15CA60u;
            goto label_15ca60;
        }
    }
    ctx->pc = 0x15C8D4u;
label_15c8d4:
    // 0x15c8d4: 0xc05587e  jal         func_1561F8
label_15c8d8:
    if (ctx->pc == 0x15C8D8u) {
        ctx->pc = 0x15C8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C8D4u;
        // 0x15c8d8: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C8DCu;
        goto label_15c8dc;
    }
    ctx->pc = 0x15C8D4u;
    SET_GPR_U32(ctx, 31, 0x15C8DCu);
    ctx->pc = 0x15C8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C8D4u;
    // 0x15c8d8: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1561F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1561F8u, 0x15C8D4u, 0x15C8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C8DCu;
label_15c8dc:
    // 0x15c8dc: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x15c8dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_15c8e0:
    // 0x15c8e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15c8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15c8e4:
    // 0x15c8e4: 0xc055888  jal         func_156220
label_15c8e8:
    if (ctx->pc == 0x15C8E8u) {
        ctx->pc = 0x15C8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C8E4u;
        // 0x15c8e8: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C8ECu;
        goto label_15c8ec;
    }
    ctx->pc = 0x15C8E4u;
    SET_GPR_U32(ctx, 31, 0x15C8ECu);
    ctx->pc = 0x15C8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C8E4u;
    // 0x15c8e8: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156220u, 0x15C8E4u, 0x15C8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C8ECu;
label_15c8ec:
    // 0x15c8ec: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x15c8ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15c8f0:
    // 0x15c8f0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15c8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15c8f4:
    // 0x15c8f4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x15c8f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_15c8f8:
    // 0x15c8f8: 0x8c455024  lw          $a1, 0x5024($v0)
    ctx->pc = 0x15c8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20516)));
label_15c8fc:
    // 0x15c8fc: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x15c8fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15c900:
    // 0x15c900: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x15c900u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c904:
    // 0x15c904: 0x8ca20128  lw          $v0, 0x128($a1)
    ctx->pc = 0x15c904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_15c908:
    // 0x15c908: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x15c908u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_15c90c:
    // 0x15c90c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x15c90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_15c910:
    // 0x15c910: 0x60f809  jalr        $v1
label_15c914:
    if (ctx->pc == 0x15C914u) {
        ctx->pc = 0x15C914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C910u;
        // 0x15c914: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C918u;
        goto label_15c918;
    }
    ctx->pc = 0x15C910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15C918u);
        ctx->pc = 0x15C914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C910u;
        // 0x15c914: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C910u, 0x15C918u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C918u;
label_15c918:
    // 0x15c918: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x15c918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_15c91c:
    // 0x15c91c: 0xc0e8c52  jal         func_3A3148
label_15c920:
    if (ctx->pc == 0x15C920u) {
        ctx->pc = 0x15C920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C91Cu;
        // 0x15c920: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C924u;
        goto label_15c924;
    }
    ctx->pc = 0x15C91Cu;
    SET_GPR_U32(ctx, 31, 0x15C924u);
    ctx->pc = 0x15C920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C91Cu;
    // 0x15c920: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3148u, 0x15C91Cu, 0x15C924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C924u;
label_15c924:
    // 0x15c924: 0xc0558b2  jal         func_1562C8
label_15c928:
    if (ctx->pc == 0x15C928u) {
        ctx->pc = 0x15C928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C924u;
        // 0x15c928: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C92Cu;
        goto label_15c92c;
    }
    ctx->pc = 0x15C924u;
    SET_GPR_U32(ctx, 31, 0x15C92Cu);
    ctx->pc = 0x15C928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C924u;
    // 0x15c928: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1562C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1562C8u, 0x15C924u, 0x15C92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C92Cu;
label_15c92c:
    // 0x15c92c: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x15c92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_15c930:
    // 0x15c930: 0xc0e8c6a  jal         func_3A31A8
label_15c934:
    if (ctx->pc == 0x15C934u) {
        ctx->pc = 0x15C934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C930u;
        // 0x15c934: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C938u;
        goto label_15c938;
    }
    ctx->pc = 0x15C930u;
    SET_GPR_U32(ctx, 31, 0x15C938u);
    ctx->pc = 0x15C934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C930u;
    // 0x15c934: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A31A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A31A8u, 0x15C930u, 0x15C938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C938u;
label_15c938:
    // 0x15c938: 0xc0926e6  jal         func_249B98
label_15c93c:
    if (ctx->pc == 0x15C93Cu) {
        ctx->pc = 0x15C940u;
        goto label_15c940;
    }
    ctx->pc = 0x15C938u;
    SET_GPR_U32(ctx, 31, 0x15C940u);
    ctx->pc = 0x249B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249B98u, 0x15C938u, 0x15C940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C940u;
label_15c940:
    // 0x15c940: 0xc062a60  jal         func_18A980
label_15c944:
    if (ctx->pc == 0x15C944u) {
        ctx->pc = 0x15C944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C940u;
        // 0x15c944: 0x8e04cd4c  lw          $a0, -0x32B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C948u;
        goto label_15c948;
    }
    ctx->pc = 0x15C940u;
    SET_GPR_U32(ctx, 31, 0x15C948u);
    ctx->pc = 0x15C944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C940u;
    // 0x15c944: 0x8e04cd4c  lw          $a0, -0x32B4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A980u, 0x15C940u, 0x15C948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C948u;
label_15c948:
    // 0x15c948: 0x8e45cdb4  lw          $a1, -0x324C($s2)
    ctx->pc = 0x15c948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_15c94c:
    // 0x15c94c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x15c94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_15c950:
    // 0x15c950: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x15c950u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_15c954:
    // 0x15c954: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x15c954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_15c958:
    // 0x15c958: 0x60f809  jalr        $v1
label_15c95c:
    if (ctx->pc == 0x15C95Cu) {
        ctx->pc = 0x15C95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C958u;
        // 0x15c95c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C960u;
        goto label_15c960;
    }
    ctx->pc = 0x15C958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15C960u);
        ctx->pc = 0x15C95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C958u;
        // 0x15c95c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C958u, 0x15C960u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C960u;
label_15c960:
    // 0x15c960: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15c960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15c964:
    // 0x15c964: 0xc103e28  jal         func_40F8A0
label_15c968:
    if (ctx->pc == 0x15C968u) {
        ctx->pc = 0x15C968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C964u;
        // 0x15c968: 0x8c4447c4  lw          $a0, 0x47C4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C96Cu;
        goto label_15c96c;
    }
    ctx->pc = 0x15C964u;
    SET_GPR_U32(ctx, 31, 0x15C96Cu);
    ctx->pc = 0x15C968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C964u;
    // 0x15c968: 0x8c4447c4  lw          $a0, 0x47C4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F8A0u, 0x15C964u, 0x15C96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C96Cu;
label_15c96c:
    // 0x15c96c: 0xc06181a  jal         func_186068
label_15c970:
    if (ctx->pc == 0x15C970u) {
        ctx->pc = 0x15C970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C96Cu;
        // 0x15c970: 0x8e04cd4c  lw          $a0, -0x32B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C974u;
        goto label_15c974;
    }
    ctx->pc = 0x15C96Cu;
    SET_GPR_U32(ctx, 31, 0x15C974u);
    ctx->pc = 0x15C970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C96Cu;
    // 0x15c970: 0x8e04cd4c  lw          $a0, -0x32B4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186068u, 0x15C96Cu, 0x15C974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C974u;
label_15c974:
    // 0x15c974: 0xc055902  jal         func_156408
label_15c978:
    if (ctx->pc == 0x15C978u) {
        ctx->pc = 0x15C978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C974u;
        // 0x15c978: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C97Cu;
        goto label_15c97c;
    }
    ctx->pc = 0x15C974u;
    SET_GPR_U32(ctx, 31, 0x15C97Cu);
    ctx->pc = 0x15C978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C974u;
    // 0x15c978: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156408u, 0x15C974u, 0x15C97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C97Cu;
label_15c97c:
    // 0x15c97c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x15c97cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_15c980:
    // 0x15c980: 0xc06c5a2  jal         func_1B1688
label_15c984:
    if (ctx->pc == 0x15C984u) {
        ctx->pc = 0x15C984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C980u;
        // 0x15c984: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C988u;
        goto label_15c988;
    }
    ctx->pc = 0x15C980u;
    SET_GPR_U32(ctx, 31, 0x15C988u);
    ctx->pc = 0x15C984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C980u;
    // 0x15c984: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1688u, 0x15C980u, 0x15C988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C988u;
label_15c988:
    // 0x15c988: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x15c988u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_15c98c:
    // 0x15c98c: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x15c98cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15c990:
    // 0x15c990: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15c990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c994:
    // 0x15c994: 0xc047e6c  jal         func_11F9B0
label_15c998:
    if (ctx->pc == 0x15C998u) {
        ctx->pc = 0x15C998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C994u;
        // 0x15c998: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C99Cu;
        goto label_15c99c;
    }
    ctx->pc = 0x15C994u;
    SET_GPR_U32(ctx, 31, 0x15C99Cu);
    ctx->pc = 0x15C998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C994u;
    // 0x15c998: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x15C994u, 0x15C99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C99Cu;
label_15c99c:
    // 0x15c99c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15c99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15c9a0:
    // 0x15c9a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15c9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15c9a4:
    // 0x15c9a4: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x15c9a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_15c9a8:
    // 0x15c9a8: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x15c9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_15c9ac:
    // 0x15c9ac: 0xc0f809  jalr        $a2
label_15c9b0:
    if (ctx->pc == 0x15C9B0u) {
        ctx->pc = 0x15C9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9ACu;
        // 0x15c9b0: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C9B4u;
        goto label_15c9b4;
    }
    ctx->pc = 0x15C9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x15C9B4u);
        ctx->pc = 0x15C9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9ACu;
        // 0x15c9b0: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C9ACu, 0x15C9B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C9B4u;
label_15c9b4:
    // 0x15c9b4: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x15c9b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15c9b8:
    // 0x15c9b8: 0x2e840002  sltiu       $a0, $s4, 0x2
    ctx->pc = 0x15c9b8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_15c9bc:
    // 0x15c9bc: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x15c9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
label_15c9c0:
    // 0x15c9c0: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x15c9c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15c9c4:
    // 0x15c9c4: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x15c9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_15c9c8:
    // 0x15c9c8: 0x1480fff1  bnez        $a0, . + 4 + (-0xF << 2)
label_15c9cc:
    if (ctx->pc == 0x15C9CCu) {
        ctx->pc = 0x15C9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9C8u;
        // 0x15c9cc: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C9D0u;
        goto label_15c9d0;
    }
    ctx->pc = 0x15C9C8u;
    {
        const bool branch_taken_0x15c9c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9C8u;
        // 0x15c9cc: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c9c8) {
            ctx->pc = 0x15C990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c990;
        }
    }
    ctx->pc = 0x15C9D0u;
label_15c9d0:
    // 0x15c9d0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15c9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15c9d4:
    // 0x15c9d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x15c9d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15c9d8:
    // 0x15c9d8: 0xc043e04  jal         func_10F810
label_15c9dc:
    if (ctx->pc == 0x15C9DCu) {
        ctx->pc = 0x15C9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9D8u;
        // 0x15c9dc: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C9E0u;
        goto label_15c9e0;
    }
    ctx->pc = 0x15C9D8u;
    SET_GPR_U32(ctx, 31, 0x15C9E0u);
    ctx->pc = 0x15C9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C9D8u;
    // 0x15c9dc: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F810u, 0x15C9D8u, 0x15C9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C9E0u;
label_15c9e0:
    // 0x15c9e0: 0xc061748  jal         func_185D20
label_15c9e4:
    if (ctx->pc == 0x15C9E4u) {
        ctx->pc = 0x15C9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9E0u;
        // 0x15c9e4: 0x8ec4cd4c  lw          $a0, -0x32B4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C9E8u;
        goto label_15c9e8;
    }
    ctx->pc = 0x15C9E0u;
    SET_GPR_U32(ctx, 31, 0x15C9E8u);
    ctx->pc = 0x15C9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C9E0u;
    // 0x15c9e4: 0x8ec4cd4c  lw          $a0, -0x32B4($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185D20u, 0x15C9E0u, 0x15C9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C9E8u;
label_15c9e8:
    // 0x15c9e8: 0x8ea5cdb4  lw          $a1, -0x324C($s5)
    ctx->pc = 0x15c9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954420)));
label_15c9ec:
    // 0x15c9ec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x15c9ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_15c9f0:
    // 0x15c9f0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x15c9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_15c9f4:
    // 0x15c9f4: 0x84440128  lh          $a0, 0x128($v0)
    ctx->pc = 0x15c9f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 296)));
label_15c9f8:
    // 0x15c9f8: 0x8c43012c  lw          $v1, 0x12C($v0)
    ctx->pc = 0x15c9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_15c9fc:
    // 0x15c9fc: 0x60f809  jalr        $v1
label_15ca00:
    if (ctx->pc == 0x15CA00u) {
        ctx->pc = 0x15CA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9FCu;
        // 0x15ca00: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA04u;
        goto label_15ca04;
    }
    ctx->pc = 0x15C9FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CA04u);
        ctx->pc = 0x15CA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9FCu;
        // 0x15ca00: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C9FCu, 0x15CA04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CA04u;
label_15ca04:
    // 0x15ca04: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15ca04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15ca08:
    // 0x15ca08: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x15ca08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_15ca0c:
    // 0x15ca0c: 0x8c452b04  lw          $a1, 0x2B04($v0)
    ctx->pc = 0x15ca0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_15ca10:
    // 0x15ca10: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x15ca10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_15ca14:
    // 0x15ca14: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x15ca14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_15ca18:
    // 0x15ca18: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x15ca18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_15ca1c:
    // 0x15ca1c: 0x60f809  jalr        $v1
label_15ca20:
    if (ctx->pc == 0x15CA20u) {
        ctx->pc = 0x15CA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA1Cu;
        // 0x15ca20: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA24u;
        goto label_15ca24;
    }
    ctx->pc = 0x15CA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CA24u);
        ctx->pc = 0x15CA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA1Cu;
        // 0x15ca20: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CA1Cu, 0x15CA24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CA24u;
label_15ca24:
    // 0x15ca24: 0x8ea5cdb4  lw          $a1, -0x324C($s5)
    ctx->pc = 0x15ca24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954420)));
label_15ca28:
    // 0x15ca28: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x15ca28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_15ca2c:
    // 0x15ca2c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x15ca2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_15ca30:
    // 0x15ca30: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x15ca30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_15ca34:
    // 0x15ca34: 0x60f809  jalr        $v1
label_15ca38:
    if (ctx->pc == 0x15CA38u) {
        ctx->pc = 0x15CA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA34u;
        // 0x15ca38: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA3Cu;
        goto label_15ca3c;
    }
    ctx->pc = 0x15CA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CA3Cu);
        ctx->pc = 0x15CA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA34u;
        // 0x15ca38: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CA34u, 0x15CA3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CA3Cu;
label_15ca3c:
    // 0x15ca3c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x15ca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_15ca40:
    // 0x15ca40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15ca40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ca44:
    // 0x15ca44: 0xc0552b8  jal         func_154AE0
label_15ca48:
    if (ctx->pc == 0x15CA48u) {
        ctx->pc = 0x15CA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA44u;
        // 0x15ca48: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA4Cu;
        goto label_15ca4c;
    }
    ctx->pc = 0x15CA44u;
    SET_GPR_U32(ctx, 31, 0x15CA4Cu);
    ctx->pc = 0x15CA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CA44u;
    // 0x15ca48: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x15CA44u, 0x15CA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CA4Cu;
label_15ca4c:
    // 0x15ca4c: 0xc055880  jal         func_156200
label_15ca50:
    if (ctx->pc == 0x15CA50u) {
        ctx->pc = 0x15CA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA4Cu;
        // 0x15ca50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA54u;
        goto label_15ca54;
    }
    ctx->pc = 0x15CA4Cu;
    SET_GPR_U32(ctx, 31, 0x15CA54u);
    ctx->pc = 0x15CA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CA4Cu;
    // 0x15ca50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156200u, 0x15CA4Cu, 0x15CA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CA54u;
label_15ca54:
    // 0x15ca54: 0xc055a70  jal         func_1569C0
label_15ca58:
    if (ctx->pc == 0x15CA58u) {
        ctx->pc = 0x15CA5Cu;
        goto label_15ca5c;
    }
    ctx->pc = 0x15CA54u;
    SET_GPR_U32(ctx, 31, 0x15CA5Cu);
    ctx->pc = 0x1569C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1569C0u, 0x15CA54u, 0x15CA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CA5Cu;
label_15ca5c:
    // 0x15ca5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ca60:
    // 0x15ca60: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x15ca60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_15ca64:
    // 0x15ca64: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x15ca64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_15ca68:
    // 0x15ca68: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x15ca68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_15ca6c:
    // 0x15ca6c: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x15ca6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_15ca70:
    // 0x15ca70: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x15ca70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_15ca74:
    // 0x15ca74: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x15ca74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_15ca78:
    // 0x15ca78: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x15ca78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_15ca7c:
    // 0x15ca7c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x15ca7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_15ca80:
    // 0x15ca80: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x15ca80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_15ca84:
    // 0x15ca84: 0x3e00008  jr          $ra
label_15ca88:
    if (ctx->pc == 0x15CA88u) {
        ctx->pc = 0x15CA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA84u;
        // 0x15ca88: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA8Cu;
        goto label_15ca8c;
    }
    ctx->pc = 0x15CA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA84u;
        // 0x15ca88: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CA84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15CA8Cu;
label_15ca8c:
    // 0x15ca8c: 0x0  nop
    ctx->pc = 0x15ca8cu;
    // NOP
    ctx->pc = 0x15ca90u;
}
