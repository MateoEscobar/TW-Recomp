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

// Function: sub_0035A250
// Address: 0x35a250 - 0x35a2c8
void sub_0035A250_0x35a250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035A250_0x35a250");
#endif

    switch (ctx->pc) {
        case 0x35a278u: goto label_35a278;
        case 0x35a280u: goto label_35a280;
        case 0x35a294u: goto label_35a294;
        case 0x35a29cu: goto label_35a29c;
        case 0x35a2a8u: goto label_35a2a8;
        default: break;
    }

    ctx->pc = 0x35a250u;

    // 0x35a250: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35a250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35a254: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35a254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a258: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35a258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35a25c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35a25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35a260: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35a260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a264: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35a264u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a268: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35a268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35a26c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x35a26cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x35a270: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35A270u;
    SET_GPR_U32(ctx, 31, 0x35A278u);
    ctx->pc = 0x35A274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A270u;
    // 0x35a274: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35A270u, 0x35A278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A278u;
label_35a278:
    // 0x35a278: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35A278u;
    SET_GPR_U32(ctx, 31, 0x35A280u);
    ctx->pc = 0x35A27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A278u;
    // 0x35a27c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35A278u, 0x35A280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A280u;
label_35a280:
    // 0x35a280: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35a280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a284: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x35a284u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x35a288: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35a288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35a28c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35A28Cu;
    SET_GPR_U32(ctx, 31, 0x35A294u);
    ctx->pc = 0x35A290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A28Cu;
    // 0x35a290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35A28Cu, 0x35A294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A294u;
label_35a294:
    // 0x35a294: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35A294u;
    SET_GPR_U32(ctx, 31, 0x35A29Cu);
    ctx->pc = 0x35A298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A294u;
    // 0x35a298: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35A294u, 0x35A29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A29Cu;
label_35a29c:
    // 0x35a29c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x35a29cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x35a2a0: 0xc08d91c  jal         func_236470
    ctx->pc = 0x35A2A0u;
    SET_GPR_U32(ctx, 31, 0x35A2A8u);
    ctx->pc = 0x35A2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A2A0u;
    // 0x35a2a4: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x236470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236470u, 0x35A2A0u, 0x35A2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A2A8u;
label_35a2a8:
    // 0x35a2a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35a2a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35a2ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35a2acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a2b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35a2b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35a2b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35a2b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a2b8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x35a2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x35a2bc: 0x3e00008  jr          $ra
    ctx->pc = 0x35A2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A2BCu;
        // 0x35a2c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A2BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A2C4u;
    // 0x35a2c4: 0x0  nop
    ctx->pc = 0x35a2c4u;
    // NOP
    ctx->pc = 0x35a2c8u;
}
