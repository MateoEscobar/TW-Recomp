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

// Function: sub_0027F1A0
// Address: 0x27f1a0 - 0x27f3b0
void sub_0027F1A0_0x27f1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F1A0_0x27f1a0");
#endif

    switch (ctx->pc) {
        case 0x27f1c4u: goto label_27f1c4;
        case 0x27f1d0u: goto label_27f1d0;
        case 0x27f1e4u: goto label_27f1e4;
        case 0x27f1f8u: goto label_27f1f8;
        case 0x27f208u: goto label_27f208;
        case 0x27f218u: goto label_27f218;
        case 0x27f228u: goto label_27f228;
        case 0x27f240u: goto label_27f240;
        case 0x27f24cu: goto label_27f24c;
        case 0x27f274u: goto label_27f274;
        case 0x27f28cu: goto label_27f28c;
        case 0x27f29cu: goto label_27f29c;
        case 0x27f2b0u: goto label_27f2b0;
        case 0x27f2c4u: goto label_27f2c4;
        case 0x27f2d4u: goto label_27f2d4;
        case 0x27f308u: goto label_27f308;
        case 0x27f318u: goto label_27f318;
        case 0x27f328u: goto label_27f328;
        case 0x27f370u: goto label_27f370;
        case 0x27f380u: goto label_27f380;
        default: break;
    }

    ctx->pc = 0x27f1a0u;

    // 0x27f1a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27f1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27f1a4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x27f1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x27f1a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27f1a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f1ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x27f1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x27f1b0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x27f1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x27f1b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27f1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27f1b8: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x27f1b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x27f1bc: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x27F1BCu;
    SET_GPR_U32(ctx, 31, 0x27F1C4u);
    ctx->pc = 0x27F1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F1BCu;
    // 0x27f1c0: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x27F1BCu, 0x27F1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F1C4u;
label_27f1c4:
    // 0x27f1c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27f1c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f1c8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x27F1C8u;
    SET_GPR_U32(ctx, 31, 0x27F1D0u);
    ctx->pc = 0x27F1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F1C8u;
    // 0x27f1cc: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x27F1C8u, 0x27F1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F1D0u;
label_27f1d0:
    // 0x27f1d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27f1d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f1d4: 0x1220006d  beqz        $s1, . + 4 + (0x6D << 2)
    ctx->pc = 0x27F1D4u;
    {
        const bool branch_taken_0x27f1d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F1D4u;
        // 0x27f1d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f1d4) {
            ctx->pc = 0x27F38Cu;
            goto label_27f38c;
        }
    }
    ctx->pc = 0x27F1DCu;
    // 0x27f1dc: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27F1DCu;
    SET_GPR_U32(ctx, 31, 0x27F1E4u);
    ctx->pc = 0x27F1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F1DCu;
    // 0x27f1e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27F1DCu, 0x27F1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F1E4u;
label_27f1e4:
    // 0x27f1e4: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x27F1E4u;
    {
        const bool branch_taken_0x27f1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F1E4u;
        // 0x27f1e8: 0x3c0505c7  lui         $a1, 0x5C7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1479 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f1e4) {
            ctx->pc = 0x27F388u;
            goto label_27f388;
        }
    }
    ctx->pc = 0x27F1ECu;
    // 0x27f1ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f1f0: 0xc089998  jal         func_226660
    ctx->pc = 0x27F1F0u;
    SET_GPR_U32(ctx, 31, 0x27F1F8u);
    ctx->pc = 0x27F1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F1F0u;
    // 0x27f1f4: 0x34a5eee0  ori         $a1, $a1, 0xEEE0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61152);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x27F1F0u, 0x27F1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F1F8u;
label_27f1f8:
    // 0x27f1f8: 0x14400064  bnez        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x27F1F8u;
    {
        const bool branch_taken_0x27f1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F1F8u;
        // 0x27f1fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f1f8) {
            ctx->pc = 0x27F38Cu;
            goto label_27f38c;
        }
    }
    ctx->pc = 0x27F200u;
    // 0x27f200: 0xc09ef7e  jal         func_27BDF8
    ctx->pc = 0x27F200u;
    SET_GPR_U32(ctx, 31, 0x27F208u);
    ctx->pc = 0x27F204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F200u;
    // 0x27f204: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BDF8u, 0x27F200u, 0x27F208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F208u;
label_27f208:
    // 0x27f208: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27F208u;
    {
        const bool branch_taken_0x27f208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f208) {
            ctx->pc = 0x27F220u;
            goto label_27f220;
        }
    }
    ctx->pc = 0x27F210u;
    // 0x27f210: 0xc09ef94  jal         func_27BE50
    ctx->pc = 0x27F210u;
    SET_GPR_U32(ctx, 31, 0x27F218u);
    ctx->pc = 0x27F214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F210u;
    // 0x27f214: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BE50u, 0x27F210u, 0x27F218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F218u;
label_27f218:
    // 0x27f218: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x27F218u;
    {
        const bool branch_taken_0x27f218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F218u;
        // 0x27f21c: 0x3c0505c7  lui         $a1, 0x5C7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1479 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f218) {
            ctx->pc = 0x27F2B8u;
            goto label_27f2b8;
        }
    }
    ctx->pc = 0x27F220u;
label_27f220:
    // 0x27f220: 0xc08963c  jal         func_2258F0
    ctx->pc = 0x27F220u;
    SET_GPR_U32(ctx, 31, 0x27F228u);
    ctx->pc = 0x27F224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F220u;
    // 0x27f224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258F0u, 0x27F220u, 0x27F228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F228u;
label_27f228:
    // 0x27f228: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x27F228u;
    {
        const bool branch_taken_0x27f228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F228u;
        // 0x27f22c: 0x3c0505c7  lui         $a1, 0x5C7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1479 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f228) {
            ctx->pc = 0x27F2B8u;
            goto label_27f2b8;
        }
    }
    ctx->pc = 0x27F230u;
    // 0x27f230: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27f230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27f234: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x27f234u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x27f238: 0xc089944  jal         func_226510
    ctx->pc = 0x27F238u;
    SET_GPR_U32(ctx, 31, 0x27F240u);
    ctx->pc = 0x27F23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F238u;
    // 0x27f23c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226510u, 0x27F238u, 0x27F240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F240u;
label_27f240:
    // 0x27f240: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x27f240u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x27f244: 0xc088cea  jal         func_2233A8
    ctx->pc = 0x27F244u;
    SET_GPR_U32(ctx, 31, 0x27F24Cu);
    ctx->pc = 0x27F248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F244u;
    // 0x27f248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2233A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2233A8u, 0x27F244u, 0x27F24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F24Cu;
label_27f24c:
    // 0x27f24c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27f24cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f250: 0x0  nop
    ctx->pc = 0x27f250u;
    // NOP
    // 0x27f254: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27f254u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27f258: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x27f258u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x27f25c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x27f25cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27f260: 0x0  nop
    ctx->pc = 0x27f260u;
    // NOP
    // 0x27f264: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
    ctx->pc = 0x27F264u;
    {
        const bool branch_taken_0x27f264 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27f264) {
            ctx->pc = 0x27F268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F264u;
            // 0x27f268: 0x3c0505c7  lui         $a1, 0x5C7 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1479 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F2B8u;
            goto label_27f2b8;
        }
    }
    ctx->pc = 0x27F26Cu;
    // 0x27f26c: 0xc088cea  jal         func_2233A8
    ctx->pc = 0x27F26Cu;
    SET_GPR_U32(ctx, 31, 0x27F274u);
    ctx->pc = 0x27F270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F26Cu;
    // 0x27f270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2233A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2233A8u, 0x27F26Cu, 0x27F274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F274u;
label_27f274:
    // 0x27f274: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x27f274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27f278: 0x0  nop
    ctx->pc = 0x27f278u;
    // NOP
    // 0x27f27c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x27f27cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x27f280: 0x460cab03  div.s       $f12, $f21, $f12
    ctx->pc = 0x27f280u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[21], ctx->f[12]); }
    // 0x27f284: 0xc089912  jal         func_226448
    ctx->pc = 0x27F284u;
    SET_GPR_U32(ctx, 31, 0x27F28Cu);
    ctx->pc = 0x27F288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F284u;
    // 0x27f288: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226448u, 0x27F284u, 0x27F28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F28Cu;
label_27f28c:
    // 0x27f28c: 0x3c0505c7  lui         $a1, 0x5C7
    ctx->pc = 0x27f28cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1479 << 16));
    // 0x27f290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f294: 0xc089998  jal         func_226660
    ctx->pc = 0x27F294u;
    SET_GPR_U32(ctx, 31, 0x27F29Cu);
    ctx->pc = 0x27F298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F294u;
    // 0x27f298: 0x34a5eae1  ori         $a1, $a1, 0xEAE1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)60129);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x27F294u, 0x27F29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F29Cu;
label_27f29c:
    // 0x27f29c: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x27F29Cu;
    {
        const bool branch_taken_0x27f29c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F29Cu;
        // 0x27f2a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f29c) {
            ctx->pc = 0x27F38Cu;
            goto label_27f38c;
        }
    }
    ctx->pc = 0x27F2A4u;
    // 0x27f2a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f2a8: 0xc09c7bc  jal         func_271EF0
    ctx->pc = 0x27F2A8u;
    SET_GPR_U32(ctx, 31, 0x27F2B0u);
    ctx->pc = 0x27F2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F2A8u;
    // 0x27f2ac: 0x240500fa  addiu       $a1, $zero, 0xFA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271EF0u, 0x27F2A8u, 0x27F2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F2B0u;
label_27f2b0:
    // 0x27f2b0: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x27F2B0u;
    {
        const bool branch_taken_0x27f2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F2B0u;
        // 0x27f2b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f2b0) {
            ctx->pc = 0x27F38Cu;
            goto label_27f38c;
        }
    }
    ctx->pc = 0x27F2B8u;
label_27f2b8:
    // 0x27f2b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f2bc: 0xc089998  jal         func_226660
    ctx->pc = 0x27F2BCu;
    SET_GPR_U32(ctx, 31, 0x27F2C4u);
    ctx->pc = 0x27F2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F2BCu;
    // 0x27f2c0: 0x34a5eae1  ori         $a1, $a1, 0xEAE1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)60129);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x27F2BCu, 0x27F2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F2C4u;
label_27f2c4:
    // 0x27f2c4: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x27F2C4u;
    {
        const bool branch_taken_0x27f2c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F2C4u;
        // 0x27f2c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f2c4) {
            ctx->pc = 0x27F38Cu;
            goto label_27f38c;
        }
    }
    ctx->pc = 0x27F2CCu;
    // 0x27f2cc: 0xc09efcc  jal         func_27BF30
    ctx->pc = 0x27F2CCu;
    SET_GPR_U32(ctx, 31, 0x27F2D4u);
    ctx->pc = 0x27F2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F2CCu;
    // 0x27f2d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BF30u, 0x27F2CCu, 0x27F2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F2D4u;
label_27f2d4:
    // 0x27f2d4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x27F2D4u;
    {
        const bool branch_taken_0x27f2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f2d4) {
            ctx->pc = 0x27F320u;
            goto label_27f320;
        }
    }
    ctx->pc = 0x27F2DCu;
    // 0x27f2dc: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x27f2dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x27f2e0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x27f2e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x27f2e4: 0x31db8  dsll        $v1, $v1, 22
    ctx->pc = 0x27f2e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 22);
    // 0x27f2e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27f2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27f2ec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x27f2ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x27f2f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x27f2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x27f2f4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x27f2f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x27f2f8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27F2F8u;
    {
        const bool branch_taken_0x27f2f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f2f8) {
            ctx->pc = 0x27F320u;
            goto label_27f320;
        }
    }
    ctx->pc = 0x27F300u;
    // 0x27f300: 0xc08960c  jal         func_225830
    ctx->pc = 0x27F300u;
    SET_GPR_U32(ctx, 31, 0x27F308u);
    ctx->pc = 0x27F304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F300u;
    // 0x27f304: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225830u, 0x27F300u, 0x27F308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F308u;
label_27f308:
    // 0x27f308: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27F308u;
    {
        const bool branch_taken_0x27f308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f308) {
            ctx->pc = 0x27F320u;
            goto label_27f320;
        }
    }
    ctx->pc = 0x27F310u;
    // 0x27f310: 0xc09c51c  jal         func_271470
    ctx->pc = 0x27F310u;
    SET_GPR_U32(ctx, 31, 0x27F318u);
    ctx->pc = 0x27F314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F310u;
    // 0x27f314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271470u, 0x27F310u, 0x27F318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F318u;
label_27f318:
    // 0x27f318: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x27F318u;
    {
        const bool branch_taken_0x27f318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F318u;
        // 0x27f31c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f318) {
            ctx->pc = 0x27F38Cu;
            goto label_27f38c;
        }
    }
    ctx->pc = 0x27F320u;
label_27f320:
    // 0x27f320: 0xc09efaa  jal         func_27BEA8
    ctx->pc = 0x27F320u;
    SET_GPR_U32(ctx, 31, 0x27F328u);
    ctx->pc = 0x27F324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F320u;
    // 0x27f324: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BEA8u, 0x27F320u, 0x27F328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F328u;
label_27f328:
    // 0x27f328: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x27F328u;
    {
        const bool branch_taken_0x27f328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F328u;
        // 0x27f32c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f328) {
            ctx->pc = 0x27F38Cu;
            goto label_27f38c;
        }
    }
    ctx->pc = 0x27F330u;
    // 0x27f330: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x27f330u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x27f334: 0x211ba  dsrl        $v0, $v0, 6
    ctx->pc = 0x27f334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 6);
    // 0x27f338: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27f338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27f33c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x27F33Cu;
    {
        const bool branch_taken_0x27f33c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F33Cu;
        // 0x27f340: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f33c) {
            ctx->pc = 0x27F38Cu;
            goto label_27f38c;
        }
    }
    ctx->pc = 0x27F344u;
    // 0x27f344: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x27f344u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x27f348: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x27f348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x27f34c: 0x31c78  dsll        $v1, $v1, 17
    ctx->pc = 0x27f34cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 17);
    // 0x27f350: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27f350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27f354: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x27f354u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x27f358: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x27f358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x27f35c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x27f35cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x27f360: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27F360u;
    {
        const bool branch_taken_0x27f360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F360u;
        // 0x27f364: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f360) {
            ctx->pc = 0x27F38Cu;
            goto label_27f38c;
        }
    }
    ctx->pc = 0x27F368u;
    // 0x27f368: 0xc08960c  jal         func_225830
    ctx->pc = 0x27F368u;
    SET_GPR_U32(ctx, 31, 0x27F370u);
    ctx->pc = 0x27F36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F368u;
    // 0x27f36c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225830u, 0x27F368u, 0x27F370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F370u;
label_27f370:
    // 0x27f370: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27F370u;
    {
        const bool branch_taken_0x27f370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F370u;
        // 0x27f374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f370) {
            ctx->pc = 0x27F388u;
            goto label_27f388;
        }
    }
    ctx->pc = 0x27F378u;
    // 0x27f378: 0xc09c8fa  jal         func_2723E8
    ctx->pc = 0x27F378u;
    SET_GPR_U32(ctx, 31, 0x27F380u);
    ctx->pc = 0x27F37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F378u;
    // 0x27f37c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2723E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2723E8u, 0x27F378u, 0x27F380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F380u;
label_27f380:
    // 0x27f380: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27F380u;
    {
        const bool branch_taken_0x27f380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F380u;
        // 0x27f384: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f380) {
            ctx->pc = 0x27F38Cu;
            goto label_27f38c;
        }
    }
    ctx->pc = 0x27F388u;
label_27f388:
    // 0x27f388: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27f388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27f38c:
    // 0x27f38c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x27f38cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27f390: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27f390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27f394: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x27f394u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27f398: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27f398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f39c: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x27f39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27f3a0: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x27f3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27f3a4: 0x3e00008  jr          $ra
    ctx->pc = 0x27F3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F3A4u;
        // 0x27f3a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F3A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F3ACu;
    // 0x27f3ac: 0x0  nop
    ctx->pc = 0x27f3acu;
    // NOP
    ctx->pc = 0x27f3b0u;
}
