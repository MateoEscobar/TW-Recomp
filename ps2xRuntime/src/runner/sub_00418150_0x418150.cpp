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

// Function: sub_00418150
// Address: 0x418150 - 0x4182e8
void sub_00418150_0x418150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00418150_0x418150");
#endif

    switch (ctx->pc) {
        case 0x4181b4u: goto label_4181b4;
        case 0x4181f0u: goto label_4181f0;
        case 0x418200u: goto label_418200;
        case 0x418208u: goto label_418208;
        case 0x418228u: goto label_418228;
        case 0x418240u: goto label_418240;
        case 0x418264u: goto label_418264;
        case 0x418284u: goto label_418284;
        default: break;
    }

    ctx->pc = 0x418150u;

    // 0x418150: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x418150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x418154: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x418154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x418158: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x418158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x41815c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x41815cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418160: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x418160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x418164: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x418164u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418168: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x418168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x41816c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x41816cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418170: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x418170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x418174: 0x241e0006  addiu       $fp, $zero, 0x6
    ctx->pc = 0x418174u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x418178: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x418178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x41817c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x41817cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x418180: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x418180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x418184: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x418184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x418188: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x418188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41818c: 0x12600021  beqz        $s3, . + 4 + (0x21 << 2)
    ctx->pc = 0x41818Cu;
    {
        const bool branch_taken_0x41818c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x418190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41818Cu;
        // 0x418190: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x41818c) {
            ctx->pc = 0x418214u;
            goto label_418214;
        }
    }
    ctx->pc = 0x418194u;
    // 0x418194: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x418194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x418198: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x418198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41819c: 0x24424878  addiu       $v0, $v0, 0x4878
    ctx->pc = 0x41819cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18552));
    // 0x4181a0: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x4181a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4181a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4181a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4181a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4181a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4181ac: 0xc105fb4  jal         func_417ED0
    ctx->pc = 0x4181ACu;
    SET_GPR_U32(ctx, 31, 0x4181B4u);
    ctx->pc = 0x4181B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4181ACu;
    // 0x4181b0: 0xc46c0000  lwc1        $f12, 0x0($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x417ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417ED0u, 0x4181ACu, 0x4181B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4181B4u;
label_4181b4:
    // 0x4181b4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4181b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4181b8: 0x0  nop
    ctx->pc = 0x4181b8u;
    // NOP
    // 0x4181bc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4181bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4181c0: 0x0  nop
    ctx->pc = 0x4181c0u;
    // NOP
    // 0x4181c4: 0x45030013  bc1tl       . + 4 + (0x13 << 2)
    ctx->pc = 0x4181C4u;
    {
        const bool branch_taken_0x4181c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4181c4) {
            ctx->pc = 0x4181C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4181C4u;
            // 0x4181c8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x418214u;
            goto label_418214;
        }
    }
    ctx->pc = 0x4181CCu;
    // 0x4181cc: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x4181ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x4181d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4181D0u;
    {
        const bool branch_taken_0x4181d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4181D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4181D0u;
        // 0x4181d4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4181d0) {
            ctx->pc = 0x4181E4u;
            goto label_4181e4;
        }
    }
    ctx->pc = 0x4181D8u;
    // 0x4181d8: 0x5451000e  bnel        $v0, $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x4181D8u;
    {
        const bool branch_taken_0x4181d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x4181d8) {
            ctx->pc = 0x4181DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4181D8u;
            // 0x4181dc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x418214u;
            goto label_418214;
        }
    }
    ctx->pc = 0x4181E0u;
    // 0x4181e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4181e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4181e4:
    // 0x4181e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4181e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4181e8: 0xc10602c  jal         func_4180B0
    ctx->pc = 0x4181E8u;
    SET_GPR_U32(ctx, 31, 0x4181F0u);
    ctx->pc = 0x4181ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4181E8u;
    // 0x4181ec: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4180B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4180B0u, 0x4181E8u, 0x4181F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4181F0u;
label_4181f0:
    // 0x4181f0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4181F0u;
    {
        const bool branch_taken_0x4181f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4181f0) {
            ctx->pc = 0x4181F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4181F0u;
            // 0x4181f4: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x418210u;
            goto label_418210;
        }
    }
    ctx->pc = 0x4181F8u;
    // 0x4181f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4181F8u;
    {
        const bool branch_taken_0x4181f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4181FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4181F8u;
        // 0x4181fc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4181f8) {
            ctx->pc = 0x418214u;
            goto label_418214;
        }
    }
    ctx->pc = 0x418200u;
label_418200:
    // 0x418200: 0xc086c52  jal         func_21B148
    ctx->pc = 0x418200u;
    SET_GPR_U32(ctx, 31, 0x418208u);
    ctx->pc = 0x418204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418200u;
    // 0x418204: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B148u, 0x418200u, 0x418208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418208u;
label_418208:
    // 0x418208: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x418208u;
    {
        const bool branch_taken_0x418208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41820Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418208u;
        // 0x41820c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418208) {
            ctx->pc = 0x4182B0u;
            goto label_4182b0;
        }
    }
    ctx->pc = 0x418210u;
label_418210:
    // 0x418210: 0x245e0001  addiu       $fp, $v0, 0x1
    ctx->pc = 0x418210u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_418214:
    // 0x418214: 0x13c00025  beqz        $fp, . + 4 + (0x25 << 2)
    ctx->pc = 0x418214u;
    {
        const bool branch_taken_0x418214 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x418218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418214u;
        // 0x418218: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418214) {
            ctx->pc = 0x4182ACu;
            goto label_4182ac;
        }
    }
    ctx->pc = 0x41821Cu;
    // 0x41821c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41821cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x418220: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x418220u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418224: 0x24574878  addiu       $s7, $v0, 0x4878
    ctx->pc = 0x418224u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 18552));
label_418228:
    // 0x418228: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x418228u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x41822c: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x41822Cu;
    {
        const bool branch_taken_0x41822c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x41822c) {
            ctx->pc = 0x418230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41822Cu;
            // 0x418230: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41829Cu;
            goto label_41829c;
        }
    }
    ctx->pc = 0x418234u;
    // 0x418234: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x418234u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x418238: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x418238u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41823c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x41823cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_418240:
    // 0x418240: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x418240u;
    {
        const bool branch_taken_0x418240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x418240) {
            ctx->pc = 0x418244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x418240u;
            // 0x418244: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x418254u;
            goto label_418254;
        }
    }
    ctx->pc = 0x418248u;
    // 0x418248: 0x54510011  bnel        $v0, $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x418248u;
    {
        const bool branch_taken_0x418248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x418248) {
            ctx->pc = 0x41824Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x418248u;
            // 0x41824c: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x418290u;
            goto label_418290;
        }
    }
    ctx->pc = 0x418250u;
    // 0x418250: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x418250u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_418254:
    // 0x418254: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x418254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418258: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x418258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x41825c: 0xc105fb4  jal         func_417ED0
    ctx->pc = 0x41825Cu;
    SET_GPR_U32(ctx, 31, 0x418264u);
    ctx->pc = 0x418260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41825Cu;
    // 0x418260: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417ED0u, 0x41825Cu, 0x418264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418264u;
label_418264:
    // 0x418264: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x418264u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x418268: 0x0  nop
    ctx->pc = 0x418268u;
    // NOP
    // 0x41826c: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x41826Cu;
    {
        const bool branch_taken_0x41826c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x41826c) {
            ctx->pc = 0x418270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41826Cu;
            // 0x418270: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x418290u;
            goto label_418290;
        }
    }
    ctx->pc = 0x418274u;
    // 0x418274: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x418274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418278: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x418278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41827c: 0xc10602c  jal         func_4180B0
    ctx->pc = 0x41827Cu;
    SET_GPR_U32(ctx, 31, 0x418284u);
    ctx->pc = 0x418280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41827Cu;
    // 0x418280: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4180B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4180B0u, 0x41827Cu, 0x418284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418284u;
label_418284:
    // 0x418284: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x418284u;
    {
        const bool branch_taken_0x418284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x418288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418284u;
        // 0x418288: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418284) {
            ctx->pc = 0x418200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_418200;
        }
    }
    ctx->pc = 0x41828Cu;
    // 0x41828c: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x41828cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_418290:
    // 0x418290: 0x5600ffeb  bnel        $s0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x418290u;
    {
        const bool branch_taken_0x418290 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x418290) {
            ctx->pc = 0x418294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x418290u;
            // 0x418294: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x418240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_418240;
        }
    }
    ctx->pc = 0x418298u;
    // 0x418298: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x418298u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_41829c:
    // 0x41829c: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x41829cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x4182a0: 0x2de102b  sltu        $v0, $s6, $fp
    ctx->pc = 0x4182a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x4182a4: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x4182A4u;
    {
        const bool branch_taken_0x4182a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4182A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4182A4u;
        // 0x4182a8: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4182a4) {
            ctx->pc = 0x418228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_418228;
        }
    }
    ctx->pc = 0x4182ACu;
label_4182ac:
    // 0x4182ac: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4182acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4182b0:
    // 0x4182b0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x4182b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4182b4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x4182b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4182b8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x4182b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4182bc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x4182bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4182c0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4182c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4182c4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x4182c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4182c8: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x4182c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4182cc: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x4182ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4182d0: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x4182d0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4182d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4182d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4182d8: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x4182d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4182dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4182DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4182E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4182DCu;
        // 0x4182e0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4182DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4182E4u;
    // 0x4182e4: 0x0  nop
    ctx->pc = 0x4182e4u;
    // NOP
    ctx->pc = 0x4182e8u;
}
