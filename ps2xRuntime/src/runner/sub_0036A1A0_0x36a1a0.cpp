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

// Function: sub_0036A1A0
// Address: 0x36a1a0 - 0x36a658
void sub_0036A1A0_0x36a1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A1A0_0x36a1a0");
#endif

    switch (ctx->pc) {
        case 0x36a1f4u: goto label_36a1f4;
        case 0x36a208u: goto label_36a208;
        case 0x36a21cu: goto label_36a21c;
        case 0x36a224u: goto label_36a224;
        case 0x36a238u: goto label_36a238;
        case 0x36a240u: goto label_36a240;
        case 0x36a254u: goto label_36a254;
        case 0x36a25cu: goto label_36a25c;
        case 0x36a270u: goto label_36a270;
        case 0x36a278u: goto label_36a278;
        case 0x36a28cu: goto label_36a28c;
        case 0x36a294u: goto label_36a294;
        case 0x36a2a8u: goto label_36a2a8;
        case 0x36a2b0u: goto label_36a2b0;
        case 0x36a2c4u: goto label_36a2c4;
        case 0x36a2ccu: goto label_36a2cc;
        case 0x36a2e0u: goto label_36a2e0;
        case 0x36a2e8u: goto label_36a2e8;
        case 0x36a2fcu: goto label_36a2fc;
        case 0x36a304u: goto label_36a304;
        case 0x36a318u: goto label_36a318;
        case 0x36a320u: goto label_36a320;
        case 0x36a334u: goto label_36a334;
        case 0x36a33cu: goto label_36a33c;
        case 0x36a350u: goto label_36a350;
        case 0x36a358u: goto label_36a358;
        case 0x36a36cu: goto label_36a36c;
        case 0x36a374u: goto label_36a374;
        case 0x36a388u: goto label_36a388;
        case 0x36a390u: goto label_36a390;
        case 0x36a3a4u: goto label_36a3a4;
        case 0x36a3acu: goto label_36a3ac;
        case 0x36a3c0u: goto label_36a3c0;
        case 0x36a3c8u: goto label_36a3c8;
        case 0x36a3e8u: goto label_36a3e8;
        case 0x36a400u: goto label_36a400;
        case 0x36a408u: goto label_36a408;
        case 0x36a420u: goto label_36a420;
        case 0x36a438u: goto label_36a438;
        case 0x36a440u: goto label_36a440;
        case 0x36a458u: goto label_36a458;
        case 0x36a470u: goto label_36a470;
        case 0x36a478u: goto label_36a478;
        case 0x36a490u: goto label_36a490;
        case 0x36a4a8u: goto label_36a4a8;
        case 0x36a4b0u: goto label_36a4b0;
        case 0x36a530u: goto label_36a530;
        case 0x36a538u: goto label_36a538;
        case 0x36a548u: goto label_36a548;
        case 0x36a55cu: goto label_36a55c;
        case 0x36a570u: goto label_36a570;
        case 0x36a580u: goto label_36a580;
        case 0x36a594u: goto label_36a594;
        case 0x36a5a8u: goto label_36a5a8;
        case 0x36a5b8u: goto label_36a5b8;
        case 0x36a5ccu: goto label_36a5cc;
        case 0x36a5e0u: goto label_36a5e0;
        case 0x36a5f0u: goto label_36a5f0;
        case 0x36a604u: goto label_36a604;
        default: break;
    }

    ctx->pc = 0x36a1a0u;

    // 0x36a1a0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x36a1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x36a1a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36a1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36a1a8: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x36a1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
    // 0x36a1ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36a1acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a1b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x36a1b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a1b4: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x36a1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x36a1b8: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x36a1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x36a1bc: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x36a1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
    // 0x36a1c0: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x36a1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
    // 0x36a1c4: 0x7fb50100  sq          $s5, 0x100($sp)
    ctx->pc = 0x36a1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 21));
    // 0x36a1c8: 0x7fb600f0  sq          $s6, 0xF0($sp)
    ctx->pc = 0x36a1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 22));
    // 0x36a1cc: 0x7fb700e0  sq          $s7, 0xE0($sp)
    ctx->pc = 0x36a1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 23));
    // 0x36a1d0: 0x7fbe00d0  sq          $fp, 0xD0($sp)
    ctx->pc = 0x36a1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 30));
    // 0x36a1d4: 0xe7b80180  swc1        $f24, 0x180($sp)
    ctx->pc = 0x36a1d4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x36a1d8: 0xe7b70178  swc1        $f23, 0x178($sp)
    ctx->pc = 0x36a1d8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x36a1dc: 0xe7b60170  swc1        $f22, 0x170($sp)
    ctx->pc = 0x36a1dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x36a1e0: 0xe7b50168  swc1        $f21, 0x168($sp)
    ctx->pc = 0x36a1e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x36a1e4: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x36a1e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x36a1e8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x36a1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x36a1ec: 0xc102488  jal         func_409220
    ctx->pc = 0x36A1ECu;
    SET_GPR_U32(ctx, 31, 0x36A1F4u);
    ctx->pc = 0x36A1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A1ECu;
    // 0x36a1f0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36A1ECu, 0x36A1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A1F4u;
label_36a1f4:
    // 0x36a1f4: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x36a1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x36a1f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36a1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a1fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36a1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36a200: 0xc102488  jal         func_409220
    ctx->pc = 0x36A200u;
    SET_GPR_U32(ctx, 31, 0x36A208u);
    ctx->pc = 0x36A204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A200u;
    // 0x36a204: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36A200u, 0x36A208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A208u;
label_36a208:
    // 0x36a208: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x36a208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
    // 0x36a20c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36a20cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a210: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36a210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36a214: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36A214u;
    SET_GPR_U32(ctx, 31, 0x36A21Cu);
    ctx->pc = 0x36A218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A214u;
    // 0x36a218: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36A214u, 0x36A21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A21Cu;
label_36a21c:
    // 0x36a21c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36A21Cu;
    SET_GPR_U32(ctx, 31, 0x36A224u);
    ctx->pc = 0x36A220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A21Cu;
    // 0x36a220: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36A21Cu, 0x36A224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A224u;
label_36a224:
    // 0x36a224: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x36a224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
    // 0x36a228: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36a228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a22c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x36a22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36a230: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36A230u;
    SET_GPR_U32(ctx, 31, 0x36A238u);
    ctx->pc = 0x36A234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A230u;
    // 0x36a234: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36A230u, 0x36A238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A238u;
label_36a238:
    // 0x36a238: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36A238u;
    SET_GPR_U32(ctx, 31, 0x36A240u);
    ctx->pc = 0x36A23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A238u;
    // 0x36a23c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36A238u, 0x36A240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A240u;
label_36a240:
    // 0x36a240: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x36a240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    // 0x36a244: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36a244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a248: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x36a248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36a24c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36A24Cu;
    SET_GPR_U32(ctx, 31, 0x36A254u);
    ctx->pc = 0x36A250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A24Cu;
    // 0x36a250: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36A24Cu, 0x36A254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A254u;
label_36a254:
    // 0x36a254: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36A254u;
    SET_GPR_U32(ctx, 31, 0x36A25Cu);
    ctx->pc = 0x36A258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A254u;
    // 0x36a258: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36A254u, 0x36A25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A25Cu;
label_36a25c:
    // 0x36a25c: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x36a25cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x36a260: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36a260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a264: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x36a264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36a268: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36A268u;
    SET_GPR_U32(ctx, 31, 0x36A270u);
    ctx->pc = 0x36A26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A268u;
    // 0x36a26c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36A268u, 0x36A270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A270u;
label_36a270:
    // 0x36a270: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36A270u;
    SET_GPR_U32(ctx, 31, 0x36A278u);
    ctx->pc = 0x36A274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A270u;
    // 0x36a274: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36A270u, 0x36A278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A278u;
label_36a278:
    // 0x36a278: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x36a278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x36a27c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36a27cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a280: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x36a280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x36a284: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36A284u;
    SET_GPR_U32(ctx, 31, 0x36A28Cu);
    ctx->pc = 0x36A288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A284u;
    // 0x36a288: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36A284u, 0x36A28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A28Cu;
label_36a28c:
    // 0x36a28c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36A28Cu;
    SET_GPR_U32(ctx, 31, 0x36A294u);
    ctx->pc = 0x36A290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A28Cu;
    // 0x36a290: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36A28Cu, 0x36A294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A294u;
label_36a294:
    // 0x36a294: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x36a294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x36a298: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36a298u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a29c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x36a29cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x36a2a0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36A2A0u;
    SET_GPR_U32(ctx, 31, 0x36A2A8u);
    ctx->pc = 0x36A2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A2A0u;
    // 0x36a2a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36A2A0u, 0x36A2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A2A8u;
label_36a2a8:
    // 0x36a2a8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36A2A8u;
    SET_GPR_U32(ctx, 31, 0x36A2B0u);
    ctx->pc = 0x36A2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A2A8u;
    // 0x36a2ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36A2A8u, 0x36A2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A2B0u;
label_36a2b0:
    // 0x36a2b0: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x36a2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x36a2b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36a2b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a2b8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x36a2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x36a2bc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36A2BCu;
    SET_GPR_U32(ctx, 31, 0x36A2C4u);
    ctx->pc = 0x36A2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A2BCu;
    // 0x36a2c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36A2BCu, 0x36A2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A2C4u;
label_36a2c4:
    // 0x36a2c4: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36A2C4u;
    SET_GPR_U32(ctx, 31, 0x36A2CCu);
    ctx->pc = 0x36A2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A2C4u;
    // 0x36a2c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36A2C4u, 0x36A2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A2CCu;
label_36a2cc:
    // 0x36a2cc: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x36a2ccu;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x36a2d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36a2d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a2d4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x36a2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x36a2d8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36A2D8u;
    SET_GPR_U32(ctx, 31, 0x36A2E0u);
    ctx->pc = 0x36A2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A2D8u;
    // 0x36a2dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36A2D8u, 0x36A2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A2E0u;
label_36a2e0:
    // 0x36a2e0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36A2E0u;
    SET_GPR_U32(ctx, 31, 0x36A2E8u);
    ctx->pc = 0x36A2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A2E0u;
    // 0x36a2e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36A2E0u, 0x36A2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A2E8u;
label_36a2e8:
    // 0x36a2e8: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x36a2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x36a2ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36a2ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a2f0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x36a2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x36a2f4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36A2F4u;
    SET_GPR_U32(ctx, 31, 0x36A2FCu);
    ctx->pc = 0x36A2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A2F4u;
    // 0x36a2f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36A2F4u, 0x36A2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A2FCu;
label_36a2fc:
    // 0x36a2fc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36A2FCu;
    SET_GPR_U32(ctx, 31, 0x36A304u);
    ctx->pc = 0x36A300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A2FCu;
    // 0x36a300: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36A2FCu, 0x36A304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A304u;
label_36a304:
    // 0x36a304: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x36a304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x36a308: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36a308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a30c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x36a30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x36a310: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36A310u;
    SET_GPR_U32(ctx, 31, 0x36A318u);
    ctx->pc = 0x36A314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A310u;
    // 0x36a314: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36A310u, 0x36A318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A318u;
label_36a318:
    // 0x36a318: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36A318u;
    SET_GPR_U32(ctx, 31, 0x36A320u);
    ctx->pc = 0x36A31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A318u;
    // 0x36a31c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36A318u, 0x36A320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A320u;
label_36a320:
    // 0x36a320: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x36a320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x36a324: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36a324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a328: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x36a328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x36a32c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36A32Cu;
    SET_GPR_U32(ctx, 31, 0x36A334u);
    ctx->pc = 0x36A330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A32Cu;
    // 0x36a330: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36A32Cu, 0x36A334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A334u;
label_36a334:
    // 0x36a334: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36A334u;
    SET_GPR_U32(ctx, 31, 0x36A33Cu);
    ctx->pc = 0x36A338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A334u;
    // 0x36a338: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36A334u, 0x36A33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A33Cu;
label_36a33c:
    // 0x36a33c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36a33cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a340: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x36a340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x36a344: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x36a344u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x36a348: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36A348u;
    SET_GPR_U32(ctx, 31, 0x36A350u);
    ctx->pc = 0x36A34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A348u;
    // 0x36a34c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36A348u, 0x36A350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A350u;
label_36a350:
    // 0x36a350: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36A350u;
    SET_GPR_U32(ctx, 31, 0x36A358u);
    ctx->pc = 0x36A354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A350u;
    // 0x36a354: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36A350u, 0x36A358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A358u;
label_36a358:
    // 0x36a358: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36a358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a35c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x36a35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x36a360: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x36a360u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x36a364: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36A364u;
    SET_GPR_U32(ctx, 31, 0x36A36Cu);
    ctx->pc = 0x36A368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A364u;
    // 0x36a368: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36A364u, 0x36A36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A36Cu;
label_36a36c:
    // 0x36a36c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36A36Cu;
    SET_GPR_U32(ctx, 31, 0x36A374u);
    ctx->pc = 0x36A370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A36Cu;
    // 0x36a370: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36A36Cu, 0x36A374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A374u;
label_36a374:
    // 0x36a374: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36a374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a378: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x36a378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x36a37c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x36a37cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x36a380: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36A380u;
    SET_GPR_U32(ctx, 31, 0x36A388u);
    ctx->pc = 0x36A384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A380u;
    // 0x36a384: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36A380u, 0x36A388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A388u;
label_36a388:
    // 0x36a388: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36A388u;
    SET_GPR_U32(ctx, 31, 0x36A390u);
    ctx->pc = 0x36A38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A388u;
    // 0x36a38c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36A388u, 0x36A390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A390u;
label_36a390:
    // 0x36a390: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x36a390u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x36a394: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36a394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a398: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x36a398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x36a39c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36A39Cu;
    SET_GPR_U32(ctx, 31, 0x36A3A4u);
    ctx->pc = 0x36A3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A39Cu;
    // 0x36a3a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36A39Cu, 0x36A3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A3A4u;
label_36a3a4:
    // 0x36a3a4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36A3A4u;
    SET_GPR_U32(ctx, 31, 0x36A3ACu);
    ctx->pc = 0x36A3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A3A4u;
    // 0x36a3a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36A3A4u, 0x36A3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A3ACu;
label_36a3ac:
    // 0x36a3ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36a3acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a3b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36a3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a3b4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x36a3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x36a3b8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36A3B8u;
    SET_GPR_U32(ctx, 31, 0x36A3C0u);
    ctx->pc = 0x36A3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A3B8u;
    // 0x36a3bc: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36A3B8u, 0x36A3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A3C0u;
label_36a3c0:
    // 0x36a3c0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36A3C0u;
    SET_GPR_U32(ctx, 31, 0x36A3C8u);
    ctx->pc = 0x36A3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A3C0u;
    // 0x36a3c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36A3C0u, 0x36A3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A3C8u;
label_36a3c8:
    // 0x36a3c8: 0x27b40050  addiu       $s4, $sp, 0x50
    ctx->pc = 0x36a3c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x36a3cc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x36a3ccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a3d0: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x36a3d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x36a3d4: 0x27b50070  addiu       $s5, $sp, 0x70
    ctx->pc = 0x36a3d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x36a3d8: 0x27b60080  addiu       $s6, $sp, 0x80
    ctx->pc = 0x36a3d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x36a3dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36a3dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a3e0: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x36a3e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a3e4: 0x0  nop
    ctx->pc = 0x36a3e4u;
    // NOP
label_36a3e8:
    // 0x36a3e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36a3e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36a3ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36a3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a3f0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x36a3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x36a3f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36a3f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a3f8: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x36A3F8u;
    SET_GPR_U32(ctx, 31, 0x36A400u);
    ctx->pc = 0x36A3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A3F8u;
    // 0x36a3fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x36A3F8u, 0x36A400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A400u;
label_36a400:
    // 0x36a400: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36A400u;
    SET_GPR_U32(ctx, 31, 0x36A408u);
    ctx->pc = 0x36A404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A400u;
    // 0x36a404: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36A400u, 0x36A408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A408u;
label_36a408:
    // 0x36a408: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x36a408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x36a40c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x36a40cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x36a410: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x36A410u;
    {
        const bool branch_taken_0x36a410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A410u;
        // 0x36a414: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a410) {
            ctx->pc = 0x36A3E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a3e8;
        }
    }
    ctx->pc = 0x36A418u;
    // 0x36a418: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36a418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a41c: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x36a41cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36a420:
    // 0x36a420: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36a420u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36a424: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36a424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a428: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x36a428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x36a42c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36a42cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a430: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x36A430u;
    SET_GPR_U32(ctx, 31, 0x36A438u);
    ctx->pc = 0x36A434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A430u;
    // 0x36a434: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x36A430u, 0x36A438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A438u;
label_36a438:
    // 0x36a438: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36A438u;
    SET_GPR_U32(ctx, 31, 0x36A440u);
    ctx->pc = 0x36A43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A438u;
    // 0x36a43c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36A438u, 0x36A440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A440u;
label_36a440:
    // 0x36a440: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x36a440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x36a444: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x36a444u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x36a448: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x36A448u;
    {
        const bool branch_taken_0x36a448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A448u;
        // 0x36a44c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a448) {
            ctx->pc = 0x36A420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a420;
        }
    }
    ctx->pc = 0x36A450u;
    // 0x36a450: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36a450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a454: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x36a454u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_36a458:
    // 0x36a458: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36a458u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36a45c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36a45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a460: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x36a460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x36a464: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36a464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a468: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x36A468u;
    SET_GPR_U32(ctx, 31, 0x36A470u);
    ctx->pc = 0x36A46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A468u;
    // 0x36a46c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x36A468u, 0x36A470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A470u;
label_36a470:
    // 0x36a470: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36A470u;
    SET_GPR_U32(ctx, 31, 0x36A478u);
    ctx->pc = 0x36A474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A470u;
    // 0x36a474: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36A470u, 0x36A478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A478u;
label_36a478:
    // 0x36a478: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x36a478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x36a47c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x36a47cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x36a480: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x36A480u;
    {
        const bool branch_taken_0x36a480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A480u;
        // 0x36a484: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a480) {
            ctx->pc = 0x36A458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a458;
        }
    }
    ctx->pc = 0x36A488u;
    // 0x36a488: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36a488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a48c: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x36a48cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_36a490:
    // 0x36a490: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36a490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36a494: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36a494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a498: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x36a498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x36a49c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36a49cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a4a0: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x36A4A0u;
    SET_GPR_U32(ctx, 31, 0x36A4A8u);
    ctx->pc = 0x36A4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A4A0u;
    // 0x36a4a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x36A4A0u, 0x36A4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A4A8u;
label_36a4a8:
    // 0x36a4a8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36A4A8u;
    SET_GPR_U32(ctx, 31, 0x36A4B0u);
    ctx->pc = 0x36A4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A4A8u;
    // 0x36a4ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36A4A8u, 0x36A4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A4B0u;
label_36a4b0:
    // 0x36a4b0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x36a4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x36a4b4: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x36a4b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x36a4b8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x36A4B8u;
    {
        const bool branch_taken_0x36a4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A4B8u;
        // 0x36a4bc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a4b8) {
            ctx->pc = 0x36A490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a490;
        }
    }
    ctx->pc = 0x36A4C0u;
    // 0x36a4c0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x36a4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x36a4c4: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x36a4c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x36a4c8: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x36a4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36a4cc: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x36a4ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x36a4d0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x36a4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x36a4d4: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x36a4d4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x36a4d8: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x36a4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x36a4dc: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x36a4dcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x36a4e0: 0x8fa50094  lw          $a1, 0x94($sp)
    ctx->pc = 0x36a4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x36a4e4: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x36a4e4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x36a4e8: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x36a4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x36a4ec: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x36a4ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x36a4f0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x36a4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x36a4f4: 0x260582d  daddu       $t3, $s3, $zero
    ctx->pc = 0x36a4f4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a4f8: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x36a4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x36a4fc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x36a4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x36a500: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x36a500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x36a504: 0x8fa7009c  lw          $a3, 0x9C($sp)
    ctx->pc = 0x36a504u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x36a508: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x36a508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x36a50c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36a50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36a510: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x36a510u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x36a514: 0x8fa900a4  lw          $t1, 0xA4($sp)
    ctx->pc = 0x36a514u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x36a518: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x36a518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x36a51c: 0xafbe0028  sw          $fp, 0x28($sp)
    ctx->pc = 0x36a51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 30));
    // 0x36a520: 0xafb70030  sw          $s7, 0x30($sp)
    ctx->pc = 0x36a520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 23));
    // 0x36a524: 0xafb50038  sw          $s5, 0x38($sp)
    ctx->pc = 0x36a524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 21));
    // 0x36a528: 0xc0e43c6  jal         func_390F18
    ctx->pc = 0x36A528u;
    SET_GPR_U32(ctx, 31, 0x36A530u);
    ctx->pc = 0x36A52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A528u;
    // 0x36a52c: 0xafb60040  sw          $s6, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390F18u, 0x36A528u, 0x36A530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A530u;
label_36a530:
    // 0x36a530: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36a530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a534: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x36a534u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_36a538:
    // 0x36a538: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x36a538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x36a53c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36a53cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36a540: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x36A540u;
    SET_GPR_U32(ctx, 31, 0x36A548u);
    ctx->pc = 0x36A544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A540u;
    // 0x36a544: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x36A540u, 0x36A548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A548u;
label_36a548:
    // 0x36a548: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x36a548u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a54c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36a54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a550: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x36a550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x36a554: 0xc102576  jal         func_4095D8
    ctx->pc = 0x36A554u;
    SET_GPR_U32(ctx, 31, 0x36A55Cu);
    ctx->pc = 0x36A558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A554u;
    // 0x36a558: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x36A554u, 0x36A55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A55Cu;
label_36a55c:
    // 0x36a55c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x36a55cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x36a560: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x36A560u;
    {
        const bool branch_taken_0x36a560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A560u;
        // 0x36a564: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a560) {
            ctx->pc = 0x36A538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a538;
        }
    }
    ctx->pc = 0x36A568u;
    // 0x36a568: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36a568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a56c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x36a56cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_36a570:
    // 0x36a570: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x36a570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x36a574: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36a574u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36a578: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x36A578u;
    SET_GPR_U32(ctx, 31, 0x36A580u);
    ctx->pc = 0x36A57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A578u;
    // 0x36a57c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x36A578u, 0x36A580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A580u;
label_36a580:
    // 0x36a580: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x36a580u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a584: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36a584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a588: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x36a588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x36a58c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x36A58Cu;
    SET_GPR_U32(ctx, 31, 0x36A594u);
    ctx->pc = 0x36A590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A58Cu;
    // 0x36a590: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x36A58Cu, 0x36A594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A594u;
label_36a594:
    // 0x36a594: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x36a594u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x36a598: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x36A598u;
    {
        const bool branch_taken_0x36a598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A598u;
        // 0x36a59c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a598) {
            ctx->pc = 0x36A570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a570;
        }
    }
    ctx->pc = 0x36A5A0u;
    // 0x36a5a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36a5a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a5a4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x36a5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_36a5a8:
    // 0x36a5a8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x36a5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x36a5ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36a5acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36a5b0: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x36A5B0u;
    SET_GPR_U32(ctx, 31, 0x36A5B8u);
    ctx->pc = 0x36A5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A5B0u;
    // 0x36a5b4: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x36A5B0u, 0x36A5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A5B8u;
label_36a5b8:
    // 0x36a5b8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x36a5b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a5bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36a5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a5c0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x36a5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x36a5c4: 0xc102576  jal         func_4095D8
    ctx->pc = 0x36A5C4u;
    SET_GPR_U32(ctx, 31, 0x36A5CCu);
    ctx->pc = 0x36A5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A5C4u;
    // 0x36a5c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x36A5C4u, 0x36A5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A5CCu;
label_36a5cc:
    // 0x36a5cc: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x36a5ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x36a5d0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x36A5D0u;
    {
        const bool branch_taken_0x36a5d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A5D0u;
        // 0x36a5d4: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a5d0) {
            ctx->pc = 0x36A5A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a5a8;
        }
    }
    ctx->pc = 0x36A5D8u;
    // 0x36a5d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36a5d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a5dc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x36a5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_36a5e0:
    // 0x36a5e0: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x36a5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x36a5e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36a5e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36a5e8: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x36A5E8u;
    SET_GPR_U32(ctx, 31, 0x36A5F0u);
    ctx->pc = 0x36A5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A5E8u;
    // 0x36a5ec: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x36A5E8u, 0x36A5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A5F0u;
label_36a5f0:
    // 0x36a5f0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x36a5f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a5f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36a5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a5f8: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x36a5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x36a5fc: 0xc102576  jal         func_4095D8
    ctx->pc = 0x36A5FCu;
    SET_GPR_U32(ctx, 31, 0x36A604u);
    ctx->pc = 0x36A600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A5FCu;
    // 0x36a600: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x36A5FCu, 0x36A604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A604u;
label_36a604:
    // 0x36a604: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x36a604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x36a608: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x36A608u;
    {
        const bool branch_taken_0x36a608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A608u;
        // 0x36a60c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a608) {
            ctx->pc = 0x36A5E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a5e0;
        }
    }
    ctx->pc = 0x36A610u;
    // 0x36a610: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x36a610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x36a614: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36a614u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a618: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x36a618u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x36a61c: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x36a61cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x36a620: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x36a620u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x36a624: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x36a624u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x36a628: 0x7bb50100  lq          $s5, 0x100($sp)
    ctx->pc = 0x36a628u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x36a62c: 0x7bb600f0  lq          $s6, 0xF0($sp)
    ctx->pc = 0x36a62cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x36a630: 0x7bb700e0  lq          $s7, 0xE0($sp)
    ctx->pc = 0x36a630u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x36a634: 0x7bbe00d0  lq          $fp, 0xD0($sp)
    ctx->pc = 0x36a634u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x36a638: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x36a638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x36a63c: 0xc7b80180  lwc1        $f24, 0x180($sp)
    ctx->pc = 0x36a63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x36a640: 0xc7b70178  lwc1        $f23, 0x178($sp)
    ctx->pc = 0x36a640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x36a644: 0xc7b60170  lwc1        $f22, 0x170($sp)
    ctx->pc = 0x36a644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x36a648: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x36a648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x36a64c: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x36a64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36a650: 0x3e00008  jr          $ra
    ctx->pc = 0x36A650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A650u;
        // 0x36a654: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A658u;
}
