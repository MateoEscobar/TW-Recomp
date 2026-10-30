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

// Function: sub_0014D1B0
// Address: 0x14d1b0 - 0x14d288
void sub_0014D1B0_0x14d1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D1B0_0x14d1b0");
#endif

    switch (ctx->pc) {
        case 0x14d23cu: goto label_14d23c;
        case 0x14d24cu: goto label_14d24c;
        case 0x14d268u: goto label_14d268;
        default: break;
    }

    ctx->pc = 0x14d1b0u;

    // 0x14d1b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14d1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14d1b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14d1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14d1b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14d1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14d1bc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x14d1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x14d1c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14d1c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d1c4: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x14d1c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x14d1c8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x14d1c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d1cc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14d1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14d1d0: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x14d1d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x14d1d4: 0x12420024  beq         $s2, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x14D1D4u;
    {
        const bool branch_taken_0x14d1d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x14D1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D1D4u;
        // 0x14d1d8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d1d4) {
            ctx->pc = 0x14D268u;
            goto label_14d268;
        }
    }
    ctx->pc = 0x14D1DCu;
    // 0x14d1dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14d1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14d1e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14d1e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d1e4: 0x0  nop
    ctx->pc = 0x14d1e4u;
    // NOP
    // 0x14d1e8: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x14d1e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d1ec: 0x0  nop
    ctx->pc = 0x14d1ecu;
    // NOP
    // 0x14d1f0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x14D1F0u;
    {
        const bool branch_taken_0x14d1f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14d1f0) {
            ctx->pc = 0x14D1F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D1F0u;
            // 0x14d1f4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D1F8u;
            goto label_14d1f8;
        }
    }
    ctx->pc = 0x14D1F8u;
label_14d1f8:
    // 0x14d1f8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x14d1f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d1fc: 0x0  nop
    ctx->pc = 0x14d1fcu;
    // NOP
    // 0x14d200: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x14D200u;
    {
        const bool branch_taken_0x14d200 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14d200) {
            ctx->pc = 0x14D204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D200u;
            // 0x14d204: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D208u;
            goto label_14d208;
        }
    }
    ctx->pc = 0x14D208u;
label_14d208:
    // 0x14d208: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x14d208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x14d20c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14d20cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d210: 0x0  nop
    ctx->pc = 0x14d210u;
    // NOP
    // 0x14d214: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x14d214u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d218: 0x0  nop
    ctx->pc = 0x14d218u;
    // NOP
    // 0x14d21c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x14D21Cu;
    {
        const bool branch_taken_0x14d21c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14d21c) {
            ctx->pc = 0x14D220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D21Cu;
            // 0x14d220: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D224u;
            goto label_14d224;
        }
    }
    ctx->pc = 0x14D224u;
label_14d224:
    // 0x14d224: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x14d224u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d228: 0x0  nop
    ctx->pc = 0x14d228u;
    // NOP
    // 0x14d22c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x14D22Cu;
    {
        const bool branch_taken_0x14d22c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14d22c) {
            ctx->pc = 0x14D230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D22Cu;
            // 0x14d230: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D234u;
            goto label_14d234;
        }
    }
    ctx->pc = 0x14D234u;
label_14d234:
    // 0x14d234: 0xc053462  jal         func_14D188
    ctx->pc = 0x14D234u;
    SET_GPR_U32(ctx, 31, 0x14D23Cu);
    ctx->pc = 0x14D238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D234u;
    // 0x14d238: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D188u, 0x14D234u, 0x14D23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D23Cu;
label_14d23c:
    // 0x14d23c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14d23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d240: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14d240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d244: 0xc053462  jal         func_14D188
    ctx->pc = 0x14D244u;
    SET_GPR_U32(ctx, 31, 0x14D24Cu);
    ctx->pc = 0x14D248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D244u;
    // 0x14d248: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D188u, 0x14D244u, 0x14D24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D24Cu;
label_14d24c:
    // 0x14d24c: 0x122400  sll         $a0, $s2, 16
    ctx->pc = 0x14d24cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x14d250: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x14d250u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x14d254: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x14d254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x14d258: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x14d258u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x14d25c: 0x102c03  sra         $a1, $s0, 16
    ctx->pc = 0x14d25cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 16), 16));
    // 0x14d260: 0xc0545fc  jal         func_1517F0
    ctx->pc = 0x14D260u;
    SET_GPR_U32(ctx, 31, 0x14D268u);
    ctx->pc = 0x14D264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D260u;
    // 0x14d264: 0x23403  sra         $a2, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1517F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1517F0u, 0x14D260u, 0x14D268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D268u;
label_14d268:
    // 0x14d268: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14d268u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14d26c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14d26cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14d270: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x14d270u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d274: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d278: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x14d278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14d27c: 0x3e00008  jr          $ra
    ctx->pc = 0x14D27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D27Cu;
        // 0x14d280: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D27Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D284u;
    // 0x14d284: 0x0  nop
    ctx->pc = 0x14d284u;
    // NOP
    ctx->pc = 0x14d288u;
}
