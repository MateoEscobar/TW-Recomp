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

// Function: sub_00143130
// Address: 0x143130 - 0x1431d0
void sub_00143130_0x143130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143130_0x143130");
#endif

    switch (ctx->pc) {
        case 0x143130u: goto label_143130;
        case 0x143134u: goto label_143134;
        case 0x143138u: goto label_143138;
        case 0x14313cu: goto label_14313c;
        case 0x143140u: goto label_143140;
        case 0x143144u: goto label_143144;
        case 0x143148u: goto label_143148;
        case 0x14314cu: goto label_14314c;
        case 0x143150u: goto label_143150;
        case 0x143154u: goto label_143154;
        case 0x143158u: goto label_143158;
        case 0x14315cu: goto label_14315c;
        case 0x143160u: goto label_143160;
        case 0x143164u: goto label_143164;
        case 0x143168u: goto label_143168;
        case 0x14316cu: goto label_14316c;
        case 0x143170u: goto label_143170;
        case 0x143174u: goto label_143174;
        case 0x143178u: goto label_143178;
        case 0x14317cu: goto label_14317c;
        case 0x143180u: goto label_143180;
        case 0x143184u: goto label_143184;
        case 0x143188u: goto label_143188;
        case 0x14318cu: goto label_14318c;
        case 0x143190u: goto label_143190;
        case 0x143194u: goto label_143194;
        case 0x143198u: goto label_143198;
        case 0x14319cu: goto label_14319c;
        case 0x1431a0u: goto label_1431a0;
        case 0x1431a4u: goto label_1431a4;
        case 0x1431a8u: goto label_1431a8;
        case 0x1431acu: goto label_1431ac;
        case 0x1431b0u: goto label_1431b0;
        case 0x1431b4u: goto label_1431b4;
        case 0x1431b8u: goto label_1431b8;
        case 0x1431bcu: goto label_1431bc;
        case 0x1431c0u: goto label_1431c0;
        case 0x1431c4u: goto label_1431c4;
        case 0x1431c8u: goto label_1431c8;
        case 0x1431ccu: goto label_1431cc;
        default: break;
    }

    ctx->pc = 0x143130u;

label_143130:
    // 0x143130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x143130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_143134:
    // 0x143134: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x143134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_143138:
    // 0x143138: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x143138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_14313c:
    // 0x14313c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14313cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_143140:
    // 0x143140: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x143140u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_143144:
    // 0x143144: 0x8e020210  lw          $v0, 0x210($s0)
    ctx->pc = 0x143144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_143148:
    // 0x143148: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_14314c:
    if (ctx->pc == 0x14314Cu) {
        ctx->pc = 0x14314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143148u;
        // 0x14314c: 0x8e050214  lw          $a1, 0x214($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143150u;
        goto label_143150;
    }
    ctx->pc = 0x143148u;
    {
        const bool branch_taken_0x143148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143148u;
        // 0x14314c: 0x8e050214  lw          $a1, 0x214($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143148) {
            ctx->pc = 0x1431A8u;
            goto label_1431a8;
        }
    }
    ctx->pc = 0x143150u;
label_143150:
    // 0x143150: 0x10500015  beq         $v0, $s0, . + 4 + (0x15 << 2)
label_143154:
    if (ctx->pc == 0x143154u) {
        ctx->pc = 0x143158u;
        goto label_143158;
    }
    ctx->pc = 0x143150u;
    {
        const bool branch_taken_0x143150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x143150) {
            ctx->pc = 0x1431A8u;
            goto label_1431a8;
        }
    }
    ctx->pc = 0x143158u;
label_143158:
    // 0x143158: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x143158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_14315c:
    // 0x14315c: 0x84440230  lh          $a0, 0x230($v0)
    ctx->pc = 0x14315cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 560)));
label_143160:
    // 0x143160: 0x8c430234  lw          $v1, 0x234($v0)
    ctx->pc = 0x143160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 564)));
label_143164:
    // 0x143164: 0x60f809  jalr        $v1
label_143168:
    if (ctx->pc == 0x143168u) {
        ctx->pc = 0x143168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143164u;
        // 0x143168: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14316Cu;
        goto label_14316c;
    }
    ctx->pc = 0x143164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14316Cu);
        ctx->pc = 0x143168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143164u;
        // 0x143168: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143164u, 0x14316Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14316Cu;
label_14316c:
    // 0x14316c: 0x8e050210  lw          $a1, 0x210($s0)
    ctx->pc = 0x14316cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_143170:
    // 0x143170: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x143170u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_143174:
    // 0x143174: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x143174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_143178:
    // 0x143178: 0x84440230  lh          $a0, 0x230($v0)
    ctx->pc = 0x143178u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 560)));
label_14317c:
    // 0x14317c: 0x8c430234  lw          $v1, 0x234($v0)
    ctx->pc = 0x14317cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 564)));
label_143180:
    // 0x143180: 0x60f809  jalr        $v1
label_143184:
    if (ctx->pc == 0x143184u) {
        ctx->pc = 0x143184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143180u;
        // 0x143184: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143188u;
        goto label_143188;
    }
    ctx->pc = 0x143180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x143188u);
        ctx->pc = 0x143184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143180u;
        // 0x143184: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143180u, 0x143188u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143188u;
label_143188:
    // 0x143188: 0xc6020220  lwc1        $f2, 0x220($s0)
    ctx->pc = 0x143188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14318c:
    // 0x14318c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14318cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_143190:
    // 0x143190: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x143190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_143194:
    // 0x143194: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x143194u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_143198:
    // 0x143198: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x143198u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_14319c:
    // 0x14319c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14319cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1431a0:
    // 0x1431a0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1431a4:
    if (ctx->pc == 0x1431A4u) {
        ctx->pc = 0x1431A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1431A0u;
        // 0x1431a4: 0x4600a000  add.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1431A8u;
        goto label_1431a8;
    }
    ctx->pc = 0x1431A0u;
    {
        const bool branch_taken_0x1431a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1431A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1431A0u;
        // 0x1431a4: 0x4600a000  add.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1431a0) {
            ctx->pc = 0x1431BCu;
            goto label_1431bc;
        }
    }
    ctx->pc = 0x1431A8u;
label_1431a8:
    // 0x1431a8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1431a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1431ac:
    // 0x1431ac: 0x84440230  lh          $a0, 0x230($v0)
    ctx->pc = 0x1431acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 560)));
label_1431b0:
    // 0x1431b0: 0x8c430234  lw          $v1, 0x234($v0)
    ctx->pc = 0x1431b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 564)));
label_1431b4:
    // 0x1431b4: 0x60f809  jalr        $v1
label_1431b8:
    if (ctx->pc == 0x1431B8u) {
        ctx->pc = 0x1431B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1431B4u;
        // 0x1431b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1431BCu;
        goto label_1431bc;
    }
    ctx->pc = 0x1431B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1431BCu);
        ctx->pc = 0x1431B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1431B4u;
        // 0x1431b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1431B4u, 0x1431BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1431BCu;
label_1431bc:
    // 0x1431bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1431bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1431c0:
    // 0x1431c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1431c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1431c4:
    // 0x1431c4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1431c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1431c8:
    // 0x1431c8: 0x3e00008  jr          $ra
label_1431cc:
    if (ctx->pc == 0x1431CCu) {
        ctx->pc = 0x1431CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1431C8u;
        // 0x1431cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1431D0u;
        goto label_fallthrough_0x1431c8;
    }
    ctx->pc = 0x1431C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1431CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1431C8u;
        // 0x1431cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1431C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1431c8:
    ctx->pc = 0x1431D0u;
}
