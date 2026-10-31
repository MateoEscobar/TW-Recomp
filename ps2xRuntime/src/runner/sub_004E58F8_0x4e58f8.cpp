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

// Function: sub_004E58F8
// Address: 0x4e58f8 - 0x4e59b0
void sub_004E58F8_0x4e58f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E58F8_0x4e58f8");
#endif

    switch (ctx->pc) {
        case 0x4e5930u: goto label_4e5930;
        case 0x4e5954u: goto label_4e5954;
        case 0x4e5964u: goto label_4e5964;
        default: break;
    }

    ctx->pc = 0x4e58f8u;

    // 0x4e58f8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4e58f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4e58fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4e58fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4e5900: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x4e5900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x4e5904: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4e5904u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5908: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x4e5908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x4e590c: 0x2672fffc  addiu       $s2, $s3, -0x4
    ctx->pc = 0x4e590cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x4e5910: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x4e5910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x4e5914: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4e5914u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5918: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x4e5918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x4e591c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x4e591cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x4e5920: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e5920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e5924: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x4e5924u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x4e5928: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4E5928u;
    {
        const bool branch_taken_0x4e5928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E592Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5928u;
        // 0x4e592c: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5928) {
            ctx->pc = 0x4E593Cu;
            goto label_4e593c;
        }
    }
    ctx->pc = 0x4E5930u;
label_4e5930:
    // 0x4e5930: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4e5930u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4e5934: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x4e5934u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5938: 0x2672fffc  addiu       $s2, $s3, -0x4
    ctx->pc = 0x4e5938u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
label_4e593c:
    // 0x4e593c: 0x8eb0489c  lw          $s0, 0x489C($s5)
    ctx->pc = 0x4e593cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
    // 0x4e5940: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4e5940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e5944: 0x261014d4  addiu       $s0, $s0, 0x14D4
    ctx->pc = 0x4e5944u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5332));
    // 0x4e5948: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x4e5948u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e594c: 0xc107d50  jal         func_41F540
    ctx->pc = 0x4E594Cu;
    SET_GPR_U32(ctx, 31, 0x4E5954u);
    ctx->pc = 0x4E5950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E594Cu;
    // 0x4e5950: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F540u, 0x4E594Cu, 0x4E5954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5954u;
label_4e5954:
    // 0x4e5954: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4e5954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e5958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e5958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e595c: 0xc107d50  jal         func_41F540
    ctx->pc = 0x4E595Cu;
    SET_GPR_U32(ctx, 31, 0x4E5964u);
    ctx->pc = 0x4E5960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E595Cu;
    // 0x4e5960: 0xc4540004  lwc1        $f20, 0x4($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F540u, 0x4E595Cu, 0x4E5964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5964u;
label_4e5964:
    // 0x4e5964: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x4e5964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4e5968: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x4e5968u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4e596c: 0x0  nop
    ctx->pc = 0x4e596cu;
    // NOP
    // 0x4e5970: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x4E5970u;
    {
        const bool branch_taken_0x4e5970 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4E5974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5970u;
        // 0x4e5974: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5970) {
            ctx->pc = 0x4E597Cu;
            goto label_4e597c;
        }
    }
    ctx->pc = 0x4E5978u;
    // 0x4e5978: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4e5978u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e597c:
    // 0x4e597c: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x4E597Cu;
    {
        const bool branch_taken_0x4e597c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e597c) {
            ctx->pc = 0x4E5980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E597Cu;
            // 0x4e5980: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E5930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e5930;
        }
    }
    ctx->pc = 0x4E5984u;
    // 0x4e5984: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x4e5984u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x4e5988: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4e5988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4e598c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4e598cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4e5990: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4e5990u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e5994: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4e5994u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e5998: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x4e5998u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e599c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x4e599cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e59a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e59a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e59a4: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x4e59a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4e59a8: 0x3e00008  jr          $ra
    ctx->pc = 0x4E59A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E59ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E59A8u;
        // 0x4e59ac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E59A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E59B0u;
}
