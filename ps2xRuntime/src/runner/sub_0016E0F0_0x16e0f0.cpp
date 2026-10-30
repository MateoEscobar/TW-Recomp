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

// Function: sub_0016E0F0
// Address: 0x16e0f0 - 0x16e258
void sub_0016E0F0_0x16e0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E0F0_0x16e0f0");
#endif

    switch (ctx->pc) {
        case 0x16e150u: goto label_16e150;
        case 0x16e158u: goto label_16e158;
        case 0x16e178u: goto label_16e178;
        case 0x16e1b0u: goto label_16e1b0;
        case 0x16e214u: goto label_16e214;
        default: break;
    }

    ctx->pc = 0x16e0f0u;

    // 0x16e0f0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x16e0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x16e0f4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x16e0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x16e0f8: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x16e0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x16e0fc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x16e0fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e100: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x16e100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x16e104: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x16e104u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e108: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x16e108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x16e10c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x16e10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x16e110: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x16e110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x16e114: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x16e114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x16e118: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x16e118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x16e11c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x16e11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x16e120: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16e120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16e124: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x16e124u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x16e128: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x16e128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x16e12c: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x16e12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x16e130: 0x13c0003a  beqz        $fp, . + 4 + (0x3A << 2)
    ctx->pc = 0x16E130u;
    {
        const bool branch_taken_0x16e130 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E130u;
        // 0x16e134: 0xafa80008  sw          $t0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e130) {
            ctx->pc = 0x16E21Cu;
            goto label_16e21c;
        }
    }
    ctx->pc = 0x16E138u;
    // 0x16e138: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x16e138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
    // 0x16e13c: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x16e13cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
    // 0x16e140: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x16e140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x16e144: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x16e144u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e148: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16e148u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e14c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16e14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16e150:
    // 0x16e150: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16E150u;
    SET_GPR_U32(ctx, 31, 0x16E158u);
    ctx->pc = 0x16E154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E150u;
    // 0x16e154: 0x26130001  addiu       $s3, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16E150u, 0x16E158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E158u;
label_16e158:
    // 0x16e158: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16e158u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e15c: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x16e15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x16e160: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x16E160u;
    {
        const bool branch_taken_0x16e160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E160u;
        // 0x16e164: 0x131400  sll         $v0, $s3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e160) {
            ctx->pc = 0x16E1DCu;
            goto label_16e1dc;
        }
    }
    ctx->pc = 0x16E168u;
    // 0x16e168: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16e168u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e16c: 0x24160130  addiu       $s6, $zero, 0x130
    ctx->pc = 0x16e16cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x16e170: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x16e170u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16e174: 0x111400  sll         $v0, $s1, 16
    ctx->pc = 0x16e174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
label_16e178:
    // 0x16e178: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x16e178u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x16e17c: 0x561018  mult        $v0, $v0, $s6
    ctx->pc = 0x16e17cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16e180: 0x24420640  addiu       $v0, $v0, 0x640
    ctx->pc = 0x16e180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1600));
    // 0x16e184: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x16e184u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x16e188: 0x86030052  lh          $v1, 0x52($s0)
    ctx->pc = 0x16e188u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 82)));
    // 0x16e18c: 0x2463fff7  addiu       $v1, $v1, -0x9
    ctx->pc = 0x16e18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967287));
    // 0x16e190: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x16e190u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x16e194: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x16E194u;
    {
        const bool branch_taken_0x16e194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e194) {
            ctx->pc = 0x16E198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E194u;
            // 0x16e198: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E1CCu;
            goto label_16e1cc;
        }
    }
    ctx->pc = 0x16E19Cu;
    // 0x16e19c: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x16e19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x16e1a0: 0x10540009  beq         $v0, $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x16E1A0u;
    {
        const bool branch_taken_0x16e1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x16E1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E1A0u;
        // 0x16e1a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e1a0) {
            ctx->pc = 0x16E1C8u;
            goto label_16e1c8;
        }
    }
    ctx->pc = 0x16E1A8u;
    // 0x16e1a8: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x16E1A8u;
    SET_GPR_U32(ctx, 31, 0x16E1B0u);
    ctx->pc = 0x16E1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E1A8u;
    // 0x16e1ac: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x16E1A8u, 0x16E1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E1B0u;
label_16e1b0:
    // 0x16e1b0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x16e1b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e1b4: 0x0  nop
    ctx->pc = 0x16e1b4u;
    // NOP
    // 0x16e1b8: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x16E1B8u;
    {
        const bool branch_taken_0x16e1b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e1b8) {
            ctx->pc = 0x16E1BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E1B8u;
            // 0x16e1bc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E1CCu;
            goto label_16e1cc;
        }
    }
    ctx->pc = 0x16E1C0u;
    // 0x16e1c0: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x16e1c0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e1c4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x16e1c4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_16e1c8:
    // 0x16e1c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16e1c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_16e1cc:
    // 0x16e1cc: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x16e1ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x16e1d0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x16E1D0u;
    {
        const bool branch_taken_0x16e1d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E1D0u;
        // 0x16e1d4: 0x111400  sll         $v0, $s1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e1d0) {
            ctx->pc = 0x16E178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16e178;
        }
    }
    ctx->pc = 0x16E1D8u;
    // 0x16e1d8: 0x131400  sll         $v0, $s3, 16
    ctx->pc = 0x16e1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
label_16e1dc:
    // 0x16e1dc: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x16e1dcu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
    // 0x16e1e0: 0x2a030020  slti        $v1, $s0, 0x20
    ctx->pc = 0x16e1e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x16e1e4: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x16E1E4u;
    {
        const bool branch_taken_0x16e1e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16E1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E1E4u;
        // 0x16e1e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e1e4) {
            ctx->pc = 0x16E150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16e150;
        }
    }
    ctx->pc = 0x16E1ECu;
    // 0x16e1ec: 0x12e0000b  beqz        $s7, . + 4 + (0xB << 2)
    ctx->pc = 0x16E1ECu;
    {
        const bool branch_taken_0x16e1ec = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E1ECu;
        // 0x16e1f0: 0x8fa80000  lw          $t0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e1ec) {
            ctx->pc = 0x16E21Cu;
            goto label_16e21c;
        }
    }
    ctx->pc = 0x16E1F4u;
    // 0x16e1f4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x16e1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e1f8: 0x8faa0004  lw          $t2, 0x4($sp)
    ctx->pc = 0x16e1f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x16e1fc: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x16e1fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e200: 0x8fab0008  lw          $t3, 0x8($sp)
    ctx->pc = 0x16e200u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16e204: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x16e204u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e208: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x16e208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16e20c: 0xc05b71c  jal         func_16DC70
    ctx->pc = 0x16E20Cu;
    SET_GPR_U32(ctx, 31, 0x16E214u);
    ctx->pc = 0x16E210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E20Cu;
    // 0x16e210: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DC70u, 0x16E20Cu, 0x16E214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E214u;
label_16e214:
    // 0x16e214: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16E214u;
    {
        const bool branch_taken_0x16e214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E214u;
        // 0x16e218: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e214) {
            ctx->pc = 0x16E220u;
            goto label_16e220;
        }
    }
    ctx->pc = 0x16E21Cu;
label_16e21c:
    // 0x16e21c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16e21cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16e220:
    // 0x16e220: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x16e220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16e224: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x16e224u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16e228: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x16e228u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16e22c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x16e22cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16e230: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x16e230u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16e234: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16e234u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16e238: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x16e238u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16e23c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x16e23cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16e240: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x16e240u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16e244: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16e244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e248: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x16e248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16e24c: 0x3e00008  jr          $ra
    ctx->pc = 0x16E24Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E24Cu;
        // 0x16e250: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E24Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E254u;
    // 0x16e254: 0x0  nop
    ctx->pc = 0x16e254u;
    // NOP
    ctx->pc = 0x16e258u;
}
