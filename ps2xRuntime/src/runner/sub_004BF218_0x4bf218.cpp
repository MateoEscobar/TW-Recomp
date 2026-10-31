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

// Function: sub_004BF218
// Address: 0x4bf218 - 0x4bf2b0
void sub_004BF218_0x4bf218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BF218_0x4bf218");
#endif

    switch (ctx->pc) {
        case 0x4bf23cu: goto label_4bf23c;
        case 0x4bf268u: goto label_4bf268;
        case 0x4bf270u: goto label_4bf270;
        case 0x4bf284u: goto label_4bf284;
        default: break;
    }

    ctx->pc = 0x4bf218u;

    // 0x4bf218: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4bf218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4bf21c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4bf21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4bf220: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4bf220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x4bf224: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4bf224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x4bf228: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4bf228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x4bf22c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4bf22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x4bf230: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4bf230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4bf234: 0xc12fbe8  jal         func_4BEFA0
    ctx->pc = 0x4BF234u;
    SET_GPR_U32(ctx, 31, 0x4BF23Cu);
    ctx->pc = 0x4BF238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF234u;
    // 0x4bf238: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BEFA0u, 0x4BF234u, 0x4BF23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BF23Cu;
label_4bf23c:
    // 0x4bf23c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4bf23cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4bf240: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x4bf240u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bf244: 0x246341f0  addiu       $v1, $v1, 0x41F0
    ctx->pc = 0x4bf244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16880));
    // 0x4bf248: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4bf248u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7141F4u));
    // 0x4bf24c: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x4bf24cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x4bf250: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x4bf250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4bf254: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x4BF254u;
    {
        const bool branch_taken_0x4bf254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BF258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF254u;
        // 0x4bf258: 0x8e300024  lw          $s0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf254) {
            ctx->pc = 0x4BF288u;
            goto label_4bf288;
        }
    }
    ctx->pc = 0x4BF25Cu;
    // 0x4bf25c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4BF25Cu;
    {
        const bool branch_taken_0x4bf25c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BF260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF25Cu;
        // 0x4bf260: 0x26330024  addiu       $s3, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf25c) {
            ctx->pc = 0x4BF27Cu;
            goto label_4bf27c;
        }
    }
    ctx->pc = 0x4BF264u;
    // 0x4bf264: 0x0  nop
    ctx->pc = 0x4bf264u;
    // NOP
label_4bf268:
    // 0x4bf268: 0xc12fdca  jal         func_4BF728
    ctx->pc = 0x4BF268u;
    SET_GPR_U32(ctx, 31, 0x4BF270u);
    ctx->pc = 0x4BF26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF268u;
    // 0x4bf26c: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BF728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BF728u, 0x4BF268u, 0x4BF270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BF270u;
label_4bf270:
    // 0x4bf270: 0x8e100058  lw          $s0, 0x58($s0)
    ctx->pc = 0x4bf270u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x4bf274: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x4BF274u;
    {
        const bool branch_taken_0x4bf274 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bf274) {
            ctx->pc = 0x4BF268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bf268;
        }
    }
    ctx->pc = 0x4BF27Cu;
label_4bf27c:
    // 0x4bf27c: 0xc12fdea  jal         func_4BF7A8
    ctx->pc = 0x4BF27Cu;
    SET_GPR_U32(ctx, 31, 0x4BF284u);
    ctx->pc = 0x4BF280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF27Cu;
    // 0x4bf280: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BF7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BF7A8u, 0x4BF27Cu, 0x4BF284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BF284u;
label_4bf284:
    // 0x4bf284: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x4bf284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_4bf288:
    // 0x4bf288: 0xae8041f0  sw          $zero, 0x41F0($s4)
    ctx->pc = 0x4bf288u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16880), GPR_U32(ctx, 0));
    // 0x4bf28c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4bf28cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bf290: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4bf290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4bf294: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4bf294u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4bf298: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4bf298u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4bf29c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4bf29cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bf2a0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x4bf2a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bf2a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4bf2a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bf2a8: 0x3e00008  jr          $ra
    ctx->pc = 0x4BF2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BF2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF2A8u;
        // 0x4bf2ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BF2A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BF2B0u;
}
