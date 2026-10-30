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

// Function: sub_001A5828
// Address: 0x1a5828 - 0x1a5a08
void sub_001A5828_0x1a5828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5828_0x1a5828");
#endif

    switch (ctx->pc) {
        case 0x1a5828u: goto label_1a5828;
        case 0x1a582cu: goto label_1a582c;
        case 0x1a5830u: goto label_1a5830;
        case 0x1a5834u: goto label_1a5834;
        case 0x1a5838u: goto label_1a5838;
        case 0x1a583cu: goto label_1a583c;
        case 0x1a5840u: goto label_1a5840;
        case 0x1a5844u: goto label_1a5844;
        case 0x1a5848u: goto label_1a5848;
        case 0x1a584cu: goto label_1a584c;
        case 0x1a5850u: goto label_1a5850;
        case 0x1a5854u: goto label_1a5854;
        case 0x1a5858u: goto label_1a5858;
        case 0x1a585cu: goto label_1a585c;
        case 0x1a5860u: goto label_1a5860;
        case 0x1a5864u: goto label_1a5864;
        case 0x1a5868u: goto label_1a5868;
        case 0x1a586cu: goto label_1a586c;
        case 0x1a5870u: goto label_1a5870;
        case 0x1a5874u: goto label_1a5874;
        case 0x1a5878u: goto label_1a5878;
        case 0x1a587cu: goto label_1a587c;
        case 0x1a5880u: goto label_1a5880;
        case 0x1a5884u: goto label_1a5884;
        case 0x1a5888u: goto label_1a5888;
        case 0x1a588cu: goto label_1a588c;
        case 0x1a5890u: goto label_1a5890;
        case 0x1a5894u: goto label_1a5894;
        case 0x1a5898u: goto label_1a5898;
        case 0x1a589cu: goto label_1a589c;
        case 0x1a58a0u: goto label_1a58a0;
        case 0x1a58a4u: goto label_1a58a4;
        case 0x1a58a8u: goto label_1a58a8;
        case 0x1a58acu: goto label_1a58ac;
        case 0x1a58b0u: goto label_1a58b0;
        case 0x1a58b4u: goto label_1a58b4;
        case 0x1a58b8u: goto label_1a58b8;
        case 0x1a58bcu: goto label_1a58bc;
        case 0x1a58c0u: goto label_1a58c0;
        case 0x1a58c4u: goto label_1a58c4;
        case 0x1a58c8u: goto label_1a58c8;
        case 0x1a58ccu: goto label_1a58cc;
        case 0x1a58d0u: goto label_1a58d0;
        case 0x1a58d4u: goto label_1a58d4;
        case 0x1a58d8u: goto label_1a58d8;
        case 0x1a58dcu: goto label_1a58dc;
        case 0x1a58e0u: goto label_1a58e0;
        case 0x1a58e4u: goto label_1a58e4;
        case 0x1a58e8u: goto label_1a58e8;
        case 0x1a58ecu: goto label_1a58ec;
        case 0x1a58f0u: goto label_1a58f0;
        case 0x1a58f4u: goto label_1a58f4;
        case 0x1a58f8u: goto label_1a58f8;
        case 0x1a58fcu: goto label_1a58fc;
        case 0x1a5900u: goto label_1a5900;
        case 0x1a5904u: goto label_1a5904;
        case 0x1a5908u: goto label_1a5908;
        case 0x1a590cu: goto label_1a590c;
        case 0x1a5910u: goto label_1a5910;
        case 0x1a5914u: goto label_1a5914;
        case 0x1a5918u: goto label_1a5918;
        case 0x1a591cu: goto label_1a591c;
        case 0x1a5920u: goto label_1a5920;
        case 0x1a5924u: goto label_1a5924;
        case 0x1a5928u: goto label_1a5928;
        case 0x1a592cu: goto label_1a592c;
        case 0x1a5930u: goto label_1a5930;
        case 0x1a5934u: goto label_1a5934;
        case 0x1a5938u: goto label_1a5938;
        case 0x1a593cu: goto label_1a593c;
        case 0x1a5940u: goto label_1a5940;
        case 0x1a5944u: goto label_1a5944;
        case 0x1a5948u: goto label_1a5948;
        case 0x1a594cu: goto label_1a594c;
        case 0x1a5950u: goto label_1a5950;
        case 0x1a5954u: goto label_1a5954;
        case 0x1a5958u: goto label_1a5958;
        case 0x1a595cu: goto label_1a595c;
        case 0x1a5960u: goto label_1a5960;
        case 0x1a5964u: goto label_1a5964;
        case 0x1a5968u: goto label_1a5968;
        case 0x1a596cu: goto label_1a596c;
        case 0x1a5970u: goto label_1a5970;
        case 0x1a5974u: goto label_1a5974;
        case 0x1a5978u: goto label_1a5978;
        case 0x1a597cu: goto label_1a597c;
        case 0x1a5980u: goto label_1a5980;
        case 0x1a5984u: goto label_1a5984;
        case 0x1a5988u: goto label_1a5988;
        case 0x1a598cu: goto label_1a598c;
        case 0x1a5990u: goto label_1a5990;
        case 0x1a5994u: goto label_1a5994;
        case 0x1a5998u: goto label_1a5998;
        case 0x1a599cu: goto label_1a599c;
        case 0x1a59a0u: goto label_1a59a0;
        case 0x1a59a4u: goto label_1a59a4;
        case 0x1a59a8u: goto label_1a59a8;
        case 0x1a59acu: goto label_1a59ac;
        case 0x1a59b0u: goto label_1a59b0;
        case 0x1a59b4u: goto label_1a59b4;
        case 0x1a59b8u: goto label_1a59b8;
        case 0x1a59bcu: goto label_1a59bc;
        case 0x1a59c0u: goto label_1a59c0;
        case 0x1a59c4u: goto label_1a59c4;
        case 0x1a59c8u: goto label_1a59c8;
        case 0x1a59ccu: goto label_1a59cc;
        case 0x1a59d0u: goto label_1a59d0;
        case 0x1a59d4u: goto label_1a59d4;
        case 0x1a59d8u: goto label_1a59d8;
        case 0x1a59dcu: goto label_1a59dc;
        case 0x1a59e0u: goto label_1a59e0;
        case 0x1a59e4u: goto label_1a59e4;
        case 0x1a59e8u: goto label_1a59e8;
        case 0x1a59ecu: goto label_1a59ec;
        case 0x1a59f0u: goto label_1a59f0;
        case 0x1a59f4u: goto label_1a59f4;
        case 0x1a59f8u: goto label_1a59f8;
        case 0x1a59fcu: goto label_1a59fc;
        case 0x1a5a00u: goto label_1a5a00;
        case 0x1a5a04u: goto label_1a5a04;
        default: break;
    }

    ctx->pc = 0x1a5828u;

label_1a5828:
    // 0x1a5828: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1a5828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1a582c:
    // 0x1a582c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1a582cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1a5830:
    // 0x1a5830: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1a5830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_1a5834:
    // 0x1a5834: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1a5834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_1a5838:
    // 0x1a5838: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1a5838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_1a583c:
    // 0x1a583c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a583cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a5840:
    // 0x1a5840: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1a5840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_1a5844:
    // 0x1a5844: 0x26300160  addiu       $s0, $s1, 0x160
    ctx->pc = 0x1a5844u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
label_1a5848:
    // 0x1a5848: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1a5848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_1a584c:
    // 0x1a584c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1a584cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1a5850:
    // 0x1a5850: 0xc460d1e4  lwc1        $f0, -0x2E1C($v1)
    ctx->pc = 0x1a5850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294955492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a5854:
    // 0x1a5854: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x1a5854u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_1a5858:
    // 0x1a5858: 0xc6230048  lwc1        $f3, 0x48($s1)
    ctx->pc = 0x1a5858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a585c:
    // 0x1a585c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1a585cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1a5860:
    // 0x1a5860: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1a5860u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1a5864:
    // 0x1a5864: 0xc6240040  lwc1        $f4, 0x40($s1)
    ctx->pc = 0x1a5864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1a5868:
    // 0x1a5868: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1a5868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a586c:
    // 0x1a586c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1a586cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a5870:
    // 0x1a5870: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1a5870u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_1a5874:
    // 0x1a5874: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1a5874u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_1a5878:
    // 0x1a5878: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a5878u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a587c:
    // 0x1a587c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1a587cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1a5880:
    // 0x1a5880: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1a5880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1a5884:
    // 0x1a5884: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1a5884u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1a5888:
    // 0x1a5888: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1a5888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_1a588c:
    // 0x1a588c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1a588cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1a5890:
    // 0x1a5890: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1a5890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1a5894:
    // 0x1a5894: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a5894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a5898:
    // 0x1a5898: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1a589c:
    if (ctx->pc == 0x1A589Cu) {
        ctx->pc = 0x1A589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5898u;
        // 0x1a589c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A58A0u;
        goto label_1a58a0;
    }
    ctx->pc = 0x1A5898u;
    {
        const bool branch_taken_0x1a5898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5898u;
        // 0x1a589c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5898) {
            ctx->pc = 0x1A58D0u;
            goto label_1a58d0;
        }
    }
    ctx->pc = 0x1A58A0u;
label_1a58a0:
    // 0x1a58a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a58a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a58a4:
    // 0x1a58a4: 0xc44cd1dc  lwc1        $f12, -0x2E24($v0)
    ctx->pc = 0x1a58a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a58a8:
    // 0x1a58a8: 0xc06e4a2  jal         func_1B9288
label_1a58ac:
    if (ctx->pc == 0x1A58ACu) {
        ctx->pc = 0x1A58ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A58A8u;
        // 0x1a58ac: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A58B0u;
        goto label_1a58b0;
    }
    ctx->pc = 0x1A58A8u;
    SET_GPR_U32(ctx, 31, 0x1A58B0u);
    ctx->pc = 0x1A58ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A58A8u;
    // 0x1a58ac: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9288u, 0x1A58A8u, 0x1A58B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A58B0u;
label_1a58b0:
    // 0x1a58b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a58b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a58b4:
    // 0x1a58b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a58b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a58b8:
    // 0x1a58b8: 0xc06e4dc  jal         func_1B9370
label_1a58bc:
    if (ctx->pc == 0x1A58BCu) {
        ctx->pc = 0x1A58BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A58B8u;
        // 0x1a58bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A58C0u;
        goto label_1a58c0;
    }
    ctx->pc = 0x1A58B8u;
    SET_GPR_U32(ctx, 31, 0x1A58C0u);
    ctx->pc = 0x1A58BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A58B8u;
    // 0x1a58bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9370u, 0x1A58B8u, 0x1A58C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A58C0u;
label_1a58c0:
    // 0x1a58c0: 0xc06e552  jal         func_1B9548
label_1a58c4:
    if (ctx->pc == 0x1A58C4u) {
        ctx->pc = 0x1A58C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A58C0u;
        // 0x1a58c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A58C8u;
        goto label_1a58c8;
    }
    ctx->pc = 0x1A58C0u;
    SET_GPR_U32(ctx, 31, 0x1A58C8u);
    ctx->pc = 0x1A58C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A58C0u;
    // 0x1a58c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9548u, 0x1A58C0u, 0x1A58C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A58C8u;
label_1a58c8:
    // 0x1a58c8: 0x10000047  b           . + 4 + (0x47 << 2)
label_1a58cc:
    if (ctx->pc == 0x1A58CCu) {
        ctx->pc = 0x1A58CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A58C8u;
        // 0x1a58cc: 0xae80d1d8  sw          $zero, -0x2E28($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294955480), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A58D0u;
        goto label_1a58d0;
    }
    ctx->pc = 0x1A58C8u;
    {
        const bool branch_taken_0x1a58c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A58CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A58C8u;
        // 0x1a58cc: 0xae80d1d8  sw          $zero, -0x2E28($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294955480), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a58c8) {
            ctx->pc = 0x1A59E8u;
            goto label_1a59e8;
        }
    }
    ctx->pc = 0x1A58D0u;
label_1a58d0:
    // 0x1a58d0: 0x8e240350  lw          $a0, 0x350($s1)
    ctx->pc = 0x1a58d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 848)));
label_1a58d4:
    // 0x1a58d4: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x1a58d4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_1a58d8:
    // 0x1a58d8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1a58d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1a58dc:
    // 0x1a58dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a58dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a58e0:
    // 0x1a58e0: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x1a58e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_1a58e4:
    // 0x1a58e4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1a58e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1a58e8:
    // 0x1a58e8: 0x1062003e  beq         $v1, $v0, . + 4 + (0x3E << 2)
label_1a58ec:
    if (ctx->pc == 0x1A58ECu) {
        ctx->pc = 0x1A58ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A58E8u;
        // 0x1a58ec: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A58F0u;
        goto label_1a58f0;
    }
    ctx->pc = 0x1A58E8u;
    {
        const bool branch_taken_0x1a58e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A58ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A58E8u;
        // 0x1a58ec: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a58e8) {
            ctx->pc = 0x1A59E4u;
            goto label_1a59e4;
        }
    }
    ctx->pc = 0x1A58F0u;
label_1a58f0:
    // 0x1a58f0: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1a58f0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_1a58f4:
    // 0x1a58f4: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1a58f4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_1a58f8:
    // 0x1a58f8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1a58f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1a58fc:
    // 0x1a58fc: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x1a58fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1a5900:
    // 0x1a5900: 0x8e0201f0  lw          $v0, 0x1F0($s0)
    ctx->pc = 0x1a5900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
label_1a5904:
    // 0x1a5904: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a5908:
    if (ctx->pc == 0x1A5908u) {
        ctx->pc = 0x1A5908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5904u;
        // 0x1a5908: 0xc66cd1dc  lwc1        $f12, -0x2E24($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294955484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A590Cu;
        goto label_1a590c;
    }
    ctx->pc = 0x1A5904u;
    {
        const bool branch_taken_0x1a5904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5904u;
        // 0x1a5908: 0xc66cd1dc  lwc1        $f12, -0x2E24($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294955484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5904) {
            ctx->pc = 0x1A5914u;
            goto label_1a5914;
        }
    }
    ctx->pc = 0x1A590Cu;
label_1a590c:
    // 0x1a590c: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1a5910:
    if (ctx->pc == 0x1A5910u) {
        ctx->pc = 0x1A5910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A590Cu;
        // 0x1a5910: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5914u;
        goto label_1a5914;
    }
    ctx->pc = 0x1A590Cu;
    {
        const bool branch_taken_0x1a590c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A590Cu;
        // 0x1a5910: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a590c) {
            ctx->pc = 0x1A59C4u;
            goto label_1a59c4;
        }
    }
    ctx->pc = 0x1A5914u;
label_1a5914:
    // 0x1a5914: 0xc06e4a2  jal         func_1B9288
label_1a5918:
    if (ctx->pc == 0x1A5918u) {
        ctx->pc = 0x1A5918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5914u;
        // 0x1a5918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A591Cu;
        goto label_1a591c;
    }
    ctx->pc = 0x1A5914u;
    SET_GPR_U32(ctx, 31, 0x1A591Cu);
    ctx->pc = 0x1A5918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5914u;
    // 0x1a5918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9288u, 0x1A5914u, 0x1A591Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A591Cu;
label_1a591c:
    // 0x1a591c: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1a591cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
label_1a5920:
    // 0x1a5920: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a5924:
    // 0x1a5924: 0xc069572  jal         func_1A55C8
label_1a5928:
    if (ctx->pc == 0x1A5928u) {
        ctx->pc = 0x1A5928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5924u;
        // 0x1a5928: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A592Cu;
        goto label_1a592c;
    }
    ctx->pc = 0x1A5924u;
    SET_GPR_U32(ctx, 31, 0x1A592Cu);
    ctx->pc = 0x1A5928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5924u;
    // 0x1a5928: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A55C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A55C8u, 0x1A5924u, 0x1A592Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A592Cu;
label_1a592c:
    // 0x1a592c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1a5930:
    if (ctx->pc == 0x1A5930u) {
        ctx->pc = 0x1A5930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A592Cu;
        // 0x1a5930: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5934u;
        goto label_1a5934;
    }
    ctx->pc = 0x1A592Cu;
    {
        const bool branch_taken_0x1a592c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A592Cu;
        // 0x1a5930: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a592c) {
            ctx->pc = 0x1A5950u;
            goto label_1a5950;
        }
    }
    ctx->pc = 0x1A5934u;
label_1a5934:
    // 0x1a5934: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a5934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5938:
    // 0x1a5938: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1a5938u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1a593c:
    // 0x1a593c: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1a593cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1a5940:
    // 0x1a5940: 0x60f809  jalr        $v1
label_1a5944:
    if (ctx->pc == 0x1A5944u) {
        ctx->pc = 0x1A5944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5940u;
        // 0x1a5944: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5948u;
        goto label_1a5948;
    }
    ctx->pc = 0x1A5940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A5948u);
        ctx->pc = 0x1A5944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5940u;
        // 0x1a5944: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5940u, 0x1A5948u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A5948u;
label_1a5948:
    // 0x1a5948: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a594c:
    if (ctx->pc == 0x1A594Cu) {
        ctx->pc = 0x1A594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5948u;
        // 0x1a594c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5950u;
        goto label_1a5950;
    }
    ctx->pc = 0x1A5948u;
    {
        const bool branch_taken_0x1a5948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5948u;
        // 0x1a594c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5948) {
            ctx->pc = 0x1A5968u;
            goto label_1a5968;
        }
    }
    ctx->pc = 0x1A5950u;
label_1a5950:
    // 0x1a5950: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a5950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a5954:
    // 0x1a5954: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1a5954u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1a5958:
    // 0x1a5958: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1a5958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1a595c:
    // 0x1a595c: 0x60f809  jalr        $v1
label_1a5960:
    if (ctx->pc == 0x1A5960u) {
        ctx->pc = 0x1A5960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A595Cu;
        // 0x1a5960: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5964u;
        goto label_1a5964;
    }
    ctx->pc = 0x1A595Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A5964u);
        ctx->pc = 0x1A5960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A595Cu;
        // 0x1a5960: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A595Cu, 0x1A5964u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A5964u;
label_1a5964:
    // 0x1a5964: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a5964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a5968:
    // 0x1a5968: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a5968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a596c:
    // 0x1a596c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a596cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5970:
    // 0x1a5970: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1a5970u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1a5974:
    // 0x1a5974: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1a5974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1a5978:
    // 0x1a5978: 0x60f809  jalr        $v1
label_1a597c:
    if (ctx->pc == 0x1A597Cu) {
        ctx->pc = 0x1A597Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5978u;
        // 0x1a597c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5980u;
        goto label_1a5980;
    }
    ctx->pc = 0x1A5978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A5980u);
        ctx->pc = 0x1A597Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5978u;
        // 0x1a597c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5978u, 0x1A5980u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A5980u;
label_1a5980:
    // 0x1a5980: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a5980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a5984:
    // 0x1a5984: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1a5984u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1a5988:
    // 0x1a5988: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1a5988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1a598c:
    // 0x1a598c: 0x60f809  jalr        $v1
label_1a5990:
    if (ctx->pc == 0x1A5990u) {
        ctx->pc = 0x1A5990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A598Cu;
        // 0x1a5990: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5994u;
        goto label_1a5994;
    }
    ctx->pc = 0x1A598Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A5994u);
        ctx->pc = 0x1A5990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A598Cu;
        // 0x1a5990: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A598Cu, 0x1A5994u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A5994u;
label_1a5994:
    // 0x1a5994: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a5994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a5998:
    // 0x1a5998: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1a5998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a599c:
    // 0x1a599c: 0xc06e4ea  jal         func_1B93A8
label_1a59a0:
    if (ctx->pc == 0x1A59A0u) {
        ctx->pc = 0x1A59A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A599Cu;
        // 0x1a59a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A59A4u;
        goto label_1a59a4;
    }
    ctx->pc = 0x1A599Cu;
    SET_GPR_U32(ctx, 31, 0x1A59A4u);
    ctx->pc = 0x1A59A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A599Cu;
    // 0x1a59a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B93A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B93A8u, 0x1A599Cu, 0x1A59A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A59A4u;
label_1a59a4:
    // 0x1a59a4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x1a59a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a59a8:
    // 0x1a59a8: 0xc641d1e0  lwc1        $f1, -0x2E20($s2)
    ctx->pc = 0x1a59a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294955488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a59ac:
    // 0x1a59ac: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1a59acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_1a59b0:
    // 0x1a59b0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1a59b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1a59b4:
    // 0x1a59b4: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1a59b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a59b8:
    // 0x1a59b8: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x1a59b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_1a59bc:
    // 0x1a59bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a59bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a59c0:
    // 0x1a59c0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1a59c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1a59c4:
    // 0x1a59c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a59c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a59c8:
    // 0x1a59c8: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x1a59c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_1a59cc:
    // 0x1a59cc: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1a59ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1a59d0:
    // 0x1a59d0: 0x8e220350  lw          $v0, 0x350($s1)
    ctx->pc = 0x1a59d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 848)));
label_1a59d4:
    // 0x1a59d4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1a59d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1a59d8:
    // 0x1a59d8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1a59d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a59dc:
    // 0x1a59dc: 0x1483ffc6  bne         $a0, $v1, . + 4 + (-0x3A << 2)
label_1a59e0:
    if (ctx->pc == 0x1A59E0u) {
        ctx->pc = 0x1A59E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A59DCu;
        // 0x1a59e0: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A59E4u;
        goto label_1a59e4;
    }
    ctx->pc = 0x1A59DCu;
    {
        const bool branch_taken_0x1a59dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A59E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A59DCu;
        // 0x1a59e0: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a59dc) {
            ctx->pc = 0x1A58F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a58f8;
        }
    }
    ctx->pc = 0x1A59E4u;
label_1a59e4:
    // 0x1a59e4: 0xae80d1d8  sw          $zero, -0x2E28($s4)
    ctx->pc = 0x1a59e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294955480), GPR_U32(ctx, 0));
label_1a59e8:
    // 0x1a59e8: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1a59e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1a59ec:
    // 0x1a59ec: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1a59ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1a59f0:
    // 0x1a59f0: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1a59f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1a59f4:
    // 0x1a59f4: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1a59f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1a59f8:
    // 0x1a59f8: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1a59f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1a59fc:
    // 0x1a59fc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1a59fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a5a00:
    // 0x1a5a00: 0x3e00008  jr          $ra
label_1a5a04:
    if (ctx->pc == 0x1A5A04u) {
        ctx->pc = 0x1A5A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A00u;
        // 0x1a5a04: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5A08u;
        goto label_fallthrough_0x1a5a00;
    }
    ctx->pc = 0x1A5A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A00u;
        // 0x1a5a04: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a5a00:
    ctx->pc = 0x1A5A08u;
}
