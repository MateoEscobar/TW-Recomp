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

// Function: sub_00262368
// Address: 0x262368 - 0x2625a8
void sub_00262368_0x262368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262368_0x262368");
#endif

    switch (ctx->pc) {
        case 0x262368u: goto label_262368;
        case 0x26236cu: goto label_26236c;
        case 0x262370u: goto label_262370;
        case 0x262374u: goto label_262374;
        case 0x262378u: goto label_262378;
        case 0x26237cu: goto label_26237c;
        case 0x262380u: goto label_262380;
        case 0x262384u: goto label_262384;
        case 0x262388u: goto label_262388;
        case 0x26238cu: goto label_26238c;
        case 0x262390u: goto label_262390;
        case 0x262394u: goto label_262394;
        case 0x262398u: goto label_262398;
        case 0x26239cu: goto label_26239c;
        case 0x2623a0u: goto label_2623a0;
        case 0x2623a4u: goto label_2623a4;
        case 0x2623a8u: goto label_2623a8;
        case 0x2623acu: goto label_2623ac;
        case 0x2623b0u: goto label_2623b0;
        case 0x2623b4u: goto label_2623b4;
        case 0x2623b8u: goto label_2623b8;
        case 0x2623bcu: goto label_2623bc;
        case 0x2623c0u: goto label_2623c0;
        case 0x2623c4u: goto label_2623c4;
        case 0x2623c8u: goto label_2623c8;
        case 0x2623ccu: goto label_2623cc;
        case 0x2623d0u: goto label_2623d0;
        case 0x2623d4u: goto label_2623d4;
        case 0x2623d8u: goto label_2623d8;
        case 0x2623dcu: goto label_2623dc;
        case 0x2623e0u: goto label_2623e0;
        case 0x2623e4u: goto label_2623e4;
        case 0x2623e8u: goto label_2623e8;
        case 0x2623ecu: goto label_2623ec;
        case 0x2623f0u: goto label_2623f0;
        case 0x2623f4u: goto label_2623f4;
        case 0x2623f8u: goto label_2623f8;
        case 0x2623fcu: goto label_2623fc;
        case 0x262400u: goto label_262400;
        case 0x262404u: goto label_262404;
        case 0x262408u: goto label_262408;
        case 0x26240cu: goto label_26240c;
        case 0x262410u: goto label_262410;
        case 0x262414u: goto label_262414;
        case 0x262418u: goto label_262418;
        case 0x26241cu: goto label_26241c;
        case 0x262420u: goto label_262420;
        case 0x262424u: goto label_262424;
        case 0x262428u: goto label_262428;
        case 0x26242cu: goto label_26242c;
        case 0x262430u: goto label_262430;
        case 0x262434u: goto label_262434;
        case 0x262438u: goto label_262438;
        case 0x26243cu: goto label_26243c;
        case 0x262440u: goto label_262440;
        case 0x262444u: goto label_262444;
        case 0x262448u: goto label_262448;
        case 0x26244cu: goto label_26244c;
        case 0x262450u: goto label_262450;
        case 0x262454u: goto label_262454;
        case 0x262458u: goto label_262458;
        case 0x26245cu: goto label_26245c;
        case 0x262460u: goto label_262460;
        case 0x262464u: goto label_262464;
        case 0x262468u: goto label_262468;
        case 0x26246cu: goto label_26246c;
        case 0x262470u: goto label_262470;
        case 0x262474u: goto label_262474;
        case 0x262478u: goto label_262478;
        case 0x26247cu: goto label_26247c;
        case 0x262480u: goto label_262480;
        case 0x262484u: goto label_262484;
        case 0x262488u: goto label_262488;
        case 0x26248cu: goto label_26248c;
        case 0x262490u: goto label_262490;
        case 0x262494u: goto label_262494;
        case 0x262498u: goto label_262498;
        case 0x26249cu: goto label_26249c;
        case 0x2624a0u: goto label_2624a0;
        case 0x2624a4u: goto label_2624a4;
        case 0x2624a8u: goto label_2624a8;
        case 0x2624acu: goto label_2624ac;
        case 0x2624b0u: goto label_2624b0;
        case 0x2624b4u: goto label_2624b4;
        case 0x2624b8u: goto label_2624b8;
        case 0x2624bcu: goto label_2624bc;
        case 0x2624c0u: goto label_2624c0;
        case 0x2624c4u: goto label_2624c4;
        case 0x2624c8u: goto label_2624c8;
        case 0x2624ccu: goto label_2624cc;
        case 0x2624d0u: goto label_2624d0;
        case 0x2624d4u: goto label_2624d4;
        case 0x2624d8u: goto label_2624d8;
        case 0x2624dcu: goto label_2624dc;
        case 0x2624e0u: goto label_2624e0;
        case 0x2624e4u: goto label_2624e4;
        case 0x2624e8u: goto label_2624e8;
        case 0x2624ecu: goto label_2624ec;
        case 0x2624f0u: goto label_2624f0;
        case 0x2624f4u: goto label_2624f4;
        case 0x2624f8u: goto label_2624f8;
        case 0x2624fcu: goto label_2624fc;
        case 0x262500u: goto label_262500;
        case 0x262504u: goto label_262504;
        case 0x262508u: goto label_262508;
        case 0x26250cu: goto label_26250c;
        case 0x262510u: goto label_262510;
        case 0x262514u: goto label_262514;
        case 0x262518u: goto label_262518;
        case 0x26251cu: goto label_26251c;
        case 0x262520u: goto label_262520;
        case 0x262524u: goto label_262524;
        case 0x262528u: goto label_262528;
        case 0x26252cu: goto label_26252c;
        case 0x262530u: goto label_262530;
        case 0x262534u: goto label_262534;
        case 0x262538u: goto label_262538;
        case 0x26253cu: goto label_26253c;
        case 0x262540u: goto label_262540;
        case 0x262544u: goto label_262544;
        case 0x262548u: goto label_262548;
        case 0x26254cu: goto label_26254c;
        case 0x262550u: goto label_262550;
        case 0x262554u: goto label_262554;
        case 0x262558u: goto label_262558;
        case 0x26255cu: goto label_26255c;
        case 0x262560u: goto label_262560;
        case 0x262564u: goto label_262564;
        case 0x262568u: goto label_262568;
        case 0x26256cu: goto label_26256c;
        case 0x262570u: goto label_262570;
        case 0x262574u: goto label_262574;
        case 0x262578u: goto label_262578;
        case 0x26257cu: goto label_26257c;
        case 0x262580u: goto label_262580;
        case 0x262584u: goto label_262584;
        case 0x262588u: goto label_262588;
        case 0x26258cu: goto label_26258c;
        case 0x262590u: goto label_262590;
        case 0x262594u: goto label_262594;
        case 0x262598u: goto label_262598;
        case 0x26259cu: goto label_26259c;
        case 0x2625a0u: goto label_2625a0;
        case 0x2625a4u: goto label_2625a4;
        default: break;
    }

    ctx->pc = 0x262368u;

label_262368:
    // 0x262368: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x262368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_26236c:
    // 0x26236c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x26236cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_262370:
    // 0x262370: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x262370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_262374:
    // 0x262374: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x262374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_262378:
    // 0x262378: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x262378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_26237c:
    // 0x26237c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x26237cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_262380:
    // 0x262380: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x262380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_262384:
    // 0x262384: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x262384u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_262388:
    // 0x262388: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x262388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_26238c:
    // 0x26238c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26238cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_262390:
    // 0x262390: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x262390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_262394:
    // 0x262394: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x262394u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_262398:
    // 0x262398: 0xc089b98  jal         func_226E60
label_26239c:
    if (ctx->pc == 0x26239Cu) {
        ctx->pc = 0x26239Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262398u;
        // 0x26239c: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2623A0u;
        goto label_2623a0;
    }
    ctx->pc = 0x262398u;
    SET_GPR_U32(ctx, 31, 0x2623A0u);
    ctx->pc = 0x26239Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262398u;
    // 0x26239c: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x262398u, 0x2623A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2623A0u;
label_2623a0:
    // 0x2623a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2623a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2623a4:
    // 0x2623a4: 0x8e1500d8  lw          $s5, 0xD8($s0)
    ctx->pc = 0x2623a4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_2623a8:
    // 0x2623a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2623a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2623ac:
    // 0x2623ac: 0xc095142  jal         func_254508
label_2623b0:
    if (ctx->pc == 0x2623B0u) {
        ctx->pc = 0x2623B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2623ACu;
        // 0x2623b0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2623B4u;
        goto label_2623b4;
    }
    ctx->pc = 0x2623ACu;
    SET_GPR_U32(ctx, 31, 0x2623B4u);
    ctx->pc = 0x2623B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2623ACu;
    // 0x2623b0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254508u, 0x2623ACu, 0x2623B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2623B4u;
label_2623b4:
    // 0x2623b4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_2623b8:
    if (ctx->pc == 0x2623B8u) {
        ctx->pc = 0x2623B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2623B4u;
        // 0x2623b8: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2623BCu;
        goto label_2623bc;
    }
    ctx->pc = 0x2623B4u;
    {
        const bool branch_taken_0x2623b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2623B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2623B4u;
        // 0x2623b8: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2623b4) {
            ctx->pc = 0x2623D0u;
            goto label_2623d0;
        }
    }
    ctx->pc = 0x2623BCu;
label_2623bc:
    // 0x2623bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2623bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2623c0:
    // 0x2623c0: 0xc08a658  jal         func_229960
label_2623c4:
    if (ctx->pc == 0x2623C4u) {
        ctx->pc = 0x2623C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2623C0u;
        // 0x2623c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2623C8u;
        goto label_2623c8;
    }
    ctx->pc = 0x2623C0u;
    SET_GPR_U32(ctx, 31, 0x2623C8u);
    ctx->pc = 0x2623C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2623C0u;
    // 0x2623c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229960u, 0x2623C0u, 0x2623C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2623C8u;
label_2623c8:
    // 0x2623c8: 0x10000003  b           . + 4 + (0x3 << 2)
label_2623cc:
    if (ctx->pc == 0x2623CCu) {
        ctx->pc = 0x2623CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2623C8u;
        // 0x2623cc: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2623D0u;
        goto label_2623d0;
    }
    ctx->pc = 0x2623C8u;
    {
        const bool branch_taken_0x2623c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2623CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2623C8u;
        // 0x2623cc: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2623c8) {
            ctx->pc = 0x2623D8u;
            goto label_2623d8;
        }
    }
    ctx->pc = 0x2623D0u;
label_2623d0:
    // 0x2623d0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2623d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_2623d4:
    // 0x2623d4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2623d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2623d8:
    // 0x2623d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2623d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2623dc:
    // 0x2623dc: 0xc040596  jal         func_101658
label_2623e0:
    if (ctx->pc == 0x2623E0u) {
        ctx->pc = 0x2623E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2623DCu;
        // 0x2623e0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2623E4u;
        goto label_2623e4;
    }
    ctx->pc = 0x2623DCu;
    SET_GPR_U32(ctx, 31, 0x2623E4u);
    ctx->pc = 0x2623E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2623DCu;
    // 0x2623e0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101658u, 0x2623DCu, 0x2623E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2623E4u;
label_2623e4:
    // 0x2623e4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2623e4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2623e8:
    // 0x2623e8: 0xc088ee6  jal         func_223B98
label_2623ec:
    if (ctx->pc == 0x2623ECu) {
        ctx->pc = 0x2623ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2623E8u;
        // 0x2623ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2623F0u;
        goto label_2623f0;
    }
    ctx->pc = 0x2623E8u;
    SET_GPR_U32(ctx, 31, 0x2623F0u);
    ctx->pc = 0x2623ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2623E8u;
    // 0x2623ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x2623E8u, 0x2623F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2623F0u;
label_2623f0:
    // 0x2623f0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2623f4:
    if (ctx->pc == 0x2623F4u) {
        ctx->pc = 0x2623F8u;
        goto label_2623f8;
    }
    ctx->pc = 0x2623F0u;
    {
        const bool branch_taken_0x2623f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2623f0) {
            ctx->pc = 0x262414u;
            goto label_262414;
        }
    }
    ctx->pc = 0x2623F8u;
label_2623f8:
    // 0x2623f8: 0xc095018  jal         func_254060
label_2623fc:
    if (ctx->pc == 0x2623FCu) {
        ctx->pc = 0x2623FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2623F8u;
        // 0x2623fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262400u;
        goto label_262400;
    }
    ctx->pc = 0x2623F8u;
    SET_GPR_U32(ctx, 31, 0x262400u);
    ctx->pc = 0x2623FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2623F8u;
    // 0x2623fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x2623F8u, 0x262400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262400u;
label_262400:
    // 0x262400: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x262400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_262404:
    // 0x262404: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_262408:
    if (ctx->pc == 0x262408u) {
        ctx->pc = 0x26240Cu;
        goto label_26240c;
    }
    ctx->pc = 0x262404u;
    {
        const bool branch_taken_0x262404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x262404) {
            ctx->pc = 0x262414u;
            goto label_262414;
        }
    }
    ctx->pc = 0x26240Cu;
label_26240c:
    // 0x26240c: 0xc094fca  jal         func_253F28
label_262410:
    if (ctx->pc == 0x262410u) {
        ctx->pc = 0x262410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26240Cu;
        // 0x262410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262414u;
        goto label_262414;
    }
    ctx->pc = 0x26240Cu;
    SET_GPR_U32(ctx, 31, 0x262414u);
    ctx->pc = 0x262410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26240Cu;
    // 0x262410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x26240Cu, 0x262414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262414u;
label_262414:
    // 0x262414: 0x52200010  beql        $s1, $zero, . + 4 + (0x10 << 2)
label_262418:
    if (ctx->pc == 0x262418u) {
        ctx->pc = 0x262418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262414u;
        // 0x262418: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26241Cu;
        goto label_26241c;
    }
    ctx->pc = 0x262414u;
    {
        const bool branch_taken_0x262414 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x262414) {
            ctx->pc = 0x262418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262414u;
            // 0x262418: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262458u;
            goto label_262458;
        }
    }
    ctx->pc = 0x26241Cu;
label_26241c:
    // 0x26241c: 0x4616a836  c.le.s      $f21, $f22
    ctx->pc = 0x26241cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_262420:
    // 0x262420: 0x0  nop
    ctx->pc = 0x262420u;
    // NOP
label_262424:
    // 0x262424: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_262428:
    if (ctx->pc == 0x262428u) {
        ctx->pc = 0x262428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262424u;
        // 0x262428: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26242Cu;
        goto label_26242c;
    }
    ctx->pc = 0x262424u;
    {
        const bool branch_taken_0x262424 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x262428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262424u;
        // 0x262428: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262424) {
            ctx->pc = 0x262444u;
            goto label_262444;
        }
    }
    ctx->pc = 0x26242Cu;
label_26242c:
    // 0x26242c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x26242cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_262430:
    // 0x262430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x262430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_262434:
    // 0x262434: 0xc09d872  jal         func_2761C8
label_262438:
    if (ctx->pc == 0x262438u) {
        ctx->pc = 0x262438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262434u;
        // 0x262438: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26243Cu;
        goto label_26243c;
    }
    ctx->pc = 0x262434u;
    SET_GPR_U32(ctx, 31, 0x26243Cu);
    ctx->pc = 0x262438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262434u;
    // 0x262438: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2761C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2761C8u, 0x262434u, 0x26243Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26243Cu;
label_26243c:
    // 0x26243c: 0x10000006  b           . + 4 + (0x6 << 2)
label_262440:
    if (ctx->pc == 0x262440u) {
        ctx->pc = 0x262440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26243Cu;
        // 0x262440: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262444u;
        goto label_262444;
    }
    ctx->pc = 0x26243Cu;
    {
        const bool branch_taken_0x26243c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26243Cu;
        // 0x262440: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26243c) {
            ctx->pc = 0x262458u;
            goto label_262458;
        }
    }
    ctx->pc = 0x262444u;
label_262444:
    // 0x262444: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x262444u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_262448:
    // 0x262448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x262448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26244c:
    // 0x26244c: 0xc088736  jal         func_221CD8
label_262450:
    if (ctx->pc == 0x262450u) {
        ctx->pc = 0x262450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26244Cu;
        // 0x262450: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262454u;
        goto label_262454;
    }
    ctx->pc = 0x26244Cu;
    SET_GPR_U32(ctx, 31, 0x262454u);
    ctx->pc = 0x262450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26244Cu;
    // 0x262450: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221CD8u, 0x26244Cu, 0x262454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262454u;
label_262454:
    // 0x262454: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x262454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_262458:
    // 0x262458: 0x3c030056  lui         $v1, 0x56
    ctx->pc = 0x262458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)86 << 16));
label_26245c:
    // 0x26245c: 0x2472dd30  addiu       $s2, $v1, -0x22D0
    ctx->pc = 0x26245cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958384));
label_262460:
    // 0x262460: 0xac4000b8  sw          $zero, 0xB8($v0)
    ctx->pc = 0x262460u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 0));
label_262464:
    // 0x262464: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x262464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_262468:
    // 0x262468: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x262468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_26246c:
    // 0x26246c: 0xc041532  jal         func_1054C8
label_262470:
    if (ctx->pc == 0x262470u) {
        ctx->pc = 0x262470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26246Cu;
        // 0x262470: 0xa44000bc  sh          $zero, 0xBC($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 188), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262474u;
        goto label_262474;
    }
    ctx->pc = 0x26246Cu;
    SET_GPR_U32(ctx, 31, 0x262474u);
    ctx->pc = 0x262470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26246Cu;
    // 0x262470: 0xa44000bc  sh          $zero, 0xBC($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 188), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26246Cu, 0x262474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262474u;
label_262474:
    // 0x262474: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x262474u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_262478:
    // 0x262478: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
label_26247c:
    if (ctx->pc == 0x26247Cu) {
        ctx->pc = 0x26247Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262478u;
        // 0x26247c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262480u;
        goto label_262480;
    }
    ctx->pc = 0x262478u;
    {
        const bool branch_taken_0x262478 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x26247Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262478u;
        // 0x26247c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262478) {
            ctx->pc = 0x262498u;
            goto label_262498;
        }
    }
    ctx->pc = 0x262480u;
label_262480:
    // 0x262480: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x262480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_262484:
    // 0x262484: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x262484u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_262488:
    // 0x262488: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x262488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26248c:
    // 0x26248c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26248cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_262490:
    // 0x262490: 0xc041b20  jal         func_106C80
label_262494:
    if (ctx->pc == 0x262494u) {
        ctx->pc = 0x262494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262490u;
        // 0x262494: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262498u;
        goto label_262498;
    }
    ctx->pc = 0x262490u;
    SET_GPR_U32(ctx, 31, 0x262498u);
    ctx->pc = 0x262494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262490u;
    // 0x262494: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x262490u, 0x262498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262498u;
label_262498:
    // 0x262498: 0xc05d484  jal         func_175210
label_26249c:
    if (ctx->pc == 0x26249Cu) {
        ctx->pc = 0x26249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262498u;
        // 0x26249c: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2624A0u;
        goto label_2624a0;
    }
    ctx->pc = 0x262498u;
    SET_GPR_U32(ctx, 31, 0x2624A0u);
    ctx->pc = 0x26249Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262498u;
    // 0x26249c: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x262498u, 0x2624A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2624A0u;
label_2624a0:
    // 0x2624a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2624a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2624a4:
    // 0x2624a4: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x2624a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_2624a8:
    // 0x2624a8: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x2624a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2624ac:
    // 0x2624ac: 0xa0f809  jalr        $a1
label_2624b0:
    if (ctx->pc == 0x2624B0u) {
        ctx->pc = 0x2624B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2624ACu;
        // 0x2624b0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2624B4u;
        goto label_2624b4;
    }
    ctx->pc = 0x2624ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2624B4u);
        ctx->pc = 0x2624B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2624ACu;
        // 0x2624b0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2624ACu, 0x2624B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2624B4u;
label_2624b4:
    // 0x2624b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2624b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2624b8:
    // 0x2624b8: 0xc087016  jal         func_21C058
label_2624bc:
    if (ctx->pc == 0x2624BCu) {
        ctx->pc = 0x2624BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2624B8u;
        // 0x2624bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2624C0u;
        goto label_2624c0;
    }
    ctx->pc = 0x2624B8u;
    SET_GPR_U32(ctx, 31, 0x2624C0u);
    ctx->pc = 0x2624BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2624B8u;
    // 0x2624bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x2624B8u, 0x2624C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2624C0u;
label_2624c0:
    // 0x2624c0: 0xc041532  jal         func_1054C8
label_2624c4:
    if (ctx->pc == 0x2624C4u) {
        ctx->pc = 0x2624C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2624C0u;
        // 0x2624c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2624C8u;
        goto label_2624c8;
    }
    ctx->pc = 0x2624C0u;
    SET_GPR_U32(ctx, 31, 0x2624C8u);
    ctx->pc = 0x2624C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2624C0u;
    // 0x2624c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2624C0u, 0x2624C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2624C8u;
label_2624c8:
    // 0x2624c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2624c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2624cc:
    // 0x2624cc: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2624d0:
    if (ctx->pc == 0x2624D0u) {
        ctx->pc = 0x2624D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2624CCu;
        // 0x2624d0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2624D4u;
        goto label_2624d4;
    }
    ctx->pc = 0x2624CCu;
    {
        const bool branch_taken_0x2624cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2624D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2624CCu;
        // 0x2624d0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2624cc) {
            ctx->pc = 0x2624F0u;
            goto label_2624f0;
        }
    }
    ctx->pc = 0x2624D4u;
label_2624d4:
    // 0x2624d4: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x2624d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_2624d8:
    // 0x2624d8: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x2624d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2624dc:
    // 0x2624dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2624dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2624e0:
    // 0x2624e0: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x2624e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2624e4:
    // 0x2624e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2624e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2624e8:
    // 0x2624e8: 0xc04159e  jal         func_105678
label_2624ec:
    if (ctx->pc == 0x2624ECu) {
        ctx->pc = 0x2624ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2624E8u;
        // 0x2624ec: 0x8e0500d8  lw          $a1, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2624F0u;
        goto label_2624f0;
    }
    ctx->pc = 0x2624E8u;
    SET_GPR_U32(ctx, 31, 0x2624F0u);
    ctx->pc = 0x2624ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2624E8u;
    // 0x2624ec: 0x8e0500d8  lw          $a1, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x2624E8u, 0x2624F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2624F0u;
label_2624f0:
    // 0x2624f0: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x2624f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_2624f4:
    // 0x2624f4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2624f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2624f8:
    // 0x2624f8: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x2624f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_2624fc:
    // 0x2624fc: 0xc041532  jal         func_1054C8
label_262500:
    if (ctx->pc == 0x262500u) {
        ctx->pc = 0x262500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2624FCu;
        // 0x262500: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262504u;
        goto label_262504;
    }
    ctx->pc = 0x2624FCu;
    SET_GPR_U32(ctx, 31, 0x262504u);
    ctx->pc = 0x262500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2624FCu;
    // 0x262500: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2624FCu, 0x262504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262504u;
label_262504:
    // 0x262504: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x262504u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_262508:
    // 0x262508: 0x52400012  beql        $s2, $zero, . + 4 + (0x12 << 2)
label_26250c:
    if (ctx->pc == 0x26250Cu) {
        ctx->pc = 0x26250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262508u;
        // 0x26250c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262510u;
        goto label_262510;
    }
    ctx->pc = 0x262508u;
    {
        const bool branch_taken_0x262508 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x262508) {
            ctx->pc = 0x26250Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262508u;
            // 0x26250c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262554u;
            goto label_262554;
        }
    }
    ctx->pc = 0x262510u;
label_262510:
    // 0x262510: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x262510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_262514:
    // 0x262514: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x262514u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_262518:
    // 0x262518: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x262518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26251c:
    // 0x26251c: 0x40f809  jalr        $v0
label_262520:
    if (ctx->pc == 0x262520u) {
        ctx->pc = 0x262520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26251Cu;
        // 0x262520: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262524u;
        goto label_262524;
    }
    ctx->pc = 0x26251Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x262524u);
        ctx->pc = 0x262520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26251Cu;
        // 0x262520: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26251Cu, 0x262524u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x262524u;
label_262524:
    // 0x262524: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x262524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_262528:
    // 0x262528: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x262528u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_26252c:
    // 0x26252c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26252cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_262530:
    // 0x262530: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x262530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_262534:
    // 0x262534: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x262534u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_262538:
    // 0x262538: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x262538u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26253c:
    // 0x26253c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26253cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_262540:
    // 0x262540: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x262540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_262544:
    // 0x262544: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x262544u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_262548:
    // 0x262548: 0xc041664  jal         func_105990
label_26254c:
    if (ctx->pc == 0x26254Cu) {
        ctx->pc = 0x26254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262548u;
        // 0x26254c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262550u;
        goto label_262550;
    }
    ctx->pc = 0x262548u;
    SET_GPR_U32(ctx, 31, 0x262550u);
    ctx->pc = 0x26254Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262548u;
    // 0x26254c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x262548u, 0x262550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262550u;
label_262550:
    // 0x262550: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x262550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_262554:
    // 0x262554: 0xc05d4f6  jal         func_1753D8
label_262558:
    if (ctx->pc == 0x262558u) {
        ctx->pc = 0x262558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262554u;
        // 0x262558: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26255Cu;
        goto label_26255c;
    }
    ctx->pc = 0x262554u;
    SET_GPR_U32(ctx, 31, 0x26255Cu);
    ctx->pc = 0x262558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262554u;
    // 0x262558: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x262554u, 0x26255Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26255Cu;
label_26255c:
    // 0x26255c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26255cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_262560:
    // 0x262560: 0xc05d53a  jal         func_1754E8
label_262564:
    if (ctx->pc == 0x262564u) {
        ctx->pc = 0x262564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262560u;
        // 0x262564: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262568u;
        goto label_262568;
    }
    ctx->pc = 0x262560u;
    SET_GPR_U32(ctx, 31, 0x262568u);
    ctx->pc = 0x262564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262560u;
    // 0x262564: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x262560u, 0x262568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262568u;
label_262568:
    // 0x262568: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x262568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26256c:
    // 0x26256c: 0xc089990  jal         func_226640
label_262570:
    if (ctx->pc == 0x262570u) {
        ctx->pc = 0x262570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26256Cu;
        // 0x262570: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262574u;
        goto label_262574;
    }
    ctx->pc = 0x26256Cu;
    SET_GPR_U32(ctx, 31, 0x262574u);
    ctx->pc = 0x262570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26256Cu;
    // 0x262570: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x26256Cu, 0x262574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262574u;
label_262574:
    // 0x262574: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x262574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_262578:
    // 0x262578: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x262578u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_26257c:
    // 0x26257c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x26257cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_262580:
    // 0x262580: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x262580u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_262584:
    // 0x262584: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x262584u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_262588:
    // 0x262588: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x262588u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26258c:
    // 0x26258c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26258cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_262590:
    // 0x262590: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x262590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_262594:
    // 0x262594: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x262594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_262598:
    // 0x262598: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x262598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_26259c:
    // 0x26259c: 0x3e00008  jr          $ra
label_2625a0:
    if (ctx->pc == 0x2625A0u) {
        ctx->pc = 0x2625A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26259Cu;
        // 0x2625a0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2625A4u;
        goto label_2625a4;
    }
    ctx->pc = 0x26259Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2625A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26259Cu;
        // 0x2625a0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26259Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2625A4u;
label_2625a4:
    // 0x2625a4: 0x0  nop
    ctx->pc = 0x2625a4u;
    // NOP
    ctx->pc = 0x2625a8u;
}
