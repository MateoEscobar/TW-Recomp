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

// Function: sub_00369868
// Address: 0x369868 - 0x369d10
void sub_00369868_0x369868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369868_0x369868");
#endif

    switch (ctx->pc) {
        case 0x3698d0u: goto label_3698d0;
        case 0x3698d8u: goto label_3698d8;
        case 0x3698ecu: goto label_3698ec;
        case 0x3698f4u: goto label_3698f4;
        case 0x369908u: goto label_369908;
        case 0x369910u: goto label_369910;
        case 0x369924u: goto label_369924;
        case 0x36992cu: goto label_36992c;
        case 0x369940u: goto label_369940;
        case 0x369948u: goto label_369948;
        case 0x36995cu: goto label_36995c;
        case 0x369964u: goto label_369964;
        case 0x369978u: goto label_369978;
        case 0x369980u: goto label_369980;
        case 0x369994u: goto label_369994;
        case 0x36999cu: goto label_36999c;
        case 0x3699b0u: goto label_3699b0;
        case 0x3699b8u: goto label_3699b8;
        case 0x3699ccu: goto label_3699cc;
        case 0x3699d4u: goto label_3699d4;
        case 0x3699e8u: goto label_3699e8;
        case 0x3699f0u: goto label_3699f0;
        case 0x369a04u: goto label_369a04;
        case 0x369a0cu: goto label_369a0c;
        case 0x369a20u: goto label_369a20;
        case 0x369a28u: goto label_369a28;
        case 0x369a3cu: goto label_369a3c;
        case 0x369a44u: goto label_369a44;
        case 0x369a58u: goto label_369a58;
        case 0x369a60u: goto label_369a60;
        case 0x369a74u: goto label_369a74;
        case 0x369a7cu: goto label_369a7c;
        case 0x369a90u: goto label_369a90;
        case 0x369a98u: goto label_369a98;
        case 0x369aacu: goto label_369aac;
        case 0x369ab4u: goto label_369ab4;
        case 0x369ac8u: goto label_369ac8;
        case 0x369ad0u: goto label_369ad0;
        case 0x369ae4u: goto label_369ae4;
        case 0x369aecu: goto label_369aec;
        case 0x369b00u: goto label_369b00;
        case 0x369b08u: goto label_369b08;
        case 0x369b1cu: goto label_369b1c;
        case 0x369b24u: goto label_369b24;
        case 0x369b38u: goto label_369b38;
        case 0x369b40u: goto label_369b40;
        case 0x369b54u: goto label_369b54;
        case 0x369b5cu: goto label_369b5c;
        case 0x369b70u: goto label_369b70;
        case 0x369b78u: goto label_369b78;
        case 0x369b8cu: goto label_369b8c;
        case 0x369b94u: goto label_369b94;
        case 0x369ba8u: goto label_369ba8;
        case 0x369bb0u: goto label_369bb0;
        case 0x369bc4u: goto label_369bc4;
        case 0x369bccu: goto label_369bcc;
        case 0x369be0u: goto label_369be0;
        case 0x369be8u: goto label_369be8;
        case 0x369bfcu: goto label_369bfc;
        case 0x369c04u: goto label_369c04;
        case 0x369c18u: goto label_369c18;
        case 0x369c20u: goto label_369c20;
        case 0x369cb4u: goto label_369cb4;
        default: break;
    }

    ctx->pc = 0x369868u;

    // 0x369868: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x369868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x36986c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36986cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x369870: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x369870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x369874: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x369874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x369878: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x369878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36987c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36987cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369880: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x369880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
    // 0x369884: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x369884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
    // 0x369888: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369888u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36988c: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x36988cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
    // 0x369890: 0x7fb50100  sq          $s5, 0x100($sp)
    ctx->pc = 0x369890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 21));
    // 0x369894: 0x7fb600f0  sq          $s6, 0xF0($sp)
    ctx->pc = 0x369894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 22));
    // 0x369898: 0x7fb700e0  sq          $s7, 0xE0($sp)
    ctx->pc = 0x369898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 23));
    // 0x36989c: 0x7fbe00d0  sq          $fp, 0xD0($sp)
    ctx->pc = 0x36989cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 30));
    // 0x3698a0: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x3698a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x3698a4: 0xe7bd01a8  swc1        $f29, 0x1A8($sp)
    ctx->pc = 0x3698a4u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x3698a8: 0xe7bc01a0  swc1        $f28, 0x1A0($sp)
    ctx->pc = 0x3698a8u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x3698ac: 0xe7bb0198  swc1        $f27, 0x198($sp)
    ctx->pc = 0x3698acu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x3698b0: 0xe7ba0190  swc1        $f26, 0x190($sp)
    ctx->pc = 0x3698b0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x3698b4: 0xe7b90188  swc1        $f25, 0x188($sp)
    ctx->pc = 0x3698b4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x3698b8: 0xe7b80180  swc1        $f24, 0x180($sp)
    ctx->pc = 0x3698b8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x3698bc: 0xe7b70178  swc1        $f23, 0x178($sp)
    ctx->pc = 0x3698bcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x3698c0: 0xe7b60170  swc1        $f22, 0x170($sp)
    ctx->pc = 0x3698c0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x3698c4: 0xe7b50168  swc1        $f21, 0x168($sp)
    ctx->pc = 0x3698c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x3698c8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3698C8u;
    SET_GPR_U32(ctx, 31, 0x3698D0u);
    ctx->pc = 0x3698CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3698C8u;
    // 0x3698cc: 0xe7b40160  swc1        $f20, 0x160($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3698C8u, 0x3698D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3698D0u;
label_3698d0:
    // 0x3698d0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3698D0u;
    SET_GPR_U32(ctx, 31, 0x3698D8u);
    ctx->pc = 0x3698D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3698D0u;
    // 0x3698d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3698D0u, 0x3698D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3698D8u;
label_3698d8:
    // 0x3698d8: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x3698d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x3698dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3698dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3698e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3698e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3698e4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3698E4u;
    SET_GPR_U32(ctx, 31, 0x3698ECu);
    ctx->pc = 0x3698E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3698E4u;
    // 0x3698e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3698E4u, 0x3698ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3698ECu;
label_3698ec:
    // 0x3698ec: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3698ECu;
    SET_GPR_U32(ctx, 31, 0x3698F4u);
    ctx->pc = 0x3698F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3698ECu;
    // 0x3698f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3698ECu, 0x3698F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3698F4u;
label_3698f4:
    // 0x3698f4: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x3698f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x3698f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3698f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3698fc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3698fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x369900: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369900u;
    SET_GPR_U32(ctx, 31, 0x369908u);
    ctx->pc = 0x369904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369900u;
    // 0x369904: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369900u, 0x369908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369908u;
label_369908:
    // 0x369908: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x369908u;
    SET_GPR_U32(ctx, 31, 0x369910u);
    ctx->pc = 0x36990Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369908u;
    // 0x36990c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x369908u, 0x369910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369910u;
label_369910:
    // 0x369910: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x369910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x369914: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369918: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x369918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36991c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36991Cu;
    SET_GPR_U32(ctx, 31, 0x369924u);
    ctx->pc = 0x369920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36991Cu;
    // 0x369920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36991Cu, 0x369924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369924u;
label_369924:
    // 0x369924: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x369924u;
    SET_GPR_U32(ctx, 31, 0x36992Cu);
    ctx->pc = 0x369928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369924u;
    // 0x369928: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x369924u, 0x36992Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36992Cu;
label_36992c:
    // 0x36992c: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x36992cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x369930: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369934: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x369934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x369938: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369938u;
    SET_GPR_U32(ctx, 31, 0x369940u);
    ctx->pc = 0x36993Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369938u;
    // 0x36993c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369938u, 0x369940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369940u;
label_369940:
    // 0x369940: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x369940u;
    SET_GPR_U32(ctx, 31, 0x369948u);
    ctx->pc = 0x369944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369940u;
    // 0x369944: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x369940u, 0x369948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369948u;
label_369948:
    // 0x369948: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x369948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x36994c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36994cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369950: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x369950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x369954: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369954u;
    SET_GPR_U32(ctx, 31, 0x36995Cu);
    ctx->pc = 0x369958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369954u;
    // 0x369958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369954u, 0x36995Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36995Cu;
label_36995c:
    // 0x36995c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36995Cu;
    SET_GPR_U32(ctx, 31, 0x369964u);
    ctx->pc = 0x369960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36995Cu;
    // 0x369960: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36995Cu, 0x369964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369964u;
label_369964:
    // 0x369964: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x369964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
    // 0x369968: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36996c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x36996cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x369970: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369970u;
    SET_GPR_U32(ctx, 31, 0x369978u);
    ctx->pc = 0x369974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369970u;
    // 0x369974: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369970u, 0x369978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369978u;
label_369978:
    // 0x369978: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x369978u;
    SET_GPR_U32(ctx, 31, 0x369980u);
    ctx->pc = 0x36997Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369978u;
    // 0x36997c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x369978u, 0x369980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369980u;
label_369980:
    // 0x369980: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x369980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
    // 0x369984: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369988: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x369988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x36998c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36998Cu;
    SET_GPR_U32(ctx, 31, 0x369994u);
    ctx->pc = 0x369990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36998Cu;
    // 0x369990: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36998Cu, 0x369994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369994u;
label_369994:
    // 0x369994: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x369994u;
    SET_GPR_U32(ctx, 31, 0x36999Cu);
    ctx->pc = 0x369998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369994u;
    // 0x369998: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x369994u, 0x36999Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36999Cu;
label_36999c:
    // 0x36999c: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x36999cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    // 0x3699a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3699a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3699a4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x3699a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3699a8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3699A8u;
    SET_GPR_U32(ctx, 31, 0x3699B0u);
    ctx->pc = 0x3699ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3699A8u;
    // 0x3699ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3699A8u, 0x3699B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3699B0u;
label_3699b0:
    // 0x3699b0: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3699B0u;
    SET_GPR_U32(ctx, 31, 0x3699B8u);
    ctx->pc = 0x3699B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3699B0u;
    // 0x3699b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3699B0u, 0x3699B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3699B8u;
label_3699b8:
    // 0x3699b8: 0x46000746  mov.s       $f29, $f0
    ctx->pc = 0x3699b8u;
    ctx->f[29] = FPU_MOV_S(ctx->f[0]);
    // 0x3699bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3699bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3699c0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3699c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3699c4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3699C4u;
    SET_GPR_U32(ctx, 31, 0x3699CCu);
    ctx->pc = 0x3699C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3699C4u;
    // 0x3699c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3699C4u, 0x3699CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3699CCu;
label_3699cc:
    // 0x3699cc: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3699CCu;
    SET_GPR_U32(ctx, 31, 0x3699D4u);
    ctx->pc = 0x3699D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3699CCu;
    // 0x3699d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3699CCu, 0x3699D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3699D4u;
label_3699d4:
    // 0x3699d4: 0x46000706  mov.s       $f28, $f0
    ctx->pc = 0x3699d4u;
    ctx->f[28] = FPU_MOV_S(ctx->f[0]);
    // 0x3699d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3699d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3699dc: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x3699dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3699e0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3699E0u;
    SET_GPR_U32(ctx, 31, 0x3699E8u);
    ctx->pc = 0x3699E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3699E0u;
    // 0x3699e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3699E0u, 0x3699E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3699E8u;
label_3699e8:
    // 0x3699e8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3699E8u;
    SET_GPR_U32(ctx, 31, 0x3699F0u);
    ctx->pc = 0x3699ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3699E8u;
    // 0x3699ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3699E8u, 0x3699F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3699F0u;
label_3699f0:
    // 0x3699f0: 0x460006c6  mov.s       $f27, $f0
    ctx->pc = 0x3699f0u;
    ctx->f[27] = FPU_MOV_S(ctx->f[0]);
    // 0x3699f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3699f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3699f8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x3699f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3699fc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3699FCu;
    SET_GPR_U32(ctx, 31, 0x369A04u);
    ctx->pc = 0x369A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3699FCu;
    // 0x369a00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3699FCu, 0x369A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369A04u;
label_369a04:
    // 0x369a04: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x369A04u;
    SET_GPR_U32(ctx, 31, 0x369A0Cu);
    ctx->pc = 0x369A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369A04u;
    // 0x369a08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x369A04u, 0x369A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369A0Cu;
label_369a0c:
    // 0x369a0c: 0x46000686  mov.s       $f26, $f0
    ctx->pc = 0x369a0cu;
    ctx->f[26] = FPU_MOV_S(ctx->f[0]);
    // 0x369a10: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369a10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369a14: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x369a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x369a18: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369A18u;
    SET_GPR_U32(ctx, 31, 0x369A20u);
    ctx->pc = 0x369A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369A18u;
    // 0x369a1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369A18u, 0x369A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369A20u;
label_369a20:
    // 0x369a20: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x369A20u;
    SET_GPR_U32(ctx, 31, 0x369A28u);
    ctx->pc = 0x369A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369A20u;
    // 0x369a24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x369A20u, 0x369A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369A28u;
label_369a28:
    // 0x369a28: 0x46000646  mov.s       $f25, $f0
    ctx->pc = 0x369a28u;
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
    // 0x369a2c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369a2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369a30: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x369a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x369a34: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369A34u;
    SET_GPR_U32(ctx, 31, 0x369A3Cu);
    ctx->pc = 0x369A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369A34u;
    // 0x369a38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369A34u, 0x369A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369A3Cu;
label_369a3c:
    // 0x369a3c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x369A3Cu;
    SET_GPR_U32(ctx, 31, 0x369A44u);
    ctx->pc = 0x369A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369A3Cu;
    // 0x369a40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x369A3Cu, 0x369A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369A44u;
label_369a44:
    // 0x369a44: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x369a44u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x369a48: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369a48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369a4c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x369a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x369a50: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369A50u;
    SET_GPR_U32(ctx, 31, 0x369A58u);
    ctx->pc = 0x369A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369A50u;
    // 0x369a54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369A50u, 0x369A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369A58u;
label_369a58:
    // 0x369a58: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x369A58u;
    SET_GPR_U32(ctx, 31, 0x369A60u);
    ctx->pc = 0x369A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369A58u;
    // 0x369a5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x369A58u, 0x369A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369A60u;
label_369a60:
    // 0x369a60: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x369a60u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x369a64: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369a64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369a68: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x369a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x369a6c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369A6Cu;
    SET_GPR_U32(ctx, 31, 0x369A74u);
    ctx->pc = 0x369A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369A6Cu;
    // 0x369a70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369A6Cu, 0x369A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369A74u;
label_369a74:
    // 0x369a74: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x369A74u;
    SET_GPR_U32(ctx, 31, 0x369A7Cu);
    ctx->pc = 0x369A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369A74u;
    // 0x369a78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x369A74u, 0x369A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369A7Cu;
label_369a7c:
    // 0x369a7c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x369a7cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x369a80: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369a80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369a84: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x369a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x369a88: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369A88u;
    SET_GPR_U32(ctx, 31, 0x369A90u);
    ctx->pc = 0x369A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369A88u;
    // 0x369a8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369A88u, 0x369A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369A90u;
label_369a90:
    // 0x369a90: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x369A90u;
    SET_GPR_U32(ctx, 31, 0x369A98u);
    ctx->pc = 0x369A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369A90u;
    // 0x369a94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x369A90u, 0x369A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369A98u;
label_369a98:
    // 0x369a98: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x369a98u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x369a9c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369a9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369aa0: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x369aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x369aa4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369AA4u;
    SET_GPR_U32(ctx, 31, 0x369AACu);
    ctx->pc = 0x369AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369AA4u;
    // 0x369aa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369AA4u, 0x369AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369AACu;
label_369aac:
    // 0x369aac: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x369AACu;
    SET_GPR_U32(ctx, 31, 0x369AB4u);
    ctx->pc = 0x369AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369AACu;
    // 0x369ab0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x369AACu, 0x369AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369AB4u;
label_369ab4:
    // 0x369ab4: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x369ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x369ab8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369ab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369abc: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x369abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x369ac0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369AC0u;
    SET_GPR_U32(ctx, 31, 0x369AC8u);
    ctx->pc = 0x369AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369AC0u;
    // 0x369ac4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369AC0u, 0x369AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369AC8u;
label_369ac8:
    // 0x369ac8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x369AC8u;
    SET_GPR_U32(ctx, 31, 0x369AD0u);
    ctx->pc = 0x369ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369AC8u;
    // 0x369acc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x369AC8u, 0x369AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369AD0u;
label_369ad0:
    // 0x369ad0: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x369ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x369ad4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369ad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369ad8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x369ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x369adc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369ADCu;
    SET_GPR_U32(ctx, 31, 0x369AE4u);
    ctx->pc = 0x369AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369ADCu;
    // 0x369ae0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369ADCu, 0x369AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369AE4u;
label_369ae4:
    // 0x369ae4: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x369AE4u;
    SET_GPR_U32(ctx, 31, 0x369AECu);
    ctx->pc = 0x369AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369AE4u;
    // 0x369ae8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x369AE4u, 0x369AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369AECu;
label_369aec:
    // 0x369aec: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x369aecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x369af0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369af0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369af4: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x369af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x369af8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369AF8u;
    SET_GPR_U32(ctx, 31, 0x369B00u);
    ctx->pc = 0x369AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369AF8u;
    // 0x369afc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369AF8u, 0x369B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369B00u;
label_369b00:
    // 0x369b00: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x369B00u;
    SET_GPR_U32(ctx, 31, 0x369B08u);
    ctx->pc = 0x369B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369B00u;
    // 0x369b04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x369B00u, 0x369B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369B08u;
label_369b08:
    // 0x369b08: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x369b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x369b0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369b0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369b10: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x369b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x369b14: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369B14u;
    SET_GPR_U32(ctx, 31, 0x369B1Cu);
    ctx->pc = 0x369B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369B14u;
    // 0x369b18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369B14u, 0x369B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369B1Cu;
label_369b1c:
    // 0x369b1c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x369B1Cu;
    SET_GPR_U32(ctx, 31, 0x369B24u);
    ctx->pc = 0x369B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369B1Cu;
    // 0x369b20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x369B1Cu, 0x369B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369B24u;
label_369b24:
    // 0x369b24: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x369b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x369b28: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369b28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369b2c: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x369b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x369b30: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369B30u;
    SET_GPR_U32(ctx, 31, 0x369B38u);
    ctx->pc = 0x369B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369B30u;
    // 0x369b34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369B30u, 0x369B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369B38u;
label_369b38:
    // 0x369b38: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x369B38u;
    SET_GPR_U32(ctx, 31, 0x369B40u);
    ctx->pc = 0x369B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369B38u;
    // 0x369b3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x369B38u, 0x369B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369B40u;
label_369b40:
    // 0x369b40: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x369b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x369b44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369b44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369b48: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x369b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x369b4c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369B4Cu;
    SET_GPR_U32(ctx, 31, 0x369B54u);
    ctx->pc = 0x369B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369B4Cu;
    // 0x369b50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369B4Cu, 0x369B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369B54u;
label_369b54:
    // 0x369b54: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x369B54u;
    SET_GPR_U32(ctx, 31, 0x369B5Cu);
    ctx->pc = 0x369B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369B54u;
    // 0x369b58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x369B54u, 0x369B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369B5Cu;
label_369b5c:
    // 0x369b5c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369b5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369b60: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x369b60u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369b64: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x369b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x369b68: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369B68u;
    SET_GPR_U32(ctx, 31, 0x369B70u);
    ctx->pc = 0x369B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369B68u;
    // 0x369b6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369B68u, 0x369B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369B70u;
label_369b70:
    // 0x369b70: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x369B70u;
    SET_GPR_U32(ctx, 31, 0x369B78u);
    ctx->pc = 0x369B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369B70u;
    // 0x369b74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x369B70u, 0x369B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369B78u;
label_369b78:
    // 0x369b78: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369b78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369b7c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x369b7cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369b80: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x369b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x369b84: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369B84u;
    SET_GPR_U32(ctx, 31, 0x369B8Cu);
    ctx->pc = 0x369B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369B84u;
    // 0x369b88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369B84u, 0x369B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369B8Cu;
label_369b8c:
    // 0x369b8c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x369B8Cu;
    SET_GPR_U32(ctx, 31, 0x369B94u);
    ctx->pc = 0x369B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369B8Cu;
    // 0x369b90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x369B8Cu, 0x369B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369B94u;
label_369b94:
    // 0x369b94: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369b94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369b98: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x369b98u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369b9c: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x369b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x369ba0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369BA0u;
    SET_GPR_U32(ctx, 31, 0x369BA8u);
    ctx->pc = 0x369BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369BA0u;
    // 0x369ba4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369BA0u, 0x369BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369BA8u;
label_369ba8:
    // 0x369ba8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x369BA8u;
    SET_GPR_U32(ctx, 31, 0x369BB0u);
    ctx->pc = 0x369BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369BA8u;
    // 0x369bac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x369BA8u, 0x369BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369BB0u;
label_369bb0:
    // 0x369bb0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369bb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369bb4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x369bb4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369bb8: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x369bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x369bbc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369BBCu;
    SET_GPR_U32(ctx, 31, 0x369BC4u);
    ctx->pc = 0x369BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369BBCu;
    // 0x369bc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369BBCu, 0x369BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369BC4u;
label_369bc4:
    // 0x369bc4: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x369BC4u;
    SET_GPR_U32(ctx, 31, 0x369BCCu);
    ctx->pc = 0x369BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369BC4u;
    // 0x369bc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x369BC4u, 0x369BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369BCCu;
label_369bcc:
    // 0x369bcc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369bccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369bd0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x369bd0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369bd4: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x369bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x369bd8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369BD8u;
    SET_GPR_U32(ctx, 31, 0x369BE0u);
    ctx->pc = 0x369BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369BD8u;
    // 0x369bdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369BD8u, 0x369BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369BE0u;
label_369be0:
    // 0x369be0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x369BE0u;
    SET_GPR_U32(ctx, 31, 0x369BE8u);
    ctx->pc = 0x369BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369BE0u;
    // 0x369be4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x369BE0u, 0x369BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369BE8u;
label_369be8:
    // 0x369be8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369bec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x369becu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369bf0: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x369bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x369bf4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369BF4u;
    SET_GPR_U32(ctx, 31, 0x369BFCu);
    ctx->pc = 0x369BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369BF4u;
    // 0x369bf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369BF4u, 0x369BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369BFCu;
label_369bfc:
    // 0x369bfc: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x369BFCu;
    SET_GPR_U32(ctx, 31, 0x369C04u);
    ctx->pc = 0x369C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369BFCu;
    // 0x369c00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x369BFCu, 0x369C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369C04u;
label_369c04:
    // 0x369c04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369c04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369c08: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x369c08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369c0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x369c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369c10: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369C10u;
    SET_GPR_U32(ctx, 31, 0x369C18u);
    ctx->pc = 0x369C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369C10u;
    // 0x369c14: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369C10u, 0x369C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369C18u;
label_369c18:
    // 0x369c18: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x369C18u;
    SET_GPR_U32(ctx, 31, 0x369C20u);
    ctx->pc = 0x369C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369C18u;
    // 0x369c1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x369C18u, 0x369C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369C20u;
label_369c20:
    // 0x369c20: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x369c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x369c24: 0x4600eb06  mov.s       $f12, $f29
    ctx->pc = 0x369c24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[29]);
    // 0x369c28: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x369c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x369c2c: 0x4600e346  mov.s       $f13, $f28
    ctx->pc = 0x369c2cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[28]);
    // 0x369c30: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x369c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x369c34: 0x4600db86  mov.s       $f14, $f27
    ctx->pc = 0x369c34u;
    ctx->f[14] = FPU_MOV_S(ctx->f[27]);
    // 0x369c38: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x369c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x369c3c: 0x4600d3c6  mov.s       $f15, $f26
    ctx->pc = 0x369c3cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[26]);
    // 0x369c40: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x369c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x369c44: 0x4600cc06  mov.s       $f16, $f25
    ctx->pc = 0x369c44u;
    ctx->f[16] = FPU_MOV_S(ctx->f[25]);
    // 0x369c48: 0x8fa50084  lw          $a1, 0x84($sp)
    ctx->pc = 0x369c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x369c4c: 0x4600c446  mov.s       $f17, $f24
    ctx->pc = 0x369c4cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[24]);
    // 0x369c50: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x369c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x369c54: 0x4600bc86  mov.s       $f18, $f23
    ctx->pc = 0x369c54u;
    ctx->f[18] = FPU_MOV_S(ctx->f[23]);
    // 0x369c58: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x369c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x369c5c: 0x4600b4c6  mov.s       $f19, $f22
    ctx->pc = 0x369c5cu;
    ctx->f[19] = FPU_MOV_S(ctx->f[22]);
    // 0x369c60: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x369c60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x369c64: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x369c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x369c68: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x369c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x369c6c: 0x8fa7008c  lw          $a3, 0x8C($sp)
    ctx->pc = 0x369c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x369c70: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x369c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x369c74: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x369c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x369c78: 0x8fa80090  lw          $t0, 0x90($sp)
    ctx->pc = 0x369c78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x369c7c: 0x8fa90094  lw          $t1, 0x94($sp)
    ctx->pc = 0x369c7cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x369c80: 0x8faa0098  lw          $t2, 0x98($sp)
    ctx->pc = 0x369c80u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x369c84: 0x8fab009c  lw          $t3, 0x9C($sp)
    ctx->pc = 0x369c84u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x369c88: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x369c88u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x369c8c: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x369c8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x369c90: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x369c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x369c94: 0xafbe0038  sw          $fp, 0x38($sp)
    ctx->pc = 0x369c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 30));
    // 0x369c98: 0xafb70040  sw          $s7, 0x40($sp)
    ctx->pc = 0x369c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 23));
    // 0x369c9c: 0xafb60048  sw          $s6, 0x48($sp)
    ctx->pc = 0x369c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 22));
    // 0x369ca0: 0xafb50050  sw          $s5, 0x50($sp)
    ctx->pc = 0x369ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 21));
    // 0x369ca4: 0xafb40058  sw          $s4, 0x58($sp)
    ctx->pc = 0x369ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 20));
    // 0x369ca8: 0xafb30060  sw          $s3, 0x60($sp)
    ctx->pc = 0x369ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 19));
    // 0x369cac: 0xc08a230  jal         func_2288C0
    ctx->pc = 0x369CACu;
    SET_GPR_U32(ctx, 31, 0x369CB4u);
    ctx->pc = 0x369CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369CACu;
    // 0x369cb0: 0xafb20068  sw          $s2, 0x68($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2288C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2288C0u, 0x369CACu, 0x369CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369CB4u;
label_369cb4:
    // 0x369cb4: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x369cb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x369cb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x369cb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369cbc: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x369cbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x369cc0: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x369cc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x369cc4: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x369cc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x369cc8: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x369cc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x369ccc: 0x7bb50100  lq          $s5, 0x100($sp)
    ctx->pc = 0x369cccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x369cd0: 0x7bb600f0  lq          $s6, 0xF0($sp)
    ctx->pc = 0x369cd0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x369cd4: 0x7bb700e0  lq          $s7, 0xE0($sp)
    ctx->pc = 0x369cd4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x369cd8: 0x7bbe00d0  lq          $fp, 0xD0($sp)
    ctx->pc = 0x369cd8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x369cdc: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x369cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x369ce0: 0xc7bd01a8  lwc1        $f29, 0x1A8($sp)
    ctx->pc = 0x369ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x369ce4: 0xc7bc01a0  lwc1        $f28, 0x1A0($sp)
    ctx->pc = 0x369ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x369ce8: 0xc7bb0198  lwc1        $f27, 0x198($sp)
    ctx->pc = 0x369ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x369cec: 0xc7ba0190  lwc1        $f26, 0x190($sp)
    ctx->pc = 0x369cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x369cf0: 0xc7b90188  lwc1        $f25, 0x188($sp)
    ctx->pc = 0x369cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x369cf4: 0xc7b80180  lwc1        $f24, 0x180($sp)
    ctx->pc = 0x369cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x369cf8: 0xc7b70178  lwc1        $f23, 0x178($sp)
    ctx->pc = 0x369cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x369cfc: 0xc7b60170  lwc1        $f22, 0x170($sp)
    ctx->pc = 0x369cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x369d00: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x369d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x369d04: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x369d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x369d08: 0x3e00008  jr          $ra
    ctx->pc = 0x369D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369D08u;
        // 0x369d0c: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369D10u;
}
