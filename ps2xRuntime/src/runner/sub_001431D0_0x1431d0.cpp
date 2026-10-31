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

// Function: sub_001431D0
// Address: 0x1431d0 - 0x143270
void sub_001431D0_0x1431d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001431D0_0x1431d0");
#endif

    switch (ctx->pc) {
        case 0x1431d0u: goto label_1431d0;
        case 0x1431d4u: goto label_1431d4;
        case 0x1431d8u: goto label_1431d8;
        case 0x1431dcu: goto label_1431dc;
        case 0x1431e0u: goto label_1431e0;
        case 0x1431e4u: goto label_1431e4;
        case 0x1431e8u: goto label_1431e8;
        case 0x1431ecu: goto label_1431ec;
        case 0x1431f0u: goto label_1431f0;
        case 0x1431f4u: goto label_1431f4;
        case 0x1431f8u: goto label_1431f8;
        case 0x1431fcu: goto label_1431fc;
        case 0x143200u: goto label_143200;
        case 0x143204u: goto label_143204;
        case 0x143208u: goto label_143208;
        case 0x14320cu: goto label_14320c;
        case 0x143210u: goto label_143210;
        case 0x143214u: goto label_143214;
        case 0x143218u: goto label_143218;
        case 0x14321cu: goto label_14321c;
        case 0x143220u: goto label_143220;
        case 0x143224u: goto label_143224;
        case 0x143228u: goto label_143228;
        case 0x14322cu: goto label_14322c;
        case 0x143230u: goto label_143230;
        case 0x143234u: goto label_143234;
        case 0x143238u: goto label_143238;
        case 0x14323cu: goto label_14323c;
        case 0x143240u: goto label_143240;
        case 0x143244u: goto label_143244;
        case 0x143248u: goto label_143248;
        case 0x14324cu: goto label_14324c;
        case 0x143250u: goto label_143250;
        case 0x143254u: goto label_143254;
        case 0x143258u: goto label_143258;
        case 0x14325cu: goto label_14325c;
        case 0x143260u: goto label_143260;
        case 0x143264u: goto label_143264;
        case 0x143268u: goto label_143268;
        case 0x14326cu: goto label_14326c;
        default: break;
    }

    ctx->pc = 0x1431d0u;

label_1431d0:
    // 0x1431d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1431d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1431d4:
    // 0x1431d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1431d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1431d8:
    // 0x1431d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1431d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1431dc:
    // 0x1431dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1431dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1431e0:
    // 0x1431e0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1431e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1431e4:
    // 0x1431e4: 0x8e020210  lw          $v0, 0x210($s0)
    ctx->pc = 0x1431e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_1431e8:
    // 0x1431e8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_1431ec:
    if (ctx->pc == 0x1431ECu) {
        ctx->pc = 0x1431ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1431E8u;
        // 0x1431ec: 0x8e050214  lw          $a1, 0x214($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1431F0u;
        goto label_1431f0;
    }
    ctx->pc = 0x1431E8u;
    {
        const bool branch_taken_0x1431e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1431ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1431E8u;
        // 0x1431ec: 0x8e050214  lw          $a1, 0x214($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1431e8) {
            ctx->pc = 0x143248u;
            goto label_143248;
        }
    }
    ctx->pc = 0x1431F0u;
label_1431f0:
    // 0x1431f0: 0x10500015  beq         $v0, $s0, . + 4 + (0x15 << 2)
label_1431f4:
    if (ctx->pc == 0x1431F4u) {
        ctx->pc = 0x1431F8u;
        goto label_1431f8;
    }
    ctx->pc = 0x1431F0u;
    {
        const bool branch_taken_0x1431f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1431f0) {
            ctx->pc = 0x143248u;
            goto label_143248;
        }
    }
    ctx->pc = 0x1431F8u;
label_1431f8:
    // 0x1431f8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1431f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1431fc:
    // 0x1431fc: 0x84440238  lh          $a0, 0x238($v0)
    ctx->pc = 0x1431fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 568)));
label_143200:
    // 0x143200: 0x8c43023c  lw          $v1, 0x23C($v0)
    ctx->pc = 0x143200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 572)));
label_143204:
    // 0x143204: 0x60f809  jalr        $v1
label_143208:
    if (ctx->pc == 0x143208u) {
        ctx->pc = 0x143208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143204u;
        // 0x143208: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14320Cu;
        goto label_14320c;
    }
    ctx->pc = 0x143204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14320Cu);
        ctx->pc = 0x143208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143204u;
        // 0x143208: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143204u, 0x14320Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14320Cu;
label_14320c:
    // 0x14320c: 0x8e050210  lw          $a1, 0x210($s0)
    ctx->pc = 0x14320cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_143210:
    // 0x143210: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x143210u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_143214:
    // 0x143214: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x143214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_143218:
    // 0x143218: 0x84440238  lh          $a0, 0x238($v0)
    ctx->pc = 0x143218u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 568)));
label_14321c:
    // 0x14321c: 0x8c43023c  lw          $v1, 0x23C($v0)
    ctx->pc = 0x14321cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 572)));
label_143220:
    // 0x143220: 0x60f809  jalr        $v1
label_143224:
    if (ctx->pc == 0x143224u) {
        ctx->pc = 0x143224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143220u;
        // 0x143224: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143228u;
        goto label_143228;
    }
    ctx->pc = 0x143220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x143228u);
        ctx->pc = 0x143224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143220u;
        // 0x143224: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143220u, 0x143228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143228u;
label_143228:
    // 0x143228: 0xc6020220  lwc1        $f2, 0x220($s0)
    ctx->pc = 0x143228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14322c:
    // 0x14322c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14322cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_143230:
    // 0x143230: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x143230u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_143234:
    // 0x143234: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x143234u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_143238:
    // 0x143238: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x143238u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_14323c:
    // 0x14323c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14323cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_143240:
    // 0x143240: 0x10000006  b           . + 4 + (0x6 << 2)
label_143244:
    if (ctx->pc == 0x143244u) {
        ctx->pc = 0x143244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143240u;
        // 0x143244: 0x4600a000  add.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x143248u;
        goto label_143248;
    }
    ctx->pc = 0x143240u;
    {
        const bool branch_taken_0x143240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143240u;
        // 0x143244: 0x4600a000  add.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x143240) {
            ctx->pc = 0x14325Cu;
            goto label_14325c;
        }
    }
    ctx->pc = 0x143248u;
label_143248:
    // 0x143248: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x143248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_14324c:
    // 0x14324c: 0x84440238  lh          $a0, 0x238($v0)
    ctx->pc = 0x14324cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 568)));
label_143250:
    // 0x143250: 0x8c43023c  lw          $v1, 0x23C($v0)
    ctx->pc = 0x143250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 572)));
label_143254:
    // 0x143254: 0x60f809  jalr        $v1
label_143258:
    if (ctx->pc == 0x143258u) {
        ctx->pc = 0x143258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143254u;
        // 0x143258: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14325Cu;
        goto label_14325c;
    }
    ctx->pc = 0x143254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14325Cu);
        ctx->pc = 0x143258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143254u;
        // 0x143258: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143254u, 0x14325Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14325Cu;
label_14325c:
    // 0x14325c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14325cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_143260:
    // 0x143260: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x143260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_143264:
    // 0x143264: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x143264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_143268:
    // 0x143268: 0x3e00008  jr          $ra
label_14326c:
    if (ctx->pc == 0x14326Cu) {
        ctx->pc = 0x14326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143268u;
        // 0x14326c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143270u;
        goto label_fallthrough_0x143268;
    }
    ctx->pc = 0x143268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143268u;
        // 0x14326c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x143268:
    ctx->pc = 0x143270u;
}
