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

// Function: sub_00143090
// Address: 0x143090 - 0x143130
void sub_00143090_0x143090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143090_0x143090");
#endif

    switch (ctx->pc) {
        case 0x143090u: goto label_143090;
        case 0x143094u: goto label_143094;
        case 0x143098u: goto label_143098;
        case 0x14309cu: goto label_14309c;
        case 0x1430a0u: goto label_1430a0;
        case 0x1430a4u: goto label_1430a4;
        case 0x1430a8u: goto label_1430a8;
        case 0x1430acu: goto label_1430ac;
        case 0x1430b0u: goto label_1430b0;
        case 0x1430b4u: goto label_1430b4;
        case 0x1430b8u: goto label_1430b8;
        case 0x1430bcu: goto label_1430bc;
        case 0x1430c0u: goto label_1430c0;
        case 0x1430c4u: goto label_1430c4;
        case 0x1430c8u: goto label_1430c8;
        case 0x1430ccu: goto label_1430cc;
        case 0x1430d0u: goto label_1430d0;
        case 0x1430d4u: goto label_1430d4;
        case 0x1430d8u: goto label_1430d8;
        case 0x1430dcu: goto label_1430dc;
        case 0x1430e0u: goto label_1430e0;
        case 0x1430e4u: goto label_1430e4;
        case 0x1430e8u: goto label_1430e8;
        case 0x1430ecu: goto label_1430ec;
        case 0x1430f0u: goto label_1430f0;
        case 0x1430f4u: goto label_1430f4;
        case 0x1430f8u: goto label_1430f8;
        case 0x1430fcu: goto label_1430fc;
        case 0x143100u: goto label_143100;
        case 0x143104u: goto label_143104;
        case 0x143108u: goto label_143108;
        case 0x14310cu: goto label_14310c;
        case 0x143110u: goto label_143110;
        case 0x143114u: goto label_143114;
        case 0x143118u: goto label_143118;
        case 0x14311cu: goto label_14311c;
        case 0x143120u: goto label_143120;
        case 0x143124u: goto label_143124;
        case 0x143128u: goto label_143128;
        case 0x14312cu: goto label_14312c;
        default: break;
    }

    ctx->pc = 0x143090u;

label_143090:
    // 0x143090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x143090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_143094:
    // 0x143094: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x143094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_143098:
    // 0x143098: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x143098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_14309c:
    // 0x14309c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14309cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1430a0:
    // 0x1430a0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1430a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1430a4:
    // 0x1430a4: 0x8e020210  lw          $v0, 0x210($s0)
    ctx->pc = 0x1430a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_1430a8:
    // 0x1430a8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_1430ac:
    if (ctx->pc == 0x1430ACu) {
        ctx->pc = 0x1430ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1430A8u;
        // 0x1430ac: 0x8e050214  lw          $a1, 0x214($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1430B0u;
        goto label_1430b0;
    }
    ctx->pc = 0x1430A8u;
    {
        const bool branch_taken_0x1430a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1430ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1430A8u;
        // 0x1430ac: 0x8e050214  lw          $a1, 0x214($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1430a8) {
            ctx->pc = 0x143108u;
            goto label_143108;
        }
    }
    ctx->pc = 0x1430B0u;
label_1430b0:
    // 0x1430b0: 0x10500015  beq         $v0, $s0, . + 4 + (0x15 << 2)
label_1430b4:
    if (ctx->pc == 0x1430B4u) {
        ctx->pc = 0x1430B8u;
        goto label_1430b8;
    }
    ctx->pc = 0x1430B0u;
    {
        const bool branch_taken_0x1430b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1430b0) {
            ctx->pc = 0x143108u;
            goto label_143108;
        }
    }
    ctx->pc = 0x1430B8u;
label_1430b8:
    // 0x1430b8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1430b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1430bc:
    // 0x1430bc: 0x844401f8  lh          $a0, 0x1F8($v0)
    ctx->pc = 0x1430bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 504)));
label_1430c0:
    // 0x1430c0: 0x8c4301fc  lw          $v1, 0x1FC($v0)
    ctx->pc = 0x1430c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 508)));
label_1430c4:
    // 0x1430c4: 0x60f809  jalr        $v1
label_1430c8:
    if (ctx->pc == 0x1430C8u) {
        ctx->pc = 0x1430C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1430C4u;
        // 0x1430c8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1430CCu;
        goto label_1430cc;
    }
    ctx->pc = 0x1430C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1430CCu);
        ctx->pc = 0x1430C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1430C4u;
        // 0x1430c8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1430C4u, 0x1430CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1430CCu;
label_1430cc:
    // 0x1430cc: 0x8e050210  lw          $a1, 0x210($s0)
    ctx->pc = 0x1430ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_1430d0:
    // 0x1430d0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1430d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1430d4:
    // 0x1430d4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1430d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1430d8:
    // 0x1430d8: 0x844401f8  lh          $a0, 0x1F8($v0)
    ctx->pc = 0x1430d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 504)));
label_1430dc:
    // 0x1430dc: 0x8c4301fc  lw          $v1, 0x1FC($v0)
    ctx->pc = 0x1430dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 508)));
label_1430e0:
    // 0x1430e0: 0x60f809  jalr        $v1
label_1430e4:
    if (ctx->pc == 0x1430E4u) {
        ctx->pc = 0x1430E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1430E0u;
        // 0x1430e4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1430E8u;
        goto label_1430e8;
    }
    ctx->pc = 0x1430E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1430E8u);
        ctx->pc = 0x1430E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1430E0u;
        // 0x1430e4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1430E0u, 0x1430E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1430E8u;
label_1430e8:
    // 0x1430e8: 0xc6020220  lwc1        $f2, 0x220($s0)
    ctx->pc = 0x1430e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1430ec:
    // 0x1430ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1430ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1430f0:
    // 0x1430f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1430f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1430f4:
    // 0x1430f4: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x1430f4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_1430f8:
    // 0x1430f8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1430f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1430fc:
    // 0x1430fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1430fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_143100:
    // 0x143100: 0x10000006  b           . + 4 + (0x6 << 2)
label_143104:
    if (ctx->pc == 0x143104u) {
        ctx->pc = 0x143104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143100u;
        // 0x143104: 0x4600a000  add.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x143108u;
        goto label_143108;
    }
    ctx->pc = 0x143100u;
    {
        const bool branch_taken_0x143100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143100u;
        // 0x143104: 0x4600a000  add.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x143100) {
            ctx->pc = 0x14311Cu;
            goto label_14311c;
        }
    }
    ctx->pc = 0x143108u;
label_143108:
    // 0x143108: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x143108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_14310c:
    // 0x14310c: 0x844401f8  lh          $a0, 0x1F8($v0)
    ctx->pc = 0x14310cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 504)));
label_143110:
    // 0x143110: 0x8c4301fc  lw          $v1, 0x1FC($v0)
    ctx->pc = 0x143110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 508)));
label_143114:
    // 0x143114: 0x60f809  jalr        $v1
label_143118:
    if (ctx->pc == 0x143118u) {
        ctx->pc = 0x143118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143114u;
        // 0x143118: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14311Cu;
        goto label_14311c;
    }
    ctx->pc = 0x143114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14311Cu);
        ctx->pc = 0x143118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143114u;
        // 0x143118: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143114u, 0x14311Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14311Cu;
label_14311c:
    // 0x14311c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14311cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_143120:
    // 0x143120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x143120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_143124:
    // 0x143124: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x143124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_143128:
    // 0x143128: 0x3e00008  jr          $ra
label_14312c:
    if (ctx->pc == 0x14312Cu) {
        ctx->pc = 0x14312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143128u;
        // 0x14312c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143130u;
        goto label_fallthrough_0x143128;
    }
    ctx->pc = 0x143128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143128u;
        // 0x14312c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x143128:
    ctx->pc = 0x143130u;
}
