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

// Function: sub_00143270
// Address: 0x143270 - 0x143300
void sub_00143270_0x143270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143270_0x143270");
#endif

    switch (ctx->pc) {
        case 0x143270u: goto label_143270;
        case 0x143274u: goto label_143274;
        case 0x143278u: goto label_143278;
        case 0x14327cu: goto label_14327c;
        case 0x143280u: goto label_143280;
        case 0x143284u: goto label_143284;
        case 0x143288u: goto label_143288;
        case 0x14328cu: goto label_14328c;
        case 0x143290u: goto label_143290;
        case 0x143294u: goto label_143294;
        case 0x143298u: goto label_143298;
        case 0x14329cu: goto label_14329c;
        case 0x1432a0u: goto label_1432a0;
        case 0x1432a4u: goto label_1432a4;
        case 0x1432a8u: goto label_1432a8;
        case 0x1432acu: goto label_1432ac;
        case 0x1432b0u: goto label_1432b0;
        case 0x1432b4u: goto label_1432b4;
        case 0x1432b8u: goto label_1432b8;
        case 0x1432bcu: goto label_1432bc;
        case 0x1432c0u: goto label_1432c0;
        case 0x1432c4u: goto label_1432c4;
        case 0x1432c8u: goto label_1432c8;
        case 0x1432ccu: goto label_1432cc;
        case 0x1432d0u: goto label_1432d0;
        case 0x1432d4u: goto label_1432d4;
        case 0x1432d8u: goto label_1432d8;
        case 0x1432dcu: goto label_1432dc;
        case 0x1432e0u: goto label_1432e0;
        case 0x1432e4u: goto label_1432e4;
        case 0x1432e8u: goto label_1432e8;
        case 0x1432ecu: goto label_1432ec;
        case 0x1432f0u: goto label_1432f0;
        case 0x1432f4u: goto label_1432f4;
        case 0x1432f8u: goto label_1432f8;
        case 0x1432fcu: goto label_1432fc;
        default: break;
    }

    ctx->pc = 0x143270u;

label_143270:
    // 0x143270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x143270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_143274:
    // 0x143274: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x143274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_143278:
    // 0x143278: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x143278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_14327c:
    // 0x14327c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14327cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_143280:
    // 0x143280: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x143280u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_143284:
    // 0x143284: 0x8e050210  lw          $a1, 0x210($s0)
    ctx->pc = 0x143284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_143288:
    // 0x143288: 0x50a00012  beql        $a1, $zero, . + 4 + (0x12 << 2)
label_14328c:
    if (ctx->pc == 0x14328Cu) {
        ctx->pc = 0x14328Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143288u;
        // 0x14328c: 0x8e050214  lw          $a1, 0x214($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143290u;
        goto label_143290;
    }
    ctx->pc = 0x143288u;
    {
        const bool branch_taken_0x143288 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x143288) {
            ctx->pc = 0x14328Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143288u;
            // 0x14328c: 0x8e050214  lw          $a1, 0x214($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1432D4u;
            goto label_1432d4;
        }
    }
    ctx->pc = 0x143290u;
label_143290:
    // 0x143290: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x143290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_143294:
    // 0x143294: 0x84440240  lh          $a0, 0x240($v0)
    ctx->pc = 0x143294u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 576)));
label_143298:
    // 0x143298: 0x8c430244  lw          $v1, 0x244($v0)
    ctx->pc = 0x143298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 580)));
label_14329c:
    // 0x14329c: 0x60f809  jalr        $v1
label_1432a0:
    if (ctx->pc == 0x1432A0u) {
        ctx->pc = 0x1432A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14329Cu;
        // 0x1432a0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1432A4u;
        goto label_1432a4;
    }
    ctx->pc = 0x14329Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1432A4u);
        ctx->pc = 0x1432A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14329Cu;
        // 0x1432a0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14329Cu, 0x1432A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1432A4u;
label_1432a4:
    // 0x1432a4: 0x8e050214  lw          $a1, 0x214($s0)
    ctx->pc = 0x1432a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_1432a8:
    // 0x1432a8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1432a8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1432ac:
    // 0x1432ac: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1432acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1432b0:
    // 0x1432b0: 0x84440240  lh          $a0, 0x240($v0)
    ctx->pc = 0x1432b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 576)));
label_1432b4:
    // 0x1432b4: 0x8c430244  lw          $v1, 0x244($v0)
    ctx->pc = 0x1432b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 580)));
label_1432b8:
    // 0x1432b8: 0x60f809  jalr        $v1
label_1432bc:
    if (ctx->pc == 0x1432BCu) {
        ctx->pc = 0x1432BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1432B8u;
        // 0x1432bc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1432C0u;
        goto label_1432c0;
    }
    ctx->pc = 0x1432B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1432C0u);
        ctx->pc = 0x1432BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1432B8u;
        // 0x1432bc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1432B8u, 0x1432C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1432C0u;
label_1432c0:
    // 0x1432c0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1432c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1432c4:
    // 0x1432c4: 0x0  nop
    ctx->pc = 0x1432c4u;
    // NOP
label_1432c8:
    // 0x1432c8: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_1432cc:
    if (ctx->pc == 0x1432CCu) {
        ctx->pc = 0x1432CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1432C8u;
        // 0x1432cc: 0x8e050214  lw          $a1, 0x214($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1432D0u;
        goto label_1432d0;
    }
    ctx->pc = 0x1432C8u;
    {
        const bool branch_taken_0x1432c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1432c8) {
            ctx->pc = 0x1432CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1432C8u;
            // 0x1432cc: 0x8e050214  lw          $a1, 0x214($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1432D4u;
            goto label_1432d4;
        }
    }
    ctx->pc = 0x1432D0u;
label_1432d0:
    // 0x1432d0: 0x8e050210  lw          $a1, 0x210($s0)
    ctx->pc = 0x1432d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_1432d4:
    // 0x1432d4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1432d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1432d8:
    // 0x1432d8: 0x84440240  lh          $a0, 0x240($v0)
    ctx->pc = 0x1432d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 576)));
label_1432dc:
    // 0x1432dc: 0x8c430244  lw          $v1, 0x244($v0)
    ctx->pc = 0x1432dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 580)));
label_1432e0:
    // 0x1432e0: 0x60f809  jalr        $v1
label_1432e4:
    if (ctx->pc == 0x1432E4u) {
        ctx->pc = 0x1432E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1432E0u;
        // 0x1432e4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1432E8u;
        goto label_1432e8;
    }
    ctx->pc = 0x1432E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1432E8u);
        ctx->pc = 0x1432E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1432E0u;
        // 0x1432e4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1432E0u, 0x1432E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1432E8u;
label_1432e8:
    // 0x1432e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1432e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1432ec:
    // 0x1432ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1432ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1432f0:
    // 0x1432f0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1432f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1432f4:
    // 0x1432f4: 0x3e00008  jr          $ra
label_1432f8:
    if (ctx->pc == 0x1432F8u) {
        ctx->pc = 0x1432F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1432F4u;
        // 0x1432f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1432FCu;
        goto label_1432fc;
    }
    ctx->pc = 0x1432F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1432F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1432F4u;
        // 0x1432f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1432F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1432FCu;
label_1432fc:
    // 0x1432fc: 0x0  nop
    ctx->pc = 0x1432fcu;
    // NOP
    ctx->pc = 0x143300u;
}
