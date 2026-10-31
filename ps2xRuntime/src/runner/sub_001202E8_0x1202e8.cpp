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

// Function: sub_001202E8
// Address: 0x1202e8 - 0x120380
void sub_001202E8_0x1202e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001202E8_0x1202e8");
#endif

    switch (ctx->pc) {
        case 0x120318u: goto label_120318;
        case 0x120328u: goto label_120328;
        case 0x120330u: goto label_120330;
        case 0x120344u: goto label_120344;
        default: break;
    }

    ctx->pc = 0x1202e8u;

    // 0x1202e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1202e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1202ec: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1202ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1202f0: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x1202f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1202f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1202f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1202f8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1202f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1202fc: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1202fcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x120300: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x120300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x120304: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x120304u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x120308: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x120308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x12030c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12030cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x120310: 0xc047ab8  jal         func_11EAE0
    ctx->pc = 0x120310u;
    SET_GPR_U32(ctx, 31, 0x120318u);
    ctx->pc = 0x120314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120310u;
    // 0x120314: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x120310u, 0x120318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120318u;
label_120318:
    // 0x120318: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x120318u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12031c: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x12031Cu;
    {
        const bool branch_taken_0x12031c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x120320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12031Cu;
        // 0x120320: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12031c) {
            ctx->pc = 0x12035Cu;
            goto label_12035c;
        }
    }
    ctx->pc = 0x120324u;
    // 0x120324: 0x0  nop
    ctx->pc = 0x120324u;
    // NOP
label_120328:
    // 0x120328: 0xc047e6c  jal         func_11F9B0
    ctx->pc = 0x120328u;
    SET_GPR_U32(ctx, 31, 0x120330u);
    ctx->pc = 0x12032Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120328u;
    // 0x12032c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x120328u, 0x120330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120330u;
label_120330:
    // 0x120330: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x120330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120334: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x120334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120338: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x120338u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x12033c: 0xc048952  jal         func_122548
    ctx->pc = 0x12033Cu;
    SET_GPR_U32(ctx, 31, 0x120344u);
    ctx->pc = 0x120340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12033Cu;
    // 0x120340: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x122548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122548u, 0x12033Cu, 0x120344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120344u;
label_120344:
    // 0x120344: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x120344u;
    {
        const bool branch_taken_0x120344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120344u;
        // 0x120348: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120344) {
            ctx->pc = 0x12035Cu;
            goto label_12035c;
        }
    }
    ctx->pc = 0x12034Cu;
    // 0x12034c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x12034cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x120350: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x120350u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x120354: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x120354u;
    {
        const bool branch_taken_0x120354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120354u;
        // 0x120358: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120354) {
            ctx->pc = 0x120328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120328;
        }
    }
    ctx->pc = 0x12035Cu;
label_12035c:
    // 0x12035c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x12035cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x120360: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x120360u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x120364: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x120364u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120368: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x120368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12036c: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x12036cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x120370: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x120370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x120374: 0x3e00008  jr          $ra
    ctx->pc = 0x120374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120374u;
        // 0x120378: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12037Cu;
    // 0x12037c: 0x0  nop
    ctx->pc = 0x12037cu;
    // NOP
    ctx->pc = 0x120380u;
}
