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

// Function: sub_004E5428
// Address: 0x4e5428 - 0x4e5548
void sub_004E5428_0x4e5428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5428_0x4e5428");
#endif

    switch (ctx->pc) {
        case 0x4e5478u: goto label_4e5478;
        case 0x4e5490u: goto label_4e5490;
        case 0x4e54a8u: goto label_4e54a8;
        case 0x4e54b8u: goto label_4e54b8;
        case 0x4e54f4u: goto label_4e54f4;
        case 0x4e5514u: goto label_4e5514;
        default: break;
    }

    ctx->pc = 0x4e5428u;

    // 0x4e5428: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4e5428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x4e542c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4e542cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5430: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x4e5430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x4e5434: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4e5434u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5438: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x4e5438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x4e543c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4e543cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5440: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x4e5440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x4e5444: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x4e5444u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5448: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x4e5448u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e544c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x4e544cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x4e5450: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x4e5450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x4e5454: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x4e5454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x4e5458: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4e5458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x4e545c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4e545cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5460: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x4e5460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x4e5464: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x4e5464u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5468: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x4e5468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x4e546c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e546cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e5470: 0xc1394bc  jal         func_4E52F0
    ctx->pc = 0x4E5470u;
    SET_GPR_U32(ctx, 31, 0x4E5478u);
    ctx->pc = 0x4E5474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5470u;
    // 0x4e5474: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E52F0u, 0x4E5470u, 0x4E5478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5478u;
label_4e5478:
    // 0x4e5478: 0x2b6102b  sltu        $v0, $s5, $s6
    ctx->pc = 0x4e5478u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x4e547c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x4E547Cu;
    {
        const bool branch_taken_0x4e547c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E5480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E547Cu;
        // 0x4e5480: 0x3c1e0051  lui         $fp, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e547c) {
            ctx->pc = 0x4E5504u;
            goto label_4e5504;
        }
    }
    ctx->pc = 0x4E5484u;
    // 0x4e5484: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x4e5484u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5488: 0x2b3b823  subu        $s7, $s5, $s3
    ctx->pc = 0x4e5488u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x4e548c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4e548cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4e5490:
    // 0x4e5490: 0x8fd0489c  lw          $s0, 0x489C($fp)
    ctx->pc = 0x4e5490u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
    // 0x4e5494: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4e5494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e5498: 0x261014d4  addiu       $s0, $s0, 0x14D4
    ctx->pc = 0x4e5498u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5332));
    // 0x4e549c: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x4e549cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e54a0: 0xc107d50  jal         func_41F540
    ctx->pc = 0x4E54A0u;
    SET_GPR_U32(ctx, 31, 0x4E54A8u);
    ctx->pc = 0x4E54A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E54A0u;
    // 0x4e54a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F540u, 0x4E54A0u, 0x4E54A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E54A8u;
label_4e54a8:
    // 0x4e54a8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4e54a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e54ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e54acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e54b0: 0xc107d50  jal         func_41F540
    ctx->pc = 0x4E54B0u;
    SET_GPR_U32(ctx, 31, 0x4E54B8u);
    ctx->pc = 0x4E54B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E54B0u;
    // 0x4e54b4: 0xc4540004  lwc1        $f20, 0x4($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F540u, 0x4E54B0u, 0x4E54B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E54B8u;
label_4e54b8:
    // 0x4e54b8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x4e54b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4e54bc: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x4e54bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4e54c0: 0x0  nop
    ctx->pc = 0x4e54c0u;
    // NOP
    // 0x4e54c4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x4E54C4u;
    {
        const bool branch_taken_0x4e54c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4E54C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E54C4u;
        // 0x4e54c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e54c4) {
            ctx->pc = 0x4E54D0u;
            goto label_4e54d0;
        }
    }
    ctx->pc = 0x4E54CCu;
    // 0x4e54cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4e54ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e54d0:
    // 0x4e54d0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E54D0u;
    {
        const bool branch_taken_0x4e54d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E54D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E54D0u;
        // 0x4e54d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e54d0) {
            ctx->pc = 0x4E54F4u;
            goto label_4e54f4;
        }
    }
    ctx->pc = 0x4E54D8u;
    // 0x4e54d8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4e54d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e54dc: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x4e54dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e54e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4e54e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e54e4: 0x173083  sra         $a2, $s7, 2
    ctx->pc = 0x4e54e4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 23), 2));
    // 0x4e54e8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4e54e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4e54ec: 0xc13946a  jal         func_4E51A8
    ctx->pc = 0x4E54ECu;
    SET_GPR_U32(ctx, 31, 0x4E54F4u);
    ctx->pc = 0x4E54F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E54ECu;
    // 0x4e54f0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E51A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E51A8u, 0x4E54ECu, 0x4E54F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E54F4u;
label_4e54f4:
    // 0x4e54f4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4e54f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4e54f8: 0x256102b  sltu        $v0, $s2, $s6
    ctx->pc = 0x4e54f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x4e54fc: 0x5440ffe4  bnel        $v0, $zero, . + 4 + (-0x1C << 2)
    ctx->pc = 0x4E54FCu;
    {
        const bool branch_taken_0x4e54fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e54fc) {
            ctx->pc = 0x4E5500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E54FCu;
            // 0x4e5500: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E5490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e5490;
        }
    }
    ctx->pc = 0x4E5504u;
label_4e5504:
    // 0x4e5504: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4e5504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5508: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4e5508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e550c: 0xc1394e0  jal         func_4E5380
    ctx->pc = 0x4E550Cu;
    SET_GPR_U32(ctx, 31, 0x4E5514u);
    ctx->pc = 0x4E5510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E550Cu;
    // 0x4e5510: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E5380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E5380u, 0x4E550Cu, 0x4E5514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5514u;
label_4e5514:
    // 0x4e5514: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x4e5514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4e5518: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x4e5518u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4e551c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x4e551cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4e5520: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x4e5520u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4e5524: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4e5524u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4e5528: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x4e5528u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e552c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x4e552cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e5530: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x4e5530u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e5534: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x4e5534u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e5538: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e5538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e553c: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x4e553cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4e5540: 0x3e00008  jr          $ra
    ctx->pc = 0x4E5540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E5544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5540u;
        // 0x4e5544: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E5540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E5548u;
}
