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

// Function: sub_001CCFF0
// Address: 0x1ccff0 - 0x1cd060
void sub_001CCFF0_0x1ccff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CCFF0_0x1ccff0");
#endif

    switch (ctx->pc) {
        case 0x1ccff0u: goto label_1ccff0;
        case 0x1ccff4u: goto label_1ccff4;
        case 0x1ccff8u: goto label_1ccff8;
        case 0x1ccffcu: goto label_1ccffc;
        case 0x1cd000u: goto label_1cd000;
        case 0x1cd004u: goto label_1cd004;
        case 0x1cd008u: goto label_1cd008;
        case 0x1cd00cu: goto label_1cd00c;
        case 0x1cd010u: goto label_1cd010;
        case 0x1cd014u: goto label_1cd014;
        case 0x1cd018u: goto label_1cd018;
        case 0x1cd01cu: goto label_1cd01c;
        case 0x1cd020u: goto label_1cd020;
        case 0x1cd024u: goto label_1cd024;
        case 0x1cd028u: goto label_1cd028;
        case 0x1cd02cu: goto label_1cd02c;
        case 0x1cd030u: goto label_1cd030;
        case 0x1cd034u: goto label_1cd034;
        case 0x1cd038u: goto label_1cd038;
        case 0x1cd03cu: goto label_1cd03c;
        case 0x1cd040u: goto label_1cd040;
        case 0x1cd044u: goto label_1cd044;
        case 0x1cd048u: goto label_1cd048;
        case 0x1cd04cu: goto label_1cd04c;
        case 0x1cd050u: goto label_1cd050;
        case 0x1cd054u: goto label_1cd054;
        case 0x1cd058u: goto label_1cd058;
        case 0x1cd05cu: goto label_1cd05c;
        default: break;
    }

    ctx->pc = 0x1ccff0u;

label_1ccff0:
    // 0x1ccff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ccff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ccff4:
    // 0x1ccff4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ccff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ccff8:
    // 0x1ccff8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ccff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1ccffc:
    // 0x1ccffc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ccffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1cd000:
    // 0x1cd000: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cd000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cd004:
    // 0x1cd004: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x1cd004u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
label_1cd008:
    // 0x1cd008: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cd008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cd00c:
    // 0x1cd00c: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1cd00cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1cd010:
    // 0x1cd010: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1cd010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1cd014:
    // 0x1cd014: 0x60f809  jalr        $v1
label_1cd018:
    if (ctx->pc == 0x1CD018u) {
        ctx->pc = 0x1CD018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD014u;
        // 0x1cd018: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD01Cu;
        goto label_1cd01c;
    }
    ctx->pc = 0x1CD014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CD01Cu);
        ctx->pc = 0x1CD018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD014u;
        // 0x1cd018: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD014u, 0x1CD01Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CD01Cu;
label_1cd01c:
    // 0x1cd01c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cd01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cd020:
    // 0x1cd020: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cd020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd024:
    // 0x1cd024: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1cd024u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1cd028:
    // 0x1cd028: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1cd028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1cd02c:
    // 0x1cd02c: 0x60f809  jalr        $v1
label_1cd030:
    if (ctx->pc == 0x1CD030u) {
        ctx->pc = 0x1CD030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD02Cu;
        // 0x1cd030: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD034u;
        goto label_1cd034;
    }
    ctx->pc = 0x1CD02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CD034u);
        ctx->pc = 0x1CD030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD02Cu;
        // 0x1cd030: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD02Cu, 0x1CD034u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CD034u;
label_1cd034:
    // 0x1cd034: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cd034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1cd038:
    // 0x1cd038: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cd038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cd03c:
    // 0x1cd03c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1cd03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1cd040:
    // 0x1cd040: 0xa20200c4  sb          $v0, 0xC4($s0)
    ctx->pc = 0x1cd040u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 196), (uint8_t)GPR_U32(ctx, 2));
label_1cd044:
    // 0x1cd044: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x1cd044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_1cd048:
    // 0x1cd048: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x1cd048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_1cd04c:
    // 0x1cd04c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cd04cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cd050:
    // 0x1cd050: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cd050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cd054:
    // 0x1cd054: 0x3e00008  jr          $ra
label_1cd058:
    if (ctx->pc == 0x1CD058u) {
        ctx->pc = 0x1CD058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD054u;
        // 0x1cd058: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD05Cu;
        goto label_1cd05c;
    }
    ctx->pc = 0x1CD054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD054u;
        // 0x1cd058: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD05Cu;
label_1cd05c:
    // 0x1cd05c: 0x0  nop
    ctx->pc = 0x1cd05cu;
    // NOP
    ctx->pc = 0x1cd060u;
}
