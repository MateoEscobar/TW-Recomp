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

// Function: sub_0017C308
// Address: 0x17c308 - 0x17c3c8
void sub_0017C308_0x17c308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C308_0x17c308");
#endif

    switch (ctx->pc) {
        case 0x17c350u: goto label_17c350;
        case 0x17c37cu: goto label_17c37c;
        case 0x17c38cu: goto label_17c38c;
        default: break;
    }

    ctx->pc = 0x17c308u;

    // 0x17c308: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x17c308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x17c30c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x17c30cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x17c310: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17c310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x17c314: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x17c314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x17c318: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17c318u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c31c: 0x8c62ccd8  lw          $v0, -0x3328($v1)
    ctx->pc = 0x17c31cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50CCD8u));
    // 0x17c320: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x17c320u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c324: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x17c324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x17c328: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x17c328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x17c32c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x17c32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x17c330: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17c330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c334: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x17C334u;
    {
        const bool branch_taken_0x17c334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C334u;
        // 0x17c338: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c334) {
            ctx->pc = 0x17C3A0u;
            goto label_17c3a0;
        }
    }
    ctx->pc = 0x17C33Cu;
    // 0x17c33c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x17c33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x17c340: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x17c340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x17c344: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x17c344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17c348: 0x2451d9f0  addiu       $s1, $v0, -0x2610
    ctx->pc = 0x17c348u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957552));
    // 0x17c34c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x17c34cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17c350:
    // 0x17c350: 0xc62000b4  lwc1        $f0, 0xB4($s1)
    ctx->pc = 0x17c350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c354: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x17c354u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c358: 0x0  nop
    ctx->pc = 0x17c358u;
    // NOP
    // 0x17c35c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x17C35Cu;
    {
        const bool branch_taken_0x17c35c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17C360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C35Cu;
        // 0x17c360: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c35c) {
            ctx->pc = 0x17C384u;
            goto label_17c384;
        }
    }
    ctx->pc = 0x17C364u;
    // 0x17c364: 0x922200b9  lbu         $v0, 0xB9($s1)
    ctx->pc = 0x17c364u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 185)));
    // 0x17c368: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17C368u;
    {
        const bool branch_taken_0x17c368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C368u;
        // 0x17c36c: 0xae00f774  sw          $zero, -0x88C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294965108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c368) {
            ctx->pc = 0x17C374u;
            goto label_17c374;
        }
    }
    ctx->pc = 0x17C370u;
    // 0x17c370: 0xae14f774  sw          $s4, -0x88C($s0)
    ctx->pc = 0x17c370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965108), GPR_U32(ctx, 20));
label_17c374:
    // 0x17c374: 0xc05ef0a  jal         func_17BC28
    ctx->pc = 0x17C374u;
    SET_GPR_U32(ctx, 31, 0x17C37Cu);
    ctx->pc = 0x17C378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C374u;
    // 0x17c378: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BC28u, 0x17C374u, 0x17C37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C37Cu;
label_17c37c:
    // 0x17c37c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17C37Cu;
    {
        const bool branch_taken_0x17c37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C37Cu;
        // 0x17c380: 0xae00f774  sw          $zero, -0x88C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294965108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c37c) {
            ctx->pc = 0x17C38Cu;
            goto label_17c38c;
        }
    }
    ctx->pc = 0x17C384u;
label_17c384:
    // 0x17c384: 0xc05efb2  jal         func_17BEC8
    ctx->pc = 0x17C384u;
    SET_GPR_U32(ctx, 31, 0x17C38Cu);
    ctx->pc = 0x17C388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C384u;
    // 0x17c388: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BEC8u, 0x17C384u, 0x17C38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C38Cu;
label_17c38c:
    // 0x17c38c: 0x8e62ccd8  lw          $v0, -0x3328($s3)
    ctx->pc = 0x17c38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954200)));
    // 0x17c390: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x17c390u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x17c394: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x17c394u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17c398: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x17C398u;
    {
        const bool branch_taken_0x17c398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C398u;
        // 0x17c39c: 0x263100c0  addiu       $s1, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c398) {
            ctx->pc = 0x17C350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c350;
        }
    }
    ctx->pc = 0x17C3A0u;
label_17c3a0:
    // 0x17c3a0: 0xae60ccd8  sw          $zero, -0x3328($s3)
    ctx->pc = 0x17c3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294954200), GPR_U32(ctx, 0));
    // 0x17c3a4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x17c3a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17c3a8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x17c3a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17c3ac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17c3acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17c3b0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x17c3b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c3b4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x17c3b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c3b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17c3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c3bc: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x17c3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17c3c0: 0x3e00008  jr          $ra
    ctx->pc = 0x17C3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C3C0u;
        // 0x17c3c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C3C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C3C8u;
}
