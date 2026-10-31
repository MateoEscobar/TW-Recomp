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

// Function: sub_00195330
// Address: 0x195330 - 0x1953a8
void sub_00195330_0x195330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195330_0x195330");
#endif

    switch (ctx->pc) {
        case 0x195330u: goto label_195330;
        case 0x195334u: goto label_195334;
        case 0x195338u: goto label_195338;
        case 0x19533cu: goto label_19533c;
        case 0x195340u: goto label_195340;
        case 0x195344u: goto label_195344;
        case 0x195348u: goto label_195348;
        case 0x19534cu: goto label_19534c;
        case 0x195350u: goto label_195350;
        case 0x195354u: goto label_195354;
        case 0x195358u: goto label_195358;
        case 0x19535cu: goto label_19535c;
        case 0x195360u: goto label_195360;
        case 0x195364u: goto label_195364;
        case 0x195368u: goto label_195368;
        case 0x19536cu: goto label_19536c;
        case 0x195370u: goto label_195370;
        case 0x195374u: goto label_195374;
        case 0x195378u: goto label_195378;
        case 0x19537cu: goto label_19537c;
        case 0x195380u: goto label_195380;
        case 0x195384u: goto label_195384;
        case 0x195388u: goto label_195388;
        case 0x19538cu: goto label_19538c;
        case 0x195390u: goto label_195390;
        case 0x195394u: goto label_195394;
        case 0x195398u: goto label_195398;
        case 0x19539cu: goto label_19539c;
        case 0x1953a0u: goto label_1953a0;
        case 0x1953a4u: goto label_1953a4;
        default: break;
    }

    ctx->pc = 0x195330u;

label_195330:
    // 0x195330: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x195330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_195334:
    // 0x195334: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x195334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_195338:
    // 0x195338: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x195338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_19533c:
    // 0x19533c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x19533cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_195340:
    // 0x195340: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x195340u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_195344:
    // 0x195344: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_195348:
    // 0x195348: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x195348u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_19534c:
    // 0x19534c: 0x8e05cdb4  lw          $a1, -0x324C($s0)
    ctx->pc = 0x19534cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954420)));
label_195350:
    // 0x195350: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x195350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_195354:
    // 0x195354: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x195354u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_195358:
    // 0x195358: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x195358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_19535c:
    // 0x19535c: 0x60f809  jalr        $v1
label_195360:
    if (ctx->pc == 0x195360u) {
        ctx->pc = 0x195360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19535Cu;
        // 0x195360: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195364u;
        goto label_195364;
    }
    ctx->pc = 0x19535Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x195364u);
        ctx->pc = 0x195360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19535Cu;
        // 0x195360: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19535Cu, 0x195364u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195364u;
label_195364:
    // 0x195364: 0x8e05cdb4  lw          $a1, -0x324C($s0)
    ctx->pc = 0x195364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954420)));
label_195368:
    // 0x195368: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x195368u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_19536c:
    // 0x19536c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x19536cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_195370:
    // 0x195370: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x195370u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_195374:
    // 0x195374: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x195374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_195378:
    // 0x195378: 0x60f809  jalr        $v1
label_19537c:
    if (ctx->pc == 0x19537Cu) {
        ctx->pc = 0x19537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195378u;
        // 0x19537c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195380u;
        goto label_195380;
    }
    ctx->pc = 0x195378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x195380u);
        ctx->pc = 0x19537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195378u;
        // 0x19537c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195378u, 0x195380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195380u;
label_195380:
    // 0x195380: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x195380u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_195384:
    // 0x195384: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x195384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_195388:
    // 0x195388: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x195388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19538c:
    // 0x19538c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19538cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_195390:
    // 0x195390: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x195390u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_195394:
    // 0x195394: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x195394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_195398:
    // 0x195398: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x195398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_19539c:
    // 0x19539c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19539cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1953a0:
    // 0x1953a0: 0x3e00008  jr          $ra
label_1953a4:
    if (ctx->pc == 0x1953A4u) {
        ctx->pc = 0x1953A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953A0u;
        // 0x1953a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1953A8u;
        goto label_fallthrough_0x1953a0;
    }
    ctx->pc = 0x1953A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1953A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953A0u;
        // 0x1953a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1953A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1953a0:
    ctx->pc = 0x1953A8u;
}
